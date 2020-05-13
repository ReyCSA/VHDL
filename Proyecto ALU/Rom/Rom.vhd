library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_unsigned.ALL;

entity Rom is
    Port ( clk : in  STD_LOGIC;
           dire : in  STD_LOGIC_VECTOR (2 downto 0);
           data : out  STD_LOGIC_VECTOR (23 downto 0)
			);
end Rom;

architecture Behavioral of Rom is

	type rom_cel is array (0 to 7) of std_logic_vector(23 downto 0);
	
	constant data_r: rom_cel :=(
0 => "000000000001101111111111",
1 => "011110000001111000000000",
2 => "011011111111111000000000",
3 => "000001111000111000000000",
4 => "011110000111100000000000",
5 => "010110000001111000000000",
6 => "011000000001111000000000",
7 => "111010000001011000000000"
		);

begin

	process(clk)
	begin
	
		if falling_edge(clk)then
			data <= data_r(conv_integer(dire));
		end if;
		
	end process;

end Behavioral;

