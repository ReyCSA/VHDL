----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    00:49:49 10/25/2018 
-- Design Name: 
-- Module Name:    TOP - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity TOP is
    Port ( clkPlaca: in  STD_LOGIC;
           entradaPlaca: in  STD_LOGIC_VECTOR (3 downto 0);
           salidaPlaca : out  STD_LOGIC_VECTOR (3 downto 0);
           banderasPlaca : out  STD_LOGIC_VECTOR (3 downto 0)
			 );
end TOP;

architecture Behavioral of TOP is
	
	signal salidaROM: std_logic_vector(23 downto 0);
	signal salidaContador: std_logic_vector(2 downto 0);
	signal salidaRAM: std_logic_vector(3 downto 0); 
	signal salidaW: std_logic_vector(3 downto 0);
	signal salidaDS: std_logic_vector(3 downto 0);
	signal salidaPB: std_logic_vector(3 downto 0);
	signal salidaPA: std_logic_vector(3 downto 0);
	signal salidaPta: std_logic_vector(3 downto 0);
	signal salidaDA: std_logic_vector(3 downto 0);
	signal salidaDB: std_logic_vector(3 downto 0);
	signal resultado: std_logic_vector(3 downto 0);
	
	COMPONENT Contador
	PORT(
		clk : IN std_logic;          
		csale : OUT std_logic_vector(2 downto 0)
		);
	END COMPONENT;
	
	COMPONENT Rom
	PORT(
		clk : IN std_logic;
		dire : IN std_logic_vector(2 downto 0);          
		data : OUT std_logic_vector(23 downto 0)
		);
	END COMPONENT;
	
	COMPONENT Ram
	PORT(
		clk : IN std_logic;
		rw : IN std_logic;
		ctrl : IN std_logic;
		entra : IN std_logic_vector(3 downto 0);
		dire : IN std_logic_vector(3 downto 0);          
		sale : OUT std_logic_vector(3 downto 0)
		);
	END COMPONENT;
	
	COMPONENT PuertoA
	PORT(
		clk : IN std_logic;
		selector : IN std_logic;
		entrada : IN std_logic_vector(3 downto 0);          
		salida : OUT std_logic_vector(3 downto 0)
		);
	END COMPONENT;
	
	COMPONENT PuertoB
	PORT(
		clk : IN std_logic;
		selector : IN std_logic;
		entrada : IN std_logic_vector(3 downto 0);          
		salida : OUT std_logic_vector(3 downto 0)
		);
	END COMPONENT;
	
	COMPONENT DecodificadorA
	PORT(
		clk : IN std_logic;
		selector : IN std_logic_vector(1 downto 0);
		Puerto : IN std_logic_vector(3 downto 0);
		RAM : IN std_logic_vector(3 downto 0);
		W : IN std_logic_vector(3 downto 0);          
		salida : OUT std_logic_vector(3 downto 0)
		);
	END COMPONENT;
	
	COMPONENT DecodificadorB
	PORT(
		clk : IN std_logic;
		selector : IN std_logic_vector(1 downto 0);
		Puerto : IN std_logic_vector(3 downto 0);
		RAM : IN std_logic_vector(3 downto 0);
		W : IN std_logic_vector(3 downto 0);          
		salida : OUT std_logic_vector(3 downto 0)
		);
	END COMPONENT;
	
	COMPONENT ALU
	PORT(
		clk : IN std_logic;
		seleccion : IN std_logic_vector(3 downto 0);
		a : IN std_logic_vector(3 downto 0);
		b : IN std_logic_vector(3 downto 0);          
		salida : OUT std_logic_vector(3 downto 0);
		banderas : OUT std_logic_vector(3 downto 0)
		);
	END COMPONENT;
	
	COMPONENT DecodificadorSAL
	PORT(
		clk : IN std_logic;
		selector : IN std_logic_vector(1 downto 0);
		Puerto : IN std_logic_vector(3 downto 0);
		RAM : IN std_logic_vector(3 downto 0);
		ALU : IN std_logic_vector(3 downto 0);          
		salida : OUT std_logic_vector(3 downto 0)
		);
	END COMPONENT;

	COMPONENT W
	PORT(
		wEntrada : IN std_logic_vector(3 downto 0);
		selector : IN std_logic_vector(1 downto 0);
		clk : IN std_logic;          
		wSalida : OUT std_logic_vector(3 downto 0)
		);
	END COMPONENT;
	
begin
	
	Inst_Contador: Contador PORT MAP(
		clk => clkPlaca,
		csale => salidaContador 
	);
	
	Inst_Rom: Rom PORT MAP(
		clk => clkPlaca,
		dire => salidaContador, 
		data => salidaROM	
	);
	
	Inst_Ram: Ram PORT MAP(
		clk => clkPlaca,
		rw => salidaROM(14),
		ctrl => salidaROM(13),
		entra => salidaW, 
		dire => salidaROM(18 downto 15),
		sale => salidaRAM
	);
	
	Inst_PuertoA: PuertoA PORT MAP(
		clk => clkPlaca,
		selector => salidaROM(8),
		entrada => entradaPlaca,				
		salida => salidaPA			
	);
	
	Inst_DecodificadorA: DecodificadorA PORT MAP(
		clk => clkPlaca,
		selector => salidaROM(10 downto 9),
		Puerto => salidaPA,
		RAM => salidaRAM,
		W => salidaW,
		salida =>  salidaDA
	);
	
	Inst_DecodificadorB: DecodificadorB PORT MAP(
		clk => clkPlaca,
		selector => salidaROM(12 downto 11),
		Puerto => salidaROM(3 downto 0), --El deodificador b lee el 3 de ROM
		RAM => salidaRAM,
		W => salidaW,
		salida =>  salidaDB
	);
	
	Inst_ALU: ALU PORT MAP(
		clk => clkPlaca,
		seleccion => salidaROM(7 downto 4),
		a => salidaDA,
		b => salidaDB, 
		salida => resultado,
		banderas => banderasPlaca
	);	
	
	Inst_DecodificadorSAL: DecodificadorSAL PORT MAP(
		clk => clkPlaca,
		selector => salidaROM(22 downto 21),
		Puerto => salidaPA,
		RAM => salidaRAM,
		ALU => resultado,
		salida =>  salidaDS
	);
	
	Inst_W: W PORT MAP(
		wEntrada => salidaDS,
		wSalida => salidaW,
		selector => salidaROM(20 downto 19),
		clk => clkPlaca
	);
	
	Inst_PuertoB: PuertoB PORT MAP(
		clk => clkPlaca,
		selector => salidaROM(23),
		entrada => salidaW,		
		salida => salidaPB
	);
	salidaPlaca <= salidaPB;
	
end Behavioral;