--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   21:45:32 10/11/2018
-- Design Name:   
-- Module Name:   C:/Arquitectura/TOP1/tb_TOP1.vhd
-- Project Name:  TOP1
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: TOP
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
 
ENTITY tb_TOP1 IS
END tb_TOP1;
 
ARCHITECTURE behavior OF tb_TOP1 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT TOP
    PORT(
         clkPlaca : IN  std_logic;
         entradaPlaca : IN  std_logic_vector(3 downto 0);
         salidaPlaca : OUT  std_logic_vector(3 downto 0);
         banderasPlaca : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clkPlaca : std_logic := '0';
   signal entradaPlaca : std_logic_vector(3 downto 0) := (others => '0');

 	--Outputs
   signal salidaPlaca : std_logic_vector(3 downto 0);
   signal banderasPlaca : std_logic_vector(3 downto 0);

   -- Clock period definitions
   constant clkPlaca_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: TOP PORT MAP (
          clkPlaca => clkPlaca,
          entradaPlaca => entradaPlaca,
          salidaPlaca => salidaPlaca,
          banderasPlaca => banderasPlaca
        );

   -- Clock process definitions
   clkPlaca_process :process
   begin
		clkPlaca <= '0';
		wait for clkPlaca_period/2;
		clkPlaca <= '1';
		wait for clkPlaca_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 5 ns;	

      wait for clkPlaca_period*10;

      -- insert stimulus here 
			entradaPlaca <= "0000"; wait for 100 ns;
			entradaPlaca <= "1101"; wait for 100 ns;
			entradaPlaca <= "1000"; wait for 100 ns;						
			entradaPlaca <= "1111"; wait for 100 ns;
			entradaPlaca <= "0001"; wait for 100 ns;
			entradaPlaca <= "0011"; wait for 100 ns;
      wait;
   end process;

END;
