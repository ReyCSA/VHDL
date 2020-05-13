library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_unsigned.ALL;

entity W is
    Port ( wEntrada : in  STD_LOGIC_VECTOR (3 downto 0);
           wSalida : out  STD_LOGIC_VECTOR (3 downto 0);
           selector : in  STD_LOGIC_VECTOR (1 downto 0);
           clk : in  STD_LOGIC);
end W;

architecture Behavioral of W is
	
	signal tmpw : std_logic_vector(3 downto 0);

begin

	process(clk)
		begin
			if falling_edge(clk) then
			
				case selector is
					  --SN|RW--
					when "00" => 
						tmpw <= wEntrada;
					when "01" =>
						wSalida <= tmpw; 
					when "10" => 
						tmpw <= tmpw;				
					when others => null;	
				
				end case;
			end if;
	end process;
	
end Behavioral;