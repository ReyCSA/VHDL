library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity DecodificadorSAL is
    Port ( clk : in  STD_LOGIC;
           selector : in  STD_LOGIC_VECTOR (1 downto 0);
           Puerto, RAM, ALU: in  STD_LOGIC_VECTOR (3 downto 0);
           salida : out  STD_LOGIC_VECTOR (3 downto 0));
end DecodificadorSAL;

architecture Behavioral of DecodificadorSAL is
	
	signal tmpSalida: std_logic_vector(3 downto 0);
	
begin

	process(clk)
		begin
			if falling_edge(clk) then
				case selector is
					when "00" => 
						tmpSalida <= Puerto; 
					when "01" => 
						tmpSalida <= RAM;
					when "10" => 
						tmpSalida <= ALU; 
					when "11" => 
						tmpSalida <= tmpSalida; 
					when others => null;	
				end case;
			end if;
	end process;
	
	salida <= tmpSalida;
	
end Behavioral;