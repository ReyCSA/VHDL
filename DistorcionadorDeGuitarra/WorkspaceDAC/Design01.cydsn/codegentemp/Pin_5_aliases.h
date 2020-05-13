/*******************************************************************************
* File Name: Pin_5.h  
* Version 2.20
*
* Description:
*  This file contains the Alias definitions for Per-Pin APIs in cypins.h. 
*  Information on using these APIs can be found in the System Reference Guide.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Pin_5_ALIASES_H) /* Pins Pin_5_ALIASES_H */
#define CY_PINS_Pin_5_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define Pin_5_0			(Pin_5__0__PC)
#define Pin_5_0_PS		(Pin_5__0__PS)
#define Pin_5_0_PC		(Pin_5__0__PC)
#define Pin_5_0_DR		(Pin_5__0__DR)
#define Pin_5_0_SHIFT	(Pin_5__0__SHIFT)
#define Pin_5_0_INTR	((uint16)((uint16)0x0003u << (Pin_5__0__SHIFT*2u)))

#define Pin_5_1			(Pin_5__1__PC)
#define Pin_5_1_PS		(Pin_5__1__PS)
#define Pin_5_1_PC		(Pin_5__1__PC)
#define Pin_5_1_DR		(Pin_5__1__DR)
#define Pin_5_1_SHIFT	(Pin_5__1__SHIFT)
#define Pin_5_1_INTR	((uint16)((uint16)0x0003u << (Pin_5__1__SHIFT*2u)))

#define Pin_5_2			(Pin_5__2__PC)
#define Pin_5_2_PS		(Pin_5__2__PS)
#define Pin_5_2_PC		(Pin_5__2__PC)
#define Pin_5_2_DR		(Pin_5__2__DR)
#define Pin_5_2_SHIFT	(Pin_5__2__SHIFT)
#define Pin_5_2_INTR	((uint16)((uint16)0x0003u << (Pin_5__2__SHIFT*2u)))

#define Pin_5_3			(Pin_5__3__PC)
#define Pin_5_3_PS		(Pin_5__3__PS)
#define Pin_5_3_PC		(Pin_5__3__PC)
#define Pin_5_3_DR		(Pin_5__3__DR)
#define Pin_5_3_SHIFT	(Pin_5__3__SHIFT)
#define Pin_5_3_INTR	((uint16)((uint16)0x0003u << (Pin_5__3__SHIFT*2u)))

#define Pin_5_4			(Pin_5__4__PC)
#define Pin_5_4_PS		(Pin_5__4__PS)
#define Pin_5_4_PC		(Pin_5__4__PC)
#define Pin_5_4_DR		(Pin_5__4__DR)
#define Pin_5_4_SHIFT	(Pin_5__4__SHIFT)
#define Pin_5_4_INTR	((uint16)((uint16)0x0003u << (Pin_5__4__SHIFT*2u)))

#define Pin_5_5			(Pin_5__5__PC)
#define Pin_5_5_PS		(Pin_5__5__PS)
#define Pin_5_5_PC		(Pin_5__5__PC)
#define Pin_5_5_DR		(Pin_5__5__DR)
#define Pin_5_5_SHIFT	(Pin_5__5__SHIFT)
#define Pin_5_5_INTR	((uint16)((uint16)0x0003u << (Pin_5__5__SHIFT*2u)))

#define Pin_5_INTR_ALL	 ((uint16)(Pin_5_0_INTR| Pin_5_1_INTR| Pin_5_2_INTR| Pin_5_3_INTR| Pin_5_4_INTR| Pin_5_5_INTR))


#endif /* End Pins Pin_5_ALIASES_H */


/* [] END OF FILE */
