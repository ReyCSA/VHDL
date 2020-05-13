library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_unsigned.ALL;

entity ALU is
    Port ( clk : in  STD_LOGIC;
           seleccion, a, b : in  STD_LOGIC_VECTOR (3 downto 0);
           salida: out  STD_LOGIC_VECTOR (3 downto 0);
			  banderas: out  STD_LOGIC_VECTOR (3 downto 0)
			 );
end ALU;

architecture Behavioral of ALU is
	
	signal car, zero: std_logic := '0';
	signal tmpa, tmpb, total: std_logic_vector(3 downto 0) := "0000" ;	

begin	
	
	tmpa <= a; tmpb <= b;
	
	process(clk, seleccion)
	begin
		if falling_edge(clk) then			
			case seleccion is
				when "0000" => 		
					--Suma (A+B)
					total <= tmpa + tmpb;										
						
					if((tmpa >= "1000" and tmpb >= "1000")
					or (tmpa >= "1000" and total <= "0111")					
					or (tmpa >= "1000" and total > "1111") 
					or (tmpb >= "1000" and total > "1111")
					or (tmpb >= "1000" and total <= "0111")
					or (tmpa >= "1111" and total <= "0111") 
					or	(tmpb >= "1111" and total <= "0111")) then
						car <= '1';
					else
						car <= '0';
					end if;	
					
					if(total = "0000")then 
						zero <= '1';
					else 
						zero <= '0';  
					end if;
				when "0001" => 
					--Resta (A-B)																
					if(total = "0000")then 
						zero <= '1';
					else 
						zero <= '0';  
					end if;
						
					if(tmpa >= tmpb) then 
						car <= '0';
						total <= tmpa - tmpb;	
					else
						car <= '1';
						total <= tmpb - tmpa;	
					end if;
				when "0010" => 
					zero <= '0';
					car <= '0';
					--Rotacion a la Derecha
					if(a(0) = '0')then
						total <= '0' & a(3 downto 1);
					else 
						total <= '1' & a(3 downto 1);
					end if;
				when "0011" => 
					zero <= '0';
					car <= '0';
					--Rotacion a la Izquierda
					if(a(3) = '0')then
						total <= a(2 downto 0) & '0';
					else 
						total <= a(2 downto 0) & '1';
					end if;
				when "0100" => 
					--A AND B
					total <= a and b;
					
					if(total = "0000")then 
						zero <= '1';
						car <= '0';
					else 
						zero <= '0';
						car <= '0';						
					end if;
			   when "0101" => 
					--A OR B 
					total <= a or b;
					
					if(total = "0000")then 
						zero <= '1';
						car <= '0';
					else 
						zero <= '0';
						car <= '0';						
					end if;
				when "0110" => 
					--NOT A
					total <= not a;
					
					if(total = "0000")then 
						zero <= '1';
						car <= '0';
					else 
						zero <= '0';
						car <= '0';
					end if;
				when "0111" => 
					--NOP					
					total <= total;
					car <= car;	
					zero <= zero; 
				when others => null;
			end case;
		end if; 
	end process;
	
	banderas(3) <= '0';
	banderas(2) <= '0';
	banderas(1) <= zero;
	banderas(0) <= car;
	
	salida <= total;
	
end Behavioral;