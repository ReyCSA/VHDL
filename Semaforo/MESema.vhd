library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_unsigned.ALL;

entity MESema is
    Port ( clk : in  STD_LOGIC;
           salida : out  STD_LOGIC_VECTOR (2 downto 0));
end MESema;

architecture Behavioral of MESema is	
	
	type maquina is (verde, amarillo, rojo, parpadeo);
	signal edo_p, edo_s: maquina := verde;
	
	--Contadores para parpadeo
	signal cnt: integer range 0 to 5;
	
	--Contadores para cambio
	constant limite: integer := 2;
	signal conta: integer range 0 to limite;	
	signal tmp : std_logic_vector(2 downto 0);
	
begin	
	
	process(edo_p,edo_s,cnt)
	begin
		case edo_p is			
			when verde =>				 
				 if(cnt = 5)then
					edo_s <= amarillo;
				 else
					edo_s <= verde;					
				 end if;
			when amarillo =>
				 if(cnt = 5)then
					edo_s <= rojo;
				 elsif(cnt = 1)then
					edo_s <= parpadeo;
				 elsif(cnt = 3)then
					edo_s <= parpadeo;
				 else 
					edo_s <= amarillo;
				 end if;		 
			when parpadeo =>
				 if(cnt = 5)then
					edo_s <= rojo;
				 else
					edo_s <= amarillo;					
				 end if;
			when rojo =>
				 if(cnt = 5)then
					edo_s <= verde;			 
				 else
					edo_s <= rojo;
				 end if;			
		end case;
	end process;
	
	process(clk)begin
		if falling_edge(clk) then
			if(conta = limite) then						
				conta <= 0;	
					cnt <= (cnt+1);
					if(cnt = 5)then
					cnt <= 0;
					end if;
				edo_p <= edo_s;
			else
				conta <= conta+1;					
			end if;
		end if;
	end process;

	process(clk)begin
			if falling_edge(clk) then
				case edo_p is
					when parpadeo => tmp <= "000";
					when verde => tmp <= "001";
					when amarillo => tmp <= "010";
					when rojo => tmp <= "100";
					when others => null;
				end case;			
			end if;
	end process;

	salida <= tmp;
	
end Behavioral;