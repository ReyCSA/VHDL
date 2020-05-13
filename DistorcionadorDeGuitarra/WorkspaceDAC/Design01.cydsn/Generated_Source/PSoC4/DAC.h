/*******************************************************************************
* File Name: DAC.h
* Version 1.10
*
* Description:
*  This file provides constants and parameter values for the IDAC_P4
*  component.
*
********************************************************************************
* Copyright 2013-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_IDAC_DAC_H)
#define CY_IDAC_DAC_H

#include "cytypes.h"
#include "cyfitter.h"
#include "CyLib.h"


/***************************************
* Internal Type defines
***************************************/

/* Structure to save state before go to sleep */
typedef struct
{
    uint8  enableState;
} DAC_BACKUP_STRUCT;


extern uint32 DAC_initVar;

/**************************************
*    Enumerated Types and Parameters
**************************************/

/* IDAC polarity setting constants */
#define DAC__SOURCE 0
#define DAC__SINK 1


/* IDAC range setting constants */
#define DAC__LOWRANGE 0
#define DAC__HIGHRANGE 1


/* IDAC polarity setting definitions */
#define DAC_MODE_SOURCE    (DAC__SOURCE)
#define DAC_MODE_SINK      (DAC__SINK)

/* IDAC RANGE setting definitions */
#define DAC_MODE_LOWRANGE  (DAC__LOWRANGE)
#define DAC_MODE_HIGHRANGE (DAC__HIGHRANGE)

/***************************************
*   Conditional Compilation Parameters
****************************************/

#define DAC_IDAC_RESOLUTION    (8u)
#define DAC_IDAC_RANGE         (0u)
#define DAC_IDAC_POLARITY      (1u)


/***************************************
*    Initial Parameter Constants
***************************************/
#define DAC_IDAC_INIT_VALUE    (120u)




/***************************************
*        Function Prototypes
***************************************/

void DAC_Init(void);
void DAC_Enable(void);
void DAC_Start(void);
void DAC_Stop(void);
void DAC_SetValue(uint32  value);
void DAC_SaveConfig(void);
void DAC_Sleep(void);
void DAC_RestoreConfig(void);
void DAC_Wakeup(void);


/***************************************
*            API Constants
***************************************/

#define DAC_IDAC_EN_MODE           (3u)
#define DAC_IDAC_CSD_EN            (1u)
#define DAC_IDAC_CSD_EN_POSITION   (31u)

#define DAC_IDAC_VALUE_POSITION    (DAC_cy_psoc4_idac__CSD_IDAC_SHIFT)

#define DAC_IDAC_MODE_SHIFT        (8u)
#define DAC_IDAC_MODE_POSITION     ((uint32)DAC_cy_psoc4_idac__CSD_IDAC_SHIFT +\
                                                 DAC_IDAC_MODE_SHIFT)

#define DAC_IDAC_RANGE_SHIFT       (10u)
#define DAC_IDAC_RANGE_POSITION    ((uint32)DAC_cy_psoc4_idac__CSD_IDAC_SHIFT +\
                                                 DAC_IDAC_RANGE_SHIFT)

#define DAC_IDAC_POLARITY_POSITION ((uint32)DAC_cy_psoc4_idac__POLARITY_SHIFT)

#define DAC_IDAC_TRIM1_POSITION    ((uint32)DAC_cy_psoc4_idac__CSD_TRIM1_SHIFT)
#define DAC_IDAC_TRIM2_POSITION    ((uint32)DAC_cy_psoc4_idac__CSD_TRIM2_SHIFT)

#define DAC_IDAC_CDS_EN_MASK       (0x80000000u)

#if(DAC_IDAC_RESOLUTION == 8u)
  #define DAC_IDAC_VALUE_MASK      (0xFFu)
#else
  #define DAC_IDAC_VALUE_MASK      (0x7Fu)
#endif /* (DAC_IDAC_RESOLUTION == 8u) */

#define DAC_IDAC_MODE_MASK         (3u)
#define DAC_IDAC_RANGE_MASK        (1u)
#define DAC_IDAC_POLARITY_MASK     (1u)

#define DAC_CSD_IDAC_TRIM1_MASK    (0x0000000FuL << DAC_IDAC_TRIM1_POSITION)
#define DAC_CSD_IDAC_TRIM2_MASK    (0x0000000FuL << DAC_IDAC_TRIM2_POSITION)


/***************************************
*        Registers
***************************************/

#define DAC_IDAC_CONTROL_REG    (*(reg32 *)DAC_cy_psoc4_idac__CSD_IDAC)
#define DAC_IDAC_CONTROL_PTR    ( (reg32 *)DAC_cy_psoc4_idac__CSD_IDAC)

#define DAC_IDAC_POLARITY_CONTROL_REG    (*(reg32 *)DAC_cy_psoc4_idac__CONTROL)
#define DAC_IDAC_POLARITY_CONTROL_PTR    ( (reg32 *)DAC_cy_psoc4_idac__CONTROL)

#define DAC_CSD_TRIM1_REG       (*(reg32 *)DAC_cy_psoc4_idac__CSD_TRIM1)
#define DAC_CSD_TRIM1_PTR       ( (reg32 *)DAC_cy_psoc4_idac__CSD_TRIM1)

#define DAC_CSD_TRIM2_REG       (*(reg32 *)DAC_cy_psoc4_idac__CSD_TRIM2)
#define DAC_CSD_TRIM2_PTR       ( (reg32 *)DAC_cy_psoc4_idac__CSD_TRIM2)

#if (CY_PSOC4_4100M || CY_PSOC4_4200M)
    #if(DAC_cy_psoc4_idac__IDAC_NUMBER > 2u)
        #define DAC_SFLASH_TRIM1_REG       (*(reg8 *)CYREG_SFLASH_CSD1_TRIM1_HVIDAC)
        #define DAC_SFLASH_TRIM1_PTR       ( (reg8 *)CYREG_SFLASH_CSD1_TRIM1_HVIDAC)
        
        #define DAC_SFLASH_TRIM2_REG       (*(reg8 *)CYREG_SFLASH_CSD1_TRIM2_HVIDAC)
        #define DAC_SFLASH_TRIM2_PTR       ( (reg8 *)CYREG_SFLASH_CSD1_TRIM2_HVIDAC)
    #else
        #define DAC_SFLASH_TRIM1_REG       (*(reg8 *)CYREG_SFLASH_CSD_TRIM1_HVIDAC)
        #define DAC_SFLASH_TRIM1_PTR       ( (reg8 *)CYREG_SFLASH_CSD_TRIM1_HVIDAC)
        
        #define DAC_SFLASH_TRIM2_REG       (*(reg8 *)CYREG_SFLASH_CSD_TRIM2_HVIDAC)
        #define DAC_SFLASH_TRIM2_PTR       ( (reg8 *)CYREG_SFLASH_CSD_TRIM2_HVIDAC)
    #endif /* (DAC_cy_psoc4_idac__IDAC_NUMBER > 2u) */
#else
    #define DAC_SFLASH_TRIM1_REG       (*(reg8 *)CYREG_SFLASH_CSD_TRIM1_HVIDAC)
    #define DAC_SFLASH_TRIM1_PTR       ( (reg8 *)CYREG_SFLASH_CSD_TRIM1_HVIDAC)
    
    #define DAC_SFLASH_TRIM2_REG       (*(reg8 *)CYREG_SFLASH_CSD_TRIM2_HVIDAC)
    #define DAC_SFLASH_TRIM2_PTR       ( (reg8 *)CYREG_SFLASH_CSD_TRIM2_HVIDAC)
#endif /* (CY_PSOC4_4100M || CY_PSOC4_4200M) */

#endif /* CY_IDAC_DAC_H */

/* [] END OF FILE */
