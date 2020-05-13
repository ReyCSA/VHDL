library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_unsigned.ALL;

entity Contador2Dislay is
	  Port( clk, pause, reset: IN STD_LOGIC;
			  salidas: OUT STD_LOGIC_VECTOR(6 DOWNTO 0);
			  habilita: OUT STD_LOGIC_VECTOR(3 DOWNTO 0)
		);
end Contador2Dislay;

architecture Behavioral of Contador2Dislay is type cambio is (display1, display2);
	
	signal hba, hbd: cambio := display1;
	
	COMPONENT BCDDisplay
	PORT(
		clk : IN std_logic;          
		salida : OUT std_logic_vector(6 downto 0)
		);
	END COMPONENT;

	constant limite: integer := 24_999_999;
	signal conta: integer range 0 to limite;
	signal tmp: std_logic := '0';	
	signal tmpd1, tmpd2: integer range 0 to 9 := 0;
	signal tmpSalida, tmpSalida2: std_logic_vector(6 downto 0);
	constant retraso: integer := 4_999;
	signal conta2: integer range 0 to retraso := 0;
	
begin

	process (clk)
	begin
		if falling_edge(clk)then
			if(reset = '1')then
					tmpd1 <= 0;
					tmpd2 <= 0;
				elsif(pause = '0')then
					---Reloj
					if (conta = limite)then
						conta <= 0;
						tmp <= not(tmp);
						tmpd1 <= (tmpd1+1);
						if (tmpSalida = "0000100")then 
								tmpd2 <= (tmpd2+1);
									if (tmpd2 = 9) then
										tmpd2 <= 0;									
									end if;
						end if;	
					else
						conta <= (conta+1);
					end if;
					---	
			end if;
		end if;
	end process;	
	
	Inst_BCDDisplay: BCDDisplay PORT MAP(
		clk => tmp,
		salida => tmpSalida
	);
	
	Inst_BCDDisplay2: BCDDisplay PORT MAP(
		clk => tmp,
		salida => tmpSalida2
	);
	
	---Retraso para Habilitar AN
	Process(clk,hba,hbd)
	begin
		if falling_edge(clk)then
			conta2 <= (conta2+1);
			if(conta2 = retraso)then
				conta2 <= 0;
				hba <= hbd;
			end if;	
		end if;	
	end process;
	
	---Habitila el AN
	Process(hba)
	begin
		case hba is
			when display1 => habilita <= "1110";
				  hbd <= display2;
			when display2 => habilita <= "1101";
				  hbd <= display1;
			when others => null;
		end case;
	end process;
	
	--salidas <= tmpSalida;
	
	salidas <= tmpSalida when hba = display1 else tmpSalida2;
	
end Behavioral;