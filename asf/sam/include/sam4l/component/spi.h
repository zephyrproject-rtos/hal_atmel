/**
 * \file
 *
 * \brief Component description for SPI
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

#ifndef _SAM4L_SPI_COMPONENT_
#define _SAM4L_SPI_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR SPI */
/* ========================================================================== */
/** \addtogroup SAM4L_SPI Serial Peripheral Interface */
/*@{*/

#define SPI_I7602
#define REV_SPI                     0x211

/* -------- SPI_CR : (SPI Offset: 0x00) ( /W 32) Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t SPIEN:1;          /*!< bit:      0  SPI Enable                         */
    uint32_t SPIDIS:1;         /*!< bit:      1  SPI Disable                        */
    uint32_t :5;               /*!< bit:  2.. 6  Reserved                           */
    uint32_t SWRST:1;          /*!< bit:      7  SPI Software Reset                 */
    uint32_t FLUSHFIFO:1;      /*!< bit:      8  Flush FIFO command                 */
    uint32_t :15;              /*!< bit:  9..23  Reserved                           */
    uint32_t LASTXFER:1;       /*!< bit:     24  Last Transfer                      */
    uint32_t :7;               /*!< bit: 25..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SPI_CR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SPI_CR_OFFSET               0x00         /**< \brief (SPI_CR offset) Control Register */
#define SPI_CR_RESETVALUE           _U_(0x00000000); /**< \brief (SPI_CR reset_value) Control Register */

#define SPI_CR_SPIEN_Pos            0            /**< \brief (SPI_CR) SPI Enable */
#define SPI_CR_SPIEN                (_U_(0x1) << SPI_CR_SPIEN_Pos)
#define   SPI_CR_SPIEN_0_Val              _U_(0x0)   /**< \brief (SPI_CR) No effect. */
#define   SPI_CR_SPIEN_1_Val              _U_(0x1)   /**< \brief (SPI_CR) Enables the SPI to transfer and receive data. */
#define SPI_CR_SPIEN_0              (SPI_CR_SPIEN_0_Val            << SPI_CR_SPIEN_Pos)
#define SPI_CR_SPIEN_1              (SPI_CR_SPIEN_1_Val            << SPI_CR_SPIEN_Pos)
#define SPI_CR_SPIDIS_Pos           1            /**< \brief (SPI_CR) SPI Disable */
#define SPI_CR_SPIDIS               (_U_(0x1) << SPI_CR_SPIDIS_Pos)
#define   SPI_CR_SPIDIS_0_Val             _U_(0x0)   /**< \brief (SPI_CR) No effect. */
#define   SPI_CR_SPIDIS_1_Val             _U_(0x1)   /**< \brief (SPI_CR) Disables the SPI.All pins are set in input mode and no data is received or transmitted.If a transfer is in progress, the transfer is finished before the SPI is disabled.If both SPIEN and SPIDIS are equal to one when the control register is written, the SPI is disabled. */
#define SPI_CR_SPIDIS_0             (SPI_CR_SPIDIS_0_Val           << SPI_CR_SPIDIS_Pos)
#define SPI_CR_SPIDIS_1             (SPI_CR_SPIDIS_1_Val           << SPI_CR_SPIDIS_Pos)
#define SPI_CR_SWRST_Pos            7            /**< \brief (SPI_CR) SPI Software Reset */
#define SPI_CR_SWRST                (_U_(0x1) << SPI_CR_SWRST_Pos)
#define   SPI_CR_SWRST_0_Val              _U_(0x0)   /**< \brief (SPI_CR) No effect. */
#define   SPI_CR_SWRST_1_Val              _U_(0x1)   /**< \brief (SPI_CR) Reset the SPI. A software-triggered hardware reset of the SPI interface is performed. */
#define SPI_CR_SWRST_0              (SPI_CR_SWRST_0_Val            << SPI_CR_SWRST_Pos)
#define SPI_CR_SWRST_1              (SPI_CR_SWRST_1_Val            << SPI_CR_SWRST_Pos)
#define SPI_CR_FLUSHFIFO_Pos        8            /**< \brief (SPI_CR) Flush FIFO command */
#define SPI_CR_FLUSHFIFO            (_U_(0x1) << SPI_CR_FLUSHFIFO_Pos)
#define SPI_CR_LASTXFER_Pos         24           /**< \brief (SPI_CR) Last Transfer */
#define SPI_CR_LASTXFER             (_U_(0x1) << SPI_CR_LASTXFER_Pos)
#define   SPI_CR_LASTXFER_0_Val           _U_(0x0)   /**< \brief (SPI_CR) No effect. */
#define   SPI_CR_LASTXFER_1_Val           _U_(0x1)   /**< \brief (SPI_CR) The current NPCS will be deasserted after the character written in TD has been transferred. When CSAAT is set, thisallows to close the communication with the current serial peripheral by raising the corresponding NPCS line as soon as TDtransfer has completed. */
#define SPI_CR_LASTXFER_0           (SPI_CR_LASTXFER_0_Val         << SPI_CR_LASTXFER_Pos)
#define SPI_CR_LASTXFER_1           (SPI_CR_LASTXFER_1_Val         << SPI_CR_LASTXFER_Pos)
#define SPI_CR_MASK                 _U_(0x01000183) /**< \brief (SPI_CR) MASK Register */

/* -------- SPI_MR : (SPI Offset: 0x04) (R/W 32) Mode Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t MSTR:1;           /*!< bit:      0  Master/Slave Mode                  */
    uint32_t PS:1;             /*!< bit:      1  Peripheral Select                  */
    uint32_t PCSDEC:1;         /*!< bit:      2  Chip Select Decode                 */
    uint32_t :1;               /*!< bit:      3  Reserved                           */
    uint32_t MODFDIS:1;        /*!< bit:      4  Mode Fault Detection               */
    uint32_t WDRBT:1;          /*!< bit:      5  wait data read before transfer     */
    uint32_t RXFIFOEN:1;       /*!< bit:      6  FIFO in Reception Enable           */
    uint32_t LLB:1;            /*!< bit:      7  Local Loopback Enable              */
    uint32_t :8;               /*!< bit:  8..15  Reserved                           */
    uint32_t PCS:4;            /*!< bit: 16..19  Peripheral Chip Select             */
    uint32_t :4;               /*!< bit: 20..23  Reserved                           */
    uint32_t DLYBCS:8;         /*!< bit: 24..31  Delay Between Chip Selects         */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SPI_MR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SPI_MR_OFFSET               0x04         /**< \brief (SPI_MR offset) Mode Register */
#define SPI_MR_RESETVALUE           _U_(0x00000000); /**< \brief (SPI_MR reset_value) Mode Register */

#define SPI_MR_MSTR_Pos             0            /**< \brief (SPI_MR) Master/Slave Mode */
#define SPI_MR_MSTR                 (_U_(0x1) << SPI_MR_MSTR_Pos)
#define   SPI_MR_MSTR_0_Val               _U_(0x0)   /**< \brief (SPI_MR) SPI is in Slave mode. */
#define   SPI_MR_MSTR_1_Val               _U_(0x1)   /**< \brief (SPI_MR) SPI is in Master mode. */
#define SPI_MR_MSTR_0               (SPI_MR_MSTR_0_Val             << SPI_MR_MSTR_Pos)
#define SPI_MR_MSTR_1               (SPI_MR_MSTR_1_Val             << SPI_MR_MSTR_Pos)
#define SPI_MR_PS_Pos               1            /**< \brief (SPI_MR) Peripheral Select */
#define SPI_MR_PS                   (_U_(0x1) << SPI_MR_PS_Pos)
#define   SPI_MR_PS_0_Val                 _U_(0x0)   /**< \brief (SPI_MR) Fixed Peripheral Select. */
#define   SPI_MR_PS_1_Val                 _U_(0x1)   /**< \brief (SPI_MR) Variable Peripheral Select. */
#define SPI_MR_PS_0                 (SPI_MR_PS_0_Val               << SPI_MR_PS_Pos)
#define SPI_MR_PS_1                 (SPI_MR_PS_1_Val               << SPI_MR_PS_Pos)
#define SPI_MR_PCSDEC_Pos           2            /**< \brief (SPI_MR) Chip Select Decode */
#define SPI_MR_PCSDEC               (_U_(0x1) << SPI_MR_PCSDEC_Pos)
#define   SPI_MR_PCSDEC_0_Val             _U_(0x0)   /**< \brief (SPI_MR) The chip selects are directly connected to a peripheral device. */
#define   SPI_MR_PCSDEC_1_Val             _U_(0x1)   /**< \brief (SPI_MR) The four chip select lines are connected to a 4- to 16-bit decoder.When PCSDEC equals one, up to 15 Chip Select signals can be generated with the four lines using an external 4- to 16-bitdecoder. The Chip Select Registers define the characteristics of the 16 chip selects according to the following rules:CSR0 defines peripheral chip select signals 0 to 3.CSR1 defines peripheral chip select signals 4 to 7.CSR2 defines peripheral chip select signals 8 to 11.CSR3 defines peripheral chip select signals 12 to 15. */
#define SPI_MR_PCSDEC_0             (SPI_MR_PCSDEC_0_Val           << SPI_MR_PCSDEC_Pos)
#define SPI_MR_PCSDEC_1             (SPI_MR_PCSDEC_1_Val           << SPI_MR_PCSDEC_Pos)
#define SPI_MR_MODFDIS_Pos          4            /**< \brief (SPI_MR) Mode Fault Detection */
#define SPI_MR_MODFDIS              (_U_(0x1) << SPI_MR_MODFDIS_Pos)
#define   SPI_MR_MODFDIS_0_Val            _U_(0x0)   /**< \brief (SPI_MR) Mode fault detection is enabled. */
#define   SPI_MR_MODFDIS_1_Val            _U_(0x1)   /**< \brief (SPI_MR) Mode fault detection is disabled. */
#define SPI_MR_MODFDIS_0            (SPI_MR_MODFDIS_0_Val          << SPI_MR_MODFDIS_Pos)
#define SPI_MR_MODFDIS_1            (SPI_MR_MODFDIS_1_Val          << SPI_MR_MODFDIS_Pos)
#define SPI_MR_WDRBT_Pos            5            /**< \brief (SPI_MR) wait data read before transfer */
#define SPI_MR_WDRBT                (_U_(0x1) << SPI_MR_WDRBT_Pos)
#define SPI_MR_RXFIFOEN_Pos         6            /**< \brief (SPI_MR) FIFO in Reception Enable */
#define SPI_MR_RXFIFOEN             (_U_(0x1) << SPI_MR_RXFIFOEN_Pos)
#define SPI_MR_LLB_Pos              7            /**< \brief (SPI_MR) Local Loopback Enable */
#define SPI_MR_LLB                  (_U_(0x1) << SPI_MR_LLB_Pos)
#define   SPI_MR_LLB_0_Val                _U_(0x0)   /**< \brief (SPI_MR) Local loopback path disabled. */
#define   SPI_MR_LLB_1_Val                _U_(0x1)   /**< \brief (SPI_MR) Local loopback path enabled.LLB controls the local loopback on the data serializer for testing in Master Mode only. */
#define SPI_MR_LLB_0                (SPI_MR_LLB_0_Val              << SPI_MR_LLB_Pos)
#define SPI_MR_LLB_1                (SPI_MR_LLB_1_Val              << SPI_MR_LLB_Pos)
#define SPI_MR_PCS_Pos              16           /**< \brief (SPI_MR) Peripheral Chip Select */
#define SPI_MR_PCS_Msk              (_U_(0xF) << SPI_MR_PCS_Pos)
#define SPI_MR_PCS(value)           (SPI_MR_PCS_Msk & ((value) << SPI_MR_PCS_Pos))
#define SPI_MR_DLYBCS_Pos           24           /**< \brief (SPI_MR) Delay Between Chip Selects */
#define SPI_MR_DLYBCS_Msk           (_U_(0xFF) << SPI_MR_DLYBCS_Pos)
#define SPI_MR_DLYBCS(value)        (SPI_MR_DLYBCS_Msk & ((value) << SPI_MR_DLYBCS_Pos))
#define SPI_MR_MASK                 _U_(0xFF0F00F7) /**< \brief (SPI_MR) MASK Register */

/* -------- SPI_RDR : (SPI Offset: 0x08) (R/  32) Receive Data Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RD:16;            /*!< bit:  0..15  Receive Data                       */
    uint32_t PCS:4;            /*!< bit: 16..19  Peripheral Chip Select             */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SPI_RDR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SPI_RDR_OFFSET              0x08         /**< \brief (SPI_RDR offset) Receive Data Register */
#define SPI_RDR_RESETVALUE          _U_(0x00000000); /**< \brief (SPI_RDR reset_value) Receive Data Register */

#define SPI_RDR_RD_Pos              0            /**< \brief (SPI_RDR) Receive Data */
#define SPI_RDR_RD_Msk              (_U_(0xFFFF) << SPI_RDR_RD_Pos)
#define SPI_RDR_RD(value)           (SPI_RDR_RD_Msk & ((value) << SPI_RDR_RD_Pos))
#define SPI_RDR_PCS_Pos             16           /**< \brief (SPI_RDR) Peripheral Chip Select */
#define SPI_RDR_PCS_Msk             (_U_(0xF) << SPI_RDR_PCS_Pos)
#define SPI_RDR_PCS(value)          (SPI_RDR_PCS_Msk & ((value) << SPI_RDR_PCS_Pos))
#define SPI_RDR_MASK                _U_(0x000FFFFF) /**< \brief (SPI_RDR) MASK Register */

/* -------- SPI_TDR : (SPI Offset: 0x0C) ( /W 32) Transmit Data Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TD:16;            /*!< bit:  0..15  Transmit Data                      */
    uint32_t PCS:4;            /*!< bit: 16..19  Peripheral Chip Select             */
    uint32_t :4;               /*!< bit: 20..23  Reserved                           */
    uint32_t LASTXFER:1;       /*!< bit:     24  Last Transfer                      */
    uint32_t :7;               /*!< bit: 25..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SPI_TDR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SPI_TDR_OFFSET              0x0C         /**< \brief (SPI_TDR offset) Transmit Data Register */
#define SPI_TDR_RESETVALUE          _U_(0x00000000); /**< \brief (SPI_TDR reset_value) Transmit Data Register */

#define SPI_TDR_TD_Pos              0            /**< \brief (SPI_TDR) Transmit Data */
#define SPI_TDR_TD_Msk              (_U_(0xFFFF) << SPI_TDR_TD_Pos)
#define SPI_TDR_TD(value)           (SPI_TDR_TD_Msk & ((value) << SPI_TDR_TD_Pos))
#define SPI_TDR_PCS_Pos             16           /**< \brief (SPI_TDR) Peripheral Chip Select */
#define SPI_TDR_PCS_Msk             (_U_(0xF) << SPI_TDR_PCS_Pos)
#define SPI_TDR_PCS(value)          (SPI_TDR_PCS_Msk & ((value) << SPI_TDR_PCS_Pos))
#define SPI_TDR_LASTXFER_Pos        24           /**< \brief (SPI_TDR) Last Transfer */
#define SPI_TDR_LASTXFER            (_U_(0x1) << SPI_TDR_LASTXFER_Pos)
#define   SPI_TDR_LASTXFER_0_Val          _U_(0x0)   /**< \brief (SPI_TDR) No effect. */
#define   SPI_TDR_LASTXFER_1_Val          _U_(0x1)   /**< \brief (SPI_TDR) The current NPCS will be deasserted after the character written in TD has been transferred. When CSAAT is set, thisallows to close the communication with the current serial peripheral by raising the corresponding NPCS line as soon as TDtransfer has completed. */
#define SPI_TDR_LASTXFER_0          (SPI_TDR_LASTXFER_0_Val        << SPI_TDR_LASTXFER_Pos)
#define SPI_TDR_LASTXFER_1          (SPI_TDR_LASTXFER_1_Val        << SPI_TDR_LASTXFER_Pos)
#define SPI_TDR_MASK                _U_(0x010FFFFF) /**< \brief (SPI_TDR) MASK Register */

/* -------- SPI_SR : (SPI Offset: 0x10) (R/  32) Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RDRF:1;           /*!< bit:      0  Receive Data Register Full         */
    uint32_t TDRE:1;           /*!< bit:      1  Transmit Data Register Empty       */
    uint32_t MODF:1;           /*!< bit:      2  Mode Fault Error                   */
    uint32_t OVRES:1;          /*!< bit:      3  Overrun Error Status               */
    uint32_t ENDRX:1;          /*!< bit:      4  End of RX buffer                   */
    uint32_t ENDTX:1;          /*!< bit:      5  End of TX buffer                   */
    uint32_t RXBUFF:1;         /*!< bit:      6  RX Buffer Full                     */
    uint32_t TXBUFE:1;         /*!< bit:      7  TX Buffer Empty                    */
    uint32_t NSSR:1;           /*!< bit:      8  NSS Rising                         */
    uint32_t TXEMPTY:1;        /*!< bit:      9  Transmission Registers Empty       */
    uint32_t UNDES:1;          /*!< bit:     10  Underrun Error Status (Slave Mode Only) */
    uint32_t :5;               /*!< bit: 11..15  Reserved                           */
    uint32_t SPIENS:1;         /*!< bit:     16  SPI Enable Status                  */
    uint32_t :15;              /*!< bit: 17..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SPI_SR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SPI_SR_OFFSET               0x10         /**< \brief (SPI_SR offset) Status Register */
#define SPI_SR_RESETVALUE           _U_(0x000000F0); /**< \brief (SPI_SR reset_value) Status Register */

#define SPI_SR_RDRF_Pos             0            /**< \brief (SPI_SR) Receive Data Register Full */
#define SPI_SR_RDRF                 (_U_(0x1) << SPI_SR_RDRF_Pos)
#define   SPI_SR_RDRF_0_Val               _U_(0x0)   /**< \brief (SPI_SR) No data has been received since the last read of RDR */
#define   SPI_SR_RDRF_1_Val               _U_(0x1)   /**< \brief (SPI_SR) Data has been received and the received data has been transferred from the serializer to RDR since the last readof RDR. */
#define SPI_SR_RDRF_0               (SPI_SR_RDRF_0_Val             << SPI_SR_RDRF_Pos)
#define SPI_SR_RDRF_1               (SPI_SR_RDRF_1_Val             << SPI_SR_RDRF_Pos)
#define SPI_SR_TDRE_Pos             1            /**< \brief (SPI_SR) Transmit Data Register Empty */
#define SPI_SR_TDRE                 (_U_(0x1) << SPI_SR_TDRE_Pos)
#define   SPI_SR_TDRE_0_Val               _U_(0x0)   /**< \brief (SPI_SR) Data has been written to TDR and not yet transferred to the serializer. */
#define   SPI_SR_TDRE_1_Val               _U_(0x1)   /**< \brief (SPI_SR) The last data written in the Transmit Data Register has been transferred to the serializer.TDRE equals zero when the SPI is disabled or at reset. The SPI enable command sets this bit to one. */
#define SPI_SR_TDRE_0               (SPI_SR_TDRE_0_Val             << SPI_SR_TDRE_Pos)
#define SPI_SR_TDRE_1               (SPI_SR_TDRE_1_Val             << SPI_SR_TDRE_Pos)
#define SPI_SR_MODF_Pos             2            /**< \brief (SPI_SR) Mode Fault Error */
#define SPI_SR_MODF                 (_U_(0x1) << SPI_SR_MODF_Pos)
#define   SPI_SR_MODF_0_Val               _U_(0x0)   /**< \brief (SPI_SR) No Mode Fault has been detected since the last read of SR. */
#define   SPI_SR_MODF_1_Val               _U_(0x1)   /**< \brief (SPI_SR) A Mode Fault occurred since the last read of the SR. */
#define SPI_SR_MODF_0               (SPI_SR_MODF_0_Val             << SPI_SR_MODF_Pos)
#define SPI_SR_MODF_1               (SPI_SR_MODF_1_Val             << SPI_SR_MODF_Pos)
#define SPI_SR_OVRES_Pos            3            /**< \brief (SPI_SR) Overrun Error Status */
#define SPI_SR_OVRES                (_U_(0x1) << SPI_SR_OVRES_Pos)
#define   SPI_SR_OVRES_0_Val              _U_(0x0)   /**< \brief (SPI_SR) No overrun has been detected since the last read of SR. */
#define   SPI_SR_OVRES_1_Val              _U_(0x1)   /**< \brief (SPI_SR) An overrun has occurred since the last read of SR. */
#define SPI_SR_OVRES_0              (SPI_SR_OVRES_0_Val            << SPI_SR_OVRES_Pos)
#define SPI_SR_OVRES_1              (SPI_SR_OVRES_1_Val            << SPI_SR_OVRES_Pos)
#define SPI_SR_ENDRX_Pos            4            /**< \brief (SPI_SR) End of RX buffer */
#define SPI_SR_ENDRX                (_U_(0x1) << SPI_SR_ENDRX_Pos)
#define   SPI_SR_ENDRX_0_Val              _U_(0x0)   /**< \brief (SPI_SR) The Receive Counter Register has not reached 0 since the last write in RCR or RNCR. */
#define   SPI_SR_ENDRX_1_Val              _U_(0x1)   /**< \brief (SPI_SR) The Receive Counter Register has reached 0 since the last write in RCR or RNCR. */
#define SPI_SR_ENDRX_0              (SPI_SR_ENDRX_0_Val            << SPI_SR_ENDRX_Pos)
#define SPI_SR_ENDRX_1              (SPI_SR_ENDRX_1_Val            << SPI_SR_ENDRX_Pos)
#define SPI_SR_ENDTX_Pos            5            /**< \brief (SPI_SR) End of TX buffer */
#define SPI_SR_ENDTX                (_U_(0x1) << SPI_SR_ENDTX_Pos)
#define   SPI_SR_ENDTX_0_Val              _U_(0x0)   /**< \brief (SPI_SR) The Transmit Counter Register has not reached 0 since the last write in TCR or TNCR. */
#define   SPI_SR_ENDTX_1_Val              _U_(0x1)   /**< \brief (SPI_SR) The Transmit Counter Register has reached 0 since the last write in TCR or TNCR. */
#define SPI_SR_ENDTX_0              (SPI_SR_ENDTX_0_Val            << SPI_SR_ENDTX_Pos)
#define SPI_SR_ENDTX_1              (SPI_SR_ENDTX_1_Val            << SPI_SR_ENDTX_Pos)
#define SPI_SR_RXBUFF_Pos           6            /**< \brief (SPI_SR) RX Buffer Full */
#define SPI_SR_RXBUFF               (_U_(0x1) << SPI_SR_RXBUFF_Pos)
#define   SPI_SR_RXBUFF_0_Val             _U_(0x0)   /**< \brief (SPI_SR) RCR or RNCR has a value other than 0. */
#define   SPI_SR_RXBUFF_1_Val             _U_(0x1)   /**< \brief (SPI_SR) Both RCR and RNCR has a value of 0. */
#define SPI_SR_RXBUFF_0             (SPI_SR_RXBUFF_0_Val           << SPI_SR_RXBUFF_Pos)
#define SPI_SR_RXBUFF_1             (SPI_SR_RXBUFF_1_Val           << SPI_SR_RXBUFF_Pos)
#define SPI_SR_TXBUFE_Pos           7            /**< \brief (SPI_SR) TX Buffer Empty */
#define SPI_SR_TXBUFE               (_U_(0x1) << SPI_SR_TXBUFE_Pos)
#define   SPI_SR_TXBUFE_0_Val             _U_(0x0)   /**< \brief (SPI_SR) TCR or TNCR has a value other than 0. */
#define   SPI_SR_TXBUFE_1_Val             _U_(0x1)   /**< \brief (SPI_SR) Both TCR and TNCR has a value of 0. */
#define SPI_SR_TXBUFE_0             (SPI_SR_TXBUFE_0_Val           << SPI_SR_TXBUFE_Pos)
#define SPI_SR_TXBUFE_1             (SPI_SR_TXBUFE_1_Val           << SPI_SR_TXBUFE_Pos)
#define SPI_SR_NSSR_Pos             8            /**< \brief (SPI_SR) NSS Rising */
#define SPI_SR_NSSR                 (_U_(0x1) << SPI_SR_NSSR_Pos)
#define   SPI_SR_NSSR_0_Val               _U_(0x0)   /**< \brief (SPI_SR) No rising edge detected on NSS pin since last read. */
#define   SPI_SR_NSSR_1_Val               _U_(0x1)   /**< \brief (SPI_SR) A rising edge occurred on NSS pin since last read. */
#define SPI_SR_NSSR_0               (SPI_SR_NSSR_0_Val             << SPI_SR_NSSR_Pos)
#define SPI_SR_NSSR_1               (SPI_SR_NSSR_1_Val             << SPI_SR_NSSR_Pos)
#define SPI_SR_TXEMPTY_Pos          9            /**< \brief (SPI_SR) Transmission Registers Empty */
#define SPI_SR_TXEMPTY              (_U_(0x1) << SPI_SR_TXEMPTY_Pos)
#define   SPI_SR_TXEMPTY_0_Val            _U_(0x0)   /**< \brief (SPI_SR) As soon as data is written in TDR. */
#define   SPI_SR_TXEMPTY_1_Val            _U_(0x1)   /**< \brief (SPI_SR) TDR and internal shifter are empty. If a transfer delay has been defined, TXEMPTY is set after the completion ofsuch delay. */
#define SPI_SR_TXEMPTY_0            (SPI_SR_TXEMPTY_0_Val          << SPI_SR_TXEMPTY_Pos)
#define SPI_SR_TXEMPTY_1            (SPI_SR_TXEMPTY_1_Val          << SPI_SR_TXEMPTY_Pos)
#define SPI_SR_UNDES_Pos            10           /**< \brief (SPI_SR) Underrun Error Status (Slave Mode Only) */
#define SPI_SR_UNDES                (_U_(0x1) << SPI_SR_UNDES_Pos)
#define SPI_SR_SPIENS_Pos           16           /**< \brief (SPI_SR) SPI Enable Status */
#define SPI_SR_SPIENS               (_U_(0x1) << SPI_SR_SPIENS_Pos)
#define   SPI_SR_SPIENS_0_Val             _U_(0x0)   /**< \brief (SPI_SR) SPI is disabled. */
#define   SPI_SR_SPIENS_1_Val             _U_(0x1)   /**< \brief (SPI_SR) SPI is enabled. */
#define SPI_SR_SPIENS_0             (SPI_SR_SPIENS_0_Val           << SPI_SR_SPIENS_Pos)
#define SPI_SR_SPIENS_1             (SPI_SR_SPIENS_1_Val           << SPI_SR_SPIENS_Pos)
#define SPI_SR_MASK                 _U_(0x000107FF) /**< \brief (SPI_SR) MASK Register */

/* -------- SPI_IER : (SPI Offset: 0x14) ( /W 32) Interrupt Enable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RDRF:1;           /*!< bit:      0  Receive Data Register Full Interrupt Enable */
    uint32_t TDRE:1;           /*!< bit:      1  Transmit Data Register Empty Interrupt Enable */
    uint32_t MODF:1;           /*!< bit:      2  Mode Fault Error Interrupt Enable  */
    uint32_t OVRES:1;          /*!< bit:      3  Overrun Error Interrupt Enable     */
    uint32_t ENDRX:1;          /*!< bit:      4  End of Receive Buffer Interrupt Enable */
    uint32_t ENDTX:1;          /*!< bit:      5  End of Transmit Buffer Interrupt Enable */
    uint32_t RXBUFF:1;         /*!< bit:      6  Receive Buffer Full Interrupt Enable */
    uint32_t TXBUFE:1;         /*!< bit:      7  Transmit Buffer Empty Interrupt Enable */
    uint32_t NSSR:1;           /*!< bit:      8  NSS Rising Interrupt Enable        */
    uint32_t TXEMPTY:1;        /*!< bit:      9  Transmission Registers Empty Enable */
    uint32_t UNDES:1;          /*!< bit:     10  Underrun Error Interrupt Enable    */
    uint32_t :21;              /*!< bit: 11..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SPI_IER_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SPI_IER_OFFSET              0x14         /**< \brief (SPI_IER offset) Interrupt Enable Register */
#define SPI_IER_RESETVALUE          _U_(0x00000000); /**< \brief (SPI_IER reset_value) Interrupt Enable Register */

#define SPI_IER_RDRF_Pos            0            /**< \brief (SPI_IER) Receive Data Register Full Interrupt Enable */
#define SPI_IER_RDRF                (_U_(0x1) << SPI_IER_RDRF_Pos)
#define   SPI_IER_RDRF_0_Val              _U_(0x0)   /**< \brief (SPI_IER) No effect. */
#define   SPI_IER_RDRF_1_Val              _U_(0x1)   /**< \brief (SPI_IER) Enables the corresponding interrupt. */
#define SPI_IER_RDRF_0              (SPI_IER_RDRF_0_Val            << SPI_IER_RDRF_Pos)
#define SPI_IER_RDRF_1              (SPI_IER_RDRF_1_Val            << SPI_IER_RDRF_Pos)
#define SPI_IER_TDRE_Pos            1            /**< \brief (SPI_IER) Transmit Data Register Empty Interrupt Enable */
#define SPI_IER_TDRE                (_U_(0x1) << SPI_IER_TDRE_Pos)
#define   SPI_IER_TDRE_0_Val              _U_(0x0)   /**< \brief (SPI_IER) No effect. */
#define   SPI_IER_TDRE_1_Val              _U_(0x1)   /**< \brief (SPI_IER) Enables the corresponding interrupt. */
#define SPI_IER_TDRE_0              (SPI_IER_TDRE_0_Val            << SPI_IER_TDRE_Pos)
#define SPI_IER_TDRE_1              (SPI_IER_TDRE_1_Val            << SPI_IER_TDRE_Pos)
#define SPI_IER_MODF_Pos            2            /**< \brief (SPI_IER) Mode Fault Error Interrupt Enable */
#define SPI_IER_MODF                (_U_(0x1) << SPI_IER_MODF_Pos)
#define   SPI_IER_MODF_0_Val              _U_(0x0)   /**< \brief (SPI_IER) No effect. */
#define   SPI_IER_MODF_1_Val              _U_(0x1)   /**< \brief (SPI_IER) Enables the corresponding interrupt. */
#define SPI_IER_MODF_0              (SPI_IER_MODF_0_Val            << SPI_IER_MODF_Pos)
#define SPI_IER_MODF_1              (SPI_IER_MODF_1_Val            << SPI_IER_MODF_Pos)
#define SPI_IER_OVRES_Pos           3            /**< \brief (SPI_IER) Overrun Error Interrupt Enable */
#define SPI_IER_OVRES               (_U_(0x1) << SPI_IER_OVRES_Pos)
#define   SPI_IER_OVRES_0_Val             _U_(0x0)   /**< \brief (SPI_IER) No effect. */
#define   SPI_IER_OVRES_1_Val             _U_(0x1)   /**< \brief (SPI_IER) Enables the corresponding interrupt. */
#define SPI_IER_OVRES_0             (SPI_IER_OVRES_0_Val           << SPI_IER_OVRES_Pos)
#define SPI_IER_OVRES_1             (SPI_IER_OVRES_1_Val           << SPI_IER_OVRES_Pos)
#define SPI_IER_ENDRX_Pos           4            /**< \brief (SPI_IER) End of Receive Buffer Interrupt Enable */
#define SPI_IER_ENDRX               (_U_(0x1) << SPI_IER_ENDRX_Pos)
#define   SPI_IER_ENDRX_0_Val             _U_(0x0)   /**< \brief (SPI_IER) No effect. */
#define   SPI_IER_ENDRX_1_Val             _U_(0x1)   /**< \brief (SPI_IER) Enables the corresponding interrupt. */
#define SPI_IER_ENDRX_0             (SPI_IER_ENDRX_0_Val           << SPI_IER_ENDRX_Pos)
#define SPI_IER_ENDRX_1             (SPI_IER_ENDRX_1_Val           << SPI_IER_ENDRX_Pos)
#define SPI_IER_ENDTX_Pos           5            /**< \brief (SPI_IER) End of Transmit Buffer Interrupt Enable */
#define SPI_IER_ENDTX               (_U_(0x1) << SPI_IER_ENDTX_Pos)
#define   SPI_IER_ENDTX_0_Val             _U_(0x0)   /**< \brief (SPI_IER) No effect. */
#define   SPI_IER_ENDTX_1_Val             _U_(0x1)   /**< \brief (SPI_IER) Enables the corresponding interrupt. */
#define SPI_IER_ENDTX_0             (SPI_IER_ENDTX_0_Val           << SPI_IER_ENDTX_Pos)
#define SPI_IER_ENDTX_1             (SPI_IER_ENDTX_1_Val           << SPI_IER_ENDTX_Pos)
#define SPI_IER_RXBUFF_Pos          6            /**< \brief (SPI_IER) Receive Buffer Full Interrupt Enable */
#define SPI_IER_RXBUFF              (_U_(0x1) << SPI_IER_RXBUFF_Pos)
#define   SPI_IER_RXBUFF_0_Val            _U_(0x0)   /**< \brief (SPI_IER) No effect. */
#define   SPI_IER_RXBUFF_1_Val            _U_(0x1)   /**< \brief (SPI_IER) Enables the corresponding interrupt. */
#define SPI_IER_RXBUFF_0            (SPI_IER_RXBUFF_0_Val          << SPI_IER_RXBUFF_Pos)
#define SPI_IER_RXBUFF_1            (SPI_IER_RXBUFF_1_Val          << SPI_IER_RXBUFF_Pos)
#define SPI_IER_TXBUFE_Pos          7            /**< \brief (SPI_IER) Transmit Buffer Empty Interrupt Enable */
#define SPI_IER_TXBUFE              (_U_(0x1) << SPI_IER_TXBUFE_Pos)
#define   SPI_IER_TXBUFE_0_Val            _U_(0x0)   /**< \brief (SPI_IER) No effect. */
#define   SPI_IER_TXBUFE_1_Val            _U_(0x1)   /**< \brief (SPI_IER) Enables the corresponding interrupt. */
#define SPI_IER_TXBUFE_0            (SPI_IER_TXBUFE_0_Val          << SPI_IER_TXBUFE_Pos)
#define SPI_IER_TXBUFE_1            (SPI_IER_TXBUFE_1_Val          << SPI_IER_TXBUFE_Pos)
#define SPI_IER_NSSR_Pos            8            /**< \brief (SPI_IER) NSS Rising Interrupt Enable */
#define SPI_IER_NSSR                (_U_(0x1) << SPI_IER_NSSR_Pos)
#define   SPI_IER_NSSR_0_Val              _U_(0x0)   /**< \brief (SPI_IER) No effect. */
#define   SPI_IER_NSSR_1_Val              _U_(0x1)   /**< \brief (SPI_IER) Enables the corresponding interrupt. */
#define SPI_IER_NSSR_0              (SPI_IER_NSSR_0_Val            << SPI_IER_NSSR_Pos)
#define SPI_IER_NSSR_1              (SPI_IER_NSSR_1_Val            << SPI_IER_NSSR_Pos)
#define SPI_IER_TXEMPTY_Pos         9            /**< \brief (SPI_IER) Transmission Registers Empty Enable */
#define SPI_IER_TXEMPTY             (_U_(0x1) << SPI_IER_TXEMPTY_Pos)
#define   SPI_IER_TXEMPTY_0_Val           _U_(0x0)   /**< \brief (SPI_IER) No effect. */
#define   SPI_IER_TXEMPTY_1_Val           _U_(0x1)   /**< \brief (SPI_IER) Enables the corresponding interrupt. */
#define SPI_IER_TXEMPTY_0           (SPI_IER_TXEMPTY_0_Val         << SPI_IER_TXEMPTY_Pos)
#define SPI_IER_TXEMPTY_1           (SPI_IER_TXEMPTY_1_Val         << SPI_IER_TXEMPTY_Pos)
#define SPI_IER_UNDES_Pos           10           /**< \brief (SPI_IER) Underrun Error Interrupt Enable */
#define SPI_IER_UNDES               (_U_(0x1) << SPI_IER_UNDES_Pos)
#define SPI_IER_MASK                _U_(0x000007FF) /**< \brief (SPI_IER) MASK Register */

/* -------- SPI_IDR : (SPI Offset: 0x18) ( /W 32) Interrupt Disable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RDRF:1;           /*!< bit:      0  Receive Data Register Full Interrupt Disable */
    uint32_t TDRE:1;           /*!< bit:      1  Transmit Data Register Empty Interrupt Disable */
    uint32_t MODF:1;           /*!< bit:      2  Mode Fault Error Interrupt Disable */
    uint32_t OVRES:1;          /*!< bit:      3  Overrun Error Interrupt Disable    */
    uint32_t ENDRX:1;          /*!< bit:      4  End of Receive Buffer Interrupt Disable */
    uint32_t ENDTX:1;          /*!< bit:      5  End of Transmit Buffer Interrupt Disable */
    uint32_t RXBUFF:1;         /*!< bit:      6  Receive Buffer Full Interrupt Disable */
    uint32_t TXBUFE:1;         /*!< bit:      7  Transmit Buffer Empty Interrupt Disable */
    uint32_t NSSR:1;           /*!< bit:      8  NSS Rising Interrupt Disable       */
    uint32_t TXEMPTY:1;        /*!< bit:      9  Transmission Registers Empty Disable */
    uint32_t UNDES:1;          /*!< bit:     10  Underrun Error Interrupt Disable   */
    uint32_t :21;              /*!< bit: 11..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SPI_IDR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SPI_IDR_OFFSET              0x18         /**< \brief (SPI_IDR offset) Interrupt Disable Register */
#define SPI_IDR_RESETVALUE          _U_(0x00000000); /**< \brief (SPI_IDR reset_value) Interrupt Disable Register */

#define SPI_IDR_RDRF_Pos            0            /**< \brief (SPI_IDR) Receive Data Register Full Interrupt Disable */
#define SPI_IDR_RDRF                (_U_(0x1) << SPI_IDR_RDRF_Pos)
#define   SPI_IDR_RDRF_0_Val              _U_(0x0)   /**< \brief (SPI_IDR) No effect. */
#define   SPI_IDR_RDRF_1_Val              _U_(0x1)   /**< \brief (SPI_IDR) Disables the corresponding interrupt. */
#define SPI_IDR_RDRF_0              (SPI_IDR_RDRF_0_Val            << SPI_IDR_RDRF_Pos)
#define SPI_IDR_RDRF_1              (SPI_IDR_RDRF_1_Val            << SPI_IDR_RDRF_Pos)
#define SPI_IDR_TDRE_Pos            1            /**< \brief (SPI_IDR) Transmit Data Register Empty Interrupt Disable */
#define SPI_IDR_TDRE                (_U_(0x1) << SPI_IDR_TDRE_Pos)
#define   SPI_IDR_TDRE_0_Val              _U_(0x0)   /**< \brief (SPI_IDR) No effect. */
#define   SPI_IDR_TDRE_1_Val              _U_(0x1)   /**< \brief (SPI_IDR) Disables the corresponding interrupt. */
#define SPI_IDR_TDRE_0              (SPI_IDR_TDRE_0_Val            << SPI_IDR_TDRE_Pos)
#define SPI_IDR_TDRE_1              (SPI_IDR_TDRE_1_Val            << SPI_IDR_TDRE_Pos)
#define SPI_IDR_MODF_Pos            2            /**< \brief (SPI_IDR) Mode Fault Error Interrupt Disable */
#define SPI_IDR_MODF                (_U_(0x1) << SPI_IDR_MODF_Pos)
#define   SPI_IDR_MODF_0_Val              _U_(0x0)   /**< \brief (SPI_IDR) No effect. */
#define   SPI_IDR_MODF_1_Val              _U_(0x1)   /**< \brief (SPI_IDR) Disables the corresponding interrupt. */
#define SPI_IDR_MODF_0              (SPI_IDR_MODF_0_Val            << SPI_IDR_MODF_Pos)
#define SPI_IDR_MODF_1              (SPI_IDR_MODF_1_Val            << SPI_IDR_MODF_Pos)
#define SPI_IDR_OVRES_Pos           3            /**< \brief (SPI_IDR) Overrun Error Interrupt Disable */
#define SPI_IDR_OVRES               (_U_(0x1) << SPI_IDR_OVRES_Pos)
#define   SPI_IDR_OVRES_0_Val             _U_(0x0)   /**< \brief (SPI_IDR) No effect. */
#define   SPI_IDR_OVRES_1_Val             _U_(0x1)   /**< \brief (SPI_IDR) Disables the corresponding interrupt. */
#define SPI_IDR_OVRES_0             (SPI_IDR_OVRES_0_Val           << SPI_IDR_OVRES_Pos)
#define SPI_IDR_OVRES_1             (SPI_IDR_OVRES_1_Val           << SPI_IDR_OVRES_Pos)
#define SPI_IDR_ENDRX_Pos           4            /**< \brief (SPI_IDR) End of Receive Buffer Interrupt Disable */
#define SPI_IDR_ENDRX               (_U_(0x1) << SPI_IDR_ENDRX_Pos)
#define   SPI_IDR_ENDRX_0_Val             _U_(0x0)   /**< \brief (SPI_IDR) No effect. */
#define   SPI_IDR_ENDRX_1_Val             _U_(0x1)   /**< \brief (SPI_IDR) Disables the corresponding interrupt. */
#define SPI_IDR_ENDRX_0             (SPI_IDR_ENDRX_0_Val           << SPI_IDR_ENDRX_Pos)
#define SPI_IDR_ENDRX_1             (SPI_IDR_ENDRX_1_Val           << SPI_IDR_ENDRX_Pos)
#define SPI_IDR_ENDTX_Pos           5            /**< \brief (SPI_IDR) End of Transmit Buffer Interrupt Disable */
#define SPI_IDR_ENDTX               (_U_(0x1) << SPI_IDR_ENDTX_Pos)
#define   SPI_IDR_ENDTX_0_Val             _U_(0x0)   /**< \brief (SPI_IDR) No effect. */
#define   SPI_IDR_ENDTX_1_Val             _U_(0x1)   /**< \brief (SPI_IDR) Disables the corresponding interrupt. */
#define SPI_IDR_ENDTX_0             (SPI_IDR_ENDTX_0_Val           << SPI_IDR_ENDTX_Pos)
#define SPI_IDR_ENDTX_1             (SPI_IDR_ENDTX_1_Val           << SPI_IDR_ENDTX_Pos)
#define SPI_IDR_RXBUFF_Pos          6            /**< \brief (SPI_IDR) Receive Buffer Full Interrupt Disable */
#define SPI_IDR_RXBUFF              (_U_(0x1) << SPI_IDR_RXBUFF_Pos)
#define   SPI_IDR_RXBUFF_0_Val            _U_(0x0)   /**< \brief (SPI_IDR) No effect. */
#define   SPI_IDR_RXBUFF_1_Val            _U_(0x1)   /**< \brief (SPI_IDR) Disables the corresponding interrupt. */
#define SPI_IDR_RXBUFF_0            (SPI_IDR_RXBUFF_0_Val          << SPI_IDR_RXBUFF_Pos)
#define SPI_IDR_RXBUFF_1            (SPI_IDR_RXBUFF_1_Val          << SPI_IDR_RXBUFF_Pos)
#define SPI_IDR_TXBUFE_Pos          7            /**< \brief (SPI_IDR) Transmit Buffer Empty Interrupt Disable */
#define SPI_IDR_TXBUFE              (_U_(0x1) << SPI_IDR_TXBUFE_Pos)
#define   SPI_IDR_TXBUFE_0_Val            _U_(0x0)   /**< \brief (SPI_IDR) No effect. */
#define   SPI_IDR_TXBUFE_1_Val            _U_(0x1)   /**< \brief (SPI_IDR) Disables the corresponding interrupt. */
#define SPI_IDR_TXBUFE_0            (SPI_IDR_TXBUFE_0_Val          << SPI_IDR_TXBUFE_Pos)
#define SPI_IDR_TXBUFE_1            (SPI_IDR_TXBUFE_1_Val          << SPI_IDR_TXBUFE_Pos)
#define SPI_IDR_NSSR_Pos            8            /**< \brief (SPI_IDR) NSS Rising Interrupt Disable */
#define SPI_IDR_NSSR                (_U_(0x1) << SPI_IDR_NSSR_Pos)
#define   SPI_IDR_NSSR_0_Val              _U_(0x0)   /**< \brief (SPI_IDR) No effect. */
#define   SPI_IDR_NSSR_1_Val              _U_(0x1)   /**< \brief (SPI_IDR) Disables the corresponding interrupt. */
#define SPI_IDR_NSSR_0              (SPI_IDR_NSSR_0_Val            << SPI_IDR_NSSR_Pos)
#define SPI_IDR_NSSR_1              (SPI_IDR_NSSR_1_Val            << SPI_IDR_NSSR_Pos)
#define SPI_IDR_TXEMPTY_Pos         9            /**< \brief (SPI_IDR) Transmission Registers Empty Disable */
#define SPI_IDR_TXEMPTY             (_U_(0x1) << SPI_IDR_TXEMPTY_Pos)
#define   SPI_IDR_TXEMPTY_0_Val           _U_(0x0)   /**< \brief (SPI_IDR) No effect. */
#define   SPI_IDR_TXEMPTY_1_Val           _U_(0x1)   /**< \brief (SPI_IDR) Disables the corresponding interrupt. */
#define SPI_IDR_TXEMPTY_0           (SPI_IDR_TXEMPTY_0_Val         << SPI_IDR_TXEMPTY_Pos)
#define SPI_IDR_TXEMPTY_1           (SPI_IDR_TXEMPTY_1_Val         << SPI_IDR_TXEMPTY_Pos)
#define SPI_IDR_UNDES_Pos           10           /**< \brief (SPI_IDR) Underrun Error Interrupt Disable */
#define SPI_IDR_UNDES               (_U_(0x1) << SPI_IDR_UNDES_Pos)
#define SPI_IDR_MASK                _U_(0x000007FF) /**< \brief (SPI_IDR) MASK Register */

/* -------- SPI_IMR : (SPI Offset: 0x1C) (R/  32) Interrupt Mask Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RDRF:1;           /*!< bit:      0  Receive Data Register Full Interrupt Mask */
    uint32_t TDRE:1;           /*!< bit:      1  Transmit Data Register Empty Interrupt Mask */
    uint32_t MODF:1;           /*!< bit:      2  Mode Fault Error Interrupt Mask    */
    uint32_t OVRES:1;          /*!< bit:      3  Overrun Error Interrupt Mask       */
    uint32_t ENDRX:1;          /*!< bit:      4  End of Receive Buffer Interrupt Mask */
    uint32_t ENDTX:1;          /*!< bit:      5  End of Transmit Buffer Interrupt Mask */
    uint32_t RXBUFF:1;         /*!< bit:      6  Receive Buffer Full Interrupt Mask */
    uint32_t TXBUFE:1;         /*!< bit:      7  Transmit Buffer Empty Interrupt Mask */
    uint32_t NSSR:1;           /*!< bit:      8  NSS Rising Interrupt Mask          */
    uint32_t TXEMPTY:1;        /*!< bit:      9  Transmission Registers Empty Mask  */
    uint32_t UNDES:1;          /*!< bit:     10  Underrun Error Interrupt Mask      */
    uint32_t :21;              /*!< bit: 11..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SPI_IMR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SPI_IMR_OFFSET              0x1C         /**< \brief (SPI_IMR offset) Interrupt Mask Register */
#define SPI_IMR_RESETVALUE          _U_(0x00000000); /**< \brief (SPI_IMR reset_value) Interrupt Mask Register */

#define SPI_IMR_RDRF_Pos            0            /**< \brief (SPI_IMR) Receive Data Register Full Interrupt Mask */
#define SPI_IMR_RDRF                (_U_(0x1) << SPI_IMR_RDRF_Pos)
#define   SPI_IMR_RDRF_0_Val              _U_(0x0)   /**< \brief (SPI_IMR) The corresponding interrupt is not enabled. */
#define   SPI_IMR_RDRF_1_Val              _U_(0x1)   /**< \brief (SPI_IMR) The corresponding interrupt is enabled. */
#define SPI_IMR_RDRF_0              (SPI_IMR_RDRF_0_Val            << SPI_IMR_RDRF_Pos)
#define SPI_IMR_RDRF_1              (SPI_IMR_RDRF_1_Val            << SPI_IMR_RDRF_Pos)
#define SPI_IMR_TDRE_Pos            1            /**< \brief (SPI_IMR) Transmit Data Register Empty Interrupt Mask */
#define SPI_IMR_TDRE                (_U_(0x1) << SPI_IMR_TDRE_Pos)
#define   SPI_IMR_TDRE_0_Val              _U_(0x0)   /**< \brief (SPI_IMR) The corresponding interrupt is not enabled. */
#define   SPI_IMR_TDRE_1_Val              _U_(0x1)   /**< \brief (SPI_IMR) The corresponding interrupt is enabled. */
#define SPI_IMR_TDRE_0              (SPI_IMR_TDRE_0_Val            << SPI_IMR_TDRE_Pos)
#define SPI_IMR_TDRE_1              (SPI_IMR_TDRE_1_Val            << SPI_IMR_TDRE_Pos)
#define SPI_IMR_MODF_Pos            2            /**< \brief (SPI_IMR) Mode Fault Error Interrupt Mask */
#define SPI_IMR_MODF                (_U_(0x1) << SPI_IMR_MODF_Pos)
#define   SPI_IMR_MODF_0_Val              _U_(0x0)   /**< \brief (SPI_IMR) The corresponding interrupt is not enabled. */
#define   SPI_IMR_MODF_1_Val              _U_(0x1)   /**< \brief (SPI_IMR) The corresponding interrupt is enabled. */
#define SPI_IMR_MODF_0              (SPI_IMR_MODF_0_Val            << SPI_IMR_MODF_Pos)
#define SPI_IMR_MODF_1              (SPI_IMR_MODF_1_Val            << SPI_IMR_MODF_Pos)
#define SPI_IMR_OVRES_Pos           3            /**< \brief (SPI_IMR) Overrun Error Interrupt Mask */
#define SPI_IMR_OVRES               (_U_(0x1) << SPI_IMR_OVRES_Pos)
#define   SPI_IMR_OVRES_0_Val             _U_(0x0)   /**< \brief (SPI_IMR) The corresponding interrupt is not enabled. */
#define   SPI_IMR_OVRES_1_Val             _U_(0x1)   /**< \brief (SPI_IMR) The corresponding interrupt is enabled. */
#define SPI_IMR_OVRES_0             (SPI_IMR_OVRES_0_Val           << SPI_IMR_OVRES_Pos)
#define SPI_IMR_OVRES_1             (SPI_IMR_OVRES_1_Val           << SPI_IMR_OVRES_Pos)
#define SPI_IMR_ENDRX_Pos           4            /**< \brief (SPI_IMR) End of Receive Buffer Interrupt Mask */
#define SPI_IMR_ENDRX               (_U_(0x1) << SPI_IMR_ENDRX_Pos)
#define   SPI_IMR_ENDRX_0_Val             _U_(0x0)   /**< \brief (SPI_IMR) The corresponding interrupt is not enabled. */
#define   SPI_IMR_ENDRX_1_Val             _U_(0x1)   /**< \brief (SPI_IMR) The corresponding interrupt is enabled. */
#define SPI_IMR_ENDRX_0             (SPI_IMR_ENDRX_0_Val           << SPI_IMR_ENDRX_Pos)
#define SPI_IMR_ENDRX_1             (SPI_IMR_ENDRX_1_Val           << SPI_IMR_ENDRX_Pos)
#define SPI_IMR_ENDTX_Pos           5            /**< \brief (SPI_IMR) End of Transmit Buffer Interrupt Mask */
#define SPI_IMR_ENDTX               (_U_(0x1) << SPI_IMR_ENDTX_Pos)
#define   SPI_IMR_ENDTX_0_Val             _U_(0x0)   /**< \brief (SPI_IMR) The corresponding interrupt is not enabled. */
#define   SPI_IMR_ENDTX_1_Val             _U_(0x1)   /**< \brief (SPI_IMR) The corresponding interrupt is enabled. */
#define SPI_IMR_ENDTX_0             (SPI_IMR_ENDTX_0_Val           << SPI_IMR_ENDTX_Pos)
#define SPI_IMR_ENDTX_1             (SPI_IMR_ENDTX_1_Val           << SPI_IMR_ENDTX_Pos)
#define SPI_IMR_RXBUFF_Pos          6            /**< \brief (SPI_IMR) Receive Buffer Full Interrupt Mask */
#define SPI_IMR_RXBUFF              (_U_(0x1) << SPI_IMR_RXBUFF_Pos)
#define   SPI_IMR_RXBUFF_0_Val            _U_(0x0)   /**< \brief (SPI_IMR) The corresponding interrupt is not enabled. */
#define   SPI_IMR_RXBUFF_1_Val            _U_(0x1)   /**< \brief (SPI_IMR) The corresponding interrupt is enabled. */
#define SPI_IMR_RXBUFF_0            (SPI_IMR_RXBUFF_0_Val          << SPI_IMR_RXBUFF_Pos)
#define SPI_IMR_RXBUFF_1            (SPI_IMR_RXBUFF_1_Val          << SPI_IMR_RXBUFF_Pos)
#define SPI_IMR_TXBUFE_Pos          7            /**< \brief (SPI_IMR) Transmit Buffer Empty Interrupt Mask */
#define SPI_IMR_TXBUFE              (_U_(0x1) << SPI_IMR_TXBUFE_Pos)
#define   SPI_IMR_TXBUFE_0_Val            _U_(0x0)   /**< \brief (SPI_IMR) The corresponding interrupt is not enabled. */
#define   SPI_IMR_TXBUFE_1_Val            _U_(0x1)   /**< \brief (SPI_IMR) The corresponding interrupt is enabled. */
#define SPI_IMR_TXBUFE_0            (SPI_IMR_TXBUFE_0_Val          << SPI_IMR_TXBUFE_Pos)
#define SPI_IMR_TXBUFE_1            (SPI_IMR_TXBUFE_1_Val          << SPI_IMR_TXBUFE_Pos)
#define SPI_IMR_NSSR_Pos            8            /**< \brief (SPI_IMR) NSS Rising Interrupt Mask */
#define SPI_IMR_NSSR                (_U_(0x1) << SPI_IMR_NSSR_Pos)
#define   SPI_IMR_NSSR_0_Val              _U_(0x0)   /**< \brief (SPI_IMR) The corresponding interrupt is not enabled. */
#define   SPI_IMR_NSSR_1_Val              _U_(0x1)   /**< \brief (SPI_IMR) The corresponding interrupt is enabled. */
#define SPI_IMR_NSSR_0              (SPI_IMR_NSSR_0_Val            << SPI_IMR_NSSR_Pos)
#define SPI_IMR_NSSR_1              (SPI_IMR_NSSR_1_Val            << SPI_IMR_NSSR_Pos)
#define SPI_IMR_TXEMPTY_Pos         9            /**< \brief (SPI_IMR) Transmission Registers Empty Mask */
#define SPI_IMR_TXEMPTY             (_U_(0x1) << SPI_IMR_TXEMPTY_Pos)
#define   SPI_IMR_TXEMPTY_0_Val           _U_(0x0)   /**< \brief (SPI_IMR) The corresponding interrupt is not enabled. */
#define   SPI_IMR_TXEMPTY_1_Val           _U_(0x1)   /**< \brief (SPI_IMR) The corresponding interrupt is enabled. */
#define SPI_IMR_TXEMPTY_0           (SPI_IMR_TXEMPTY_0_Val         << SPI_IMR_TXEMPTY_Pos)
#define SPI_IMR_TXEMPTY_1           (SPI_IMR_TXEMPTY_1_Val         << SPI_IMR_TXEMPTY_Pos)
#define SPI_IMR_UNDES_Pos           10           /**< \brief (SPI_IMR) Underrun Error Interrupt Mask */
#define SPI_IMR_UNDES               (_U_(0x1) << SPI_IMR_UNDES_Pos)
#define SPI_IMR_MASK                _U_(0x000007FF) /**< \brief (SPI_IMR) MASK Register */

/* -------- SPI_CSR : (SPI Offset: 0x30) (R/W 32) Chip Select Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t CPOL:1;           /*!< bit:      0  Clock Polarity                     */
    uint32_t NCPHA:1;          /*!< bit:      1  Clock Phase                        */
    uint32_t CSNAAT:1;         /*!< bit:      2  Chip Select Not Active After Transfer */
    uint32_t CSAAT:1;          /*!< bit:      3  Chip Select Active After Transfer  */
    uint32_t BITS:4;           /*!< bit:  4.. 7  Bits Per Transfer                  */
    uint32_t SCBR:8;           /*!< bit:  8..15  Serial Clock Baud Rate             */
    uint32_t DLYBS:8;          /*!< bit: 16..23  Delay Before SPCK                  */
    uint32_t DLYBCT:8;         /*!< bit: 24..31  Delay Between Consecutive Transfers */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SPI_CSR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SPI_CSR_OFFSET              0x30         /**< \brief (SPI_CSR offset) Chip Select Register */
#define SPI_CSR_RESETVALUE          _U_(0x00000000); /**< \brief (SPI_CSR reset_value) Chip Select Register */

#define SPI_CSR_CPOL_Pos            0            /**< \brief (SPI_CSR) Clock Polarity */
#define SPI_CSR_CPOL                (_U_(0x1) << SPI_CSR_CPOL_Pos)
#define   SPI_CSR_CPOL_0_Val              _U_(0x0)   /**< \brief (SPI_CSR) The inactive state value of SPCK is logic level zero. */
#define   SPI_CSR_CPOL_1_Val              _U_(0x1)   /**< \brief (SPI_CSR) The inactive state value of SPCK is logic level one.CPOL is used to determine the inactive state value of the serial clock (SPCK). It is used with NCPHA to produce therequired clock/data relationship between master and slave devices. */
#define SPI_CSR_CPOL_0              (SPI_CSR_CPOL_0_Val            << SPI_CSR_CPOL_Pos)
#define SPI_CSR_CPOL_1              (SPI_CSR_CPOL_1_Val            << SPI_CSR_CPOL_Pos)
#define SPI_CSR_NCPHA_Pos           1            /**< \brief (SPI_CSR) Clock Phase */
#define SPI_CSR_NCPHA               (_U_(0x1) << SPI_CSR_NCPHA_Pos)
#define   SPI_CSR_NCPHA_0_Val             _U_(0x0)   /**< \brief (SPI_CSR) Data is changed on the leading edge of SPCK and captured on the following edge of SPCK. */
#define   SPI_CSR_NCPHA_1_Val             _U_(0x1)   /**< \brief (SPI_CSR) Data is captured on the leading edge of SPCK and changed on the following edge of SPCK.NCPHA determines which edge of SPCK causes data to change and which edge causes data to be captured. NCPHA isused with CPOL to produce the required clock/data relationship between master and slave devices. */
#define SPI_CSR_NCPHA_0             (SPI_CSR_NCPHA_0_Val           << SPI_CSR_NCPHA_Pos)
#define SPI_CSR_NCPHA_1             (SPI_CSR_NCPHA_1_Val           << SPI_CSR_NCPHA_Pos)
#define SPI_CSR_CSNAAT_Pos          2            /**< \brief (SPI_CSR) Chip Select Not Active After Transfer */
#define SPI_CSR_CSNAAT              (_U_(0x1) << SPI_CSR_CSNAAT_Pos)
#define SPI_CSR_CSAAT_Pos           3            /**< \brief (SPI_CSR) Chip Select Active After Transfer */
#define SPI_CSR_CSAAT               (_U_(0x1) << SPI_CSR_CSAAT_Pos)
#define   SPI_CSR_CSAAT_0_Val             _U_(0x0)   /**< \brief (SPI_CSR) The Peripheral Chip Select Line rises as soon as the last transfer is achieved. */
#define   SPI_CSR_CSAAT_1_Val             _U_(0x1)   /**< \brief (SPI_CSR) The Peripheral Chip Select does not rise after the last transfer is achieved. It remains active until a new transfer isrequested on a different chip select. */
#define SPI_CSR_CSAAT_0             (SPI_CSR_CSAAT_0_Val           << SPI_CSR_CSAAT_Pos)
#define SPI_CSR_CSAAT_1             (SPI_CSR_CSAAT_1_Val           << SPI_CSR_CSAAT_Pos)
#define SPI_CSR_BITS_Pos            4            /**< \brief (SPI_CSR) Bits Per Transfer */
#define SPI_CSR_BITS_Msk            (_U_(0xF) << SPI_CSR_BITS_Pos)
#define SPI_CSR_BITS(value)         (SPI_CSR_BITS_Msk & ((value) << SPI_CSR_BITS_Pos))
#define   SPI_CSR_BITS_8_BPT_Val          _U_(0x0)   /**< \brief (SPI_CSR) 8 bits per transfer */
#define   SPI_CSR_BITS_9_BPT_Val          _U_(0x1)   /**< \brief (SPI_CSR) 9 bits per transfer */
#define   SPI_CSR_BITS_10_BPT_Val         _U_(0x2)   /**< \brief (SPI_CSR) 10 bits per transfer */
#define   SPI_CSR_BITS_11_BPT_Val         _U_(0x3)   /**< \brief (SPI_CSR) 11 bits per transfer */
#define   SPI_CSR_BITS_12_BPT_Val         _U_(0x4)   /**< \brief (SPI_CSR) 12 bits per transfer */
#define   SPI_CSR_BITS_13_BPT_Val         _U_(0x5)   /**< \brief (SPI_CSR) 13 bits per transfer */
#define   SPI_CSR_BITS_14_BPT_Val         _U_(0x6)   /**< \brief (SPI_CSR) 14 bits per transfer */
#define   SPI_CSR_BITS_15_BPT_Val         _U_(0x7)   /**< \brief (SPI_CSR) 15 bits per transfer */
#define   SPI_CSR_BITS_16_BPT_Val         _U_(0x8)   /**< \brief (SPI_CSR) 16 bits per transfer */
#define SPI_CSR_BITS_8_BPT          (SPI_CSR_BITS_8_BPT_Val        << SPI_CSR_BITS_Pos)
#define SPI_CSR_BITS_9_BPT          (SPI_CSR_BITS_9_BPT_Val        << SPI_CSR_BITS_Pos)
#define SPI_CSR_BITS_10_BPT         (SPI_CSR_BITS_10_BPT_Val       << SPI_CSR_BITS_Pos)
#define SPI_CSR_BITS_11_BPT         (SPI_CSR_BITS_11_BPT_Val       << SPI_CSR_BITS_Pos)
#define SPI_CSR_BITS_12_BPT         (SPI_CSR_BITS_12_BPT_Val       << SPI_CSR_BITS_Pos)
#define SPI_CSR_BITS_13_BPT         (SPI_CSR_BITS_13_BPT_Val       << SPI_CSR_BITS_Pos)
#define SPI_CSR_BITS_14_BPT         (SPI_CSR_BITS_14_BPT_Val       << SPI_CSR_BITS_Pos)
#define SPI_CSR_BITS_15_BPT         (SPI_CSR_BITS_15_BPT_Val       << SPI_CSR_BITS_Pos)
#define SPI_CSR_BITS_16_BPT         (SPI_CSR_BITS_16_BPT_Val       << SPI_CSR_BITS_Pos)
#define SPI_CSR_SCBR_Pos            8            /**< \brief (SPI_CSR) Serial Clock Baud Rate */
#define SPI_CSR_SCBR_Msk            (_U_(0xFF) << SPI_CSR_SCBR_Pos)
#define SPI_CSR_SCBR(value)         (SPI_CSR_SCBR_Msk & ((value) << SPI_CSR_SCBR_Pos))
#define SPI_CSR_DLYBS_Pos           16           /**< \brief (SPI_CSR) Delay Before SPCK */
#define SPI_CSR_DLYBS_Msk           (_U_(0xFF) << SPI_CSR_DLYBS_Pos)
#define SPI_CSR_DLYBS(value)        (SPI_CSR_DLYBS_Msk & ((value) << SPI_CSR_DLYBS_Pos))
#define SPI_CSR_DLYBCT_Pos          24           /**< \brief (SPI_CSR) Delay Between Consecutive Transfers */
#define SPI_CSR_DLYBCT_Msk          (_U_(0xFF) << SPI_CSR_DLYBCT_Pos)
#define SPI_CSR_DLYBCT(value)       (SPI_CSR_DLYBCT_Msk & ((value) << SPI_CSR_DLYBCT_Pos))
#define SPI_CSR_MASK                _U_(0xFFFFFFFF) /**< \brief (SPI_CSR) MASK Register */

/* -------- SPI_WPCR : (SPI Offset: 0xE4) (R/W 32) Write Protection control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t WPEN:1;           /*!< bit:      0  Write Protection Enable            */
    uint32_t :7;               /*!< bit:  1.. 7  Reserved                           */
    uint32_t WPKEY:24;         /*!< bit:  8..31  Write Protection Key Password      */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SPI_WPCR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SPI_WPCR_OFFSET             0xE4         /**< \brief (SPI_WPCR offset) Write Protection control Register */
#define SPI_WPCR_RESETVALUE         _U_(0x00000000); /**< \brief (SPI_WPCR reset_value) Write Protection control Register */

#define SPI_WPCR_WPEN_Pos           0            /**< \brief (SPI_WPCR) Write Protection Enable */
#define SPI_WPCR_WPEN               (_U_(0x1) << SPI_WPCR_WPEN_Pos)
#define SPI_WPCR_WPKEY_Pos          8            /**< \brief (SPI_WPCR) Write Protection Key Password */
#define SPI_WPCR_WPKEY_Msk          (_U_(0xFFFFFF) << SPI_WPCR_WPKEY_Pos)
#define SPI_WPCR_WPKEY(value)       (SPI_WPCR_WPKEY_Msk & ((value) << SPI_WPCR_WPKEY_Pos))
#define   SPI_WPCR_WPKEY_VALUE_Val        _U_(0x535049)   /**< \brief (SPI_WPCR) SPI Write Protection Key Password */
#define SPI_WPCR_WPKEY_VALUE        (SPI_WPCR_WPKEY_VALUE_Val      << SPI_WPCR_WPKEY_Pos)
#define SPI_WPCR_MASK               _U_(0xFFFFFF01) /**< \brief (SPI_WPCR) MASK Register */

/* -------- SPI_WPSR : (SPI Offset: 0xE8) (R/  32) Write Protection status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t WPVS:3;           /*!< bit:  0.. 2  Write Protection Violation Status  */
    uint32_t :5;               /*!< bit:  3.. 7  Reserved                           */
    uint32_t WPVSRC:8;         /*!< bit:  8..15  Write Protection Violation Source  */
    uint32_t :16;              /*!< bit: 16..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SPI_WPSR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SPI_WPSR_OFFSET             0xE8         /**< \brief (SPI_WPSR offset) Write Protection status Register */
#define SPI_WPSR_RESETVALUE         _U_(0x00000000); /**< \brief (SPI_WPSR reset_value) Write Protection status Register */

#define SPI_WPSR_WPVS_Pos           0            /**< \brief (SPI_WPSR) Write Protection Violation Status */
#define SPI_WPSR_WPVS_Msk           (_U_(0x7) << SPI_WPSR_WPVS_Pos)
#define SPI_WPSR_WPVS(value)        (SPI_WPSR_WPVS_Msk & ((value) << SPI_WPSR_WPVS_Pos))
#define   SPI_WPSR_WPVS_WRITE_WITH_WP_Val _U_(0x1)   /**< \brief (SPI_WPSR) The Write Protection has blocked a Write access to a protected register (since the last read). */
#define   SPI_WPSR_WPVS_SWRST_WITH_WP_Val _U_(0x2)   /**< \brief (SPI_WPSR) Software Reset has been performed while Write Protection was enabled (since the last read or since the last write access on MR, IER, IDR or CSRx). */
#define   SPI_WPSR_WPVS_UNEXPECTED_WRITE_Val _U_(0x4)   /**< \brief (SPI_WPSR) Write accesses have been detected on MR (while a chip select was active) or on CSRi (while the Chip Select “i” was active) since the last read. */
#define SPI_WPSR_WPVS_WRITE_WITH_WP (SPI_WPSR_WPVS_WRITE_WITH_WP_Val << SPI_WPSR_WPVS_Pos)
#define SPI_WPSR_WPVS_SWRST_WITH_WP (SPI_WPSR_WPVS_SWRST_WITH_WP_Val << SPI_WPSR_WPVS_Pos)
#define SPI_WPSR_WPVS_UNEXPECTED_WRITE (SPI_WPSR_WPVS_UNEXPECTED_WRITE_Val << SPI_WPSR_WPVS_Pos)
#define SPI_WPSR_WPVSRC_Pos         8            /**< \brief (SPI_WPSR) Write Protection Violation Source */
#define SPI_WPSR_WPVSRC_Msk         (_U_(0xFF) << SPI_WPSR_WPVSRC_Pos)
#define SPI_WPSR_WPVSRC(value)      (SPI_WPSR_WPVSRC_Msk & ((value) << SPI_WPSR_WPVSRC_Pos))
#define SPI_WPSR_MASK               _U_(0x0000FF07) /**< \brief (SPI_WPSR) MASK Register */

/* -------- SPI_FEATURES : (SPI Offset: 0xF8) (R/  32) Features Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t NCS:4;            /*!< bit:  0.. 3  Number of Chip Selects             */
    uint32_t PCONF:1;          /*!< bit:      4  Polarity is Configurable           */
    uint32_t PPNCONF:1;        /*!< bit:      5  Polarity is Positive if Polarity is not Configurable */
    uint32_t PHCONF:1;         /*!< bit:      6  Phase is Configurable              */
    uint32_t PHZNCONF:1;       /*!< bit:      7  Phase is Zero if Phase is not Configurable */
    uint32_t LENCONF:1;        /*!< bit:      8  Character Length is Configurable   */
    uint32_t LENNCONF:7;       /*!< bit:  9..15  Character Length if not Configurable */
    uint32_t EXTDEC:1;         /*!< bit:     16  External Decoder is True           */
    uint32_t CSNAATIMPL:1;     /*!< bit:     17  CSNAAT Features are Implemented    */
    uint32_t BRPBHSB:1;        /*!< bit:     18  Bridge Type is PB to HSB           */
    uint32_t FIFORIMPL:1;      /*!< bit:     19  FIFO in Reception is Implemented   */
    uint32_t SWPIMPL:1;        /*!< bit:     20  Spurious Write Protection is Implemented */
    uint32_t :11;              /*!< bit: 21..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SPI_FEATURES_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SPI_FEATURES_OFFSET         0xF8         /**< \brief (SPI_FEATURES offset) Features Register */

#define SPI_FEATURES_NCS_Pos        0            /**< \brief (SPI_FEATURES) Number of Chip Selects */
#define SPI_FEATURES_NCS_Msk        (_U_(0xF) << SPI_FEATURES_NCS_Pos)
#define SPI_FEATURES_NCS(value)     (SPI_FEATURES_NCS_Msk & ((value) << SPI_FEATURES_NCS_Pos))
#define SPI_FEATURES_PCONF_Pos      4            /**< \brief (SPI_FEATURES) Polarity is Configurable */
#define SPI_FEATURES_PCONF          (_U_(0x1) << SPI_FEATURES_PCONF_Pos)
#define SPI_FEATURES_PPNCONF_Pos    5            /**< \brief (SPI_FEATURES) Polarity is Positive if Polarity is not Configurable */
#define SPI_FEATURES_PPNCONF        (_U_(0x1) << SPI_FEATURES_PPNCONF_Pos)
#define SPI_FEATURES_PHCONF_Pos     6            /**< \brief (SPI_FEATURES) Phase is Configurable */
#define SPI_FEATURES_PHCONF         (_U_(0x1) << SPI_FEATURES_PHCONF_Pos)
#define SPI_FEATURES_PHZNCONF_Pos   7            /**< \brief (SPI_FEATURES) Phase is Zero if Phase is not Configurable */
#define SPI_FEATURES_PHZNCONF       (_U_(0x1) << SPI_FEATURES_PHZNCONF_Pos)
#define SPI_FEATURES_LENCONF_Pos    8            /**< \brief (SPI_FEATURES) Character Length is Configurable */
#define SPI_FEATURES_LENCONF        (_U_(0x1) << SPI_FEATURES_LENCONF_Pos)
#define SPI_FEATURES_LENNCONF_Pos   9            /**< \brief (SPI_FEATURES) Character Length if not Configurable */
#define SPI_FEATURES_LENNCONF_Msk   (_U_(0x7F) << SPI_FEATURES_LENNCONF_Pos)
#define SPI_FEATURES_LENNCONF(value) (SPI_FEATURES_LENNCONF_Msk & ((value) << SPI_FEATURES_LENNCONF_Pos))
#define SPI_FEATURES_EXTDEC_Pos     16           /**< \brief (SPI_FEATURES) External Decoder is True */
#define SPI_FEATURES_EXTDEC         (_U_(0x1) << SPI_FEATURES_EXTDEC_Pos)
#define SPI_FEATURES_CSNAATIMPL_Pos 17           /**< \brief (SPI_FEATURES) CSNAAT Features are Implemented */
#define SPI_FEATURES_CSNAATIMPL     (_U_(0x1) << SPI_FEATURES_CSNAATIMPL_Pos)
#define SPI_FEATURES_BRPBHSB_Pos    18           /**< \brief (SPI_FEATURES) Bridge Type is PB to HSB */
#define SPI_FEATURES_BRPBHSB        (_U_(0x1) << SPI_FEATURES_BRPBHSB_Pos)
#define SPI_FEATURES_FIFORIMPL_Pos  19           /**< \brief (SPI_FEATURES) FIFO in Reception is Implemented */
#define SPI_FEATURES_FIFORIMPL      (_U_(0x1) << SPI_FEATURES_FIFORIMPL_Pos)
#define SPI_FEATURES_SWPIMPL_Pos    20           /**< \brief (SPI_FEATURES) Spurious Write Protection is Implemented */
#define SPI_FEATURES_SWPIMPL        (_U_(0x1) << SPI_FEATURES_SWPIMPL_Pos)
#define SPI_FEATURES_MASK           _U_(0x001FFFFF) /**< \brief (SPI_FEATURES) MASK Register */

/* -------- SPI_VERSION : (SPI Offset: 0xFC) (R/  32) Version Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t VERSION:12;       /*!< bit:  0..11  Version                            */
    uint32_t :4;               /*!< bit: 12..15  Reserved                           */
    uint32_t MFN:3;            /*!< bit: 16..18  mfn                                */
    uint32_t :13;              /*!< bit: 19..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SPI_VERSION_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SPI_VERSION_OFFSET          0xFC         /**< \brief (SPI_VERSION offset) Version Register */
#define SPI_VERSION_RESETVALUE      _U_(0x00000211); /**< \brief (SPI_VERSION reset_value) Version Register */

#define SPI_VERSION_VERSION_Pos     0            /**< \brief (SPI_VERSION) Version */
#define SPI_VERSION_VERSION_Msk     (_U_(0xFFF) << SPI_VERSION_VERSION_Pos)
#define SPI_VERSION_VERSION(value)  (SPI_VERSION_VERSION_Msk & ((value) << SPI_VERSION_VERSION_Pos))
#define SPI_VERSION_MFN_Pos         16           /**< \brief (SPI_VERSION) mfn */
#define SPI_VERSION_MFN_Msk         (_U_(0x7) << SPI_VERSION_MFN_Pos)
#define SPI_VERSION_MFN(value)      (SPI_VERSION_MFN_Msk & ((value) << SPI_VERSION_MFN_Pos))
#define SPI_VERSION_MASK            _U_(0x00070FFF) /**< \brief (SPI_VERSION) MASK Register */

/** \brief SPI hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {
  __O  uint32_t           SPI_CR;	/**< \brief Offset: 0x00 ( /W 32) Control Register */
  __IO uint32_t           SPI_MR;	/**< \brief Offset: 0x04 (R/W 32) Mode Register */
  __I  uint32_t          SPI_RDR;	/**< \brief Offset: 0x08 (R/  32) Receive Data Register */
  __O  uint32_t          SPI_TDR;	/**< \brief Offset: 0x0C ( /W 32) Transmit Data Register */
  __I  uint32_t           SPI_SR;	/**< \brief Offset: 0x10 (R/  32) Status Register */
  __O  uint32_t          SPI_IER;	/**< \brief Offset: 0x14 ( /W 32) Interrupt Enable Register */
  __O  uint32_t          SPI_IDR;	/**< \brief Offset: 0x18 ( /W 32) Interrupt Disable Register */
  __I  uint32_t          SPI_IMR;	/**< \brief Offset: 0x1C (R/  32) Interrupt Mask Register */
  __I  uint8_t   Reserved1[0x10];
  __IO uint32_t       SPI_CSR[4];	/**< \brief Offset: 0x30 (R/W 32) Chip Select Register */
  __I  uint8_t   Reserved2[0xA4];
  __IO uint32_t         SPI_WPCR;	/**< \brief Offset: 0xE4 (R/W 32) Write Protection control Register */
  __I  uint32_t         SPI_WPSR;	/**< \brief Offset: 0xE8 (R/  32) Write Protection status Register */
  __I  uint8_t    Reserved3[0xC];
  __I  uint32_t     SPI_FEATURES;	/**< \brief Offset: 0xF8 (R/  32) Features Register */
  __I  uint32_t      SPI_VERSION;	/**< \brief Offset: 0xFC (R/  32) Version Register */
} Spi;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAM4L_SPI_COMPONENT_ */
