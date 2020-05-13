/*******************************************************************************
* File Name: DAC.c
* Version 1.10
*
* Description:
*  This file provides the source code of APIs for the IDAC_P4 component.
*
*******************************************************************************
* Copyright 2013-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "DAC.h"

uint32 DAC_initVar = 0u;


/*******************************************************************************
* Function Name: DAC_Init
********************************************************************************
*
* Summary:
*  Initializes IDAC registers with initial values provided from customizer.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  None
*
*******************************************************************************/
void DAC_Init(void)
{
    uint32 regVal;
    uint8 enableInterrupts;

    /* Set initial configuration */
    enableInterrupts = CyEnterCriticalSection();
    
    #if(DAC_MODE_SOURCE == DAC_IDAC_POLARITY)
        regVal  = DAC_CSD_TRIM1_REG & ~(DAC_CSD_IDAC_TRIM1_MASK);
        regVal |=  (DAC_SFLASH_TRIM1_REG & DAC_CSD_IDAC_TRIM1_MASK);
        DAC_CSD_TRIM1_REG = regVal;
    #else
        regVal  = DAC_CSD_TRIM2_REG & ~(DAC_CSD_IDAC_TRIM2_MASK);
        regVal |=  (DAC_SFLASH_TRIM2_REG & DAC_CSD_IDAC_TRIM2_MASK);
        DAC_CSD_TRIM2_REG = regVal;
    #endif /* (DAC_MODE_SOURCE == DAC_IDAC_POLARITY) */

    /* clear previous values */
    DAC_IDAC_CONTROL_REG &= ((uint32)~((uint32)DAC_IDAC_VALUE_MASK <<
        DAC_IDAC_VALUE_POSITION)) | ((uint32)~((uint32)DAC_IDAC_MODE_MASK <<
        DAC_IDAC_MODE_POSITION))  | ((uint32)~((uint32)DAC_IDAC_RANGE_MASK  <<
        DAC_IDAC_RANGE_POSITION));

    DAC_IDAC_POLARITY_CONTROL_REG &= (~(uint32)((uint32)DAC_IDAC_POLARITY_MASK <<
        DAC_IDAC_POLARITY_POSITION));

    /* set new configuration */
    DAC_IDAC_CONTROL_REG |= (((uint32)DAC_IDAC_INIT_VALUE <<
        DAC_IDAC_VALUE_POSITION) | ((uint32)DAC_IDAC_RANGE <<
        DAC_IDAC_RANGE_POSITION));

    DAC_IDAC_POLARITY_CONTROL_REG |= ((uint32)DAC_IDAC_POLARITY <<
                                                           DAC_IDAC_POLARITY_POSITION);

    CyExitCriticalSection(enableInterrupts);

}


/*******************************************************************************
* Function Name: DAC_Enable
********************************************************************************
*
* Summary:
*  Enables IDAC operations.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  None
*
*******************************************************************************/
void DAC_Enable(void)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    /* Enable the IDAC */
    DAC_IDAC_CONTROL_REG |= ((uint32)DAC_IDAC_EN_MODE <<
                                                  DAC_IDAC_MODE_POSITION);
    DAC_IDAC_POLARITY_CONTROL_REG |= ((uint32)DAC_IDAC_CSD_EN <<
                                                           DAC_IDAC_CSD_EN_POSITION);
    CyExitCriticalSection(enableInterrupts);

}


/*******************************************************************************
* Function Name: DAC_Start
********************************************************************************
*
* Summary:
*  Starts the IDAC hardware.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  DAC_initVar
*
*******************************************************************************/
void DAC_Start(void)
{
    if(0u == DAC_initVar)
    {
        DAC_Init();
        DAC_initVar = 1u;
    }

    DAC_Enable();

}


/*******************************************************************************
* Function Name: DAC_Stop
********************************************************************************
*
* Summary:
*  Stops the IDAC hardware.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  None
*
*******************************************************************************/
void DAC_Stop(void)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    /* Disable the IDAC */
    DAC_IDAC_CONTROL_REG &= ((uint32)~((uint32)DAC_IDAC_MODE_MASK <<
        DAC_IDAC_MODE_POSITION));
    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: DAC_SetValue
********************************************************************************
*
* Summary:
*  Sets the IDAC value.
*
* Parameters:
*  uint32 value
*
* Return:
*  None
*
* Global variables:
*  None
*
*******************************************************************************/
void DAC_SetValue(uint32 value)
{
    uint8 enableInterrupts;
    uint32 newRegisterValue;

    enableInterrupts = CyEnterCriticalSection();

    #if(DAC_IDAC_VALUE_POSITION != 0u)
        newRegisterValue = ((DAC_IDAC_CONTROL_REG & (~(uint32)((uint32)DAC_IDAC_VALUE_MASK <<
        DAC_IDAC_VALUE_POSITION))) | (value << DAC_IDAC_VALUE_POSITION));
    #else
        newRegisterValue = ((DAC_IDAC_CONTROL_REG & (~(uint32)DAC_IDAC_VALUE_MASK)) | value);
    #endif /* DAC_IDAC_VALUE_POSITION != 0u */

    DAC_IDAC_CONTROL_REG = newRegisterValue;

    CyExitCriticalSection(enableInterrupts);
}

/* [] END OF FILE */
