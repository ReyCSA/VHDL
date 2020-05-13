library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_unsigned.ALL;

entity Display is
	  Port( clk, pause, reset: IN STD_LOGIC;
			  salida: OUT STD_LOGIC_VECTOR(6 DOWNTO 0);
			  habilita: OUT STD_LOGIC_VECTOR(3 DOWNTO 0)
		);
end Display;

architecture Behavioral of Display is type cambio is (display1, display2);
		
		signal hba, hbd: cambio := display1;
		constant limite: integer := 24_999_999;
		constant retraso: integer := 4_999;
		signal tmp, tmpd1, tmpd2: integer range 0 to 9 := 0;
		signal conta: integer range 0 to limite := 0;
		signal conta2: integer range 0 to retraso := 0;
	
begin

	process (clk)
	begin
		if falling_edge(clk)then
			if(reset = '1')then
				tmpd1 <= 0;
				tmpd2 <= 0;
			elsif(pause = '0')then
				---Contadores
				if (conta = limite)then
					conta <= 0;
					tmpd1 <= (tmpd1+1);
						if (tmpd1 = 9)then 
							tmpd1 <= 0;
							tmpd2 <= (tmpd2+1);
								if (tmpd2 = 9) then
									tmpd2 <= 0;									
								end if;
						end if;	
				else
					conta <= (conta+1);
				end if;
			end if;				
		end if;
	end process;
	
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
	
tmp <= tmpd1 when hba = display1 else tmpd2;

salida <= "0000001" when tmp = 0 else 
			 "1001111" when tmp = 1 else 
			 "0010010" when tmp = 2 else 
			 "0000110" when tmp = 3 else 
			 "1001100" when tmp = 4 else 
			 "0100100" when tmp = 5 else 				
			 "0100000" when tmp = 6 else 
			 "0001111" when tmp = 7 else 
			 "0000000" when tmp = 8 else 
			 "0000100";
	
end Behavioral;