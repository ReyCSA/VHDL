library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_unsigned.ALL;

entity chapa is
    Port ( clk : in  STD_LOGIC;
           entrada : in  STD_LOGIC_VECTOR (2 downto 0);
           salida : out  STD_LOGIC_VECTOR (1 downto 0));
end chapa;

architecture Behavioral of chapa is

	type maquina is (e0,e1,e2,e3,e4,e5,e6,e7);
	signal edo_p, edo_s: maquina := e0;
	signal tmpc: std_logic_vector(2 downto 0);
	signal tmpsal: std_logic_vector(1 downto 0);
	constant limite: integer := 99_999_999;
	signal conta: integer range 0 to limite;

begin

	process(edo_p,edo_s, entrada, tmpc)
	begin
		tmpc <= entrada;
		case edo_p is
			when e0 =>
				 if(tmpc = "101")then
					edo_s <= e1;
				 elsif(tmpc = "000")then
					edo_s <= e0;
				 else
					edo_s <= e6;
				 end if;
			when e1 =>
				 if(tmpc = "000")then
					edo_s <= e4;			 
				 else
					edo_s <= e1;
				 end if;
			when e2 =>
				 if(tmpc = "000")then
					edo_s <= e5;			 
				 else
					edo_s <= e2;
				 end if;
			when e3 =>
				 if(tmpc = "000")then
					edo_s <= e3;			 
				 else
					edo_s <= e0;
				 end if;
			when e4 =>
				 if(tmpc = "010")then
					edo_s <= e2;
				 elsif(tmpc = "000")then
					edo_s <= e4;
				 else
					edo_s <= e7;
				 end if;
			when e5 =>
				 if(tmpc = "110")then
					edo_s <= e3;
				 elsif(tmpc = "000")then
					edo_s <= e5;
				 else
					edo_s <= e7;
				 end if;
			when e6 =>
				 if(tmpc = "000")then
					edo_s <= e6;			 
				 else
					edo_s <= e7;
				 end if;
			when e7 =>
				 if(tmpc = "000")then
					edo_s <= e7;			 
				 else
					edo_s <= e0;
				 end if;
		end case;
	end process;

	process (clk)
	begin
		if falling_edge(clk)then
			if (conta = limite)then
				conta <= 0;
				edo_p <= edo_s;
			else
				conta <= (conta+1);
			end if;			
		end if;
	end process;
	
	process (clk)
	begin
		if falling_edge(clk)then
			case edo_p is
				when e0 => tmpsal <= "00";
				when e1 => tmpsal <= "00";
				when e2 => tmpsal <= "00";
				when e3 => tmpsal <= "01";
				when e4 => tmpsal <= "00";
				when e5 => tmpsal <= "00";
				when e6 => tmpsal <= "00";
				when e7 => tmpsal <= "10";
			end case;
		end if;
	end process;
	
	salida <= tmpsal;
	
end Behavioral;