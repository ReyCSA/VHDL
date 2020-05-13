
-- VHDL Instantiation Created from source file ContadorBCD.vhd -- 08:38:02 04/23/2018
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT ContadorBCD
	PORT(
		clk : IN std_logic;          
		led : OUT std_logic_vector(3 downto 0)
		);
	END COMPONENT;

	Inst_ContadorBCD: ContadorBCD PORT MAP(
		clk => ,
		led => 
	);


