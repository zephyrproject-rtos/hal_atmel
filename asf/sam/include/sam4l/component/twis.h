/**
 * \file
 *
 * \brief Component description for TWIS
 *
 * Copyright (c) 2016 Atmel Corporation,
 *                    a wholly owned subsidiary of Microchip Technology Inc.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the Licence at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * \asf_license_stop
 *
 */

#ifndef _SAM4L_TWIS_COMPONENT_
#define _SAM4L_TWIS_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR TWIS */
/* ========================================================================== */
/** \addtogroup SAM4L_TWIS Two-wire Slave Interface */
/*@{*/

#define TWIS_I7537
#define REV_TWIS                    0x140

/* -------- TWIS_CR : (TWIS Offset: 0x00) (R/W 32) Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t SEN:1;            /*!< bit:      0  Slave Enable                       */
    uint32_t SMEN:1;           /*!< bit:      1  SMBus Mode Enable                  */
    uint32_t SMATCH:1;         /*!< bit:      2  Slave Address Match                */
    uint32_t GCMATCH:1;        /*!< bit:      3  General Call Address Match         */
    uint32_t STREN:1;          /*!< bit:      4  Clock Stretch Enable               */
    uint32_t :2;               /*!< bit:  5.. 6  Reserved                           */
    uint32_t SWRST:1;          /*!< bit:      7  Software Reset                     */
    uint32_t SMBALERT:1;       /*!< bit:      8  SMBus Alert                        */
    uint32_t SMDA:1;           /*!< bit:      9  SMBus Default Address              */
    uint32_t SMHH:1;           /*!< bit:     10  SMBus Host Header                  */
    uint32_t PECEN:1;          /*!< bit:     11  Packet Error Checking Enable       */
    uint32_t ACK:1;            /*!< bit:     12  Slave Receiver Data Phase ACK Value */
    uint32_t CUP:1;            /*!< bit:     13  NBYTES Count Up                    */
    uint32_t SOAM:1;           /*!< bit:     14  Stretch Clock on Address Match     */
    uint32_t SODR:1;           /*!< bit:     15  Stretch Clock on Data Byte Reception */
    uint32_t ADR:10;           /*!< bit: 16..25  Slave Address                      */
    uint32_t TENBIT:1;         /*!< bit:     26  Ten Bit Address Match              */
    uint32_t BRIDGE:1;         /*!< bit:     27  Bridge Control Enable              */
    uint32_t :4;               /*!< bit: 28..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} TWIS_CR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWIS_CR_OFFSET              0x00         /**< \brief (TWIS_CR offset) Control Register */
#define TWIS_CR_RESETVALUE          _U_(0x00000000); /**< \brief (TWIS_CR reset_value) Control Register */

#define TWIS_CR_SEN_Pos             0            /**< \brief (TWIS_CR) Slave Enable */
#define TWIS_CR_SEN                 (_U_(0x1) << TWIS_CR_SEN_Pos)
#define TWIS_CR_SMEN_Pos            1            /**< \brief (TWIS_CR) SMBus Mode Enable */
#define TWIS_CR_SMEN                (_U_(0x1) << TWIS_CR_SMEN_Pos)
#define TWIS_CR_SMATCH_Pos          2            /**< \brief (TWIS_CR) Slave Address Match */
#define TWIS_CR_SMATCH              (_U_(0x1) << TWIS_CR_SMATCH_Pos)
#define TWIS_CR_GCMATCH_Pos         3            /**< \brief (TWIS_CR) General Call Address Match */
#define TWIS_CR_GCMATCH             (_U_(0x1) << TWIS_CR_GCMATCH_Pos)
#define TWIS_CR_STREN_Pos           4            /**< \brief (TWIS_CR) Clock Stretch Enable */
#define TWIS_CR_STREN               (_U_(0x1) << TWIS_CR_STREN_Pos)
#define TWIS_CR_SWRST_Pos           7            /**< \brief (TWIS_CR) Software Reset */
#define TWIS_CR_SWRST               (_U_(0x1) << TWIS_CR_SWRST_Pos)
#define TWIS_CR_SMBALERT_Pos        8            /**< \brief (TWIS_CR) SMBus Alert */
#define TWIS_CR_SMBALERT            (_U_(0x1) << TWIS_CR_SMBALERT_Pos)
#define TWIS_CR_SMDA_Pos            9            /**< \brief (TWIS_CR) SMBus Default Address */
#define TWIS_CR_SMDA                (_U_(0x1) << TWIS_CR_SMDA_Pos)
#define TWIS_CR_SMHH_Pos            10           /**< \brief (TWIS_CR) SMBus Host Header */
#define TWIS_CR_SMHH                (_U_(0x1) << TWIS_CR_SMHH_Pos)
#define TWIS_CR_PECEN_Pos           11           /**< \brief (TWIS_CR) Packet Error Checking Enable */
#define TWIS_CR_PECEN               (_U_(0x1) << TWIS_CR_PECEN_Pos)
#define TWIS_CR_ACK_Pos             12           /**< \brief (TWIS_CR) Slave Receiver Data Phase ACK Value */
#define TWIS_CR_ACK                 (_U_(0x1) << TWIS_CR_ACK_Pos)
#define TWIS_CR_CUP_Pos             13           /**< \brief (TWIS_CR) NBYTES Count Up */
#define TWIS_CR_CUP                 (_U_(0x1) << TWIS_CR_CUP_Pos)
#define TWIS_CR_SOAM_Pos            14           /**< \brief (TWIS_CR) Stretch Clock on Address Match */
#define TWIS_CR_SOAM                (_U_(0x1) << TWIS_CR_SOAM_Pos)
#define TWIS_CR_SODR_Pos            15           /**< \brief (TWIS_CR) Stretch Clock on Data Byte Reception */
#define TWIS_CR_SODR                (_U_(0x1) << TWIS_CR_SODR_Pos)
#define TWIS_CR_ADR_Pos             16           /**< \brief (TWIS_CR) Slave Address */
#define TWIS_CR_ADR_Msk             (_U_(0x3FF) << TWIS_CR_ADR_Pos)
#define TWIS_CR_ADR(value)          (TWIS_CR_ADR_Msk & ((value) << TWIS_CR_ADR_Pos))
#define TWIS_CR_TENBIT_Pos          26           /**< \brief (TWIS_CR) Ten Bit Address Match */
#define TWIS_CR_TENBIT              (_U_(0x1) << TWIS_CR_TENBIT_Pos)
#define TWIS_CR_BRIDGE_Pos          27           /**< \brief (TWIS_CR) Bridge Control Enable */
#define TWIS_CR_BRIDGE              (_U_(0x1) << TWIS_CR_BRIDGE_Pos)
#define TWIS_CR_MASK                _U_(0x0FFFFF9F) /**< \brief (TWIS_CR) MASK Register */

/* -------- TWIS_NBYTES : (TWIS Offset: 0x04) (R/W 32) NBYTES Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t NBYTES:8;         /*!< bit:  0.. 7  Number of Bytes to Transfer        */
    uint32_t :24;              /*!< bit:  8..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} TWIS_NBYTES_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWIS_NBYTES_OFFSET          0x04         /**< \brief (TWIS_NBYTES offset) NBYTES Register */
#define TWIS_NBYTES_RESETVALUE      _U_(0x00000000); /**< \brief (TWIS_NBYTES reset_value) NBYTES Register */

#define TWIS_NBYTES_NBYTES_Pos      0            /**< \brief (TWIS_NBYTES) Number of Bytes to Transfer */
#define TWIS_NBYTES_NBYTES_Msk      (_U_(0xFF) << TWIS_NBYTES_NBYTES_Pos)
#define TWIS_NBYTES_NBYTES(value)   (TWIS_NBYTES_NBYTES_Msk & ((value) << TWIS_NBYTES_NBYTES_Pos))
#define TWIS_NBYTES_MASK            _U_(0x000000FF) /**< \brief (TWIS_NBYTES) MASK Register */

/* -------- TWIS_TR : (TWIS Offset: 0x08) (R/W 32) Timing Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TLOWS:8;          /*!< bit:  0.. 7  SMBus Tlow:sext Cycles             */
    uint32_t TTOUT:8;          /*!< bit:  8..15  SMBus Ttimeout Cycles              */
    uint32_t SUDAT:8;          /*!< bit: 16..23  Data Setup Cycles                  */
    uint32_t :4;               /*!< bit: 24..27  Reserved                           */
    uint32_t EXP:4;            /*!< bit: 28..31  Clock Prescaler                    */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} TWIS_TR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWIS_TR_OFFSET              0x08         /**< \brief (TWIS_TR offset) Timing Register */
#define TWIS_TR_RESETVALUE          _U_(0x00000000); /**< \brief (TWIS_TR reset_value) Timing Register */

#define TWIS_TR_TLOWS_Pos           0            /**< \brief (TWIS_TR) SMBus Tlow:sext Cycles */
#define TWIS_TR_TLOWS_Msk           (_U_(0xFF) << TWIS_TR_TLOWS_Pos)
#define TWIS_TR_TLOWS(value)        (TWIS_TR_TLOWS_Msk & ((value) << TWIS_TR_TLOWS_Pos))
#define TWIS_TR_TTOUT_Pos           8            /**< \brief (TWIS_TR) SMBus Ttimeout Cycles */
#define TWIS_TR_TTOUT_Msk           (_U_(0xFF) << TWIS_TR_TTOUT_Pos)
#define TWIS_TR_TTOUT(value)        (TWIS_TR_TTOUT_Msk & ((value) << TWIS_TR_TTOUT_Pos))
#define TWIS_TR_SUDAT_Pos           16           /**< \brief (TWIS_TR) Data Setup Cycles */
#define TWIS_TR_SUDAT_Msk           (_U_(0xFF) << TWIS_TR_SUDAT_Pos)
#define TWIS_TR_SUDAT(value)        (TWIS_TR_SUDAT_Msk & ((value) << TWIS_TR_SUDAT_Pos))
#define TWIS_TR_EXP_Pos             28           /**< \brief (TWIS_TR) Clock Prescaler */
#define TWIS_TR_EXP_Msk             (_U_(0xF) << TWIS_TR_EXP_Pos)
#define TWIS_TR_EXP(value)          (TWIS_TR_EXP_Msk & ((value) << TWIS_TR_EXP_Pos))
#define TWIS_TR_MASK                _U_(0xF0FFFFFF) /**< \brief (TWIS_TR) MASK Register */

/* -------- TWIS_RHR : (TWIS Offset: 0x0C) (R/  32) Receive Holding Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXDATA:8;         /*!< bit:  0.. 7  Received Data Byte                 */
    uint32_t :24;              /*!< bit:  8..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} TWIS_RHR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWIS_RHR_OFFSET             0x0C         /**< \brief (TWIS_RHR offset) Receive Holding Register */
#define TWIS_RHR_RESETVALUE         _U_(0x00000000); /**< \brief (TWIS_RHR reset_value) Receive Holding Register */

#define TWIS_RHR_RXDATA_Pos         0            /**< \brief (TWIS_RHR) Received Data Byte */
#define TWIS_RHR_RXDATA_Msk         (_U_(0xFF) << TWIS_RHR_RXDATA_Pos)
#define TWIS_RHR_RXDATA(value)      (TWIS_RHR_RXDATA_Msk & ((value) << TWIS_RHR_RXDATA_Pos))
#define TWIS_RHR_MASK               _U_(0x000000FF) /**< \brief (TWIS_RHR) MASK Register */

/* -------- TWIS_THR : (TWIS Offset: 0x10) ( /W 32) Transmit Holding Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXDATA:8;         /*!< bit:  0.. 7  Data Byte to Transmit              */
    uint32_t :24;              /*!< bit:  8..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} TWIS_THR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWIS_THR_OFFSET             0x10         /**< \brief (TWIS_THR offset) Transmit Holding Register */
#define TWIS_THR_RESETVALUE         _U_(0x00000000); /**< \brief (TWIS_THR reset_value) Transmit Holding Register */

#define TWIS_THR_TXDATA_Pos         0            /**< \brief (TWIS_THR) Data Byte to Transmit */
#define TWIS_THR_TXDATA_Msk         (_U_(0xFF) << TWIS_THR_TXDATA_Pos)
#define TWIS_THR_TXDATA(value)      (TWIS_THR_TXDATA_Msk & ((value) << TWIS_THR_TXDATA_Pos))
#define TWIS_THR_MASK               _U_(0x000000FF) /**< \brief (TWIS_THR) MASK Register */

/* -------- TWIS_PECR : (TWIS Offset: 0x14) (R/  32) Packet Error Check Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t PEC:8;            /*!< bit:  0.. 7  Calculated PEC Value               */
    uint32_t :24;              /*!< bit:  8..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} TWIS_PECR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWIS_PECR_OFFSET            0x14         /**< \brief (TWIS_PECR offset) Packet Error Check Register */
#define TWIS_PECR_RESETVALUE        _U_(0x00000000); /**< \brief (TWIS_PECR reset_value) Packet Error Check Register */

#define TWIS_PECR_PEC_Pos           0            /**< \brief (TWIS_PECR) Calculated PEC Value */
#define TWIS_PECR_PEC_Msk           (_U_(0xFF) << TWIS_PECR_PEC_Pos)
#define TWIS_PECR_PEC(value)        (TWIS_PECR_PEC_Msk & ((value) << TWIS_PECR_PEC_Pos))
#define TWIS_PECR_MASK              _U_(0x000000FF) /**< \brief (TWIS_PECR) MASK Register */

/* -------- TWIS_SR : (TWIS Offset: 0x18) (R/  32) Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXRDY:1;          /*!< bit:      0  RX Buffer Ready                    */
    uint32_t TXRDY:1;          /*!< bit:      1  TX Buffer Ready                    */
    uint32_t SEN:1;            /*!< bit:      2  Slave Enabled                      */
    uint32_t TCOMP:1;          /*!< bit:      3  Transmission Complete              */
    uint32_t :1;               /*!< bit:      4  Reserved                           */
    uint32_t TRA:1;            /*!< bit:      5  Transmitter Mode                   */
    uint32_t URUN:1;           /*!< bit:      6  Underrun                           */
    uint32_t ORUN:1;           /*!< bit:      7  Overrun                            */
    uint32_t NAK:1;            /*!< bit:      8  NAK Received                       */
    uint32_t :3;               /*!< bit:  9..11  Reserved                           */
    uint32_t SMBTOUT:1;        /*!< bit:     12  SMBus Timeout                      */
    uint32_t SMBPECERR:1;      /*!< bit:     13  SMBus PEC Error                    */
    uint32_t BUSERR:1;         /*!< bit:     14  Bus Error                          */
    uint32_t :1;               /*!< bit:     15  Reserved                           */
    uint32_t SAM:1;            /*!< bit:     16  Slave Address Match                */
    uint32_t GCM:1;            /*!< bit:     17  General Call Match                 */
    uint32_t SMBALERTM:1;      /*!< bit:     18  SMBus Alert Response Address Match */
    uint32_t SMBHHM:1;         /*!< bit:     19  SMBus Host Header Address Match    */
    uint32_t SMBDAM:1;         /*!< bit:     20  SMBus Default Address Match        */
    uint32_t STO:1;            /*!< bit:     21  Stop Received                      */
    uint32_t REP:1;            /*!< bit:     22  Repeated Start Received            */
    uint32_t BTF:1;            /*!< bit:     23  Byte Transfer Finished             */
    uint32_t :8;               /*!< bit: 24..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} TWIS_SR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWIS_SR_OFFSET              0x18         /**< \brief (TWIS_SR offset) Status Register */
#define TWIS_SR_RESETVALUE          _U_(0x00000002); /**< \brief (TWIS_SR reset_value) Status Register */

#define TWIS_SR_RXRDY_Pos           0            /**< \brief (TWIS_SR) RX Buffer Ready */
#define TWIS_SR_RXRDY               (_U_(0x1) << TWIS_SR_RXRDY_Pos)
#define TWIS_SR_TXRDY_Pos           1            /**< \brief (TWIS_SR) TX Buffer Ready */
#define TWIS_SR_TXRDY               (_U_(0x1) << TWIS_SR_TXRDY_Pos)
#define TWIS_SR_SEN_Pos             2            /**< \brief (TWIS_SR) Slave Enabled */
#define TWIS_SR_SEN                 (_U_(0x1) << TWIS_SR_SEN_Pos)
#define TWIS_SR_TCOMP_Pos           3            /**< \brief (TWIS_SR) Transmission Complete */
#define TWIS_SR_TCOMP               (_U_(0x1) << TWIS_SR_TCOMP_Pos)
#define TWIS_SR_TRA_Pos             5            /**< \brief (TWIS_SR) Transmitter Mode */
#define TWIS_SR_TRA                 (_U_(0x1) << TWIS_SR_TRA_Pos)
#define TWIS_SR_URUN_Pos            6            /**< \brief (TWIS_SR) Underrun */
#define TWIS_SR_URUN                (_U_(0x1) << TWIS_SR_URUN_Pos)
#define TWIS_SR_ORUN_Pos            7            /**< \brief (TWIS_SR) Overrun */
#define TWIS_SR_ORUN                (_U_(0x1) << TWIS_SR_ORUN_Pos)
#define TWIS_SR_NAK_Pos             8            /**< \brief (TWIS_SR) NAK Received */
#define TWIS_SR_NAK                 (_U_(0x1) << TWIS_SR_NAK_Pos)
#define TWIS_SR_SMBTOUT_Pos         12           /**< \brief (TWIS_SR) SMBus Timeout */
#define TWIS_SR_SMBTOUT             (_U_(0x1) << TWIS_SR_SMBTOUT_Pos)
#define TWIS_SR_SMBPECERR_Pos       13           /**< \brief (TWIS_SR) SMBus PEC Error */
#define TWIS_SR_SMBPECERR           (_U_(0x1) << TWIS_SR_SMBPECERR_Pos)
#define TWIS_SR_BUSERR_Pos          14           /**< \brief (TWIS_SR) Bus Error */
#define TWIS_SR_BUSERR              (_U_(0x1) << TWIS_SR_BUSERR_Pos)
#define TWIS_SR_SAM_Pos             16           /**< \brief (TWIS_SR) Slave Address Match */
#define TWIS_SR_SAM                 (_U_(0x1) << TWIS_SR_SAM_Pos)
#define TWIS_SR_GCM_Pos             17           /**< \brief (TWIS_SR) General Call Match */
#define TWIS_SR_GCM                 (_U_(0x1) << TWIS_SR_GCM_Pos)
#define TWIS_SR_SMBALERTM_Pos       18           /**< \brief (TWIS_SR) SMBus Alert Response Address Match */
#define TWIS_SR_SMBALERTM           (_U_(0x1) << TWIS_SR_SMBALERTM_Pos)
#define TWIS_SR_SMBHHM_Pos          19           /**< \brief (TWIS_SR) SMBus Host Header Address Match */
#define TWIS_SR_SMBHHM              (_U_(0x1) << TWIS_SR_SMBHHM_Pos)
#define TWIS_SR_SMBDAM_Pos          20           /**< \brief (TWIS_SR) SMBus Default Address Match */
#define TWIS_SR_SMBDAM              (_U_(0x1) << TWIS_SR_SMBDAM_Pos)
#define TWIS_SR_STO_Pos             21           /**< \brief (TWIS_SR) Stop Received */
#define TWIS_SR_STO                 (_U_(0x1) << TWIS_SR_STO_Pos)
#define TWIS_SR_REP_Pos             22           /**< \brief (TWIS_SR) Repeated Start Received */
#define TWIS_SR_REP                 (_U_(0x1) << TWIS_SR_REP_Pos)
#define TWIS_SR_BTF_Pos             23           /**< \brief (TWIS_SR) Byte Transfer Finished */
#define TWIS_SR_BTF                 (_U_(0x1) << TWIS_SR_BTF_Pos)
#define TWIS_SR_MASK                _U_(0x00FF71EF) /**< \brief (TWIS_SR) MASK Register */

/* -------- TWIS_IER : (TWIS Offset: 0x1C) ( /W 32) Interrupt Enable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXRDY:1;          /*!< bit:      0  RX Buffer Ready                    */
    uint32_t TXRDY:1;          /*!< bit:      1  TX Buffer Ready                    */
    uint32_t :1;               /*!< bit:      2  Reserved                           */
    uint32_t TCOMP:1;          /*!< bit:      3  Transmission Complete              */
    uint32_t :2;               /*!< bit:  4.. 5  Reserved                           */
    uint32_t URUN:1;           /*!< bit:      6  Underrun                           */
    uint32_t ORUN:1;           /*!< bit:      7  Overrun                            */
    uint32_t NAK:1;            /*!< bit:      8  NAK Received                       */
    uint32_t :3;               /*!< bit:  9..11  Reserved                           */
    uint32_t SMBTOUT:1;        /*!< bit:     12  SMBus Timeout                      */
    uint32_t SMBPECERR:1;      /*!< bit:     13  SMBus PEC Error                    */
    uint32_t BUSERR:1;         /*!< bit:     14  Bus Error                          */
    uint32_t :1;               /*!< bit:     15  Reserved                           */
    uint32_t SAM:1;            /*!< bit:     16  Slave Address Match                */
    uint32_t GCM:1;            /*!< bit:     17  General Call Match                 */
    uint32_t SMBALERTM:1;      /*!< bit:     18  SMBus Alert Response Address Match */
    uint32_t SMBHHM:1;         /*!< bit:     19  SMBus Host Header Address Match    */
    uint32_t SMBDAM:1;         /*!< bit:     20  SMBus Default Address Match        */
    uint32_t STO:1;            /*!< bit:     21  Stop Received                      */
    uint32_t REP:1;            /*!< bit:     22  Repeated Start Received            */
    uint32_t BTF:1;            /*!< bit:     23  Byte Transfer Finished             */
    uint32_t :8;               /*!< bit: 24..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} TWIS_IER_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWIS_IER_OFFSET             0x1C         /**< \brief (TWIS_IER offset) Interrupt Enable Register */
#define TWIS_IER_RESETVALUE         _U_(0x00000000); /**< \brief (TWIS_IER reset_value) Interrupt Enable Register */

#define TWIS_IER_RXRDY_Pos          0            /**< \brief (TWIS_IER) RX Buffer Ready */
#define TWIS_IER_RXRDY              (_U_(0x1) << TWIS_IER_RXRDY_Pos)
#define TWIS_IER_TXRDY_Pos          1            /**< \brief (TWIS_IER) TX Buffer Ready */
#define TWIS_IER_TXRDY              (_U_(0x1) << TWIS_IER_TXRDY_Pos)
#define TWIS_IER_TCOMP_Pos          3            /**< \brief (TWIS_IER) Transmission Complete */
#define TWIS_IER_TCOMP              (_U_(0x1) << TWIS_IER_TCOMP_Pos)
#define TWIS_IER_URUN_Pos           6            /**< \brief (TWIS_IER) Underrun */
#define TWIS_IER_URUN               (_U_(0x1) << TWIS_IER_URUN_Pos)
#define TWIS_IER_ORUN_Pos           7            /**< \brief (TWIS_IER) Overrun */
#define TWIS_IER_ORUN               (_U_(0x1) << TWIS_IER_ORUN_Pos)
#define TWIS_IER_NAK_Pos            8            /**< \brief (TWIS_IER) NAK Received */
#define TWIS_IER_NAK                (_U_(0x1) << TWIS_IER_NAK_Pos)
#define TWIS_IER_SMBTOUT_Pos        12           /**< \brief (TWIS_IER) SMBus Timeout */
#define TWIS_IER_SMBTOUT            (_U_(0x1) << TWIS_IER_SMBTOUT_Pos)
#define TWIS_IER_SMBPECERR_Pos      13           /**< \brief (TWIS_IER) SMBus PEC Error */
#define TWIS_IER_SMBPECERR          (_U_(0x1) << TWIS_IER_SMBPECERR_Pos)
#define TWIS_IER_BUSERR_Pos         14           /**< \brief (TWIS_IER) Bus Error */
#define TWIS_IER_BUSERR             (_U_(0x1) << TWIS_IER_BUSERR_Pos)
#define TWIS_IER_SAM_Pos            16           /**< \brief (TWIS_IER) Slave Address Match */
#define TWIS_IER_SAM                (_U_(0x1) << TWIS_IER_SAM_Pos)
#define TWIS_IER_GCM_Pos            17           /**< \brief (TWIS_IER) General Call Match */
#define TWIS_IER_GCM                (_U_(0x1) << TWIS_IER_GCM_Pos)
#define TWIS_IER_SMBALERTM_Pos      18           /**< \brief (TWIS_IER) SMBus Alert Response Address Match */
#define TWIS_IER_SMBALERTM          (_U_(0x1) << TWIS_IER_SMBALERTM_Pos)
#define TWIS_IER_SMBHHM_Pos         19           /**< \brief (TWIS_IER) SMBus Host Header Address Match */
#define TWIS_IER_SMBHHM             (_U_(0x1) << TWIS_IER_SMBHHM_Pos)
#define TWIS_IER_SMBDAM_Pos         20           /**< \brief (TWIS_IER) SMBus Default Address Match */
#define TWIS_IER_SMBDAM             (_U_(0x1) << TWIS_IER_SMBDAM_Pos)
#define TWIS_IER_STO_Pos            21           /**< \brief (TWIS_IER) Stop Received */
#define TWIS_IER_STO                (_U_(0x1) << TWIS_IER_STO_Pos)
#define TWIS_IER_REP_Pos            22           /**< \brief (TWIS_IER) Repeated Start Received */
#define TWIS_IER_REP                (_U_(0x1) << TWIS_IER_REP_Pos)
#define TWIS_IER_BTF_Pos            23           /**< \brief (TWIS_IER) Byte Transfer Finished */
#define TWIS_IER_BTF                (_U_(0x1) << TWIS_IER_BTF_Pos)
#define TWIS_IER_MASK               _U_(0x00FF71CB) /**< \brief (TWIS_IER) MASK Register */

/* -------- TWIS_IDR : (TWIS Offset: 0x20) ( /W 32) Interrupt Disable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXRDY:1;          /*!< bit:      0  RX Buffer Ready                    */
    uint32_t TXRDY:1;          /*!< bit:      1  TX Buffer Ready                    */
    uint32_t :1;               /*!< bit:      2  Reserved                           */
    uint32_t TCOMP:1;          /*!< bit:      3  Transmission Complete              */
    uint32_t :2;               /*!< bit:  4.. 5  Reserved                           */
    uint32_t URUN:1;           /*!< bit:      6  Underrun                           */
    uint32_t ORUN:1;           /*!< bit:      7  Overrun                            */
    uint32_t NAK:1;            /*!< bit:      8  NAK Received                       */
    uint32_t :3;               /*!< bit:  9..11  Reserved                           */
    uint32_t SMBTOUT:1;        /*!< bit:     12  SMBus Timeout                      */
    uint32_t SMBPECERR:1;      /*!< bit:     13  SMBus PEC Error                    */
    uint32_t BUSERR:1;         /*!< bit:     14  Bus Error                          */
    uint32_t :1;               /*!< bit:     15  Reserved                           */
    uint32_t SAM:1;            /*!< bit:     16  Slave Address Match                */
    uint32_t GCM:1;            /*!< bit:     17  General Call Match                 */
    uint32_t SMBALERTM:1;      /*!< bit:     18  SMBus Alert Response Address Match */
    uint32_t SMBHHM:1;         /*!< bit:     19  SMBus Host Header Address Match    */
    uint32_t SMBDAM:1;         /*!< bit:     20  SMBus Default Address Match        */
    uint32_t STO:1;            /*!< bit:     21  Stop Received                      */
    uint32_t REP:1;            /*!< bit:     22  Repeated Start Received            */
    uint32_t BTF:1;            /*!< bit:     23  Byte Transfer Finished             */
    uint32_t :8;               /*!< bit: 24..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} TWIS_IDR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWIS_IDR_OFFSET             0x20         /**< \brief (TWIS_IDR offset) Interrupt Disable Register */
#define TWIS_IDR_RESETVALUE         _U_(0x00000000); /**< \brief (TWIS_IDR reset_value) Interrupt Disable Register */

#define TWIS_IDR_RXRDY_Pos          0            /**< \brief (TWIS_IDR) RX Buffer Ready */
#define TWIS_IDR_RXRDY              (_U_(0x1) << TWIS_IDR_RXRDY_Pos)
#define TWIS_IDR_TXRDY_Pos          1            /**< \brief (TWIS_IDR) TX Buffer Ready */
#define TWIS_IDR_TXRDY              (_U_(0x1) << TWIS_IDR_TXRDY_Pos)
#define TWIS_IDR_TCOMP_Pos          3            /**< \brief (TWIS_IDR) Transmission Complete */
#define TWIS_IDR_TCOMP              (_U_(0x1) << TWIS_IDR_TCOMP_Pos)
#define TWIS_IDR_URUN_Pos           6            /**< \brief (TWIS_IDR) Underrun */
#define TWIS_IDR_URUN               (_U_(0x1) << TWIS_IDR_URUN_Pos)
#define TWIS_IDR_ORUN_Pos           7            /**< \brief (TWIS_IDR) Overrun */
#define TWIS_IDR_ORUN               (_U_(0x1) << TWIS_IDR_ORUN_Pos)
#define TWIS_IDR_NAK_Pos            8            /**< \brief (TWIS_IDR) NAK Received */
#define TWIS_IDR_NAK                (_U_(0x1) << TWIS_IDR_NAK_Pos)
#define TWIS_IDR_SMBTOUT_Pos        12           /**< \brief (TWIS_IDR) SMBus Timeout */
#define TWIS_IDR_SMBTOUT            (_U_(0x1) << TWIS_IDR_SMBTOUT_Pos)
#define TWIS_IDR_SMBPECERR_Pos      13           /**< \brief (TWIS_IDR) SMBus PEC Error */
#define TWIS_IDR_SMBPECERR          (_U_(0x1) << TWIS_IDR_SMBPECERR_Pos)
#define TWIS_IDR_BUSERR_Pos         14           /**< \brief (TWIS_IDR) Bus Error */
#define TWIS_IDR_BUSERR             (_U_(0x1) << TWIS_IDR_BUSERR_Pos)
#define TWIS_IDR_SAM_Pos            16           /**< \brief (TWIS_IDR) Slave Address Match */
#define TWIS_IDR_SAM                (_U_(0x1) << TWIS_IDR_SAM_Pos)
#define TWIS_IDR_GCM_Pos            17           /**< \brief (TWIS_IDR) General Call Match */
#define TWIS_IDR_GCM                (_U_(0x1) << TWIS_IDR_GCM_Pos)
#define TWIS_IDR_SMBALERTM_Pos      18           /**< \brief (TWIS_IDR) SMBus Alert Response Address Match */
#define TWIS_IDR_SMBALERTM          (_U_(0x1) << TWIS_IDR_SMBALERTM_Pos)
#define TWIS_IDR_SMBHHM_Pos         19           /**< \brief (TWIS_IDR) SMBus Host Header Address Match */
#define TWIS_IDR_SMBHHM             (_U_(0x1) << TWIS_IDR_SMBHHM_Pos)
#define TWIS_IDR_SMBDAM_Pos         20           /**< \brief (TWIS_IDR) SMBus Default Address Match */
#define TWIS_IDR_SMBDAM             (_U_(0x1) << TWIS_IDR_SMBDAM_Pos)
#define TWIS_IDR_STO_Pos            21           /**< \brief (TWIS_IDR) Stop Received */
#define TWIS_IDR_STO                (_U_(0x1) << TWIS_IDR_STO_Pos)
#define TWIS_IDR_REP_Pos            22           /**< \brief (TWIS_IDR) Repeated Start Received */
#define TWIS_IDR_REP                (_U_(0x1) << TWIS_IDR_REP_Pos)
#define TWIS_IDR_BTF_Pos            23           /**< \brief (TWIS_IDR) Byte Transfer Finished */
#define TWIS_IDR_BTF                (_U_(0x1) << TWIS_IDR_BTF_Pos)
#define TWIS_IDR_MASK               _U_(0x00FF71CB) /**< \brief (TWIS_IDR) MASK Register */

/* -------- TWIS_IMR : (TWIS Offset: 0x24) (R/  32) Interrupt Mask Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXRDY:1;          /*!< bit:      0  RX Buffer Ready                    */
    uint32_t TXRDY:1;          /*!< bit:      1  TX Buffer Ready                    */
    uint32_t :1;               /*!< bit:      2  Reserved                           */
    uint32_t TCOMP:1;          /*!< bit:      3  Transmission Complete              */
    uint32_t :2;               /*!< bit:  4.. 5  Reserved                           */
    uint32_t URUN:1;           /*!< bit:      6  Underrun                           */
    uint32_t ORUN:1;           /*!< bit:      7  Overrun                            */
    uint32_t NAK:1;            /*!< bit:      8  NAK Received                       */
    uint32_t :3;               /*!< bit:  9..11  Reserved                           */
    uint32_t SMBTOUT:1;        /*!< bit:     12  SMBus Timeout                      */
    uint32_t SMBPECERR:1;      /*!< bit:     13  SMBus PEC Error                    */
    uint32_t BUSERR:1;         /*!< bit:     14  Bus Error                          */
    uint32_t :1;               /*!< bit:     15  Reserved                           */
    uint32_t SAM:1;            /*!< bit:     16  Slave Address Match                */
    uint32_t GCM:1;            /*!< bit:     17  General Call Match                 */
    uint32_t SMBALERTM:1;      /*!< bit:     18  SMBus Alert Response Address Match */
    uint32_t SMBHHM:1;         /*!< bit:     19  SMBus Host Header Address Match    */
    uint32_t SMBDAM:1;         /*!< bit:     20  SMBus Default Address Match        */
    uint32_t STO:1;            /*!< bit:     21  Stop Received                      */
    uint32_t REP:1;            /*!< bit:     22  Repeated Start Received            */
    uint32_t BTF:1;            /*!< bit:     23  Byte Transfer Finished             */
    uint32_t :8;               /*!< bit: 24..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} TWIS_IMR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWIS_IMR_OFFSET             0x24         /**< \brief (TWIS_IMR offset) Interrupt Mask Register */
#define TWIS_IMR_RESETVALUE         _U_(0x00000000); /**< \brief (TWIS_IMR reset_value) Interrupt Mask Register */

#define TWIS_IMR_RXRDY_Pos          0            /**< \brief (TWIS_IMR) RX Buffer Ready */
#define TWIS_IMR_RXRDY              (_U_(0x1) << TWIS_IMR_RXRDY_Pos)
#define TWIS_IMR_TXRDY_Pos          1            /**< \brief (TWIS_IMR) TX Buffer Ready */
#define TWIS_IMR_TXRDY              (_U_(0x1) << TWIS_IMR_TXRDY_Pos)
#define TWIS_IMR_TCOMP_Pos          3            /**< \brief (TWIS_IMR) Transmission Complete */
#define TWIS_IMR_TCOMP              (_U_(0x1) << TWIS_IMR_TCOMP_Pos)
#define TWIS_IMR_URUN_Pos           6            /**< \brief (TWIS_IMR) Underrun */
#define TWIS_IMR_URUN               (_U_(0x1) << TWIS_IMR_URUN_Pos)
#define TWIS_IMR_ORUN_Pos           7            /**< \brief (TWIS_IMR) Overrun */
#define TWIS_IMR_ORUN               (_U_(0x1) << TWIS_IMR_ORUN_Pos)
#define TWIS_IMR_NAK_Pos            8            /**< \brief (TWIS_IMR) NAK Received */
#define TWIS_IMR_NAK                (_U_(0x1) << TWIS_IMR_NAK_Pos)
#define TWIS_IMR_SMBTOUT_Pos        12           /**< \brief (TWIS_IMR) SMBus Timeout */
#define TWIS_IMR_SMBTOUT            (_U_(0x1) << TWIS_IMR_SMBTOUT_Pos)
#define TWIS_IMR_SMBPECERR_Pos      13           /**< \brief (TWIS_IMR) SMBus PEC Error */
#define TWIS_IMR_SMBPECERR          (_U_(0x1) << TWIS_IMR_SMBPECERR_Pos)
#define TWIS_IMR_BUSERR_Pos         14           /**< \brief (TWIS_IMR) Bus Error */
#define TWIS_IMR_BUSERR             (_U_(0x1) << TWIS_IMR_BUSERR_Pos)
#define TWIS_IMR_SAM_Pos            16           /**< \brief (TWIS_IMR) Slave Address Match */
#define TWIS_IMR_SAM                (_U_(0x1) << TWIS_IMR_SAM_Pos)
#define TWIS_IMR_GCM_Pos            17           /**< \brief (TWIS_IMR) General Call Match */
#define TWIS_IMR_GCM                (_U_(0x1) << TWIS_IMR_GCM_Pos)
#define TWIS_IMR_SMBALERTM_Pos      18           /**< \brief (TWIS_IMR) SMBus Alert Response Address Match */
#define TWIS_IMR_SMBALERTM          (_U_(0x1) << TWIS_IMR_SMBALERTM_Pos)
#define TWIS_IMR_SMBHHM_Pos         19           /**< \brief (TWIS_IMR) SMBus Host Header Address Match */
#define TWIS_IMR_SMBHHM             (_U_(0x1) << TWIS_IMR_SMBHHM_Pos)
#define TWIS_IMR_SMBDAM_Pos         20           /**< \brief (TWIS_IMR) SMBus Default Address Match */
#define TWIS_IMR_SMBDAM             (_U_(0x1) << TWIS_IMR_SMBDAM_Pos)
#define TWIS_IMR_STO_Pos            21           /**< \brief (TWIS_IMR) Stop Received */
#define TWIS_IMR_STO                (_U_(0x1) << TWIS_IMR_STO_Pos)
#define TWIS_IMR_REP_Pos            22           /**< \brief (TWIS_IMR) Repeated Start Received */
#define TWIS_IMR_REP                (_U_(0x1) << TWIS_IMR_REP_Pos)
#define TWIS_IMR_BTF_Pos            23           /**< \brief (TWIS_IMR) Byte Transfer Finished */
#define TWIS_IMR_BTF                (_U_(0x1) << TWIS_IMR_BTF_Pos)
#define TWIS_IMR_MASK               _U_(0x00FF71CB) /**< \brief (TWIS_IMR) MASK Register */

/* -------- TWIS_SCR : (TWIS Offset: 0x28) ( /W 32) Status Clear Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t :3;               /*!< bit:  0.. 2  Reserved                           */
    uint32_t TCOMP:1;          /*!< bit:      3  Transmission Complete              */
    uint32_t :2;               /*!< bit:  4.. 5  Reserved                           */
    uint32_t URUN:1;           /*!< bit:      6  Underrun                           */
    uint32_t ORUN:1;           /*!< bit:      7  Overrun                            */
    uint32_t NAK:1;            /*!< bit:      8  NAK Received                       */
    uint32_t :3;               /*!< bit:  9..11  Reserved                           */
    uint32_t SMBTOUT:1;        /*!< bit:     12  SMBus Timeout                      */
    uint32_t SMBPECERR:1;      /*!< bit:     13  SMBus PEC Error                    */
    uint32_t BUSERR:1;         /*!< bit:     14  Bus Error                          */
    uint32_t :1;               /*!< bit:     15  Reserved                           */
    uint32_t SAM:1;            /*!< bit:     16  Slave Address Match                */
    uint32_t GCM:1;            /*!< bit:     17  General Call Match                 */
    uint32_t SMBALERTM:1;      /*!< bit:     18  SMBus Alert Response Address Match */
    uint32_t SMBHHM:1;         /*!< bit:     19  SMBus Host Header Address Match    */
    uint32_t SMBDAM:1;         /*!< bit:     20  SMBus Default Address Match        */
    uint32_t STO:1;            /*!< bit:     21  Stop Received                      */
    uint32_t REP:1;            /*!< bit:     22  Repeated Start Received            */
    uint32_t BTF:1;            /*!< bit:     23  Byte Transfer Finished             */
    uint32_t :8;               /*!< bit: 24..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} TWIS_SCR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWIS_SCR_OFFSET             0x28         /**< \brief (TWIS_SCR offset) Status Clear Register */
#define TWIS_SCR_RESETVALUE         _U_(0x00000000); /**< \brief (TWIS_SCR reset_value) Status Clear Register */

#define TWIS_SCR_TCOMP_Pos          3            /**< \brief (TWIS_SCR) Transmission Complete */
#define TWIS_SCR_TCOMP              (_U_(0x1) << TWIS_SCR_TCOMP_Pos)
#define TWIS_SCR_URUN_Pos           6            /**< \brief (TWIS_SCR) Underrun */
#define TWIS_SCR_URUN               (_U_(0x1) << TWIS_SCR_URUN_Pos)
#define TWIS_SCR_ORUN_Pos           7            /**< \brief (TWIS_SCR) Overrun */
#define TWIS_SCR_ORUN               (_U_(0x1) << TWIS_SCR_ORUN_Pos)
#define TWIS_SCR_NAK_Pos            8            /**< \brief (TWIS_SCR) NAK Received */
#define TWIS_SCR_NAK                (_U_(0x1) << TWIS_SCR_NAK_Pos)
#define TWIS_SCR_SMBTOUT_Pos        12           /**< \brief (TWIS_SCR) SMBus Timeout */
#define TWIS_SCR_SMBTOUT            (_U_(0x1) << TWIS_SCR_SMBTOUT_Pos)
#define TWIS_SCR_SMBPECERR_Pos      13           /**< \brief (TWIS_SCR) SMBus PEC Error */
#define TWIS_SCR_SMBPECERR          (_U_(0x1) << TWIS_SCR_SMBPECERR_Pos)
#define TWIS_SCR_BUSERR_Pos         14           /**< \brief (TWIS_SCR) Bus Error */
#define TWIS_SCR_BUSERR             (_U_(0x1) << TWIS_SCR_BUSERR_Pos)
#define TWIS_SCR_SAM_Pos            16           /**< \brief (TWIS_SCR) Slave Address Match */
#define TWIS_SCR_SAM                (_U_(0x1) << TWIS_SCR_SAM_Pos)
#define TWIS_SCR_GCM_Pos            17           /**< \brief (TWIS_SCR) General Call Match */
#define TWIS_SCR_GCM                (_U_(0x1) << TWIS_SCR_GCM_Pos)
#define TWIS_SCR_SMBALERTM_Pos      18           /**< \brief (TWIS_SCR) SMBus Alert Response Address Match */
#define TWIS_SCR_SMBALERTM          (_U_(0x1) << TWIS_SCR_SMBALERTM_Pos)
#define TWIS_SCR_SMBHHM_Pos         19           /**< \brief (TWIS_SCR) SMBus Host Header Address Match */
#define TWIS_SCR_SMBHHM             (_U_(0x1) << TWIS_SCR_SMBHHM_Pos)
#define TWIS_SCR_SMBDAM_Pos         20           /**< \brief (TWIS_SCR) SMBus Default Address Match */
#define TWIS_SCR_SMBDAM             (_U_(0x1) << TWIS_SCR_SMBDAM_Pos)
#define TWIS_SCR_STO_Pos            21           /**< \brief (TWIS_SCR) Stop Received */
#define TWIS_SCR_STO                (_U_(0x1) << TWIS_SCR_STO_Pos)
#define TWIS_SCR_REP_Pos            22           /**< \brief (TWIS_SCR) Repeated Start Received */
#define TWIS_SCR_REP                (_U_(0x1) << TWIS_SCR_REP_Pos)
#define TWIS_SCR_BTF_Pos            23           /**< \brief (TWIS_SCR) Byte Transfer Finished */
#define TWIS_SCR_BTF                (_U_(0x1) << TWIS_SCR_BTF_Pos)
#define TWIS_SCR_MASK               _U_(0x00FF71C8) /**< \brief (TWIS_SCR) MASK Register */

/* -------- TWIS_PR : (TWIS Offset: 0x2C) (R/  32) Parameter Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t HS:1;             /*!< bit:      0  HS-mode                            */
    uint32_t :31;              /*!< bit:  1..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} TWIS_PR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWIS_PR_OFFSET              0x2C         /**< \brief (TWIS_PR offset) Parameter Register */
#define TWIS_PR_RESETVALUE          _U_(0x00000001); /**< \brief (TWIS_PR reset_value) Parameter Register */

#define TWIS_PR_HS_Pos              0            /**< \brief (TWIS_PR) HS-mode */
#define TWIS_PR_HS                  (_U_(0x1) << TWIS_PR_HS_Pos)
#define TWIS_PR_MASK                _U_(0x00000001) /**< \brief (TWIS_PR) MASK Register */

/* -------- TWIS_VR : (TWIS Offset: 0x30) (R/  32) Version Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t VERSION:12;       /*!< bit:  0..11  Version Number                     */
    uint32_t :4;               /*!< bit: 12..15  Reserved                           */
    uint32_t VARIANT:4;        /*!< bit: 16..19  Variant Number                     */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} TWIS_VR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWIS_VR_OFFSET              0x30         /**< \brief (TWIS_VR offset) Version Register */
#define TWIS_VR_RESETVALUE          _U_(0x00000140); /**< \brief (TWIS_VR reset_value) Version Register */

#define TWIS_VR_VERSION_Pos         0            /**< \brief (TWIS_VR) Version Number */
#define TWIS_VR_VERSION_Msk         (_U_(0xFFF) << TWIS_VR_VERSION_Pos)
#define TWIS_VR_VERSION(value)      (TWIS_VR_VERSION_Msk & ((value) << TWIS_VR_VERSION_Pos))
#define TWIS_VR_VARIANT_Pos         16           /**< \brief (TWIS_VR) Variant Number */
#define TWIS_VR_VARIANT_Msk         (_U_(0xF) << TWIS_VR_VARIANT_Pos)
#define TWIS_VR_VARIANT(value)      (TWIS_VR_VARIANT_Msk & ((value) << TWIS_VR_VARIANT_Pos))
#define TWIS_VR_MASK                _U_(0x000F0FFF) /**< \brief (TWIS_VR) MASK Register */

/* -------- TWIS_HSTR : (TWIS Offset: 0x34) (R/W 32) HS-mode Timing Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t :16;              /*!< bit:  0..15  Reserved                           */
    uint32_t HDDAT:8;          /*!< bit: 16..23  Data Hold Cycles                   */
    uint32_t :8;               /*!< bit: 24..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} TWIS_HSTR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWIS_HSTR_OFFSET            0x34         /**< \brief (TWIS_HSTR offset) HS-mode Timing Register */
#define TWIS_HSTR_RESETVALUE        _U_(0x00000000); /**< \brief (TWIS_HSTR reset_value) HS-mode Timing Register */

#define TWIS_HSTR_HDDAT_Pos         16           /**< \brief (TWIS_HSTR) Data Hold Cycles */
#define TWIS_HSTR_HDDAT_Msk         (_U_(0xFF) << TWIS_HSTR_HDDAT_Pos)
#define TWIS_HSTR_HDDAT(value)      (TWIS_HSTR_HDDAT_Msk & ((value) << TWIS_HSTR_HDDAT_Pos))
#define TWIS_HSTR_MASK              _U_(0x00FF0000) /**< \brief (TWIS_HSTR) MASK Register */

/* -------- TWIS_SRR : (TWIS Offset: 0x38) (R/W 32) Slew Rate Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DADRIVEL:3;       /*!< bit:  0.. 2  Data Drive Strength LOW            */
    uint32_t :5;               /*!< bit:  3.. 7  Reserved                           */
    uint32_t DASLEW:2;         /*!< bit:  8.. 9  Data Slew Limit                    */
    uint32_t :18;              /*!< bit: 10..27  Reserved                           */
    uint32_t FILTER:2;         /*!< bit: 28..29  Input Spike Filter Control         */
    uint32_t :2;               /*!< bit: 30..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} TWIS_SRR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWIS_SRR_OFFSET             0x38         /**< \brief (TWIS_SRR offset) Slew Rate Register */
#define TWIS_SRR_RESETVALUE         _U_(0x00000000); /**< \brief (TWIS_SRR reset_value) Slew Rate Register */

#define TWIS_SRR_DADRIVEL_Pos       0            /**< \brief (TWIS_SRR) Data Drive Strength LOW */
#define TWIS_SRR_DADRIVEL_Msk       (_U_(0x7) << TWIS_SRR_DADRIVEL_Pos)
#define TWIS_SRR_DADRIVEL(value)    (TWIS_SRR_DADRIVEL_Msk & ((value) << TWIS_SRR_DADRIVEL_Pos))
#define TWIS_SRR_DASLEW_Pos         8            /**< \brief (TWIS_SRR) Data Slew Limit */
#define TWIS_SRR_DASLEW_Msk         (_U_(0x3) << TWIS_SRR_DASLEW_Pos)
#define TWIS_SRR_DASLEW(value)      (TWIS_SRR_DASLEW_Msk & ((value) << TWIS_SRR_DASLEW_Pos))
#define TWIS_SRR_FILTER_Pos         28           /**< \brief (TWIS_SRR) Input Spike Filter Control */
#define TWIS_SRR_FILTER_Msk         (_U_(0x3) << TWIS_SRR_FILTER_Pos)
#define TWIS_SRR_FILTER(value)      (TWIS_SRR_FILTER_Msk & ((value) << TWIS_SRR_FILTER_Pos))
#define TWIS_SRR_MASK               _U_(0x30000307) /**< \brief (TWIS_SRR) MASK Register */

/* -------- TWIS_HSSRR : (TWIS Offset: 0x3C) (R/W 32) HS-mode Slew Rate Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DADRIVEL:3;       /*!< bit:  0.. 2  Data Drive Strength LOW            */
    uint32_t :5;               /*!< bit:  3.. 7  Reserved                           */
    uint32_t DASLEW:2;         /*!< bit:  8.. 9  Data Slew Limit                    */
    uint32_t :18;              /*!< bit: 10..27  Reserved                           */
    uint32_t FILTER:2;         /*!< bit: 28..29  Input Spike Filter Control         */
    uint32_t :2;               /*!< bit: 30..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} TWIS_HSSRR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWIS_HSSRR_OFFSET           0x3C         /**< \brief (TWIS_HSSRR offset) HS-mode Slew Rate Register */
#define TWIS_HSSRR_RESETVALUE       _U_(0x00000000); /**< \brief (TWIS_HSSRR reset_value) HS-mode Slew Rate Register */

#define TWIS_HSSRR_DADRIVEL_Pos     0            /**< \brief (TWIS_HSSRR) Data Drive Strength LOW */
#define TWIS_HSSRR_DADRIVEL_Msk     (_U_(0x7) << TWIS_HSSRR_DADRIVEL_Pos)
#define TWIS_HSSRR_DADRIVEL(value)  (TWIS_HSSRR_DADRIVEL_Msk & ((value) << TWIS_HSSRR_DADRIVEL_Pos))
#define TWIS_HSSRR_DASLEW_Pos       8            /**< \brief (TWIS_HSSRR) Data Slew Limit */
#define TWIS_HSSRR_DASLEW_Msk       (_U_(0x3) << TWIS_HSSRR_DASLEW_Pos)
#define TWIS_HSSRR_DASLEW(value)    (TWIS_HSSRR_DASLEW_Msk & ((value) << TWIS_HSSRR_DASLEW_Pos))
#define TWIS_HSSRR_FILTER_Pos       28           /**< \brief (TWIS_HSSRR) Input Spike Filter Control */
#define TWIS_HSSRR_FILTER_Msk       (_U_(0x3) << TWIS_HSSRR_FILTER_Pos)
#define TWIS_HSSRR_FILTER(value)    (TWIS_HSSRR_FILTER_Msk & ((value) << TWIS_HSSRR_FILTER_Pos))
#define TWIS_HSSRR_MASK             _U_(0x30000307) /**< \brief (TWIS_HSSRR) MASK Register */

/** \brief TWIS hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {
  __IO uint32_t CR;          /**< \brief Offset: 0x00 (R/W 32) Control Register */
  __IO uint32_t NBYTES;      /**< \brief Offset: 0x04 (R/W 32) NBYTES Register */
  __IO uint32_t TR;          /**< \brief Offset: 0x08 (R/W 32) Timing Register */
  __I  uint32_t RHR;         /**< \brief Offset: 0x0C (R/  32) Receive Holding Register */
  __O  uint32_t THR;         /**< \brief Offset: 0x10 ( /W 32) Transmit Holding Register */
  __I  uint32_t PECR;        /**< \brief Offset: 0x14 (R/  32) Packet Error Check Register */
  __I  uint32_t SR;          /**< \brief Offset: 0x18 (R/  32) Status Register */
  __O  uint32_t IER;         /**< \brief Offset: 0x1C ( /W 32) Interrupt Enable Register */
  __O  uint32_t IDR;         /**< \brief Offset: 0x20 ( /W 32) Interrupt Disable Register */
  __I  uint32_t IMR;         /**< \brief Offset: 0x24 (R/  32) Interrupt Mask Register */
  __O  uint32_t SCR;         /**< \brief Offset: 0x28 ( /W 32) Status Clear Register */
  __I  uint32_t PR;          /**< \brief Offset: 0x2C (R/  32) Parameter Register */
  __I  uint32_t VR;          /**< \brief Offset: 0x30 (R/  32) Version Register */
  __IO uint32_t HSTR;        /**< \brief Offset: 0x34 (R/W 32) HS-mode Timing Register */
  __IO uint32_t SRR;         /**< \brief Offset: 0x38 (R/W 32) Slew Rate Register */
  __IO uint32_t HSSRR;       /**< \brief Offset: 0x3C (R/W 32) HS-mode Slew Rate Register */
} Twis;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAM4L_TWIS_COMPONENT_ */
