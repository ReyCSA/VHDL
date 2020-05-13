/*******************************************************************************
* File Name: DAC_PM.c
* Version 1.10
*
* Description:
*  This file provides Low power mode APIs for IDAC_P4 component.
*
********************************************************************************
* Copyright 2013-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "DAC.h"


static DAC_BACKUP_STRUCT DAC_backup;


/*******************************************************************************
* Function Name: DAC_SaveConfig
********************************************************************************
*
* Summary:
*  Saves component state before sleep
* Parameters:
*  None
*
* Return:
*  None
*
* Global Variables:
*  None
*
*******************************************************************************/
void DAC_SaveConfig(void)
{
    /* All registers are retention - nothing to save */
}


/*******************************************************************************
* Function Name: DAC_Sleep
********************************************************************************
*
* Summary:
*  Calls _SaveConfig() function
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void DAC_Sleep(void)
{
        if(0u != (DAC_IDAC_CONTROL_REG & ((uint32)DAC_IDAC_MODE_MASK <<
        DAC_IDAC_MODE_POSITION)))
        {
            DAC_backup.enableState = 1u;
        }
        else
        {
            DAC_backup.enableState = 0u;
        }

    DAC_Stop();
    DAC_SaveConfig();
}


/*******************************************************************************
* Function Name: DAC_RestoreConfig
********************************************************************************
*
* Summary:
*  Restores component state after wakeup
* Parameters:
*  None
*
* Return:
*  None
*
* Global Variables:
*  None
*
*******************************************************************************/
void DAC_RestoreConfig(void)
{
    /* All registers are retention - nothing to save */
}


/*******************************************************************************
* Function Name: DAC_Wakeup
********************************************************************************
*
* Summary:
*  Calls _RestoreConfig() function
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void DAC_Wakeup(void)
{
    /* Restore IDAC register settings */
    DAC_RestoreConfig();
    if(DAC_backup.enableState == 1u)
    {
        /* Enable operation */
        DAC_Enable();
    } /* Do nothing if the component was disabled before */

}


/* [] END OF FILE */
