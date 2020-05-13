
-- VHDL Instantiation Created from source file Contador2Dislay.vhd -- 09:01:23 04/23/2018
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT Contador2Dislay
	PORT(
		clk : IN std_logic;
		pause : IN std_logic;
		reset : IN std_logic;          
		salida : OUT std_logic_vector(6 downto 0);
		habilita : OUT std_logic_vector(3 downto 0)
		);
	END COMPONENT;

	Inst_Contador2Dislay: Contador2Dislay PORT MAP(
		clk => ,
		pause => ,
		reset => ,
		salida => ,
		habilita => 
	);


