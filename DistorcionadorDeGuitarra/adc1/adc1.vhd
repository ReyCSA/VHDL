library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_unsigned.ALL;

entity adc1 is
    Port ( entra : in  STD_LOGIC_VECTOR (7 downto 0);
			  clk : in  STD_LOGIC;
           sale : out  STD_LOGIC_VECTOR (7 downto 0);
			  sale2 : out  STD_LOGIC_VECTOR (1 downto 0)
			  );
end adc1;

architecture Behavioral of adc1 is

	signal tmpsale: std_logic_vector(1 downto 0) := "00";
	
begin
	process(clk)
	begin
		if falling_edge(clk)then
			if(entra > "10000000")then
				sale <= "10000000";
				tmpsale(0) <= '1';
			elsif(entra < "00000100")then
				sale <= "00000100";
				tmpsale(1) <= '1';
			else
				sale <= entra;
				
			end if;
		end if;
	end process;
	
	sale2 <= tmpsale;
	
end Behavioral;

