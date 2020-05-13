LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY tb_ALU IS
END tb_ALU;
 
ARCHITECTURE behavior OF tb_ALU IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT ALU
    PORT(
         clk : IN  std_logic;
         a : IN  std_logic_vector(3 downto 0);
         b : IN  std_logic_vector(3 downto 0);
         seleccion : IN  std_logic_vector(3 downto 0);
         salida : OUT  std_logic_vector(3 downto 0);
			banderas : OUT  std_logic_vector(1 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal a : std_logic_vector(3 downto 0) := (others => '0');
   signal b : std_logic_vector(3 downto 0) := (others => '0');
   signal seleccion : std_logic_vector(3 downto 0) := (others => '0');

 	--Outputs
   signal salida : std_logic_vector(3 downto 0);
	signal banderas : std_logic_vector(1 downto 0);
	
   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: ALU PORT MAP (
          clk => clk,
          a => a,
          b => b,
          seleccion => seleccion,
          salida => salida,
			 banderas => banderas
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for clk_period*10;

      -- insert stimulus here 
		--Suma
		seleccion <= "0000";	a <= "1000"; b <= "0001"; wait for 60 ns;	
		seleccion <= "0000";	a <= "1111"; b <= "1111"; wait for 60 ns;
		seleccion <= "0000";	a <= "1010"; b <= "0110"; wait for 60 ns;
		--Resta
		seleccion <= "0001"; a <= "1111"; b <= "1111"; wait for 60 ns;
		seleccion <= "0001"; a <= "1111"; b <= "0011"; wait for 60 ns;
		seleccion <= "0001"; a <= "0001"; b <= "0011"; wait for 60 ns;
		seleccion <= "0001"; a <= "0000"; b <= "1111"; wait for 60 ns;
		seleccion <= "0001"; a <= "1111"; b <= "0000"; wait for 60 ns;
		seleccion <= "0001"; a <= "0001"; b <= "1111"; wait for 60 ns;
		--Rotación Derecha
		seleccion <= "0010"; a <= "0110"; b <= "0001"; wait for 60 ns;
		--Rotación Izquierda
		seleccion <= "0011"; a <= "0110"; b <= "0101"; wait for 60 ns;
		--AND
		seleccion <= "0100"; a <= "1111"; b <= "0101"; wait for 60 ns;
		--OR
		seleccion <= "0101"; a <= "1111"; b <= "0101"; wait for 60 ns;
		--NOT
		seleccion <= "0110"; a <= "1111"; b <= "0101"; wait for 60 ns;
		--NOP
		seleccion <= "0111"; a <= "1111"; b <= "0101"; wait for 60 ns;
				
      wait;
   end process;

END;
