--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   10:08:40 04/23/2018
-- Design Name:   
-- Module Name:   H:/Logica Secuencial/2do Parcial/Practica15_2Displays/Contador2Dislay/tb_Contador2Dislay.vhd
-- Project Name:  Contador2Dislay
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: Contador2Dislay
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
 
ENTITY tb_Contador2Dislay IS
END tb_Contador2Dislay;
 
ARCHITECTURE behavior OF tb_Contador2Dislay IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Contador2Dislay
    PORT(
         clk : IN  std_logic;
         pause : IN  std_logic;
         reset : IN  std_logic;
         salidas : OUT  std_logic_vector(6 downto 0);
         habilita : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal pause : std_logic := '0';
   signal reset : std_logic := '0';

 	--Outputs
   signal salidas : std_logic_vector(6 downto 0);
   signal habilita : std_logic_vector(3 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Contador2Dislay PORT MAP (
          clk => clk,
          pause => pause,
          reset => reset,
          salidas => salidas,
          habilita => habilita
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

      wait;
   end process;

END;
