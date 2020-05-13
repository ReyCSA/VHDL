
-- VHDL Instantiation Created from source file BCDDisplay.vhd -- 10:34:06 04/23/2018
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT BCDDisplay
	PORT(
		clk : IN std_logic;          
		salida : OUT std_logic_vector(6 downto 0)
		);
	END COMPONENT;

	Inst_BCDDisplay: BCDDisplay PORT MAP(
		clk => ,
		salida => 
	);


