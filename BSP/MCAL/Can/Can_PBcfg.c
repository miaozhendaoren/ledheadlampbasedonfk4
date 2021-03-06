/*============================================================================*/
/* Project      = AUTOSAR Renesas Xx4 MCAL Components                         */
/* Module       = Can_PBcfg.c                                                 */
/* Version      = 3.0.0                                                       */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright (c) 2009-2011 by Renesas Electronics Corporation                 */
/*============================================================================*/
/* Purpose:                                                                   */
/* Provision of Configuration information.                                    */
/* AUTOMATICALLY GENERATED FILE - DO NOT EDIT                                 */
/*                                                                            */
/*============================================================================*/
/*                                                                            */
/* Unless otherwise agreed upon in writing between your company and           */
/* Renesas Electronics Corporation the following shall apply!                 */
/*                                                                            */
/* Warranty Disclaimer                                                        */
/*                                                                            */
/* There is no warranty of any kind whatsoever granted by Renesas. Any        */
/* warranty is expressly disclaimed and excluded by Renesas, either expressed */
/* or implied, including but not limited to those for non-infringement of     */
/* intellectual property, merchantability and/or fitness for the particular   */
/* purpose.                                                                   */
/*                                                                            */
/* Renesas shall not have any obligation to maintain, service or provide bug  */
/* fixes for the supplied Product(s) and/or the Application.                  */
/*                                                                            */
/* Each User is solely responsible for determining the appropriateness of     */
/* using the Product(s) and assumes all risks associated with its exercise    */
/* of rights under this Agreement, including, but not limited to the risks    */
/* and costs of program errors, compliance with applicable laws, damage to    */
/* or loss of data, programs or equipment, and unavailability or              */
/* interruption of operations.                                                */
/*                                                                            */
/* Limitation of Liability                                                    */
/*                                                                            */
/* In no event shall Renesas be liable to the User for any incidental,        */
/* consequential, indirect, or punitive damage (including but not limited     */
/* to lost profits) regardless of whether such liability is based on breach   */
/* of contract, tort, strict liability, breach of warranties, failure of      */
/* essential purpose or otherwise and even if advised of the possibility of   */
/* such damages. Renesas shall not be liable for any services or products     */
/* provided by third party vendors, developers or consultants identified or   */
/* referred to the User by Renesas in connection with the Product(s) and/or   */
/* the Application.                                                           */
/*                                                                            */
/*============================================================================*/
/* Environment:                                                               */
/*              Devices:        Xx4                                           */
/*============================================================================*/

/*******************************************************************************
**                      Revision Control History                              **
*******************************************************************************/
/*
 * V3.0.0:              : Initial version
 */
/******************************************************************************/

/*******************************************************************************
**                   Generation Tool Version                                  **
*******************************************************************************/
/*
 * TOOL VERSION:  3.0.13a
 */

/*******************************************************************************
**                         Input File                                         **
*******************************************************************************/

/*
 * INPUT FILE:    FK4_4010_MCU_V304_130427.arxml
 *                EcuM_Can.arxml
 *                FK4_4010_CAN_TST.arxml
 * GENERATED ON:  24 Jul 2013 - 16:51:03
 */

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
/* CAN Post Build configuration header */
#include "Can_PBTypes.h"

/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
/* Autosar Specification Version Information */
#define CAN_PBCFG_C_AR_MAJOR_VERSION   2
#define CAN_PBCFG_C_AR_MINOR_VERSION   2
#define CAN_PBCFG_C_AR_PATCH_VERSION   2

/* File Version Information */
#define CAN_PBCFG_C_SW_MAJOR_VERSION   3
#define CAN_PBCFG_C_SW_MINOR_VERSION   0


/*******************************************************************************
**                      Version Check                                         **
*******************************************************************************/
#if (CAN_PBTYPES_AR_MAJOR_VERSION != CAN_PBCFG_C_AR_MAJOR_VERSION)
  #error "Can_PBcfg.c : Mismatch in Specification Major Version"
#endif

#if (CAN_PBTYPES_AR_MINOR_VERSION != CAN_PBCFG_C_AR_MINOR_VERSION)
  #error "Can_PBcfg.c : Mismatch in Specification Minor Version"
#endif

#if (CAN_PBTYPES_AR_PATCH_VERSION != CAN_PBCFG_C_AR_PATCH_VERSION)
  #error "Can_PBcfg.c : Mismatch in Specification Patch Version"
#endif

#if (CAN_PBTYPES_SW_MAJOR_VERSION != CAN_PBCFG_C_SW_MAJOR_VERSION)
  #error "Can_PBcfg.c : Mismatch in Major Version"
#endif

#if (CAN_PBTYPES_SW_MINOR_VERSION != CAN_PBCFG_C_SW_MINOR_VERSION)
  #error "Can_PBcfg.c : Mismatch in Minor Version"
#endif



/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/

#define CAN_AFCAN_START_SEC_CONFIG_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h"

/* Global array for Byte allocation */
VAR(uint8, CAN_AFCAN_NOINIT_DATA) Can_AFCan_GaaPBByteArray[4];

/* Array of CanTxPduId */
VAR(PduIdType, CAN_AFCAN_NOINIT_DATA) Can_AFCan_GaaCanTxPduId[2];

/* Global array for storing the Tx Cancellation status of BasicCan Hth */
/* VAR(uint8, CAN_AFCAN_NOINIT_DATA) Can_AFCan_GaaTxCancelStsFlgs[]; */

/* Global array for counting the number of Tx Cancellations */
/* VAR (uint8, CAN_AFCAN_NOINIT_DATA) Can_GaaTxCancelCtr[]; */

#define CAN_AFCAN_STOP_SEC_CONFIG_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h"

#define CAN_AFCAN_START_SEC_DBTOC_DATA_UNSPECIFIED
#include "MemMap.h"

/* Global array for Config Structure */
CONST(Can_ConfigType, CAN_AFCAN_CONST) Can_AFCan_GaaConfigType[] =
{
  /* Configuration 0 - Can1_CanConfigSet_1 */
  {
    /* *ulStartOfDbToc */
    0x5D40300,

    /* *pFirstController */
    (P2CONST(Can_ControllerConfigType, AUTOMATIC, CAN_AFCAN_CONFIG_CONST)) 
      &Can_AFCan_GaaControllerConfigType[0],

    /* *pFirstHth */
    (P2CONST(Tdd_Can_AFCan_Hth, AUTOMATIC, CAN_AFCAN_CONFIG_CONST))
      &Can_AFCan_GaaHth[0],

    /* *pCntrlIdArray */
    (P2CONST(uint8, AUTOMATIC, CAN_AFCAN_CONFIG_CONST))
      &Can_AFCan_GaaCntrlArrayId[0],

    /* ucFirstHthId */
    2,

    /* ucLastHthId */
    3,

    /* ucLastCntrlId */
    1
  }
};



#define CAN_AFCAN_STOP_SEC_DBTOC_DATA_UNSPECIFIED
#include "MemMap.h"

#define CAN_AFCAN_START_SEC_DBTOC_CTRL_CFG_DATA_UNSPECIFIED
#include "MemMap.h"

/* Global array for Controller Config Structure */
CONST(Can_ControllerConfigType, CAN_AFCAN_CONST) Can_AFCan_GaaControllerConfigType[] =
{
  /* CONTROLLER 0 - Can1_CanConfigSet_1_0 */
  {
    /* *pFilterMask */
    (P2CONST(Tdd_Can_AFCan_HwFilterMask, AUTOMATIC, CAN_AFCAN_CONFIG_CONST)) 
      NULL_PTR,

    /* *pIntCntrlReg */
    (P2VAR(uint16, AUTOMATIC, CAN_AFCAN_CONFIG_DATA))
      0xFFFF6108,

    /* *pWupIntCntrlReg */
    (P2VAR(uint16, AUTOMATIC, CAN_AFCAN_CONFIG_DATA))
      0xFFFF60D2,

    /* *pWkpStsFlag */
    (P2VAR(uint8,AUTOMATIC,CAN_AFCAN_CONFIG_DATA))
      &Can_AFCan_GaaPBByteArray[0],

    /* *pHrh */
    (P2CONST(Tdd_Can_AFCan_Hrh, AUTOMATIC, CAN_AFCAN_CONFIG_CONST))
      &Can_AFCan_GaaHrh[0],

    /* *pHth */
    (P2CONST(Tdd_Can_AFCan_Hth, AUTOMATIC, CAN_AFCAN_CONFIG_CONST))
      &Can_AFCan_GaaHth[0],

    /* *pCntrlReg8bit */
    (P2VAR(Tdd_Can_AFCan_8bit_CntrlReg, AUTOMATIC, CAN_AFCAN_CONFIG_DATA))
      0xFF4A0008ul,

    /* *pCntrlReg16bit */
    (P2VAR(Tdd_Can_AFCan_16bit_CntrlReg, AUTOMATIC, CAN_AFCAN_CONFIG_DATA))
      0xFF4A8000ul,

    /* *pCntrlReg32bit */
    (P2VAR(Tdd_Can_AFCan_32bit_CntrlReg, AUTOMATIC, CAN_AFCAN_CONFIG_DATA))
      0xFF4B00C0ul,

    /* *pCntrlMode */
    (P2VAR(uint8, AUTOMATIC, CAN_AFCAN_CONFIG_DATA))
      &Can_AFCan_GaaPBByteArray[1],

    /* ddWakeupSourceId */
    0x02,

    /* usIntEnable */
    0x0000,

    /* usBTR */
    0x000D,

    /* usMaskERRReg */
    0x108F,

    /* usMaskWUPReg */
    0x108F,

    /* usMaskRECReg */
    0x108F,

    /* usMaskTRXReg */
    0x108F,

    /* ucBRP */
    0x03,

    /* ucNoOfFilterMask */
    0,

    /* ucNoOfHrh */
    1,

    /* ucNoOfHth */
    1,

    /* ssHthOffSetId */
    -1,

    /* ucHrhOffSetId */
    0,

    /* ucCntrlRegId */
    0,

    /* ucMaxNoOfMsgBufs */
    0x40
  },

  /* CONTROLLER 1 - Can1_CanConfigSet_1_1 */
  {
    /* *pFilterMask */
    (P2CONST(Tdd_Can_AFCan_HwFilterMask, AUTOMATIC, CAN_AFCAN_CONFIG_CONST)) 
      NULL_PTR,

    /* *pIntCntrlReg */
    (P2VAR(uint16, AUTOMATIC, CAN_AFCAN_CONFIG_DATA))
      0xFFFF60D4,

    /* *pWupIntCntrlReg */
    (P2VAR(uint16, AUTOMATIC, CAN_AFCAN_CONFIG_DATA))
      0xFFFF60D2,

    /* *pWkpStsFlag */
    (P2VAR(uint8,AUTOMATIC,CAN_AFCAN_CONFIG_DATA))
      &Can_AFCan_GaaPBByteArray[2],

    /* *pHrh */
    (P2CONST(Tdd_Can_AFCan_Hrh, AUTOMATIC, CAN_AFCAN_CONFIG_CONST))
      &Can_AFCan_GaaHrh[1],

    /* *pHth */
    (P2CONST(Tdd_Can_AFCan_Hth, AUTOMATIC, CAN_AFCAN_CONFIG_CONST))
      &Can_AFCan_GaaHth[1],

    /* *pCntrlReg8bit */
    (P2VAR(Tdd_Can_AFCan_8bit_CntrlReg, AUTOMATIC, CAN_AFCAN_CONFIG_DATA))
      0xFF480008ul,

    /* *pCntrlReg16bit */
    (P2VAR(Tdd_Can_AFCan_16bit_CntrlReg, AUTOMATIC, CAN_AFCAN_CONFIG_DATA))
      0xFF488000ul,

    /* *pCntrlReg32bit */
    (P2VAR(Tdd_Can_AFCan_32bit_CntrlReg, AUTOMATIC, CAN_AFCAN_CONFIG_DATA))
      0xFF4900C0ul,

    /* *pCntrlMode */
    (P2VAR(uint8, AUTOMATIC, CAN_AFCAN_CONFIG_DATA))
      &Can_AFCan_GaaPBByteArray[3],

    /* ddWakeupSourceId */
    0x02,

    /* usIntEnable */
    0x0000,

    /* usBTR */
    0x000D,

    /* usMaskERRReg */
    0x108F,

    /* usMaskWUPReg */
    0x108F,

    /* usMaskRECReg */
    0x108F,

    /* usMaskTRXReg */
    0x108F,

    /* ucBRP */
    0x03,

    /* ucNoOfFilterMask */
    0,

    /* ucNoOfHrh */
    1,

    /* ucNoOfHth */
    1,

    /* ssHthOffSetId */
    0,

    /* ucHrhOffSetId */
    1,

    /* ucCntrlRegId */
    1,

    /* ucMaxNoOfMsgBufs */
    0x40
  }
};



#define CAN_AFCAN_STOP_SEC_DBTOC_CTRL_CFG_DATA_UNSPECIFIED
#include "MemMap.h"

#define CAN_AFCAN_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "MemMap.h"

/* Global array for Controller Id*/
CONST(uint8, CAN_AFCAN_CONST) Can_AFCan_GaaCntrlArrayId[] =
{
  /* CONTROLLER 0 - Can1_CanConfigSet_1_0 */
0x00,

  /* CONTROLLER 1 - Can1_CanConfigSet_1_1 */
0x01
};



/* Global array for BasicCanHth Id*/
/* CONST(uint8, CAN_AFCAN_CONST) Can_AFCan_GaaBasicCanHth[]; */

/* Hardware Receive Handle Structure */
CONST(Tdd_Can_AFCan_Hrh, CAN_AFCAN_CONST) Can_AFCan_GaaHrh[] =
{
  /* HRH 0 - Can1_CanConfigSet_1hrh_0 */
  {
    /* *pMsgBuffer8bit */
    (P2VAR(Tdd_Can_AFCan_8bit_MsgBuffer, AUTOMATIC, CAN_AFCAN_CONFIG_DATA))
      0xFF4A1000,

    /* *pMsgBuffer16bit */
    (P2VAR(Tdd_Can_AFCan_16bit_MsgBuffer, AUTOMATIC, CAN_AFCAN_CONFIG_DATA))
      0xFF4A9000,

    /* *pMsgBuffer32bit */
    (P2VAR(Tdd_Can_AFCan_32bit_MsgBuffer, AUTOMATIC, CAN_AFCAN_CONFIG_DATA))
      0xFF4B1000,

    /* usCanIdHigh */
    0x08C0,

    /* ucMConfigReg */
    0x89
  },

  /* HRH 1 - Can1_CanConfigSet_1hrh_1 */
  {
    /* *pMsgBuffer8bit */
    (P2VAR(Tdd_Can_AFCan_8bit_MsgBuffer, AUTOMATIC, CAN_AFCAN_CONFIG_DATA))
      0xFF481000,

    /* *pMsgBuffer16bit */
    (P2VAR(Tdd_Can_AFCan_16bit_MsgBuffer, AUTOMATIC, CAN_AFCAN_CONFIG_DATA))
      0xFF489000,

    /* *pMsgBuffer32bit */
    (P2VAR(Tdd_Can_AFCan_32bit_MsgBuffer, AUTOMATIC, CAN_AFCAN_CONFIG_DATA))
      0xFF491000,

    /* usCanIdHigh */
    0x0480,

    /* ucMConfigReg */
    0x89
  }
};



/* Hardware Transmit Handle Structure */
CONST(Tdd_Can_AFCan_Hth,CAN_AFCAN_CONST) Can_AFCan_GaaHth[] =
{
  /* HTH 0 - Can1_CanConfigSet_1hth_2 */
  {
    /* *pMsgBuffer8bit */
    (P2VAR(Tdd_Can_AFCan_8bit_MsgBuffer, AUTOMATIC, CAN_AFCAN_CONFIG_DATA))
      0xFF4A1040,

    /* *pMsgBuffer16bit */
    (P2VAR(Tdd_Can_AFCan_16bit_MsgBuffer, AUTOMATIC, CAN_AFCAN_CONFIG_DATA))
      0xFF4A9040,

    /* *pMsgBuffer32bit */
    (P2VAR(Tdd_Can_AFCan_32bit_MsgBuffer, AUTOMATIC, CAN_AFCAN_CONFIG_DATA))
      0xFF4B1040,

    /* *pCanTxPduId */
    (P2VAR(PduIdType, AUTOMATIC, CAN_AFCAN_CONFIG_DATA))
      &Can_AFCan_GaaCanTxPduId[0],

    /* ucController */
    0x00
  },

  /* HTH 1 - Can1_CanConfigSet_1hth_3 */
  {
    /* *pMsgBuffer8bit */
    (P2VAR(Tdd_Can_AFCan_8bit_MsgBuffer, AUTOMATIC, CAN_AFCAN_CONFIG_DATA))
      0xFF481040,

    /* *pMsgBuffer16bit */
    (P2VAR(Tdd_Can_AFCan_16bit_MsgBuffer, AUTOMATIC, CAN_AFCAN_CONFIG_DATA))
      0xFF489040,

    /* *pMsgBuffer32bit */
    (P2VAR(Tdd_Can_AFCan_32bit_MsgBuffer, AUTOMATIC, CAN_AFCAN_CONFIG_DATA))
      0xFF491040,

    /* *pCanTxPduId */
    (P2VAR(PduIdType, AUTOMATIC, CAN_AFCAN_CONFIG_DATA))
      &Can_AFCan_GaaCanTxPduId[1],

    /* ucController */
    0x01
  }
};



/* Filter Mask Structure */
/* CONST(Tdd_Can_AFCan_HwFilterMask, CAN_AFCAN_CONST) Can_AFCan_GaaFilterMask[]; */





#define CAN_AFCAN_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "MemMap.h"

/*******************************************************************************
**                          END OF FILE                                       **
*******************************************************************************/
