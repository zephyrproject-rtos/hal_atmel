/**
 * \file
 *
 * \brief Component description for TWIM
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

#ifndef _SAM4L_TWIM_COMPONENT_
#define _SAM4L_TWIM_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR TWIM */
/* ========================================================================== */
/** \addtogroup SAM4L_TWIM Two-wire Master Interface */
/*@{*/

#define TWIM_I7535
#define REV_TWIM                    0x120

/* -------- TWIM_CR : (TWIM Offset: 0x00) ( /W 32) Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t MEN:1;            /*!< bit:      0  Master Enable                      */
    uint32_t MDIS:1;           /*!< bit:      1  Master Disable                     */
    uint32_t :2;               /*!< bit:  2.. 3  Reserved                           */
    uint32_t SMEN:1;           /*!< bit:      4  SMBus Enable                       */
    uint32_t SMDIS:1;          /*!< bit:      5  SMBus Disable                      */
    uint32_t :1;               /*!< bit:      6  Reserved                           */
    uint32_t SWRST:1;          /*!< bit:      7  Software Reset                     */
    uint32_t STOP:1;           /*!< bit:      8  Stop the current transfer          */
    uint32_t :23;              /*!< bit:  9..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} TWIM_CR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWIM_CR_OFFSET              0x00         /**< \brief (TWIM_CR offset) Control Register */
#define TWIM_CR_RESETVALUE          _U_(0x00000000); /**< \brief (TWIM_CR reset_value) Control Register */

#define TWIM_CR_MEN_Pos             0            /**< \brief (TWIM_CR) Master Enable */
#define TWIM_CR_MEN                 (_U_(0x1) << TWIM_CR_MEN_Pos)
#define TWIM_CR_MDIS_Pos            1            /**< \brief (TWIM_CR) Master Disable */
#define TWIM_CR_MDIS                (_U_(0x1) << TWIM_CR_MDIS_Pos)
#define TWIM_CR_SMEN_Pos            4            /**< \brief (TWIM_CR) SMBus Enable */
#define TWIM_CR_SMEN                (_U_(0x1) << TWIM_CR_SMEN_Pos)
#define TWIM_CR_SMDIS_Pos           5            /**< \brief (TWIM_CR) SMBus Disable */
#define TWIM_CR_SMDIS               (_U_(0x1) << TWIM_CR_SMDIS_Pos)
#define TWIM_CR_SWRST_Pos           7            /**< \brief (TWIM_CR) Software Reset */
#define TWIM_CR_SWRST               (_U_(0x1) << TWIM_CR_SWRST_Pos)
#define TWIM_CR_STOP_Pos            8            /**< \brief (TWIM_CR) Stop the current transfer */
#define TWIM_CR_STOP                (_U_(0x1) << TWIM_CR_STOP_Pos)
#define TWIM_CR_MASK                _U_(0x000001B3) /**< \brief (TWIM_CR) MASK Register */

/* -------- TWIM_CWGR : (TWIM Offset: 0x04) (R/W 32) Clock Waveform Generator Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t LOW:8;            /*!< bit:  0.. 7  Clock Low Cycles                   */
    uint32_t HIGH:8;           /*!< bit:  8..15  Clock High Cycles                  */
    uint32_t STASTO:8;         /*!< bit: 16..23  START and STOP Cycles              */
    uint32_t DATA:4;           /*!< bit: 24..27  Data Setup and Hold Cycles         */
    uint32_t EXP:3;            /*!< bit: 28..30  Clock Prescaler                    */
    uint32_t :1;               /*!< bit:     31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} TWIM_CWGR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWIM_CWGR_OFFSET            0x04         /**< \brief (TWIM_CWGR offset) Clock Waveform Generator Register */
#define TWIM_CWGR_RESETVALUE        _U_(0x00000000); /**< \brief (TWIM_CWGR reset_value) Clock Waveform Generator Register */

#define TWIM_CWGR_LOW_Pos           0            /**< \brief (TWIM_CWGR) Clock Low Cycles */
#define TWIM_CWGR_LOW_Msk           (_U_(0xFF) << TWIM_CWGR_LOW_Pos)
#define TWIM_CWGR_LOW(value)        (TWIM_CWGR_LOW_Msk & ((value) << TWIM_CWGR_LOW_Pos))
#define TWIM_CWGR_HIGH_Pos          8            /**< \brief (TWIM_CWGR) Clock High Cycles */
#define TWIM_CWGR_HIGH_Msk          (_U_(0xFF) << TWIM_CWGR_HIGH_Pos)
#define TWIM_CWGR_HIGH(value)       (TWIM_CWGR_HIGH_Msk & ((value) << TWIM_CWGR_HIGH_Pos))
#define TWIM_CWGR_STASTO_Pos        16           /**< \brief (TWIM_CWGR) START and STOP Cycles */
#define TWIM_CWGR_STASTO_Msk        (_U_(0xFF) << TWIM_CWGR_STASTO_Pos)
#define TWIM_CWGR_STASTO(value)     (TWIM_CWGR_STASTO_Msk & ((value) << TWIM_CWGR_STASTO_Pos))
#define TWIM_CWGR_DATA_Pos          24           /**< \brief (TWIM_CWGR) Data Setup and Hold Cycles */
#define TWIM_CWGR_DATA_Msk          (_U_(0xF) << TWIM_CWGR_DATA_Pos)
#define TWIM_CWGR_DATA(value)       (TWIM_CWGR_DATA_Msk & ((value) << TWIM_CWGR_DATA_Pos))
#define TWIM_CWGR_EXP_Pos           28           /**< \brief (TWIM_CWGR) Clock Prescaler */
#define TWIM_CWGR_EXP_Msk           (_U_(0x7) << TWIM_CWGR_EXP_Pos)
#define TWIM_CWGR_EXP(value)        (TWIM_CWGR_EXP_Msk & ((value) << TWIM_CWGR_EXP_Pos))
#define TWIM_CWGR_MASK              _U_(0x7FFFFFFF) /**< \brief (TWIM_CWGR) MASK Register */

/* -------- TWIM_SMBTR : (TWIM Offset: 0x08) (R/W 32) SMBus Timing Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TLOWS:8;          /*!< bit:  0.. 7  Slave Clock stretch maximum cycles */
    uint32_t TLOWM:8;          /*!< bit:  8..15  Master Clock stretch maximum cycles */
    uint32_t THMAX:8;          /*!< bit: 16..23  Clock High maximum cycles          */
    uint32_t :4;               /*!< bit: 24..27  Reserved                           */
    uint32_t EXP:4;            /*!< bit: 28..31  SMBus Timeout Clock prescaler      */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} TWIM_SMBTR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWIM_SMBTR_OFFSET           0x08         /**< \brief (TWIM_SMBTR offset) SMBus Timing Register */
#define TWIM_SMBTR_RESETVALUE       _U_(0x00000000); /**< \brief (TWIM_SMBTR reset_value) SMBus Timing Register */

#define TWIM_SMBTR_TLOWS_Pos        0            /**< \brief (TWIM_SMBTR) Slave Clock stretch maximum cycles */
#define TWIM_SMBTR_TLOWS_Msk        (_U_(0xFF) << TWIM_SMBTR_TLOWS_Pos)
#define TWIM_SMBTR_TLOWS(value)     (TWIM_SMBTR_TLOWS_Msk & ((value) << TWIM_SMBTR_TLOWS_Pos))
#define TWIM_SMBTR_TLOWM_Pos        8            /**< \brief (TWIM_SMBTR) Master Clock stretch maximum cycles */
#define TWIM_SMBTR_TLOWM_Msk        (_U_(0xFF) << TWIM_SMBTR_TLOWM_Pos)
#define TWIM_SMBTR_TLOWM(value)     (TWIM_SMBTR_TLOWM_Msk & ((value) << TWIM_SMBTR_TLOWM_Pos))
#define TWIM_SMBTR_THMAX_Pos        16           /**< \brief (TWIM_SMBTR) Clock High maximum cycles */
#define TWIM_SMBTR_THMAX_Msk        (_U_(0xFF) << TWIM_SMBTR_THMAX_Pos)
#define TWIM_SMBTR_THMAX(value)     (TWIM_SMBTR_THMAX_Msk & ((value) << TWIM_SMBTR_THMAX_Pos))
#define TWIM_SMBTR_EXP_Pos          28           /**< \brief (TWIM_SMBTR) SMBus Timeout Clock prescaler */
#define TWIM_SMBTR_EXP_Msk          (_U_(0xF) << TWIM_SMBTR_EXP_Pos)
#define TWIM_SMBTR_EXP(value)       (TWIM_SMBTR_EXP_Msk & ((value) << TWIM_SMBTR_EXP_Pos))
#define TWIM_SMBTR_MASK             _U_(0xF0FFFFFF) /**< \brief (TWIM_SMBTR) MASK Register */

/* -------- TWIM_CMDR : (TWIM Offset: 0x0C) (R/W 32) Command Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t READ:1;           /*!< bit:      0  Transfer Direction                 */
    uint32_t SADR:10;          /*!< bit:  1..10  Slave Address                      */
    uint32_t TENBIT:1;         /*!< bit:     11  Ten Bit Addressing Mode            */
    uint32_t REPSAME:1;        /*!< bit:     12  Transfer is to same address as previous address */
    uint32_t START:1;          /*!< bit:     13  Send START condition               */
    uint32_t STOP:1;           /*!< bit:     14  Send STOP condition                */
    uint32_t VALID:1;          /*!< bit:     15  CMDR Valid                         */
    uint32_t NBYTES:8;         /*!< bit: 16..23  Number of data bytes in transfer   */
    uint32_t PECEN:1;          /*!< bit:     24  Packet Error Checking Enable       */
    uint32_t ACKLAST:1;        /*!< bit:     25  ACK Last Master RX Byte            */
    uint32_t HS:1;             /*!< bit:     26  HS-mode                            */
    uint32_t :1;               /*!< bit:     27  Reserved                           */
    uint32_t HSMCODE:3;        /*!< bit: 28..30  HS-mode Master Code                */
    uint32_t :1;               /*!< bit:     31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} TWIM_CMDR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWIM_CMDR_OFFSET            0x0C         /**< \brief (TWIM_CMDR offset) Command Register */
#define TWIM_CMDR_RESETVALUE        _U_(0x00000000); /**< \brief (TWIM_CMDR reset_value) Command Register */

#define TWIM_CMDR_READ_Pos          0            /**< \brief (TWIM_CMDR) Transfer Direction */
#define TWIM_CMDR_READ              (_U_(0x1) << TWIM_CMDR_READ_Pos)
#define TWIM_CMDR_SADR_Pos          1            /**< \brief (TWIM_CMDR) Slave Address */
#define TWIM_CMDR_SADR_Msk          (_U_(0x3FF) << TWIM_CMDR_SADR_Pos)
#define TWIM_CMDR_SADR(value)       (TWIM_CMDR_SADR_Msk & ((value) << TWIM_CMDR_SADR_Pos))
#define TWIM_CMDR_TENBIT_Pos        11           /**< \brief (TWIM_CMDR) Ten Bit Addressing Mode */
#define TWIM_CMDR_TENBIT            (_U_(0x1) << TWIM_CMDR_TENBIT_Pos)
#define TWIM_CMDR_REPSAME_Pos       12           /**< \brief (TWIM_CMDR) Transfer is to same address as previous address */
#define TWIM_CMDR_REPSAME           (_U_(0x1) << TWIM_CMDR_REPSAME_Pos)
#define TWIM_CMDR_START_Pos         13           /**< \brief (TWIM_CMDR) Send START condition */
#define TWIM_CMDR_START             (_U_(0x1) << TWIM_CMDR_START_Pos)
#define TWIM_CMDR_STOP_Pos          14           /**< \brief (TWIM_CMDR) Send STOP condition */
#define TWIM_CMDR_STOP              (_U_(0x1) << TWIM_CMDR_STOP_Pos)
#define TWIM_CMDR_VALID_Pos         15           /**< \brief (TWIM_CMDR) CMDR Valid */
#define TWIM_CMDR_VALID             (_U_(0x1) << TWIM_CMDR_VALID_Pos)
#define TWIM_CMDR_NBYTES_Pos        16           /**< \brief (TWIM_CMDR) Number of data bytes in transfer */
#define TWIM_CMDR_NBYTES_Msk        (_U_(0xFF) << TWIM_CMDR_NBYTES_Pos)
#define TWIM_CMDR_NBYTES(value)     (TWIM_CMDR_NBYTES_Msk & ((value) << TWIM_CMDR_NBYTES_Pos))
#define TWIM_CMDR_PECEN_Pos         24           /**< \brief (TWIM_CMDR) Packet Error Checking Enable */
#define TWIM_CMDR_PECEN             (_U_(0x1) << TWIM_CMDR_PECEN_Pos)
#define TWIM_CMDR_ACKLAST_Pos       25           /**< \brief (TWIM_CMDR) ACK Last Master RX Byte */
#define TWIM_CMDR_ACKLAST           (_U_(0x1) << TWIM_CMDR_ACKLAST_Pos)
#define TWIM_CMDR_HS_Pos            26           /**< \brief (TWIM_CMDR) HS-mode */
#define TWIM_CMDR_HS                (_U_(0x1) << TWIM_CMDR_HS_Pos)
#define TWIM_CMDR_HSMCODE_Pos       28           /**< \brief (TWIM_CMDR) HS-mode Master Code */
#define TWIM_CMDR_HSMCODE_Msk       (_U_(0x7) << TWIM_CMDR_HSMCODE_Pos)
#define TWIM_CMDR_HSMCODE(value)    (TWIM_CMDR_HSMCODE_Msk & ((value) << TWIM_CMDR_HSMCODE_Pos))
#define TWIM_CMDR_MASK              _U_(0x77FFFFFF) /**< \brief (TWIM_CMDR) MASK Register */

/* -------- TWIM_NCMDR : (TWIM Offset: 0x10) (R/W 32) Next Command Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t READ:1;           /*!< bit:      0  Transfer Direction                 */
    uint32_t SADR:10;          /*!< bit:  1..10  Slave Address                      */
    uint32_t TENBIT:1;         /*!< bit:     11  Ten Bit Addressing Mode            */
    uint32_t REPSAME:1;        /*!< bit:     12  Transfer is to same address as previous address */
    uint32_t START:1;          /*!< bit:     13  Send START condition               */
    uint32_t STOP:1;           /*!< bit:     14  Send STOP condition                */
    uint32_t VALID:1;          /*!< bit:     15  CMDR Valid                         */
    uint32_t NBYTES:8;         /*!< bit: 16..23  Number of data bytes in transfer   */
    uint32_t PECEN:1;          /*!< bit:     24  Packet Error Checking Enable       */
    uint32_t ACKLAST:1;        /*!< bit:     25  ACK Last Master RX Byte            */
    uint32_t HS:1;             /*!< bit:     26  HS-mode                            */
    uint32_t :1;               /*!< bit:     27  Reserved                           */
    uint32_t HSMCODE:3;        /*!< bit: 28..30  HS-mode Master Code                */
    uint32_t :1;               /*!< bit:     31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} TWIM_NCMDR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWIM_NCMDR_OFFSET           0x10         /**< \brief (TWIM_NCMDR offset) Next Command Register */
#define TWIM_NCMDR_RESETVALUE       _U_(0x00000000); /**< \brief (TWIM_NCMDR reset_value) Next Command Register */

#define TWIM_NCMDR_READ_Pos         0            /**< \brief (TWIM_NCMDR) Transfer Direction */
#define TWIM_NCMDR_READ             (_U_(0x1) << TWIM_NCMDR_READ_Pos)
#define TWIM_NCMDR_SADR_Pos         1            /**< \brief (TWIM_NCMDR) Slave Address */
#define TWIM_NCMDR_SADR_Msk         (_U_(0x3FF) << TWIM_NCMDR_SADR_Pos)
#define TWIM_NCMDR_SADR(value)      (TWIM_NCMDR_SADR_Msk & ((value) << TWIM_NCMDR_SADR_Pos))
#define TWIM_NCMDR_TENBIT_Pos       11           /**< \brief (TWIM_NCMDR) Ten Bit Addressing Mode */
#define TWIM_NCMDR_TENBIT           (_U_(0x1) << TWIM_NCMDR_TENBIT_Pos)
#define TWIM_NCMDR_REPSAME_Pos      12           /**< \brief (TWIM_NCMDR) Transfer is to same address as previous address */
#define TWIM_NCMDR_REPSAME          (_U_(0x1) << TWIM_NCMDR_REPSAME_Pos)
#define TWIM_NCMDR_START_Pos        13           /**< \brief (TWIM_NCMDR) Send START condition */
#define TWIM_NCMDR_START            (_U_(0x1) << TWIM_NCMDR_START_Pos)
#define TWIM_NCMDR_STOP_Pos         14           /**< \brief (TWIM_NCMDR) Send STOP condition */
#define TWIM_NCMDR_STOP             (_U_(0x1) << TWIM_NCMDR_STOP_Pos)
#define TWIM_NCMDR_VALID_Pos        15           /**< \brief (TWIM_NCMDR) CMDR Valid */
#define TWIM_NCMDR_VALID            (_U_(0x1) << TWIM_NCMDR_VALID_Pos)
#define TWIM_NCMDR_NBYTES_Pos       16           /**< \brief (TWIM_NCMDR) Number of data bytes in transfer */
#define TWIM_NCMDR_NBYTES_Msk       (_U_(0xFF) << TWIM_NCMDR_NBYTES_Pos)
#define TWIM_NCMDR_NBYTES(value)    (TWIM_NCMDR_NBYTES_Msk & ((value) << TWIM_NCMDR_NBYTES_Pos))
#define TWIM_NCMDR_PECEN_Pos        24           /**< \brief (TWIM_NCMDR) Packet Error Checking Enable */
#define TWIM_NCMDR_PECEN            (_U_(0x1) << TWIM_NCMDR_PECEN_Pos)
#define TWIM_NCMDR_ACKLAST_Pos      25           /**< \brief (TWIM_NCMDR) ACK Last Master RX Byte */
#define TWIM_NCMDR_ACKLAST          (_U_(0x1) << TWIM_NCMDR_ACKLAST_Pos)
#define TWIM_NCMDR_HS_Pos           26           /**< \brief (TWIM_NCMDR) HS-mode */
#define TWIM_NCMDR_HS               (_U_(0x1) << TWIM_NCMDR_HS_Pos)
#define TWIM_NCMDR_HSMCODE_Pos      28           /**< \brief (TWIM_NCMDR) HS-mode Master Code */
#define TWIM_NCMDR_HSMCODE_Msk      (_U_(0x7) << TWIM_NCMDR_HSMCODE_Pos)
#define TWIM_NCMDR_HSMCODE(value)   (TWIM_NCMDR_HSMCODE_Msk & ((value) << TWIM_NCMDR_HSMCODE_Pos))
#define TWIM_NCMDR_MASK             _U_(0x77FFFFFF) /**< \brief (TWIM_NCMDR) MASK Register */

/* -------- TWIM_RHR : (TWIM Offset: 0x14) (R/  32) Receive Holding Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXDATA:8;         /*!< bit:  0.. 7  Received Data                      */
    uint32_t :24;              /*!< bit:  8..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} TWIM_RHR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWIM_RHR_OFFSET             0x14         /**< \brief (TWIM_RHR offset) Receive Holding Register */
#define TWIM_RHR_RESETVALUE         _U_(0x00000000); /**< \brief (TWIM_RHR reset_value) Receive Holding Register */

#define TWIM_RHR_RXDATA_Pos         0            /**< \brief (TWIM_RHR) Received Data */
#define TWIM_RHR_RXDATA_Msk         (_U_(0xFF) << TWIM_RHR_RXDATA_Pos)
#define TWIM_RHR_RXDATA(value)      (TWIM_RHR_RXDATA_Msk & ((value) << TWIM_RHR_RXDATA_Pos))
#define TWIM_RHR_MASK               _U_(0x000000FF) /**< \brief (TWIM_RHR) MASK Register */

/* -------- TWIM_THR : (TWIM Offset: 0x18) ( /W 32) Transmit Holding Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXDATA:8;         /*!< bit:  0.. 7  Data to Transmit                   */
    uint32_t :24;              /*!< bit:  8..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} TWIM_THR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWIM_THR_OFFSET             0x18         /**< \brief (TWIM_THR offset) Transmit Holding Register */
#define TWIM_THR_RESETVALUE         _U_(0x00000000); /**< \brief (TWIM_THR reset_value) Transmit Holding Register */

#define TWIM_THR_TXDATA_Pos         0            /**< \brief (TWIM_THR) Data to Transmit */
#define TWIM_THR_TXDATA_Msk         (_U_(0xFF) << TWIM_THR_TXDATA_Pos)
#define TWIM_THR_TXDATA(value)      (TWIM_THR_TXDATA_Msk & ((value) << TWIM_THR_TXDATA_Pos))
#define TWIM_THR_MASK               _U_(0x000000FF) /**< \brief (TWIM_THR) MASK Register */

/* -------- TWIM_SR : (TWIM Offset: 0x1C) (R/  32) Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXRDY:1;          /*!< bit:      0  RHR Data Ready                     */
    uint32_t TXRDY:1;          /*!< bit:      1  THR Data Ready                     */
    uint32_t CRDY:1;           /*!< bit:      2  Ready for More Commands            */
    uint32_t CCOMP:1;          /*!< bit:      3  Command Complete                   */
    uint32_t IDLE:1;           /*!< bit:      4  Master Interface is Idle           */
    uint32_t BUSFREE:1;        /*!< bit:      5  Two-wire Bus is Free               */
    uint32_t :2;               /*!< bit:  6.. 7  Reserved                           */
    uint32_t ANAK:1;           /*!< bit:      8  NAK in Address Phase Received      */
    uint32_t DNAK:1;           /*!< bit:      9  NAK in Data Phase Received         */
    uint32_t ARBLST:1;         /*!< bit:     10  Arbitration Lost                   */
    uint32_t SMBALERT:1;       /*!< bit:     11  SMBus Alert                        */
    uint32_t TOUT:1;           /*!< bit:     12  Timeout                            */
    uint32_t PECERR:1;         /*!< bit:     13  PEC Error                          */
    uint32_t STOP:1;           /*!< bit:     14  Stop Request Accepted              */
    uint32_t :1;               /*!< bit:     15  Reserved                           */
    uint32_t MENB:1;           /*!< bit:     16  Master Interface Enable            */
    uint32_t HSMCACK:1;        /*!< bit:     17  ACK in HS-mode Master Code Phase Received */
    uint32_t :14;              /*!< bit: 18..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} TWIM_SR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWIM_SR_OFFSET              0x1C         /**< \brief (TWIM_SR offset) Status Register */
#define TWIM_SR_RESETVALUE          _U_(0x00000002); /**< \brief (TWIM_SR reset_value) Status Register */

#define TWIM_SR_RXRDY_Pos           0            /**< \brief (TWIM_SR) RHR Data Ready */
#define TWIM_SR_RXRDY               (_U_(0x1) << TWIM_SR_RXRDY_Pos)
#define TWIM_SR_TXRDY_Pos           1            /**< \brief (TWIM_SR) THR Data Ready */
#define TWIM_SR_TXRDY               (_U_(0x1) << TWIM_SR_TXRDY_Pos)
#define TWIM_SR_CRDY_Pos            2            /**< \brief (TWIM_SR) Ready for More Commands */
#define TWIM_SR_CRDY                (_U_(0x1) << TWIM_SR_CRDY_Pos)
#define TWIM_SR_CCOMP_Pos           3            /**< \brief (TWIM_SR) Command Complete */
#define TWIM_SR_CCOMP               (_U_(0x1) << TWIM_SR_CCOMP_Pos)
#define TWIM_SR_IDLE_Pos            4            /**< \brief (TWIM_SR) Master Interface is Idle */
#define TWIM_SR_IDLE                (_U_(0x1) << TWIM_SR_IDLE_Pos)
#define TWIM_SR_BUSFREE_Pos         5            /**< \brief (TWIM_SR) Two-wire Bus is Free */
#define TWIM_SR_BUSFREE             (_U_(0x1) << TWIM_SR_BUSFREE_Pos)
#define TWIM_SR_ANAK_Pos            8            /**< \brief (TWIM_SR) NAK in Address Phase Received */
#define TWIM_SR_ANAK                (_U_(0x1) << TWIM_SR_ANAK_Pos)
#define TWIM_SR_DNAK_Pos            9            /**< \brief (TWIM_SR) NAK in Data Phase Received */
#define TWIM_SR_DNAK                (_U_(0x1) << TWIM_SR_DNAK_Pos)
#define TWIM_SR_ARBLST_Pos          10           /**< \brief (TWIM_SR) Arbitration Lost */
#define TWIM_SR_ARBLST              (_U_(0x1) << TWIM_SR_ARBLST_Pos)
#define TWIM_SR_SMBALERT_Pos        11           /**< \brief (TWIM_SR) SMBus Alert */
#define TWIM_SR_SMBALERT            (_U_(0x1) << TWIM_SR_SMBALERT_Pos)
#define TWIM_SR_TOUT_Pos            12           /**< \brief (TWIM_SR) Timeout */
#define TWIM_SR_TOUT                (_U_(0x1) << TWIM_SR_TOUT_Pos)
#define TWIM_SR_PECERR_Pos          13           /**< \brief (TWIM_SR) PEC Error */
#define TWIM_SR_PECERR              (_U_(0x1) << TWIM_SR_PECERR_Pos)
#define TWIM_SR_STOP_Pos            14           /**< \brief (TWIM_SR) Stop Request Accepted */
#define TWIM_SR_STOP                (_U_(0x1) << TWIM_SR_STOP_Pos)
#define TWIM_SR_MENB_Pos            16           /**< \brief (TWIM_SR) Master Interface Enable */
#define TWIM_SR_MENB                (_U_(0x1) << TWIM_SR_MENB_Pos)
#define TWIM_SR_HSMCACK_Pos         17           /**< \brief (TWIM_SR) ACK in HS-mode Master Code Phase Received */
#define TWIM_SR_HSMCACK             (_U_(0x1) << TWIM_SR_HSMCACK_Pos)
#define TWIM_SR_MASK                _U_(0x00037F3F) /**< \brief (TWIM_SR) MASK Register */

/* -------- TWIM_IER : (TWIM Offset: 0x20) ( /W 32) Interrupt Enable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXRDY:1;          /*!< bit:      0  RHR Data Ready                     */
    uint32_t TXRDY:1;          /*!< bit:      1  THR Data Ready                     */
    uint32_t CRDY:1;           /*!< bit:      2  Ready for More Commands            */
    uint32_t CCOMP:1;          /*!< bit:      3  Command Complete                   */
    uint32_t IDLE:1;           /*!< bit:      4  Master Interface is Idle           */
    uint32_t BUSFREE:1;        /*!< bit:      5  Two-wire Bus is Free               */
    uint32_t :2;               /*!< bit:  6.. 7  Reserved                           */
    uint32_t ANAK:1;           /*!< bit:      8  NAK in Address Phase Received      */
    uint32_t DNAK:1;           /*!< bit:      9  NAK in Data Phase Received         */
    uint32_t ARBLST:1;         /*!< bit:     10  Arbitration Lost                   */
    uint32_t SMBALERT:1;       /*!< bit:     11  SMBus Alert                        */
    uint32_t TOUT:1;           /*!< bit:     12  Timeout                            */
    uint32_t PECERR:1;         /*!< bit:     13  PEC Error                          */
    uint32_t STOP:1;           /*!< bit:     14  Stop Request Accepted              */
    uint32_t :2;               /*!< bit: 15..16  Reserved                           */
    uint32_t HSMCACK:1;        /*!< bit:     17  ACK in HS-mode Master Code Phase Received */
    uint32_t :14;              /*!< bit: 18..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} TWIM_IER_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWIM_IER_OFFSET             0x20         /**< \brief (TWIM_IER offset) Interrupt Enable Register */
#define TWIM_IER_RESETVALUE         _U_(0x00000000); /**< \brief (TWIM_IER reset_value) Interrupt Enable Register */

#define TWIM_IER_RXRDY_Pos          0            /**< \brief (TWIM_IER) RHR Data Ready */
#define TWIM_IER_RXRDY              (_U_(0x1) << TWIM_IER_RXRDY_Pos)
#define TWIM_IER_TXRDY_Pos          1            /**< \brief (TWIM_IER) THR Data Ready */
#define TWIM_IER_TXRDY              (_U_(0x1) << TWIM_IER_TXRDY_Pos)
#define TWIM_IER_CRDY_Pos           2            /**< \brief (TWIM_IER) Ready for More Commands */
#define TWIM_IER_CRDY               (_U_(0x1) << TWIM_IER_CRDY_Pos)
#define TWIM_IER_CCOMP_Pos          3            /**< \brief (TWIM_IER) Command Complete */
#define TWIM_IER_CCOMP              (_U_(0x1) << TWIM_IER_CCOMP_Pos)
#define TWIM_IER_IDLE_Pos           4            /**< \brief (TWIM_IER) Master Interface is Idle */
#define TWIM_IER_IDLE               (_U_(0x1) << TWIM_IER_IDLE_Pos)
#define TWIM_IER_BUSFREE_Pos        5            /**< \brief (TWIM_IER) Two-wire Bus is Free */
#define TWIM_IER_BUSFREE            (_U_(0x1) << TWIM_IER_BUSFREE_Pos)
#define TWIM_IER_ANAK_Pos           8            /**< \brief (TWIM_IER) NAK in Address Phase Received */
#define TWIM_IER_ANAK               (_U_(0x1) << TWIM_IER_ANAK_Pos)
#define TWIM_IER_DNAK_Pos           9            /**< \brief (TWIM_IER) NAK in Data Phase Received */
#define TWIM_IER_DNAK               (_U_(0x1) << TWIM_IER_DNAK_Pos)
#define TWIM_IER_ARBLST_Pos         10           /**< \brief (TWIM_IER) Arbitration Lost */
#define TWIM_IER_ARBLST             (_U_(0x1) << TWIM_IER_ARBLST_Pos)
#define TWIM_IER_SMBALERT_Pos       11           /**< \brief (TWIM_IER) SMBus Alert */
#define TWIM_IER_SMBALERT           (_U_(0x1) << TWIM_IER_SMBALERT_Pos)
#define TWIM_IER_TOUT_Pos           12           /**< \brief (TWIM_IER) Timeout */
#define TWIM_IER_TOUT               (_U_(0x1) << TWIM_IER_TOUT_Pos)
#define TWIM_IER_PECERR_Pos         13           /**< \brief (TWIM_IER) PEC Error */
#define TWIM_IER_PECERR             (_U_(0x1) << TWIM_IER_PECERR_Pos)
#define TWIM_IER_STOP_Pos           14           /**< \brief (TWIM_IER) Stop Request Accepted */
#define TWIM_IER_STOP               (_U_(0x1) << TWIM_IER_STOP_Pos)
#define TWIM_IER_HSMCACK_Pos        17           /**< \brief (TWIM_IER) ACK in HS-mode Master Code Phase Received */
#define TWIM_IER_HSMCACK            (_U_(0x1) << TWIM_IER_HSMCACK_Pos)
#define TWIM_IER_MASK               _U_(0x00027F3F) /**< \brief (TWIM_IER) MASK Register */

/* -------- TWIM_IDR : (TWIM Offset: 0x24) ( /W 32) Interrupt Disable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXRDY:1;          /*!< bit:      0  RHR Data Ready                     */
    uint32_t TXRDY:1;          /*!< bit:      1  THR Data Ready                     */
    uint32_t CRDY:1;           /*!< bit:      2  Ready for More Commands            */
    uint32_t CCOMP:1;          /*!< bit:      3  Command Complete                   */
    uint32_t IDLE:1;           /*!< bit:      4  Master Interface is Idle           */
    uint32_t BUSFREE:1;        /*!< bit:      5  Two-wire Bus is Free               */
    uint32_t :2;               /*!< bit:  6.. 7  Reserved                           */
    uint32_t ANAK:1;           /*!< bit:      8  NAK in Address Phase Received      */
    uint32_t DNAK:1;           /*!< bit:      9  NAK in Data Phase Received         */
    uint32_t ARBLST:1;         /*!< bit:     10  Arbitration Lost                   */
    uint32_t SMBALERT:1;       /*!< bit:     11  SMBus Alert                        */
    uint32_t TOUT:1;           /*!< bit:     12  Timeout                            */
    uint32_t PECERR:1;         /*!< bit:     13  PEC Error                          */
    uint32_t STOP:1;           /*!< bit:     14  Stop Request Accepted              */
    uint32_t :2;               /*!< bit: 15..16  Reserved                           */
    uint32_t HSMCACK:1;        /*!< bit:     17  ACK in HS-mode Master Code Phase Received */
    uint32_t :14;              /*!< bit: 18..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} TWIM_IDR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWIM_IDR_OFFSET             0x24         /**< \brief (TWIM_IDR offset) Interrupt Disable Register */
#define TWIM_IDR_RESETVALUE         _U_(0x00000000); /**< \brief (TWIM_IDR reset_value) Interrupt Disable Register */

#define TWIM_IDR_RXRDY_Pos          0            /**< \brief (TWIM_IDR) RHR Data Ready */
#define TWIM_IDR_RXRDY              (_U_(0x1) << TWIM_IDR_RXRDY_Pos)
#define TWIM_IDR_TXRDY_Pos          1            /**< \brief (TWIM_IDR) THR Data Ready */
#define TWIM_IDR_TXRDY              (_U_(0x1) << TWIM_IDR_TXRDY_Pos)
#define TWIM_IDR_CRDY_Pos           2            /**< \brief (TWIM_IDR) Ready for More Commands */
#define TWIM_IDR_CRDY               (_U_(0x1) << TWIM_IDR_CRDY_Pos)
#define TWIM_IDR_CCOMP_Pos          3            /**< \brief (TWIM_IDR) Command Complete */
#define TWIM_IDR_CCOMP              (_U_(0x1) << TWIM_IDR_CCOMP_Pos)
#define TWIM_IDR_IDLE_Pos           4            /**< \brief (TWIM_IDR) Master Interface is Idle */
#define TWIM_IDR_IDLE               (_U_(0x1) << TWIM_IDR_IDLE_Pos)
#define TWIM_IDR_BUSFREE_Pos        5            /**< \brief (TWIM_IDR) Two-wire Bus is Free */
#define TWIM_IDR_BUSFREE            (_U_(0x1) << TWIM_IDR_BUSFREE_Pos)
#define TWIM_IDR_ANAK_Pos           8            /**< \brief (TWIM_IDR) NAK in Address Phase Received */
#define TWIM_IDR_ANAK               (_U_(0x1) << TWIM_IDR_ANAK_Pos)
#define TWIM_IDR_DNAK_Pos           9            /**< \brief (TWIM_IDR) NAK in Data Phase Received */
#define TWIM_IDR_DNAK               (_U_(0x1) << TWIM_IDR_DNAK_Pos)
#define TWIM_IDR_ARBLST_Pos         10           /**< \brief (TWIM_IDR) Arbitration Lost */
#define TWIM_IDR_ARBLST             (_U_(0x1) << TWIM_IDR_ARBLST_Pos)
#define TWIM_IDR_SMBALERT_Pos       11           /**< \brief (TWIM_IDR) SMBus Alert */
#define TWIM_IDR_SMBALERT           (_U_(0x1) << TWIM_IDR_SMBALERT_Pos)
#define TWIM_IDR_TOUT_Pos           12           /**< \brief (TWIM_IDR) Timeout */
#define TWIM_IDR_TOUT               (_U_(0x1) << TWIM_IDR_TOUT_Pos)
#define TWIM_IDR_PECERR_Pos         13           /**< \brief (TWIM_IDR) PEC Error */
#define TWIM_IDR_PECERR             (_U_(0x1) << TWIM_IDR_PECERR_Pos)
#define TWIM_IDR_STOP_Pos           14           /**< \brief (TWIM_IDR) Stop Request Accepted */
#define TWIM_IDR_STOP               (_U_(0x1) << TWIM_IDR_STOP_Pos)
#define TWIM_IDR_HSMCACK_Pos        17           /**< \brief (TWIM_IDR) ACK in HS-mode Master Code Phase Received */
#define TWIM_IDR_HSMCACK            (_U_(0x1) << TWIM_IDR_HSMCACK_Pos)
#define TWIM_IDR_MASK               _U_(0x00027F3F) /**< \brief (TWIM_IDR) MASK Register */

/* -------- TWIM_IMR : (TWIM Offset: 0x28) (R/  32) Interrupt Mask Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXRDY:1;          /*!< bit:      0  RHR Data Ready                     */
    uint32_t TXRDY:1;          /*!< bit:      1  THR Data Ready                     */
    uint32_t CRDY:1;           /*!< bit:      2  Ready for More Commands            */
    uint32_t CCOMP:1;          /*!< bit:      3  Command Complete                   */
    uint32_t IDLE:1;           /*!< bit:      4  Master Interface is Idle           */
    uint32_t BUSFREE:1;        /*!< bit:      5  Two-wire Bus is Free               */
    uint32_t :2;               /*!< bit:  6.. 7  Reserved                           */
    uint32_t ANAK:1;           /*!< bit:      8  NAK in Address Phase Received      */
    uint32_t DNAK:1;           /*!< bit:      9  NAK in Data Phase Received         */
    uint32_t ARBLST:1;         /*!< bit:     10  Arbitration Lost                   */
    uint32_t SMBALERT:1;       /*!< bit:     11  SMBus Alert                        */
    uint32_t TOUT:1;           /*!< bit:     12  Timeout                            */
    uint32_t PECERR:1;         /*!< bit:     13  PEC Error                          */
    uint32_t STOP:1;           /*!< bit:     14  Stop Request Accepted              */
    uint32_t :2;               /*!< bit: 15..16  Reserved                           */
    uint32_t HSMCACK:1;        /*!< bit:     17  ACK in HS-mode Master Code Phase Received */
    uint32_t :14;              /*!< bit: 18..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} TWIM_IMR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWIM_IMR_OFFSET             0x28         /**< \brief (TWIM_IMR offset) Interrupt Mask Register */
#define TWIM_IMR_RESETVALUE         _U_(0x00000000); /**< \brief (TWIM_IMR reset_value) Interrupt Mask Register */

#define TWIM_IMR_RXRDY_Pos          0            /**< \brief (TWIM_IMR) RHR Data Ready */
#define TWIM_IMR_RXRDY              (_U_(0x1) << TWIM_IMR_RXRDY_Pos)
#define TWIM_IMR_TXRDY_Pos          1            /**< \brief (TWIM_IMR) THR Data Ready */
#define TWIM_IMR_TXRDY              (_U_(0x1) << TWIM_IMR_TXRDY_Pos)
#define TWIM_IMR_CRDY_Pos           2            /**< \brief (TWIM_IMR) Ready for More Commands */
#define TWIM_IMR_CRDY               (_U_(0x1) << TWIM_IMR_CRDY_Pos)
#define TWIM_IMR_CCOMP_Pos          3            /**< \brief (TWIM_IMR) Command Complete */
#define TWIM_IMR_CCOMP              (_U_(0x1) << TWIM_IMR_CCOMP_Pos)
#define TWIM_IMR_IDLE_Pos           4            /**< \brief (TWIM_IMR) Master Interface is Idle */
#define TWIM_IMR_IDLE               (_U_(0x1) << TWIM_IMR_IDLE_Pos)
#define TWIM_IMR_BUSFREE_Pos        5            /**< \brief (TWIM_IMR) Two-wire Bus is Free */
#define TWIM_IMR_BUSFREE            (_U_(0x1) << TWIM_IMR_BUSFREE_Pos)
#define TWIM_IMR_ANAK_Pos           8            /**< \brief (TWIM_IMR) NAK in Address Phase Received */
#define TWIM_IMR_ANAK               (_U_(0x1) << TWIM_IMR_ANAK_Pos)
#define TWIM_IMR_DNAK_Pos           9            /**< \brief (TWIM_IMR) NAK in Data Phase Received */
#define TWIM_IMR_DNAK               (_U_(0x1) << TWIM_IMR_DNAK_Pos)
#define TWIM_IMR_ARBLST_Pos         10           /**< \brief (TWIM_IMR) Arbitration Lost */
#define TWIM_IMR_ARBLST             (_U_(0x1) << TWIM_IMR_ARBLST_Pos)
#define TWIM_IMR_SMBALERT_Pos       11           /**< \brief (TWIM_IMR) SMBus Alert */
#define TWIM_IMR_SMBALERT           (_U_(0x1) << TWIM_IMR_SMBALERT_Pos)
#define TWIM_IMR_TOUT_Pos           12           /**< \brief (TWIM_IMR) Timeout */
#define TWIM_IMR_TOUT               (_U_(0x1) << TWIM_IMR_TOUT_Pos)
#define TWIM_IMR_PECERR_Pos         13           /**< \brief (TWIM_IMR) PEC Error */
#define TWIM_IMR_PECERR             (_U_(0x1) << TWIM_IMR_PECERR_Pos)
#define TWIM_IMR_STOP_Pos           14           /**< \brief (TWIM_IMR) Stop Request Accepted */
#define TWIM_IMR_STOP               (_U_(0x1) << TWIM_IMR_STOP_Pos)
#define TWIM_IMR_HSMCACK_Pos        17           /**< \brief (TWIM_IMR) ACK in HS-mode Master Code Phase Received */
#define TWIM_IMR_HSMCACK            (_U_(0x1) << TWIM_IMR_HSMCACK_Pos)
#define TWIM_IMR_MASK               _U_(0x00027F3F) /**< \brief (TWIM_IMR) MASK Register */

/* -------- TWIM_SCR : (TWIM Offset: 0x2C) ( /W 32) Status Clear Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t :3;               /*!< bit:  0.. 2  Reserved                           */
    uint32_t CCOMP:1;          /*!< bit:      3  Command Complete                   */
    uint32_t :4;               /*!< bit:  4.. 7  Reserved                           */
    uint32_t ANAK:1;           /*!< bit:      8  NAK in Address Phase Received      */
    uint32_t DNAK:1;           /*!< bit:      9  NAK in Data Phase Received         */
    uint32_t ARBLST:1;         /*!< bit:     10  Arbitration Lost                   */
    uint32_t SMBALERT:1;       /*!< bit:     11  SMBus Alert                        */
    uint32_t TOUT:1;           /*!< bit:     12  Timeout                            */
    uint32_t PECERR:1;         /*!< bit:     13  PEC Error                          */
    uint32_t STOP:1;           /*!< bit:     14  Stop Request Accepted              */
    uint32_t :2;               /*!< bit: 15..16  Reserved                           */
    uint32_t HSMCACK:1;        /*!< bit:     17  ACK in HS-mode Master Code Phase Received */
    uint32_t :14;              /*!< bit: 18..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} TWIM_SCR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWIM_SCR_OFFSET             0x2C         /**< \brief (TWIM_SCR offset) Status Clear Register */
#define TWIM_SCR_RESETVALUE         _U_(0x00000000); /**< \brief (TWIM_SCR reset_value) Status Clear Register */

#define TWIM_SCR_CCOMP_Pos          3            /**< \brief (TWIM_SCR) Command Complete */
#define TWIM_SCR_CCOMP              (_U_(0x1) << TWIM_SCR_CCOMP_Pos)
#define TWIM_SCR_ANAK_Pos           8            /**< \brief (TWIM_SCR) NAK in Address Phase Received */
#define TWIM_SCR_ANAK               (_U_(0x1) << TWIM_SCR_ANAK_Pos)
#define TWIM_SCR_DNAK_Pos           9            /**< \brief (TWIM_SCR) NAK in Data Phase Received */
#define TWIM_SCR_DNAK               (_U_(0x1) << TWIM_SCR_DNAK_Pos)
#define TWIM_SCR_ARBLST_Pos         10           /**< \brief (TWIM_SCR) Arbitration Lost */
#define TWIM_SCR_ARBLST             (_U_(0x1) << TWIM_SCR_ARBLST_Pos)
#define TWIM_SCR_SMBALERT_Pos       11           /**< \brief (TWIM_SCR) SMBus Alert */
#define TWIM_SCR_SMBALERT           (_U_(0x1) << TWIM_SCR_SMBALERT_Pos)
#define TWIM_SCR_TOUT_Pos           12           /**< \brief (TWIM_SCR) Timeout */
#define TWIM_SCR_TOUT               (_U_(0x1) << TWIM_SCR_TOUT_Pos)
#define TWIM_SCR_PECERR_Pos         13           /**< \brief (TWIM_SCR) PEC Error */
#define TWIM_SCR_PECERR             (_U_(0x1) << TWIM_SCR_PECERR_Pos)
#define TWIM_SCR_STOP_Pos           14           /**< \brief (TWIM_SCR) Stop Request Accepted */
#define TWIM_SCR_STOP               (_U_(0x1) << TWIM_SCR_STOP_Pos)
#define TWIM_SCR_HSMCACK_Pos        17           /**< \brief (TWIM_SCR) ACK in HS-mode Master Code Phase Received */
#define TWIM_SCR_HSMCACK            (_U_(0x1) << TWIM_SCR_HSMCACK_Pos)
#define TWIM_SCR_MASK               _U_(0x00027F08) /**< \brief (TWIM_SCR) MASK Register */

/* -------- TWIM_PR : (TWIM Offset: 0x30) (R/  32) Parameter Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t HS:1;             /*!< bit:      0  HS-mode                            */
    uint32_t :31;              /*!< bit:  1..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} TWIM_PR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWIM_PR_OFFSET              0x30         /**< \brief (TWIM_PR offset) Parameter Register */
#define TWIM_PR_RESETVALUE          _U_(0x00000001); /**< \brief (TWIM_PR reset_value) Parameter Register */

#define TWIM_PR_HS_Pos              0            /**< \brief (TWIM_PR) HS-mode */
#define TWIM_PR_HS                  (_U_(0x1) << TWIM_PR_HS_Pos)
#define TWIM_PR_MASK                _U_(0x00000001) /**< \brief (TWIM_PR) MASK Register */

/* -------- TWIM_VR : (TWIM Offset: 0x34) (R/  32) Version Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t VERSION:12;       /*!< bit:  0..11  Version number                     */
    uint32_t :4;               /*!< bit: 12..15  Reserved                           */
    uint32_t VARIANT:4;        /*!< bit: 16..19  Variant number                     */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} TWIM_VR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWIM_VR_OFFSET              0x34         /**< \brief (TWIM_VR offset) Version Register */
#define TWIM_VR_RESETVALUE          _U_(0x00000120); /**< \brief (TWIM_VR reset_value) Version Register */

#define TWIM_VR_VERSION_Pos         0            /**< \brief (TWIM_VR) Version number */
#define TWIM_VR_VERSION_Msk         (_U_(0xFFF) << TWIM_VR_VERSION_Pos)
#define TWIM_VR_VERSION(value)      (TWIM_VR_VERSION_Msk & ((value) << TWIM_VR_VERSION_Pos))
#define TWIM_VR_VARIANT_Pos         16           /**< \brief (TWIM_VR) Variant number */
#define TWIM_VR_VARIANT_Msk         (_U_(0xF) << TWIM_VR_VARIANT_Pos)
#define TWIM_VR_VARIANT(value)      (TWIM_VR_VARIANT_Msk & ((value) << TWIM_VR_VARIANT_Pos))
#define TWIM_VR_MASK                _U_(0x000F0FFF) /**< \brief (TWIM_VR) MASK Register */

/* -------- TWIM_HSCWGR : (TWIM Offset: 0x38) (R/W 32) HS-mode Clock Waveform Generator -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t LOW:8;            /*!< bit:  0.. 7  Clock Low Cycles                   */
    uint32_t HIGH:8;           /*!< bit:  8..15  Clock High Cycles                  */
    uint32_t STASTO:8;         /*!< bit: 16..23  START and STOP Cycles              */
    uint32_t DATA:4;           /*!< bit: 24..27  Data Setup and Hold Cycles         */
    uint32_t EXP:3;            /*!< bit: 28..30  Clock Prescaler                    */
    uint32_t :1;               /*!< bit:     31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} TWIM_HSCWGR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWIM_HSCWGR_OFFSET          0x38         /**< \brief (TWIM_HSCWGR offset) HS-mode Clock Waveform Generator */
#define TWIM_HSCWGR_RESETVALUE      _U_(0x00000000); /**< \brief (TWIM_HSCWGR reset_value) HS-mode Clock Waveform Generator */

#define TWIM_HSCWGR_LOW_Pos         0            /**< \brief (TWIM_HSCWGR) Clock Low Cycles */
#define TWIM_HSCWGR_LOW_Msk         (_U_(0xFF) << TWIM_HSCWGR_LOW_Pos)
#define TWIM_HSCWGR_LOW(value)      (TWIM_HSCWGR_LOW_Msk & ((value) << TWIM_HSCWGR_LOW_Pos))
#define TWIM_HSCWGR_HIGH_Pos        8            /**< \brief (TWIM_HSCWGR) Clock High Cycles */
#define TWIM_HSCWGR_HIGH_Msk        (_U_(0xFF) << TWIM_HSCWGR_HIGH_Pos)
#define TWIM_HSCWGR_HIGH(value)     (TWIM_HSCWGR_HIGH_Msk & ((value) << TWIM_HSCWGR_HIGH_Pos))
#define TWIM_HSCWGR_STASTO_Pos      16           /**< \brief (TWIM_HSCWGR) START and STOP Cycles */
#define TWIM_HSCWGR_STASTO_Msk      (_U_(0xFF) << TWIM_HSCWGR_STASTO_Pos)
#define TWIM_HSCWGR_STASTO(value)   (TWIM_HSCWGR_STASTO_Msk & ((value) << TWIM_HSCWGR_STASTO_Pos))
#define TWIM_HSCWGR_DATA_Pos        24           /**< \brief (TWIM_HSCWGR) Data Setup and Hold Cycles */
#define TWIM_HSCWGR_DATA_Msk        (_U_(0xF) << TWIM_HSCWGR_DATA_Pos)
#define TWIM_HSCWGR_DATA(value)     (TWIM_HSCWGR_DATA_Msk & ((value) << TWIM_HSCWGR_DATA_Pos))
#define TWIM_HSCWGR_EXP_Pos         28           /**< \brief (TWIM_HSCWGR) Clock Prescaler */
#define TWIM_HSCWGR_EXP_Msk         (_U_(0x7) << TWIM_HSCWGR_EXP_Pos)
#define TWIM_HSCWGR_EXP(value)      (TWIM_HSCWGR_EXP_Msk & ((value) << TWIM_HSCWGR_EXP_Pos))
#define TWIM_HSCWGR_MASK            _U_(0x7FFFFFFF) /**< \brief (TWIM_HSCWGR) MASK Register */

/* -------- TWIM_SRR : (TWIM Offset: 0x3C) (R/W 32) Slew Rate Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DADRIVEL:3;       /*!< bit:  0.. 2  Data Drive Strength LOW            */
    uint32_t :5;               /*!< bit:  3.. 7  Reserved                           */
    uint32_t DASLEW:2;         /*!< bit:  8.. 9  Data Slew Limit                    */
    uint32_t :6;               /*!< bit: 10..15  Reserved                           */
    uint32_t CLDRIVEL:3;       /*!< bit: 16..18  Clock Drive Strength LOW           */
    uint32_t :5;               /*!< bit: 19..23  Reserved                           */
    uint32_t CLSLEW:2;         /*!< bit: 24..25  Clock Slew Limit                   */
    uint32_t :2;               /*!< bit: 26..27  Reserved                           */
    uint32_t FILTER:2;         /*!< bit: 28..29  Input Spike Filter Control         */
    uint32_t :2;               /*!< bit: 30..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} TWIM_SRR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWIM_SRR_OFFSET             0x3C         /**< \brief (TWIM_SRR offset) Slew Rate Register */
#define TWIM_SRR_RESETVALUE         _U_(0x00000000); /**< \brief (TWIM_SRR reset_value) Slew Rate Register */

#define TWIM_SRR_DADRIVEL_Pos       0            /**< \brief (TWIM_SRR) Data Drive Strength LOW */
#define TWIM_SRR_DADRIVEL_Msk       (_U_(0x7) << TWIM_SRR_DADRIVEL_Pos)
#define TWIM_SRR_DADRIVEL(value)    (TWIM_SRR_DADRIVEL_Msk & ((value) << TWIM_SRR_DADRIVEL_Pos))
#define TWIM_SRR_DASLEW_Pos         8            /**< \brief (TWIM_SRR) Data Slew Limit */
#define TWIM_SRR_DASLEW_Msk         (_U_(0x3) << TWIM_SRR_DASLEW_Pos)
#define TWIM_SRR_DASLEW(value)      (TWIM_SRR_DASLEW_Msk & ((value) << TWIM_SRR_DASLEW_Pos))
#define TWIM_SRR_CLDRIVEL_Pos       16           /**< \brief (TWIM_SRR) Clock Drive Strength LOW */
#define TWIM_SRR_CLDRIVEL_Msk       (_U_(0x7) << TWIM_SRR_CLDRIVEL_Pos)
#define TWIM_SRR_CLDRIVEL(value)    (TWIM_SRR_CLDRIVEL_Msk & ((value) << TWIM_SRR_CLDRIVEL_Pos))
#define TWIM_SRR_CLSLEW_Pos         24           /**< \brief (TWIM_SRR) Clock Slew Limit */
#define TWIM_SRR_CLSLEW_Msk         (_U_(0x3) << TWIM_SRR_CLSLEW_Pos)
#define TWIM_SRR_CLSLEW(value)      (TWIM_SRR_CLSLEW_Msk & ((value) << TWIM_SRR_CLSLEW_Pos))
#define TWIM_SRR_FILTER_Pos         28           /**< \brief (TWIM_SRR) Input Spike Filter Control */
#define TWIM_SRR_FILTER_Msk         (_U_(0x3) << TWIM_SRR_FILTER_Pos)
#define TWIM_SRR_FILTER(value)      (TWIM_SRR_FILTER_Msk & ((value) << TWIM_SRR_FILTER_Pos))
#define TWIM_SRR_MASK               _U_(0x33070307) /**< \brief (TWIM_SRR) MASK Register */

/* -------- TWIM_HSSRR : (TWIM Offset: 0x40) (R/W 32) HS-mode Slew Rate Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DADRIVEL:3;       /*!< bit:  0.. 2  Data Drive Strength LOW            */
    uint32_t :5;               /*!< bit:  3.. 7  Reserved                           */
    uint32_t DASLEW:2;         /*!< bit:  8.. 9  Data Slew Limit                    */
    uint32_t :6;               /*!< bit: 10..15  Reserved                           */
    uint32_t CLDRIVEL:3;       /*!< bit: 16..18  Clock Drive Strength LOW           */
    uint32_t :1;               /*!< bit:     19  Reserved                           */
    uint32_t CLDRIVEH:2;       /*!< bit: 20..21  Clock Drive Strength HIGH          */
    uint32_t :2;               /*!< bit: 22..23  Reserved                           */
    uint32_t CLSLEW:2;         /*!< bit: 24..25  Clock Slew Limit                   */
    uint32_t :2;               /*!< bit: 26..27  Reserved                           */
    uint32_t FILTER:2;         /*!< bit: 28..29  Input Spike Filter Control         */
    uint32_t :2;               /*!< bit: 30..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} TWIM_HSSRR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWIM_HSSRR_OFFSET           0x40         /**< \brief (TWIM_HSSRR offset) HS-mode Slew Rate Register */
#define TWIM_HSSRR_RESETVALUE       _U_(0x00000000); /**< \brief (TWIM_HSSRR reset_value) HS-mode Slew Rate Register */

#define TWIM_HSSRR_DADRIVEL_Pos     0            /**< \brief (TWIM_HSSRR) Data Drive Strength LOW */
#define TWIM_HSSRR_DADRIVEL_Msk     (_U_(0x7) << TWIM_HSSRR_DADRIVEL_Pos)
#define TWIM_HSSRR_DADRIVEL(value)  (TWIM_HSSRR_DADRIVEL_Msk & ((value) << TWIM_HSSRR_DADRIVEL_Pos))
#define TWIM_HSSRR_DASLEW_Pos       8            /**< \brief (TWIM_HSSRR) Data Slew Limit */
#define TWIM_HSSRR_DASLEW_Msk       (_U_(0x3) << TWIM_HSSRR_DASLEW_Pos)
#define TWIM_HSSRR_DASLEW(value)    (TWIM_HSSRR_DASLEW_Msk & ((value) << TWIM_HSSRR_DASLEW_Pos))
#define TWIM_HSSRR_CLDRIVEL_Pos     16           /**< \brief (TWIM_HSSRR) Clock Drive Strength LOW */
#define TWIM_HSSRR_CLDRIVEL_Msk     (_U_(0x7) << TWIM_HSSRR_CLDRIVEL_Pos)
#define TWIM_HSSRR_CLDRIVEL(value)  (TWIM_HSSRR_CLDRIVEL_Msk & ((value) << TWIM_HSSRR_CLDRIVEL_Pos))
#define TWIM_HSSRR_CLDRIVEH_Pos     20           /**< \brief (TWIM_HSSRR) Clock Drive Strength HIGH */
#define TWIM_HSSRR_CLDRIVEH_Msk     (_U_(0x3) << TWIM_HSSRR_CLDRIVEH_Pos)
#define TWIM_HSSRR_CLDRIVEH(value)  (TWIM_HSSRR_CLDRIVEH_Msk & ((value) << TWIM_HSSRR_CLDRIVEH_Pos))
#define TWIM_HSSRR_CLSLEW_Pos       24           /**< \brief (TWIM_HSSRR) Clock Slew Limit */
#define TWIM_HSSRR_CLSLEW_Msk       (_U_(0x3) << TWIM_HSSRR_CLSLEW_Pos)
#define TWIM_HSSRR_CLSLEW(value)    (TWIM_HSSRR_CLSLEW_Msk & ((value) << TWIM_HSSRR_CLSLEW_Pos))
#define TWIM_HSSRR_FILTER_Pos       28           /**< \brief (TWIM_HSSRR) Input Spike Filter Control */
#define TWIM_HSSRR_FILTER_Msk       (_U_(0x3) << TWIM_HSSRR_FILTER_Pos)
#define TWIM_HSSRR_FILTER(value)    (TWIM_HSSRR_FILTER_Msk & ((value) << TWIM_HSSRR_FILTER_Pos))
#define TWIM_HSSRR_MASK             _U_(0x33370307) /**< \brief (TWIM_HSSRR) MASK Register */

/** \brief TWIM hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {
  __O  uint32_t CR;          /**< \brief Offset: 0x00 ( /W 32) Control Register */
  __IO uint32_t CWGR;        /**< \brief Offset: 0x04 (R/W 32) Clock Waveform Generator Register */
  __IO uint32_t SMBTR;       /**< \brief Offset: 0x08 (R/W 32) SMBus Timing Register */
  __IO uint32_t CMDR;        /**< \brief Offset: 0x0C (R/W 32) Command Register */
  __IO uint32_t NCMDR;       /**< \brief Offset: 0x10 (R/W 32) Next Command Register */
  __I  uint32_t RHR;         /**< \brief Offset: 0x14 (R/  32) Receive Holding Register */
  __O  uint32_t THR;         /**< \brief Offset: 0x18 ( /W 32) Transmit Holding Register */
  __I  uint32_t SR;          /**< \brief Offset: 0x1C (R/  32) Status Register */
  __O  uint32_t IER;         /**< \brief Offset: 0x20 ( /W 32) Interrupt Enable Register */
  __O  uint32_t IDR;         /**< \brief Offset: 0x24 ( /W 32) Interrupt Disable Register */
  __I  uint32_t IMR;         /**< \brief Offset: 0x28 (R/  32) Interrupt Mask Register */
  __O  uint32_t SCR;         /**< \brief Offset: 0x2C ( /W 32) Status Clear Register */
  __I  uint32_t PR;          /**< \brief Offset: 0x30 (R/  32) Parameter Register */
  __I  uint32_t VR;          /**< \brief Offset: 0x34 (R/  32) Version Register */
  __IO uint32_t HSCWGR;      /**< \brief Offset: 0x38 (R/W 32) HS-mode Clock Waveform Generator */
  __IO uint32_t SRR;         /**< \brief Offset: 0x3C (R/W 32) Slew Rate Register */
  __IO uint32_t HSSRR;       /**< \brief Offset: 0x40 (R/W 32) HS-mode Slew Rate Register */
} Twim;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAM4L_TWIM_COMPONENT_ */
