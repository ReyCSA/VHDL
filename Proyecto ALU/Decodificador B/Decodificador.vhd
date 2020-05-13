library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity DecodificadorB is
    Port ( clk : in  STD_LOGIC;
           selector : in  STD_LOGIC_VECTOR (1 downto 0);
           Puerto: in  STD_LOGIC_VECTOR (3 downto 0);
			  RAM: in  STD_LOGIC_VECTOR (3 downto 0);
			  W: in  STD_LOGIC_VECTOR (3 downto 0);
           salida : out  STD_LOGIC_VECTOR (3 downto 0));
end DecodificadorB;

architecture Behavioral of DecodificadorB is
	
	signal tmpSalida: std_logic_vector(3 downto 0);
begin

	process(clk)
		begin
			if falling_edge(clk) then
				case selector is
					when "00" => 
						tmpSalida <= RAM; 
					when "01" => 
						tmpSalida <= Puerto;
					when "10" => 
						tmpSalida <= W; 
					when "11" => 
						tmpSalida <= tmpSalida; 
					when others => null;	
				end case;
			end if;
	end process;
	
	salida <= tmpSalida;
	
end Behavioral;