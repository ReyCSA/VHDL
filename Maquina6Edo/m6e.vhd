library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_unsigned.ALL;

entity m6e is
    Port ( clk,x : in  STD_LOGIC;
           y : out  STD_LOGIC_VECTOR (2 downto 0));
end m6e;

architecture Behavioral of m6e is
constant limite: integer := 49_999_999;
signal conta: integer range 0 to limite;	
type maquina is (a,b,c,d,e,f);
signal ep,es : maquina := a;
signal tmp : std_logic_vector(2 downto 0);
begin

process(ep,es,x)begin
	case ep is
		when a => 
			if(x = '1')then
				es <= b;
			else
				es <= f;
			end if;
		when b => 
			if(x = '1')then
				es <= c;
			else
				es <= a;
			end if;
		when c => 
			if(x = '1')then
				es <= d;
			else
				es <= b;
			end if;
		when d => 
			if(x = '1')then
				es <= e;
			else
				es <= c;
			end if;
		when e => 
			if(x = '1')then
				es <= f;
			else
				es <= d;
			end if;
		when f => 
			if(x = '1')then
				es <= a;
			else
				es <= e;
			end if;
	end case;
end process;

process(clk)begin
		if falling_edge(clk) then
			if(conta = limite) then						
				conta <= 0;	
				ep <= es;
			else
				conta <= conta+1;					
			end if;
		end if;
end process;

process(clk)begin
		if falling_edge(clk) then
	case ep is
		when a => tmp <= "000";
		when b => tmp <= "001";
		when c => tmp <= "010";
		when d => tmp <= "100";
		when e => tmp <= "110";
		when f => tmp <= "011";
		when others => null;
	end case;			
		end if;
end process;

y <= tmp;

end Behavioral;

