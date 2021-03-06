--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   23:09:55 05/08/2018
-- Design Name:   
-- Module Name:   C:/Users/MiPC/Desktop/chapa/chapa/tb_chapa.vhd
-- Project Name:  chapa
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: chapa
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY tb_chapa IS
END tb_chapa;
 
ARCHITECTURE behavior OF tb_chapa IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT chapa
    PORT(
         clk : IN  std_logic;
         entrada : IN  std_logic_vector(2 downto 0);
         salida : OUT  std_logic_vector(1 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal entrada : std_logic_vector(2 downto 0) := (others => '0');

 	--Outputs
   signal salida : std_logic_vector(1 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: chapa PORT MAP (
          clk => clk,
          entrada => entrada,
          salida => salida
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
		--Mal
		entrada(0)<= '1'; entrada(1)<= '0'; entrada(2)<= '1'; wait for 60 ns;
		entrada(0)<= '0'; entrada(1)<= '0'; entrada(2)<= '0'; wait for 60 ns; --enter
		entrada(0)<= '0'; entrada(1)<= '1'; entrada(2)<= '0'; wait for 60 ns;
		entrada(0)<= '0'; entrada(1)<= '0'; entrada(2)<= '0'; wait for 60 ns; --enter
		entrada(0)<= '1'; entrada(1)<= '1'; entrada(2)<= '0'; wait for 60 ns;
		entrada(0)<= '0'; entrada(1)<= '0'; entrada(2)<= '0'; wait for 60 ns; 
		--Bien
		entrada(0)<= '1'; entrada(1)<= '0'; entrada(2)<= '1'; wait for 60 ns;
		entrada(0)<= '0'; entrada(1)<= '0'; entrada(2)<= '0'; wait for 60 ns; --enter
		entrada(0)<= '0'; entrada(1)<= '1'; entrada(2)<= '0'; wait for 60 ns;
		entrada(0)<= '0'; entrada(1)<= '0'; entrada(2)<= '0'; wait for 60 ns; --enter
		entrada(0)<= '0'; entrada(1)<= '1'; entrada(2)<= '1'; wait for 60 ns;
		entrada(0)<= '0'; entrada(1)<= '0'; entrada(2)<= '0'; wait for 60 ns;
      wait;
   end process;

END;
