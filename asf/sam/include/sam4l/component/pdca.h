/**
 * \file
 *
 * \brief Component description for PDCA
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

#ifndef _SAM4L_PDCA_COMPONENT_
#define _SAM4L_PDCA_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR PDCA */
/* ========================================================================== */
/** \addtogroup SAM4L_PDCA Peripheral DMA Controller */
/*@{*/

#define PDCA_I7514
#define REV_PDCA                    0x124

/* -------- PDCA_MAR : (PDCA Offset: 0x000) (R/W 32) channel Memory Address Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t MADDR:32;         /*!< bit:  0..31  Memory Address                     */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PDCA_MAR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PDCA_MAR_OFFSET             0x000        /**< \brief (PDCA_MAR offset) Memory Address Register */
#define PDCA_MAR_RESETVALUE         _U_(0x00000000); /**< \brief (PDCA_MAR reset_value) Memory Address Register */

#define PDCA_MAR_MADDR_Pos          0            /**< \brief (PDCA_MAR) Memory Address */
#define PDCA_MAR_MADDR_Msk          (_U_(0xFFFFFFFF) << PDCA_MAR_MADDR_Pos)
#define PDCA_MAR_MADDR(value)       (PDCA_MAR_MADDR_Msk & ((value) << PDCA_MAR_MADDR_Pos))
#define PDCA_MAR_MASK               _U_(0xFFFFFFFF) /**< \brief (PDCA_MAR) MASK Register */

/* -------- PDCA_PSR : (PDCA Offset: 0x004) (R/W 32) channel Peripheral Select Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t PID:8;            /*!< bit:  0.. 7  Peripheral Identifier              */
    uint32_t :24;              /*!< bit:  8..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PDCA_PSR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PDCA_PSR_OFFSET             0x004        /**< \brief (PDCA_PSR offset) Peripheral Select Register */

#define PDCA_PSR_PID_Pos            0            /**< \brief (PDCA_PSR) Peripheral Identifier */
#define PDCA_PSR_PID_Msk            (_U_(0xFF) << PDCA_PSR_PID_Pos)
#define PDCA_PSR_PID(value)         (PDCA_PSR_PID_Msk & ((value) << PDCA_PSR_PID_Pos))
#define PDCA_PSR_MASK               _U_(0x000000FF) /**< \brief (PDCA_PSR) MASK Register */

/* -------- PDCA_TCR : (PDCA Offset: 0x008) (R/W 32) channel Transfer Counter Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TCV:16;           /*!< bit:  0..15  Transfer Counter Value             */
    uint32_t :16;              /*!< bit: 16..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PDCA_TCR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PDCA_TCR_OFFSET             0x008        /**< \brief (PDCA_TCR offset) Transfer Counter Register */
#define PDCA_TCR_RESETVALUE         _U_(0x00000000); /**< \brief (PDCA_TCR reset_value) Transfer Counter Register */

#define PDCA_TCR_TCV_Pos            0            /**< \brief (PDCA_TCR) Transfer Counter Value */
#define PDCA_TCR_TCV_Msk            (_U_(0xFFFF) << PDCA_TCR_TCV_Pos)
#define PDCA_TCR_TCV(value)         (PDCA_TCR_TCV_Msk & ((value) << PDCA_TCR_TCV_Pos))
#define PDCA_TCR_MASK               _U_(0x0000FFFF) /**< \brief (PDCA_TCR) MASK Register */

/* -------- PDCA_MARR : (PDCA Offset: 0x00C) (R/W 32) channel Memory Address Reload Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t MARV:32;          /*!< bit:  0..31  Memory Address Reload Value        */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PDCA_MARR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PDCA_MARR_OFFSET            0x00C        /**< \brief (PDCA_MARR offset) Memory Address Reload Register */
#define PDCA_MARR_RESETVALUE        _U_(0x00000000); /**< \brief (PDCA_MARR reset_value) Memory Address Reload Register */

#define PDCA_MARR_MARV_Pos          0            /**< \brief (PDCA_MARR) Memory Address Reload Value */
#define PDCA_MARR_MARV_Msk          (_U_(0xFFFFFFFF) << PDCA_MARR_MARV_Pos)
#define PDCA_MARR_MARV(value)       (PDCA_MARR_MARV_Msk & ((value) << PDCA_MARR_MARV_Pos))
#define PDCA_MARR_MASK              _U_(0xFFFFFFFF) /**< \brief (PDCA_MARR) MASK Register */

/* -------- PDCA_TCRR : (PDCA Offset: 0x010) (R/W 32) channel Transfer Counter Reload Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TCRV:16;          /*!< bit:  0..15  Transfer Counter Reload Value      */
    uint32_t :16;              /*!< bit: 16..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PDCA_TCRR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PDCA_TCRR_OFFSET            0x010        /**< \brief (PDCA_TCRR offset) Transfer Counter Reload Register */
#define PDCA_TCRR_RESETVALUE        _U_(0x00000000); /**< \brief (PDCA_TCRR reset_value) Transfer Counter Reload Register */

#define PDCA_TCRR_TCRV_Pos          0            /**< \brief (PDCA_TCRR) Transfer Counter Reload Value */
#define PDCA_TCRR_TCRV_Msk          (_U_(0xFFFF) << PDCA_TCRR_TCRV_Pos)
#define PDCA_TCRR_TCRV(value)       (PDCA_TCRR_TCRV_Msk & ((value) << PDCA_TCRR_TCRV_Pos))
#define PDCA_TCRR_MASK              _U_(0x0000FFFF) /**< \brief (PDCA_TCRR) MASK Register */

/* -------- PDCA_CR : (PDCA Offset: 0x014) ( /W 32) channel Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TEN:1;            /*!< bit:      0  Transfer Enable                    */
    uint32_t TDIS:1;           /*!< bit:      1  Transfer Disable                   */
    uint32_t :6;               /*!< bit:  2.. 7  Reserved                           */
    uint32_t ECLR:1;           /*!< bit:      8  Error Clear                        */
    uint32_t :23;              /*!< bit:  9..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PDCA_CR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PDCA_CR_OFFSET              0x014        /**< \brief (PDCA_CR offset) Control Register */
#define PDCA_CR_RESETVALUE          _U_(0x00000000); /**< \brief (PDCA_CR reset_value) Control Register */

#define PDCA_CR_TEN_Pos             0            /**< \brief (PDCA_CR) Transfer Enable */
#define PDCA_CR_TEN                 (_U_(0x1) << PDCA_CR_TEN_Pos)
#define PDCA_CR_TDIS_Pos            1            /**< \brief (PDCA_CR) Transfer Disable */
#define PDCA_CR_TDIS                (_U_(0x1) << PDCA_CR_TDIS_Pos)
#define PDCA_CR_ECLR_Pos            8            /**< \brief (PDCA_CR) Error Clear */
#define PDCA_CR_ECLR                (_U_(0x1) << PDCA_CR_ECLR_Pos)
#define PDCA_CR_MASK                _U_(0x00000103) /**< \brief (PDCA_CR) MASK Register */

/* -------- PDCA_MR : (PDCA Offset: 0x018) (R/W 32) channel Mode Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t SIZE:2;           /*!< bit:  0.. 1  Transfer size                      */
    uint32_t ETRIG:1;          /*!< bit:      2  Event trigger                      */
    uint32_t RING:1;           /*!< bit:      3  Ring Buffer                        */
    uint32_t :28;              /*!< bit:  4..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PDCA_MR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PDCA_MR_OFFSET              0x018        /**< \brief (PDCA_MR offset) Mode Register */
#define PDCA_MR_RESETVALUE          _U_(0x00000000); /**< \brief (PDCA_MR reset_value) Mode Register */

#define PDCA_MR_SIZE_Pos            0            /**< \brief (PDCA_MR) Transfer size */
#define PDCA_MR_SIZE_Msk            (_U_(0x3) << PDCA_MR_SIZE_Pos)
#define PDCA_MR_SIZE(value)         (PDCA_MR_SIZE_Msk & ((value) << PDCA_MR_SIZE_Pos))
#define   PDCA_MR_SIZE_BYTE_Val           _U_(0x0)   /**< \brief (PDCA_MR)  */
#define   PDCA_MR_SIZE_HALF_WORD_Val      _U_(0x1)   /**< \brief (PDCA_MR)  */
#define   PDCA_MR_SIZE_WORD_Val           _U_(0x2)   /**< \brief (PDCA_MR)  */
#define PDCA_MR_SIZE_BYTE           (PDCA_MR_SIZE_BYTE_Val         << PDCA_MR_SIZE_Pos)
#define PDCA_MR_SIZE_HALF_WORD      (PDCA_MR_SIZE_HALF_WORD_Val    << PDCA_MR_SIZE_Pos)
#define PDCA_MR_SIZE_WORD           (PDCA_MR_SIZE_WORD_Val         << PDCA_MR_SIZE_Pos)
#define PDCA_MR_ETRIG_Pos           2            /**< \brief (PDCA_MR) Event trigger */
#define PDCA_MR_ETRIG               (_U_(0x1) << PDCA_MR_ETRIG_Pos)
#define PDCA_MR_RING_Pos            3            /**< \brief (PDCA_MR) Ring Buffer */
#define PDCA_MR_RING                (_U_(0x1) << PDCA_MR_RING_Pos)
#define PDCA_MR_MASK                _U_(0x0000000F) /**< \brief (PDCA_MR) MASK Register */

/* -------- PDCA_SR : (PDCA Offset: 0x01C) (R/  32) channel Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TEN:1;            /*!< bit:      0  Transfer Enabled                   */
    uint32_t :31;              /*!< bit:  1..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PDCA_SR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PDCA_SR_OFFSET              0x01C        /**< \brief (PDCA_SR offset) Status Register */
#define PDCA_SR_RESETVALUE          _U_(0x00000000); /**< \brief (PDCA_SR reset_value) Status Register */

#define PDCA_SR_TEN_Pos             0            /**< \brief (PDCA_SR) Transfer Enabled */
#define PDCA_SR_TEN                 (_U_(0x1) << PDCA_SR_TEN_Pos)
#define PDCA_SR_MASK                _U_(0x00000001) /**< \brief (PDCA_SR) MASK Register */

/* -------- PDCA_IER : (PDCA Offset: 0x020) ( /W 32) channel Interrupt Enable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RCZ:1;            /*!< bit:      0  Reload Counter Zero                */
    uint32_t TRC:1;            /*!< bit:      1  Transfer Complete                  */
    uint32_t TERR:1;           /*!< bit:      2  Transfer Error                     */
    uint32_t :29;              /*!< bit:  3..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PDCA_IER_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PDCA_IER_OFFSET             0x020        /**< \brief (PDCA_IER offset) Interrupt Enable Register */
#define PDCA_IER_RESETVALUE         _U_(0x00000000); /**< \brief (PDCA_IER reset_value) Interrupt Enable Register */

#define PDCA_IER_RCZ_Pos            0            /**< \brief (PDCA_IER) Reload Counter Zero */
#define PDCA_IER_RCZ                (_U_(0x1) << PDCA_IER_RCZ_Pos)
#define PDCA_IER_TRC_Pos            1            /**< \brief (PDCA_IER) Transfer Complete */
#define PDCA_IER_TRC                (_U_(0x1) << PDCA_IER_TRC_Pos)
#define PDCA_IER_TERR_Pos           2            /**< \brief (PDCA_IER) Transfer Error */
#define PDCA_IER_TERR               (_U_(0x1) << PDCA_IER_TERR_Pos)
#define PDCA_IER_MASK               _U_(0x00000007) /**< \brief (PDCA_IER) MASK Register */

/* -------- PDCA_IDR : (PDCA Offset: 0x024) ( /W 32) channel Interrupt Disable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RCZ:1;            /*!< bit:      0  Reload Counter Zero                */
    uint32_t TRC:1;            /*!< bit:      1  Transfer Complete                  */
    uint32_t TERR:1;           /*!< bit:      2  Transfer Error                     */
    uint32_t :29;              /*!< bit:  3..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PDCA_IDR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PDCA_IDR_OFFSET             0x024        /**< \brief (PDCA_IDR offset) Interrupt Disable Register */
#define PDCA_IDR_RESETVALUE         _U_(0x00000000); /**< \brief (PDCA_IDR reset_value) Interrupt Disable Register */

#define PDCA_IDR_RCZ_Pos            0            /**< \brief (PDCA_IDR) Reload Counter Zero */
#define PDCA_IDR_RCZ                (_U_(0x1) << PDCA_IDR_RCZ_Pos)
#define PDCA_IDR_TRC_Pos            1            /**< \brief (PDCA_IDR) Transfer Complete */
#define PDCA_IDR_TRC                (_U_(0x1) << PDCA_IDR_TRC_Pos)
#define PDCA_IDR_TERR_Pos           2            /**< \brief (PDCA_IDR) Transfer Error */
#define PDCA_IDR_TERR               (_U_(0x1) << PDCA_IDR_TERR_Pos)
#define PDCA_IDR_MASK               _U_(0x00000007) /**< \brief (PDCA_IDR) MASK Register */

/* -------- PDCA_IMR : (PDCA Offset: 0x028) (R/  32) channel Interrupt Mask Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RCZ:1;            /*!< bit:      0  Reload Counter Zero                */
    uint32_t TRC:1;            /*!< bit:      1  Transfer Complete                  */
    uint32_t TERR:1;           /*!< bit:      2  Transfer Error                     */
    uint32_t :29;              /*!< bit:  3..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PDCA_IMR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PDCA_IMR_OFFSET             0x028        /**< \brief (PDCA_IMR offset) Interrupt Mask Register */
#define PDCA_IMR_RESETVALUE         _U_(0x00000000); /**< \brief (PDCA_IMR reset_value) Interrupt Mask Register */

#define PDCA_IMR_RCZ_Pos            0            /**< \brief (PDCA_IMR) Reload Counter Zero */
#define PDCA_IMR_RCZ                (_U_(0x1) << PDCA_IMR_RCZ_Pos)
#define PDCA_IMR_TRC_Pos            1            /**< \brief (PDCA_IMR) Transfer Complete */
#define PDCA_IMR_TRC                (_U_(0x1) << PDCA_IMR_TRC_Pos)
#define PDCA_IMR_TERR_Pos           2            /**< \brief (PDCA_IMR) Transfer Error */
#define PDCA_IMR_TERR               (_U_(0x1) << PDCA_IMR_TERR_Pos)
#define PDCA_IMR_MASK               _U_(0x00000007) /**< \brief (PDCA_IMR) MASK Register */

/* -------- PDCA_ISR : (PDCA Offset: 0x02C) (R/  32) channel Interrupt Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RCZ:1;            /*!< bit:      0  Reload Counter Zero                */
    uint32_t TRC:1;            /*!< bit:      1  Transfer Complete                  */
    uint32_t TERR:1;           /*!< bit:      2  Transfer Error                     */
    uint32_t :29;              /*!< bit:  3..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PDCA_ISR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PDCA_ISR_OFFSET             0x02C        /**< \brief (PDCA_ISR offset) Interrupt Status Register */
#define PDCA_ISR_RESETVALUE         _U_(0x00000000); /**< \brief (PDCA_ISR reset_value) Interrupt Status Register */

#define PDCA_ISR_RCZ_Pos            0            /**< \brief (PDCA_ISR) Reload Counter Zero */
#define PDCA_ISR_RCZ                (_U_(0x1) << PDCA_ISR_RCZ_Pos)
#define PDCA_ISR_TRC_Pos            1            /**< \brief (PDCA_ISR) Transfer Complete */
#define PDCA_ISR_TRC                (_U_(0x1) << PDCA_ISR_TRC_Pos)
#define PDCA_ISR_TERR_Pos           2            /**< \brief (PDCA_ISR) Transfer Error */
#define PDCA_ISR_TERR               (_U_(0x1) << PDCA_ISR_TERR_Pos)
#define PDCA_ISR_MASK               _U_(0x00000007) /**< \brief (PDCA_ISR) MASK Register */

/* -------- PDCA_PCONTROL : (PDCA Offset: 0x800) (R/W 32) Performance Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t CH0EN:1;          /*!< bit:      0  Channel 0 Enabled                  */
    uint32_t CH1EN:1;          /*!< bit:      1  Channel 1 Enabled.                 */
    uint32_t :2;               /*!< bit:  2.. 3  Reserved                           */
    uint32_t CH0OF:1;          /*!< bit:      4  Channel 0 Overflow Freeze          */
    uint32_t CH1OF:1;          /*!< bit:      5  Channel 1 overflow freeze          */
    uint32_t :2;               /*!< bit:  6.. 7  Reserved                           */
    uint32_t CH0RES:1;         /*!< bit:      8  Channel 0 counter reset            */
    uint32_t CH1RES:1;         /*!< bit:      9  Channel 1 counter reset            */
    uint32_t :6;               /*!< bit: 10..15  Reserved                           */
    uint32_t MON0CH:6;         /*!< bit: 16..21  PDCA Channel to monitor with counter 0 */
    uint32_t :2;               /*!< bit: 22..23  Reserved                           */
    uint32_t MON1CH:6;         /*!< bit: 24..29  PDCA Channel to monitor with counter 1 */
    uint32_t :2;               /*!< bit: 30..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PDCA_PCONTROL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PDCA_PCONTROL_OFFSET        0x800        /**< \brief (PDCA_PCONTROL offset) Performance Control Register */
#define PDCA_PCONTROL_RESETVALUE    _U_(0x00000000); /**< \brief (PDCA_PCONTROL reset_value) Performance Control Register */

#define PDCA_PCONTROL_CH0EN_Pos     0            /**< \brief (PDCA_PCONTROL) Channel 0 Enabled */
#define PDCA_PCONTROL_CH0EN         (_U_(0x1) << PDCA_PCONTROL_CH0EN_Pos)
#define PDCA_PCONTROL_CH1EN_Pos     1            /**< \brief (PDCA_PCONTROL) Channel 1 Enabled. */
#define PDCA_PCONTROL_CH1EN         (_U_(0x1) << PDCA_PCONTROL_CH1EN_Pos)
#define PDCA_PCONTROL_CH0OF_Pos     4            /**< \brief (PDCA_PCONTROL) Channel 0 Overflow Freeze */
#define PDCA_PCONTROL_CH0OF         (_U_(0x1) << PDCA_PCONTROL_CH0OF_Pos)
#define PDCA_PCONTROL_CH1OF_Pos     5            /**< \brief (PDCA_PCONTROL) Channel 1 overflow freeze */
#define PDCA_PCONTROL_CH1OF         (_U_(0x1) << PDCA_PCONTROL_CH1OF_Pos)
#define PDCA_PCONTROL_CH0RES_Pos    8            /**< \brief (PDCA_PCONTROL) Channel 0 counter reset */
#define PDCA_PCONTROL_CH0RES        (_U_(0x1) << PDCA_PCONTROL_CH0RES_Pos)
#define PDCA_PCONTROL_CH1RES_Pos    9            /**< \brief (PDCA_PCONTROL) Channel 1 counter reset */
#define PDCA_PCONTROL_CH1RES        (_U_(0x1) << PDCA_PCONTROL_CH1RES_Pos)
#define PDCA_PCONTROL_MON0CH_Pos    16           /**< \brief (PDCA_PCONTROL) PDCA Channel to monitor with counter 0 */
#define PDCA_PCONTROL_MON0CH_Msk    (_U_(0x3F) << PDCA_PCONTROL_MON0CH_Pos)
#define PDCA_PCONTROL_MON0CH(value) (PDCA_PCONTROL_MON0CH_Msk & ((value) << PDCA_PCONTROL_MON0CH_Pos))
#define PDCA_PCONTROL_MON1CH_Pos    24           /**< \brief (PDCA_PCONTROL) PDCA Channel to monitor with counter 1 */
#define PDCA_PCONTROL_MON1CH_Msk    (_U_(0x3F) << PDCA_PCONTROL_MON1CH_Pos)
#define PDCA_PCONTROL_MON1CH(value) (PDCA_PCONTROL_MON1CH_Msk & ((value) << PDCA_PCONTROL_MON1CH_Pos))
#define PDCA_PCONTROL_MASK          _U_(0x3F3F0333) /**< \brief (PDCA_PCONTROL) MASK Register */

/* -------- PDCA_PRDATA0 : (PDCA Offset: 0x804) (R/  32) Channel 0 Read Data Cycles -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DATA:32;          /*!< bit:  0..31  Data Cycles Counted Since Last reset */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PDCA_PRDATA0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PDCA_PRDATA0_OFFSET         0x804        /**< \brief (PDCA_PRDATA0 offset) Channel 0 Read Data Cycles */
#define PDCA_PRDATA0_RESETVALUE     _U_(0x00000000); /**< \brief (PDCA_PRDATA0 reset_value) Channel 0 Read Data Cycles */

#define PDCA_PRDATA0_DATA_Pos       0            /**< \brief (PDCA_PRDATA0) Data Cycles Counted Since Last reset */
#define PDCA_PRDATA0_DATA_Msk       (_U_(0xFFFFFFFF) << PDCA_PRDATA0_DATA_Pos)
#define PDCA_PRDATA0_DATA(value)    (PDCA_PRDATA0_DATA_Msk & ((value) << PDCA_PRDATA0_DATA_Pos))
#define PDCA_PRDATA0_MASK           _U_(0xFFFFFFFF) /**< \brief (PDCA_PRDATA0) MASK Register */

/* -------- PDCA_PRSTALL0 : (PDCA Offset: 0x808) (R/  32) Channel 0 Read Stall Cycles -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t STALL:32;         /*!< bit:  0..31  Stall Cycles counted since last reset */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PDCA_PRSTALL0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PDCA_PRSTALL0_OFFSET        0x808        /**< \brief (PDCA_PRSTALL0 offset) Channel 0 Read Stall Cycles */
#define PDCA_PRSTALL0_RESETVALUE    _U_(0x00000000); /**< \brief (PDCA_PRSTALL0 reset_value) Channel 0 Read Stall Cycles */

#define PDCA_PRSTALL0_STALL_Pos     0            /**< \brief (PDCA_PRSTALL0) Stall Cycles counted since last reset */
#define PDCA_PRSTALL0_STALL_Msk     (_U_(0xFFFFFFFF) << PDCA_PRSTALL0_STALL_Pos)
#define PDCA_PRSTALL0_STALL(value)  (PDCA_PRSTALL0_STALL_Msk & ((value) << PDCA_PRSTALL0_STALL_Pos))
#define PDCA_PRSTALL0_MASK          _U_(0xFFFFFFFF) /**< \brief (PDCA_PRSTALL0) MASK Register */

/* -------- PDCA_PRLAT0 : (PDCA Offset: 0x80C) (R/  32) Channel 0 Read Max Latency -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t LAT:16;           /*!< bit:  0..15  Maximum Transfer Initiation cycles counted since last reset */
    uint32_t :16;              /*!< bit: 16..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PDCA_PRLAT0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PDCA_PRLAT0_OFFSET          0x80C        /**< \brief (PDCA_PRLAT0 offset) Channel 0 Read Max Latency */
#define PDCA_PRLAT0_RESETVALUE      _U_(0x00000000); /**< \brief (PDCA_PRLAT0 reset_value) Channel 0 Read Max Latency */

#define PDCA_PRLAT0_LAT_Pos         0            /**< \brief (PDCA_PRLAT0) Maximum Transfer Initiation cycles counted since last reset */
#define PDCA_PRLAT0_LAT_Msk         (_U_(0xFFFF) << PDCA_PRLAT0_LAT_Pos)
#define PDCA_PRLAT0_LAT(value)      (PDCA_PRLAT0_LAT_Msk & ((value) << PDCA_PRLAT0_LAT_Pos))
#define PDCA_PRLAT0_MASK            _U_(0x0000FFFF) /**< \brief (PDCA_PRLAT0) MASK Register */

/* -------- PDCA_PWDATA0 : (PDCA Offset: 0x810) (R/  32) Channel 0 Write Data Cycles -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DATA:32;          /*!< bit:  0..31  Data Cycles Counted since last Reset */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PDCA_PWDATA0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PDCA_PWDATA0_OFFSET         0x810        /**< \brief (PDCA_PWDATA0 offset) Channel 0 Write Data Cycles */
#define PDCA_PWDATA0_RESETVALUE     _U_(0x00000000); /**< \brief (PDCA_PWDATA0 reset_value) Channel 0 Write Data Cycles */

#define PDCA_PWDATA0_DATA_Pos       0            /**< \brief (PDCA_PWDATA0) Data Cycles Counted since last Reset */
#define PDCA_PWDATA0_DATA_Msk       (_U_(0xFFFFFFFF) << PDCA_PWDATA0_DATA_Pos)
#define PDCA_PWDATA0_DATA(value)    (PDCA_PWDATA0_DATA_Msk & ((value) << PDCA_PWDATA0_DATA_Pos))
#define PDCA_PWDATA0_MASK           _U_(0xFFFFFFFF) /**< \brief (PDCA_PWDATA0) MASK Register */

/* -------- PDCA_PWSTALL0 : (PDCA Offset: 0x814) (R/  32) Channel 0 Write Stall Cycles -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t STALL:32;         /*!< bit:  0..31  Stall cycles counted since last reset */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PDCA_PWSTALL0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PDCA_PWSTALL0_OFFSET        0x814        /**< \brief (PDCA_PWSTALL0 offset) Channel 0 Write Stall Cycles */
#define PDCA_PWSTALL0_RESETVALUE    _U_(0x00000000); /**< \brief (PDCA_PWSTALL0 reset_value) Channel 0 Write Stall Cycles */

#define PDCA_PWSTALL0_STALL_Pos     0            /**< \brief (PDCA_PWSTALL0) Stall cycles counted since last reset */
#define PDCA_PWSTALL0_STALL_Msk     (_U_(0xFFFFFFFF) << PDCA_PWSTALL0_STALL_Pos)
#define PDCA_PWSTALL0_STALL(value)  (PDCA_PWSTALL0_STALL_Msk & ((value) << PDCA_PWSTALL0_STALL_Pos))
#define PDCA_PWSTALL0_MASK          _U_(0xFFFFFFFF) /**< \brief (PDCA_PWSTALL0) MASK Register */

/* -------- PDCA_PWLAT0 : (PDCA Offset: 0x818) (R/  32) Channel0 Write Max Latency -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t LAT:16;           /*!< bit:  0..15  Maximum transfer initiation cycles counted since last reset */
    uint32_t :16;              /*!< bit: 16..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PDCA_PWLAT0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PDCA_PWLAT0_OFFSET          0x818        /**< \brief (PDCA_PWLAT0 offset) Channel0 Write Max Latency */
#define PDCA_PWLAT0_RESETVALUE      _U_(0x00000000); /**< \brief (PDCA_PWLAT0 reset_value) Channel0 Write Max Latency */

#define PDCA_PWLAT0_LAT_Pos         0            /**< \brief (PDCA_PWLAT0) Maximum transfer initiation cycles counted since last reset */
#define PDCA_PWLAT0_LAT_Msk         (_U_(0xFFFF) << PDCA_PWLAT0_LAT_Pos)
#define PDCA_PWLAT0_LAT(value)      (PDCA_PWLAT0_LAT_Msk & ((value) << PDCA_PWLAT0_LAT_Pos))
#define PDCA_PWLAT0_MASK            _U_(0x0000FFFF) /**< \brief (PDCA_PWLAT0) MASK Register */

/* -------- PDCA_PRDATA1 : (PDCA Offset: 0x81C) (R/  32) Channel 1 Read Data Cycles -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DATA:32;          /*!< bit:  0..31  Data Cycles Counted Since Last reset */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PDCA_PRDATA1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PDCA_PRDATA1_OFFSET         0x81C        /**< \brief (PDCA_PRDATA1 offset) Channel 1 Read Data Cycles */
#define PDCA_PRDATA1_RESETVALUE     _U_(0x00000000); /**< \brief (PDCA_PRDATA1 reset_value) Channel 1 Read Data Cycles */

#define PDCA_PRDATA1_DATA_Pos       0            /**< \brief (PDCA_PRDATA1) Data Cycles Counted Since Last reset */
#define PDCA_PRDATA1_DATA_Msk       (_U_(0xFFFFFFFF) << PDCA_PRDATA1_DATA_Pos)
#define PDCA_PRDATA1_DATA(value)    (PDCA_PRDATA1_DATA_Msk & ((value) << PDCA_PRDATA1_DATA_Pos))
#define PDCA_PRDATA1_MASK           _U_(0xFFFFFFFF) /**< \brief (PDCA_PRDATA1) MASK Register */

/* -------- PDCA_PRSTALL1 : (PDCA Offset: 0x820) (R/  32) Channel Read Stall Cycles -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t STALL:32;         /*!< bit:  0..31  Stall Cycles Counted since last reset */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PDCA_PRSTALL1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PDCA_PRSTALL1_OFFSET        0x820        /**< \brief (PDCA_PRSTALL1 offset) Channel Read Stall Cycles */
#define PDCA_PRSTALL1_RESETVALUE    _U_(0x00000000); /**< \brief (PDCA_PRSTALL1 reset_value) Channel Read Stall Cycles */

#define PDCA_PRSTALL1_STALL_Pos     0            /**< \brief (PDCA_PRSTALL1) Stall Cycles Counted since last reset */
#define PDCA_PRSTALL1_STALL_Msk     (_U_(0xFFFFFFFF) << PDCA_PRSTALL1_STALL_Pos)
#define PDCA_PRSTALL1_STALL(value)  (PDCA_PRSTALL1_STALL_Msk & ((value) << PDCA_PRSTALL1_STALL_Pos))
#define PDCA_PRSTALL1_MASK          _U_(0xFFFFFFFF) /**< \brief (PDCA_PRSTALL1) MASK Register */

/* -------- PDCA_PRLAT1 : (PDCA Offset: 0x824) (R/  32) Channel 1 Read Max Latency -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t LAT:16;           /*!< bit:  0..15  Maximum Transfer initiation cycles counted since last reset */
    uint32_t :16;              /*!< bit: 16..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PDCA_PRLAT1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PDCA_PRLAT1_OFFSET          0x824        /**< \brief (PDCA_PRLAT1 offset) Channel 1 Read Max Latency */
#define PDCA_PRLAT1_RESETVALUE      _U_(0x00000000); /**< \brief (PDCA_PRLAT1 reset_value) Channel 1 Read Max Latency */

#define PDCA_PRLAT1_LAT_Pos         0            /**< \brief (PDCA_PRLAT1) Maximum Transfer initiation cycles counted since last reset */
#define PDCA_PRLAT1_LAT_Msk         (_U_(0xFFFF) << PDCA_PRLAT1_LAT_Pos)
#define PDCA_PRLAT1_LAT(value)      (PDCA_PRLAT1_LAT_Msk & ((value) << PDCA_PRLAT1_LAT_Pos))
#define PDCA_PRLAT1_MASK            _U_(0x0000FFFF) /**< \brief (PDCA_PRLAT1) MASK Register */

/* -------- PDCA_PWDATA1 : (PDCA Offset: 0x828) (R/  32) Channel 1 Write Data Cycles -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DATA:32;          /*!< bit:  0..31  Data cycles Counted Since last reset */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PDCA_PWDATA1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PDCA_PWDATA1_OFFSET         0x828        /**< \brief (PDCA_PWDATA1 offset) Channel 1 Write Data Cycles */
#define PDCA_PWDATA1_RESETVALUE     _U_(0x00000000); /**< \brief (PDCA_PWDATA1 reset_value) Channel 1 Write Data Cycles */

#define PDCA_PWDATA1_DATA_Pos       0            /**< \brief (PDCA_PWDATA1) Data cycles Counted Since last reset */
#define PDCA_PWDATA1_DATA_Msk       (_U_(0xFFFFFFFF) << PDCA_PWDATA1_DATA_Pos)
#define PDCA_PWDATA1_DATA(value)    (PDCA_PWDATA1_DATA_Msk & ((value) << PDCA_PWDATA1_DATA_Pos))
#define PDCA_PWDATA1_MASK           _U_(0xFFFFFFFF) /**< \brief (PDCA_PWDATA1) MASK Register */

/* -------- PDCA_PWSTALL1 : (PDCA Offset: 0x82C) (R/  32) Channel 1 Write stall Cycles -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t STALL:32;         /*!< bit:  0..31  Stall cycles counted since last reset */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PDCA_PWSTALL1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PDCA_PWSTALL1_OFFSET        0x82C        /**< \brief (PDCA_PWSTALL1 offset) Channel 1 Write stall Cycles */
#define PDCA_PWSTALL1_RESETVALUE    _U_(0x00000000); /**< \brief (PDCA_PWSTALL1 reset_value) Channel 1 Write stall Cycles */

#define PDCA_PWSTALL1_STALL_Pos     0            /**< \brief (PDCA_PWSTALL1) Stall cycles counted since last reset */
#define PDCA_PWSTALL1_STALL_Msk     (_U_(0xFFFFFFFF) << PDCA_PWSTALL1_STALL_Pos)
#define PDCA_PWSTALL1_STALL(value)  (PDCA_PWSTALL1_STALL_Msk & ((value) << PDCA_PWSTALL1_STALL_Pos))
#define PDCA_PWSTALL1_MASK          _U_(0xFFFFFFFF) /**< \brief (PDCA_PWSTALL1) MASK Register */

/* -------- PDCA_PWLAT1 : (PDCA Offset: 0x830) (R/  32) Channel 1 Read Max Latency -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t LAT:16;           /*!< bit:  0..15  Maximum transfer initiation cycles counted since last reset */
    uint32_t :16;              /*!< bit: 16..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PDCA_PWLAT1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PDCA_PWLAT1_OFFSET          0x830        /**< \brief (PDCA_PWLAT1 offset) Channel 1 Read Max Latency */
#define PDCA_PWLAT1_RESETVALUE      _U_(0x00000000); /**< \brief (PDCA_PWLAT1 reset_value) Channel 1 Read Max Latency */

#define PDCA_PWLAT1_LAT_Pos         0            /**< \brief (PDCA_PWLAT1) Maximum transfer initiation cycles counted since last reset */
#define PDCA_PWLAT1_LAT_Msk         (_U_(0xFFFF) << PDCA_PWLAT1_LAT_Pos)
#define PDCA_PWLAT1_LAT(value)      (PDCA_PWLAT1_LAT_Msk & ((value) << PDCA_PWLAT1_LAT_Pos))
#define PDCA_PWLAT1_MASK            _U_(0x0000FFFF) /**< \brief (PDCA_PWLAT1) MASK Register */

/* -------- PDCA_VERSION : (PDCA Offset: 0x834) (R/  32) Version Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t VERSION:12;       /*!< bit:  0..11  Version Number                     */
    uint32_t :4;               /*!< bit: 12..15  Reserved                           */
    uint32_t VARIANT:4;        /*!< bit: 16..19  Variant Number                     */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PDCA_VERSION_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PDCA_VERSION_OFFSET         0x834        /**< \brief (PDCA_VERSION offset) Version Register */
#define PDCA_VERSION_RESETVALUE     _U_(0x00000124); /**< \brief (PDCA_VERSION reset_value) Version Register */

#define PDCA_VERSION_VERSION_Pos    0            /**< \brief (PDCA_VERSION) Version Number */
#define PDCA_VERSION_VERSION_Msk    (_U_(0xFFF) << PDCA_VERSION_VERSION_Pos)
#define PDCA_VERSION_VERSION(value) (PDCA_VERSION_VERSION_Msk & ((value) << PDCA_VERSION_VERSION_Pos))
#define PDCA_VERSION_VARIANT_Pos    16           /**< \brief (PDCA_VERSION) Variant Number */
#define PDCA_VERSION_VARIANT_Msk    (_U_(0xF) << PDCA_VERSION_VARIANT_Pos)
#define PDCA_VERSION_VARIANT(value) (PDCA_VERSION_VARIANT_Msk & ((value) << PDCA_VERSION_VARIANT_Pos))
#define PDCA_VERSION_MASK           _U_(0x000F0FFF) /**< \brief (PDCA_VERSION) MASK Register */

/** \brief PdcaChannel hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
 struct {
  __IO PDCA_MAR_Type             MAR;         /**< \brief Offset: 0x000 (R/W 32) Memory Address Register */
  __IO PDCA_PSR_Type             PSR;         /**< \brief Offset: 0x004 (R/W 32) Peripheral Select Register */
  __IO PDCA_TCR_Type             TCR;         /**< \brief Offset: 0x008 (R/W 32) Transfer Counter Register */
  __IO PDCA_MARR_Type            MARR;        /**< \brief Offset: 0x00C (R/W 32) Memory Address Reload Register */
  __IO PDCA_TCRR_Type            TCRR;        /**< \brief Offset: 0x010 (R/W 32) Transfer Counter Reload Register */
  __O  PDCA_CR_Type              CR;          /**< \brief Offset: 0x014 ( /W 32) Control Register */
  __IO PDCA_MR_Type              MR;          /**< \brief Offset: 0x018 (R/W 32) Mode Register */
  __I  PDCA_SR_Type              SR;          /**< \brief Offset: 0x01C (R/  32) Status Register */
  __O  PDCA_IER_Type             IER;         /**< \brief Offset: 0x020 ( /W 32) Interrupt Enable Register */
  __O  PDCA_IDR_Type             IDR;         /**< \brief Offset: 0x024 ( /W 32) Interrupt Disable Register */
  __I  PDCA_IMR_Type             IMR;         /**< \brief Offset: 0x028 (R/  32) Interrupt Mask Register */
  __I  PDCA_ISR_Type             ISR;         /**< \brief Offset: 0x02C (R/  32) Interrupt Status Register */
       RoReg8                    Reserved1[0x10];
 } bf;
 struct {
  RwReg   PDCA_MAR;           /**< \brief (PDCA Offset: 0x000) Memory Address Register */
  RwReg   PDCA_PSR;           /**< \brief (PDCA Offset: 0x004) Peripheral Select Register */
  RwReg   PDCA_TCR;           /**< \brief (PDCA Offset: 0x008) Transfer Counter Register */
  RwReg   PDCA_MARR;          /**< \brief (PDCA Offset: 0x00C) Memory Address Reload Register */
  RwReg   PDCA_TCRR;          /**< \brief (PDCA Offset: 0x010) Transfer Counter Reload Register */
  WoReg   PDCA_CR;            /**< \brief (PDCA Offset: 0x014) Control Register */
  RwReg   PDCA_MR;            /**< \brief (PDCA Offset: 0x018) Mode Register */
  RoReg   PDCA_SR;            /**< \brief (PDCA Offset: 0x01C) Status Register */
  WoReg   PDCA_IER;           /**< \brief (PDCA Offset: 0x020) Interrupt Enable Register */
  WoReg   PDCA_IDR;           /**< \brief (PDCA Offset: 0x024) Interrupt Disable Register */
  RoReg   PDCA_IMR;           /**< \brief (PDCA Offset: 0x028) Interrupt Mask Register */
  RoReg   PDCA_ISR;           /**< \brief (PDCA Offset: 0x02C) Interrupt Status Register */
  RoReg8  Reserved2[0x10];
 } reg;
} PdcaChannel;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/** \brief PDCA hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {
  __IO uint32_t Channel[16]; /**< \brief Offset: 0x000 PdcaChannel groups [CHANNEL_LENGTH] */
       RoReg8   Reserved1[0x400];
  __IO uint32_t PCONTROL;    /**< \brief Offset: 0x800 (R/W 32) Performance Control Register */
  __I  uint32_t PRDATA0;     /**< \brief Offset: 0x804 (R/  32) Channel 0 Read Data Cycles */
  __I  uint32_t PRSTALL0;    /**< \brief Offset: 0x808 (R/  32) Channel 0 Read Stall Cycles */
  __I  uint32_t PRLAT0;      /**< \brief Offset: 0x80C (R/  32) Channel 0 Read Max Latency */
  __I  uint32_t PWDATA0;     /**< \brief Offset: 0x810 (R/  32) Channel 0 Write Data Cycles */
  __I  uint32_t PWSTALL0;    /**< \brief Offset: 0x814 (R/  32) Channel 0 Write Stall Cycles */
  __I  uint32_t PWLAT0;      /**< \brief Offset: 0x818 (R/  32) Channel0 Write Max Latency */
  __I  uint32_t PRDATA1;     /**< \brief Offset: 0x81C (R/  32) Channel 1 Read Data Cycles */
  __I  uint32_t PRSTALL1;    /**< \brief Offset: 0x820 (R/  32) Channel Read Stall Cycles */
  __I  uint32_t PRLAT1;      /**< \brief Offset: 0x824 (R/  32) Channel 1 Read Max Latency */
  __I  uint32_t PWDATA1;     /**< \brief Offset: 0x828 (R/  32) Channel 1 Write Data Cycles */
  __I  uint32_t PWSTALL1;    /**< \brief Offset: 0x82C (R/  32) Channel 1 Write stall Cycles */
  __I  uint32_t PWLAT1;      /**< \brief Offset: 0x830 (R/  32) Channel 1 Read Max Latency */
  __I  uint32_t VERSION;     /**< \brief Offset: 0x834 (R/  32) Version Register */
} Pdca;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAM4L_PDCA_COMPONENT_ */
