library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity PuertoB is
    Port ( clk : in  STD_LOGIC;
			  selector : in  STD_LOGIC;
           entrada : in  STD_LOGIC_VECTOR (3 downto 0);
           salida : out  STD_LOGIC_VECTOR (3 downto 0)
			 );
end PuertoB;

architecture Behavioral of PuertoB is

	signal tmpSalida: std_logic_vector (3 downto 0);

begin

	process(clk)
		begin 
			if falling_edge(clk) then
				if(selector = '1')then
					salida<=entrada;
				else
					tmpSalida<=tmpSalida;
				end if;
		end if;
	end process;

end Behavioral;