library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_unsigned.ALL;

entity BCDDisplay is
    Port ( clk : in  STD_LOGIC;
           salida: out  STD_LOGIC_VECTOR (6 downto 0)
			 );
end BCDDisplay;

architecture Behavioral of BCDDisplay is
	
		COMPONENT ContadorBCD
	PORT(
		clk : IN std_logic;          
		led : OUT std_logic_vector(3 downto 0)
		);
	END COMPONENT;

	constant limite: integer := 1;	
	signal contador: integer range 0 to limite;
	signal tmp: std_logic:='0';
	signal display: STD_LOGIC_VECTOR (3 downto 0);
	
begin

	process(clk)
	begin
		if falling_edge(clk) then
			if(contador = limite) then						
				contador <= 0;	
				tmp <= not(tmp);
			else
				contador <= contador+1;					
			end if;
		end if;
	end process;
	
	Inst_ContadorBCD: ContadorBCD PORT MAP(
		clk => tmp,
		led => display
	);	
	
	salida <= "0000001" when display = "0000" else 
			    "1001111" when display = "0001" else 
				 "0010010" when display = "0010" else 
				 "0000110" when display = "0011" else 
				 "1001100" when display = "0100" else 
				 "0100100" when display = "0101" else 				
				 "0100000" when display = "0110" else 
				 "0001111" when display = "0111" else 
				 "0000000" when display = "1000" else 
				 "0000100";

end Behavioral;

