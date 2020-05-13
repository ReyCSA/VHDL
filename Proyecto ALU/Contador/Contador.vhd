library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;


entity Contador is
	PORT ( clk : in  STD_LOGIC;		 
		    csale: out STD_LOGIC_VECTOR(2 DOWNTO 0)
			);
end Contador;

architecture Behavioral of Contador is
	
	signal tmpconta: STD_LOGIC_VECTOR(2 DOWNTO 0) := "000";
	
begin

    process (clk) begin
        if falling_edge(clk) then	
				if(tmpconta = 7)then
					tmpconta <= "000";
				else
					tmpconta <= tmpconta + 1;
				end if;
        end if;	
    end process;
 
    csale<= tmpconta;
	 
end Behavioral;
