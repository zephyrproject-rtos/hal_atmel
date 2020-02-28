/**
 * \file
 *
 * \brief Component description for BPM
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

#ifndef _SAM4L_BPM_COMPONENT_
#define _SAM4L_BPM_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR BPM */
/* ========================================================================== */
/** \addtogroup SAM4L_BPM Backup Power Manager */
/*@{*/

#define BPM_I7197
#define REV_BPM                     0x120

/* -------- BPM_IER : (BPM Offset: 0x00) ( /W 32) Interrupt Enable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t PSOK:1;           /*!< bit:      0  Power Scaling OK Interrupt Enable  */
    uint32_t :30;              /*!< bit:  1..30  Reserved                           */
    uint32_t AE:1;             /*!< bit:     31  Access Error Interrupt Enable      */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} BPM_IER_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define BPM_IER_OFFSET              0x00         /**< \brief (BPM_IER offset) Interrupt Enable Register */
#define BPM_IER_RESETVALUE          _U_(0x00000000); /**< \brief (BPM_IER reset_value) Interrupt Enable Register */

#define BPM_IER_PSOK_Pos            0            /**< \brief (BPM_IER) Power Scaling OK Interrupt Enable */
#define BPM_IER_PSOK                (_U_(0x1) << BPM_IER_PSOK_Pos)
#define BPM_IER_AE_Pos              31           /**< \brief (BPM_IER) Access Error Interrupt Enable */
#define BPM_IER_AE                  (_U_(0x1) << BPM_IER_AE_Pos)
#define BPM_IER_MASK                _U_(0x80000001) /**< \brief (BPM_IER) MASK Register */

/* -------- BPM_IDR : (BPM Offset: 0x04) ( /W 32) Interrupt Disable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t PSOK:1;           /*!< bit:      0  Power Scaling OK Interrupt Disable */
    uint32_t :30;              /*!< bit:  1..30  Reserved                           */
    uint32_t AE:1;             /*!< bit:     31  Access Error Interrupt Disable     */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} BPM_IDR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define BPM_IDR_OFFSET              0x04         /**< \brief (BPM_IDR offset) Interrupt Disable Register */
#define BPM_IDR_RESETVALUE          _U_(0x00000000); /**< \brief (BPM_IDR reset_value) Interrupt Disable Register */

#define BPM_IDR_PSOK_Pos            0            /**< \brief (BPM_IDR) Power Scaling OK Interrupt Disable */
#define BPM_IDR_PSOK                (_U_(0x1) << BPM_IDR_PSOK_Pos)
#define BPM_IDR_AE_Pos              31           /**< \brief (BPM_IDR) Access Error Interrupt Disable */
#define BPM_IDR_AE                  (_U_(0x1) << BPM_IDR_AE_Pos)
#define BPM_IDR_MASK                _U_(0x80000001) /**< \brief (BPM_IDR) MASK Register */

/* -------- BPM_IMR : (BPM Offset: 0x08) (R/  32) Interrupt Mask Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t PSOK:1;           /*!< bit:      0  Power Scaling OK Interrupt Mask    */
    uint32_t :30;              /*!< bit:  1..30  Reserved                           */
    uint32_t AE:1;             /*!< bit:     31  Access Error Interrupt Mask        */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} BPM_IMR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define BPM_IMR_OFFSET              0x08         /**< \brief (BPM_IMR offset) Interrupt Mask Register */
#define BPM_IMR_RESETVALUE          _U_(0x00000000); /**< \brief (BPM_IMR reset_value) Interrupt Mask Register */

#define BPM_IMR_PSOK_Pos            0            /**< \brief (BPM_IMR) Power Scaling OK Interrupt Mask */
#define BPM_IMR_PSOK                (_U_(0x1) << BPM_IMR_PSOK_Pos)
#define BPM_IMR_AE_Pos              31           /**< \brief (BPM_IMR) Access Error Interrupt Mask */
#define BPM_IMR_AE                  (_U_(0x1) << BPM_IMR_AE_Pos)
#define BPM_IMR_MASK                _U_(0x80000001) /**< \brief (BPM_IMR) MASK Register */

/* -------- BPM_ISR : (BPM Offset: 0x0C) (R/  32) Interrupt Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t PSOK:1;           /*!< bit:      0  Power Scaling OK Interrupt Status  */
    uint32_t :30;              /*!< bit:  1..30  Reserved                           */
    uint32_t AE:1;             /*!< bit:     31  Access Error Interrupt Status      */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} BPM_ISR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define BPM_ISR_OFFSET              0x0C         /**< \brief (BPM_ISR offset) Interrupt Status Register */
#define BPM_ISR_RESETVALUE          _U_(0x00000000); /**< \brief (BPM_ISR reset_value) Interrupt Status Register */

#define BPM_ISR_PSOK_Pos            0            /**< \brief (BPM_ISR) Power Scaling OK Interrupt Status */
#define BPM_ISR_PSOK                (_U_(0x1) << BPM_ISR_PSOK_Pos)
#define BPM_ISR_AE_Pos              31           /**< \brief (BPM_ISR) Access Error Interrupt Status */
#define BPM_ISR_AE                  (_U_(0x1) << BPM_ISR_AE_Pos)
#define BPM_ISR_MASK                _U_(0x80000001) /**< \brief (BPM_ISR) MASK Register */

/* -------- BPM_ICR : (BPM Offset: 0x10) ( /W 32) Interrupt Clear Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t PSOK:1;           /*!< bit:      0  Power Scaling OK Interrupt Status Clear */
    uint32_t :30;              /*!< bit:  1..30  Reserved                           */
    uint32_t AE:1;             /*!< bit:     31  Access Error Interrupt Status Clear */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} BPM_ICR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define BPM_ICR_OFFSET              0x10         /**< \brief (BPM_ICR offset) Interrupt Clear Register */
#define BPM_ICR_RESETVALUE          _U_(0x00000000); /**< \brief (BPM_ICR reset_value) Interrupt Clear Register */

#define BPM_ICR_PSOK_Pos            0            /**< \brief (BPM_ICR) Power Scaling OK Interrupt Status Clear */
#define BPM_ICR_PSOK                (_U_(0x1) << BPM_ICR_PSOK_Pos)
#define BPM_ICR_AE_Pos              31           /**< \brief (BPM_ICR) Access Error Interrupt Status Clear */
#define BPM_ICR_AE                  (_U_(0x1) << BPM_ICR_AE_Pos)
#define BPM_ICR_MASK                _U_(0x80000001) /**< \brief (BPM_ICR) MASK Register */

/* -------- BPM_SR : (BPM Offset: 0x14) (R/  32) Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t PSOK:1;           /*!< bit:      0  Power Scaling OK Status            */
    uint32_t :30;              /*!< bit:  1..30  Reserved                           */
    uint32_t AE:1;             /*!< bit:     31  Access Error                       */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} BPM_SR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define BPM_SR_OFFSET               0x14         /**< \brief (BPM_SR offset) Status Register */
#define BPM_SR_RESETVALUE           _U_(0x00000000); /**< \brief (BPM_SR reset_value) Status Register */

#define BPM_SR_PSOK_Pos             0            /**< \brief (BPM_SR) Power Scaling OK Status */
#define BPM_SR_PSOK                 (_U_(0x1) << BPM_SR_PSOK_Pos)
#define BPM_SR_AE_Pos               31           /**< \brief (BPM_SR) Access Error */
#define BPM_SR_AE                   (_U_(0x1) << BPM_SR_AE_Pos)
#define BPM_SR_MASK                 _U_(0x80000001) /**< \brief (BPM_SR) MASK Register */

/* -------- BPM_UNLOCK : (BPM Offset: 0x18) ( /W 32) Unlock Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t ADDR:10;          /*!< bit:  0.. 9  Unlock Address                     */
    uint32_t :14;              /*!< bit: 10..23  Reserved                           */
    uint32_t KEY:8;            /*!< bit: 24..31  Unlock Key                         */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} BPM_UNLOCK_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define BPM_UNLOCK_OFFSET           0x18         /**< \brief (BPM_UNLOCK offset) Unlock Register */
#define BPM_UNLOCK_RESETVALUE       _U_(0x00000000); /**< \brief (BPM_UNLOCK reset_value) Unlock Register */

#define BPM_UNLOCK_ADDR_Pos         0            /**< \brief (BPM_UNLOCK) Unlock Address */
#define BPM_UNLOCK_ADDR_Msk         (_U_(0x3FF) << BPM_UNLOCK_ADDR_Pos)
#define BPM_UNLOCK_ADDR(value)      (BPM_UNLOCK_ADDR_Msk & ((value) << BPM_UNLOCK_ADDR_Pos))
#define BPM_UNLOCK_KEY_Pos          24           /**< \brief (BPM_UNLOCK) Unlock Key */
#define BPM_UNLOCK_KEY_Msk          (_U_(0xFF) << BPM_UNLOCK_KEY_Pos)
#define BPM_UNLOCK_KEY(value)       (BPM_UNLOCK_KEY_Msk & ((value) << BPM_UNLOCK_KEY_Pos))
#define BPM_UNLOCK_MASK             _U_(0xFF0003FF) /**< \brief (BPM_UNLOCK) MASK Register */

/* -------- BPM_PMCON : (BPM Offset: 0x1C) (R/W 32) Power Mode Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t PS:2;             /*!< bit:  0.. 1  Power Scaling Configuration Value  */
    uint32_t PSCREQ:1;         /*!< bit:      2  Power Scaling Change Request       */
    uint32_t PSCM:1;           /*!< bit:      3  Power Scaling Change Mode          */
    uint32_t :4;               /*!< bit:  4.. 7  Reserved                           */
    uint32_t BKUP:1;           /*!< bit:      8  BACKUP Mode                        */
    uint32_t RET:1;            /*!< bit:      9  RETENTION Mode                     */
    uint32_t :2;               /*!< bit: 10..11  Reserved                           */
    uint32_t SLEEP:2;          /*!< bit: 12..13  SLEEP mode Configuration           */
    uint32_t :2;               /*!< bit: 14..15  Reserved                           */
    uint32_t CK32S:1;          /*!< bit:     16  32Khz-1Khz Clock Source Selection  */
    uint32_t :7;               /*!< bit: 17..23  Reserved                           */
    uint32_t FASTWKUP:1;       /*!< bit:     24  Fast Wakeup                        */
    uint32_t :7;               /*!< bit: 25..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} BPM_PMCON_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define BPM_PMCON_OFFSET            0x1C         /**< \brief (BPM_PMCON offset) Power Mode Control Register */
#define BPM_PMCON_RESETVALUE        _U_(0x00000000); /**< \brief (BPM_PMCON reset_value) Power Mode Control Register */

#define BPM_PMCON_PS_Pos            0            /**< \brief (BPM_PMCON) Power Scaling Configuration Value */
#define BPM_PMCON_PS_Msk            (_U_(0x3) << BPM_PMCON_PS_Pos)
#define BPM_PMCON_PS(value)         (BPM_PMCON_PS_Msk & ((value) << BPM_PMCON_PS_Pos))
#define BPM_PMCON_PSCREQ_Pos        2            /**< \brief (BPM_PMCON) Power Scaling Change Request */
#define BPM_PMCON_PSCREQ            (_U_(0x1) << BPM_PMCON_PSCREQ_Pos)
#define BPM_PMCON_PSCM_Pos          3            /**< \brief (BPM_PMCON) Power Scaling Change Mode */
#define BPM_PMCON_PSCM              (_U_(0x1) << BPM_PMCON_PSCM_Pos)
#define BPM_PMCON_BKUP_Pos          8            /**< \brief (BPM_PMCON) BACKUP Mode */
#define BPM_PMCON_BKUP              (_U_(0x1) << BPM_PMCON_BKUP_Pos)
#define BPM_PMCON_RET_Pos           9            /**< \brief (BPM_PMCON) RETENTION Mode */
#define BPM_PMCON_RET               (_U_(0x1) << BPM_PMCON_RET_Pos)
#define BPM_PMCON_SLEEP_Pos         12           /**< \brief (BPM_PMCON) SLEEP mode Configuration */
#define BPM_PMCON_SLEEP_Msk         (_U_(0x3) << BPM_PMCON_SLEEP_Pos)
#define BPM_PMCON_SLEEP(value)      (BPM_PMCON_SLEEP_Msk & ((value) << BPM_PMCON_SLEEP_Pos))
#define BPM_PMCON_CK32S_Pos         16           /**< \brief (BPM_PMCON) 32Khz-1Khz Clock Source Selection */
#define BPM_PMCON_CK32S             (_U_(0x1) << BPM_PMCON_CK32S_Pos)
#define BPM_PMCON_FASTWKUP_Pos      24           /**< \brief (BPM_PMCON) Fast Wakeup */
#define BPM_PMCON_FASTWKUP          (_U_(0x1) << BPM_PMCON_FASTWKUP_Pos)
#define BPM_PMCON_MASK              _U_(0x0101330F) /**< \brief (BPM_PMCON) MASK Register */

/* -------- BPM_BKUPWCAUSE : (BPM Offset: 0x28) (R/  32) Backup Wake up Cause Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  uint32_t reg;                /*!< Type      used for register access              */
} BPM_BKUPWCAUSE_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define BPM_BKUPWCAUSE_OFFSET       0x28         /**< \brief (BPM_BKUPWCAUSE offset) Backup Wake up Cause Register */
#define BPM_BKUPWCAUSE_RESETVALUE   _U_(0x00000000); /**< \brief (BPM_BKUPWCAUSE reset_value) Backup Wake up Cause Register */
#define BPM_BKUPWCAUSE_MASK         _U_(0xFFFFFFFF) /**< \brief (BPM_BKUPWCAUSE) MASK Register */

/* -------- BPM_BKUPWEN : (BPM Offset: 0x2C) (R/W 32) Backup Wake up Enable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  uint32_t reg;                /*!< Type      used for register access              */
} BPM_BKUPWEN_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define BPM_BKUPWEN_OFFSET          0x2C         /**< \brief (BPM_BKUPWEN offset) Backup Wake up Enable Register */
#define BPM_BKUPWEN_RESETVALUE      _U_(0x00000000); /**< \brief (BPM_BKUPWEN reset_value) Backup Wake up Enable Register */
#define BPM_BKUPWEN_MASK            _U_(0xFFFFFFFF) /**< \brief (BPM_BKUPWEN) MASK Register */

/* -------- BPM_BKUPPMUX : (BPM Offset: 0x30) (R/W 32) Backup Pin Muxing Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t BKUPPMUX:9;       /*!< bit:  0.. 8  Backup Pin Muxing                  */
    uint32_t :23;              /*!< bit:  9..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} BPM_BKUPPMUX_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define BPM_BKUPPMUX_OFFSET         0x30         /**< \brief (BPM_BKUPPMUX offset) Backup Pin Muxing Register */
#define BPM_BKUPPMUX_RESETVALUE     _U_(0x00000000); /**< \brief (BPM_BKUPPMUX reset_value) Backup Pin Muxing Register */

#define BPM_BKUPPMUX_BKUPPMUX_Pos   0            /**< \brief (BPM_BKUPPMUX) Backup Pin Muxing */
#define BPM_BKUPPMUX_BKUPPMUX_Msk   (_U_(0x1FF) << BPM_BKUPPMUX_BKUPPMUX_Pos)
#define BPM_BKUPPMUX_BKUPPMUX(value) (BPM_BKUPPMUX_BKUPPMUX_Msk & ((value) << BPM_BKUPPMUX_BKUPPMUX_Pos))
#define BPM_BKUPPMUX_MASK           _U_(0x000001FF) /**< \brief (BPM_BKUPPMUX) MASK Register */

/* -------- BPM_IORET : (BPM Offset: 0x34) (R/W 32) Input Output Retention Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RET:1;            /*!< bit:      0  Retention on I/O lines after waking up from the BACKUP mode */
    uint32_t :31;              /*!< bit:  1..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} BPM_IORET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define BPM_IORET_OFFSET            0x34         /**< \brief (BPM_IORET offset) Input Output Retention Register */
#define BPM_IORET_RESETVALUE        _U_(0x00000000); /**< \brief (BPM_IORET reset_value) Input Output Retention Register */

#define BPM_IORET_RET_Pos           0            /**< \brief (BPM_IORET) Retention on I/O lines after waking up from the BACKUP mode */
#define BPM_IORET_RET               (_U_(0x1) << BPM_IORET_RET_Pos)
#define BPM_IORET_MASK              _U_(0x00000001) /**< \brief (BPM_IORET) MASK Register */

/* -------- BPM_BPR : (BPM Offset: 0x40) (R/W 32) Bypass Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RUNPSPB:1;        /*!< bit:      0  Run Mode Power Scaling Preset Bypass */
    uint32_t PSMPSPB:1;        /*!< bit:      1  Power Save Mode Power Scaling Preset Bypass */
    uint32_t SEQSTN:1;         /*!< bit:      2  Sequencial Startup from ULP (Active Low) */
    uint32_t PSBTD:1;          /*!< bit:      3  Power Scaling Bias Timing Disable  */
    uint32_t PSHFD:1;          /*!< bit:      4  Power Scaling Halt Flash Until VREGOK Disable */
    uint32_t DLYRSTD:1;        /*!< bit:      5  Delaying Reset Disable             */
    uint32_t BIASSEN:1;        /*!< bit:      6  Bias Switch Enable                 */
    uint32_t LATSEN:1;         /*!< bit:      7  Latdel Switch Enable               */
    uint32_t BOD18CONT:1;      /*!< bit:      8  BOD18 in continuous mode not disabled in WAIT/RET/BACKUP modes */
    uint32_t POBS:1;           /*!< bit:      9  Pico Uart Observability            */
    uint32_t FFFW:1;           /*!< bit:     10  Force Flash Fast Wakeup            */
    uint32_t FBRDYEN:1;        /*!< bit:     11  Flash Bias Ready Enable            */
    uint32_t FVREFSEN:1;       /*!< bit:     12  Flash Vref Switch Enable           */
    uint32_t :19;              /*!< bit: 13..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} BPM_BPR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define BPM_BPR_OFFSET              0x40         /**< \brief (BPM_BPR offset) Bypass Register */
#define BPM_BPR_RESETVALUE          _U_(0x00000000); /**< \brief (BPM_BPR reset_value) Bypass Register */

#define BPM_BPR_RUNPSPB_Pos         0            /**< \brief (BPM_BPR) Run Mode Power Scaling Preset Bypass */
#define BPM_BPR_RUNPSPB             (_U_(0x1) << BPM_BPR_RUNPSPB_Pos)
#define BPM_BPR_PSMPSPB_Pos         1            /**< \brief (BPM_BPR) Power Save Mode Power Scaling Preset Bypass */
#define BPM_BPR_PSMPSPB             (_U_(0x1) << BPM_BPR_PSMPSPB_Pos)
#define BPM_BPR_SEQSTN_Pos          2            /**< \brief (BPM_BPR) Sequencial Startup from ULP (Active Low) */
#define BPM_BPR_SEQSTN              (_U_(0x1) << BPM_BPR_SEQSTN_Pos)
#define BPM_BPR_PSBTD_Pos           3            /**< \brief (BPM_BPR) Power Scaling Bias Timing Disable */
#define BPM_BPR_PSBTD               (_U_(0x1) << BPM_BPR_PSBTD_Pos)
#define BPM_BPR_PSHFD_Pos           4            /**< \brief (BPM_BPR) Power Scaling Halt Flash Until VREGOK Disable */
#define BPM_BPR_PSHFD               (_U_(0x1) << BPM_BPR_PSHFD_Pos)
#define BPM_BPR_DLYRSTD_Pos         5            /**< \brief (BPM_BPR) Delaying Reset Disable */
#define BPM_BPR_DLYRSTD             (_U_(0x1) << BPM_BPR_DLYRSTD_Pos)
#define BPM_BPR_BIASSEN_Pos         6            /**< \brief (BPM_BPR) Bias Switch Enable */
#define BPM_BPR_BIASSEN             (_U_(0x1) << BPM_BPR_BIASSEN_Pos)
#define BPM_BPR_LATSEN_Pos          7            /**< \brief (BPM_BPR) Latdel Switch Enable */
#define BPM_BPR_LATSEN              (_U_(0x1) << BPM_BPR_LATSEN_Pos)
#define BPM_BPR_BOD18CONT_Pos       8            /**< \brief (BPM_BPR) BOD18 in continuous mode not disabled in WAIT/RET/BACKUP modes */
#define BPM_BPR_BOD18CONT           (_U_(0x1) << BPM_BPR_BOD18CONT_Pos)
#define BPM_BPR_POBS_Pos            9            /**< \brief (BPM_BPR) Pico Uart Observability */
#define BPM_BPR_POBS                (_U_(0x1) << BPM_BPR_POBS_Pos)
#define BPM_BPR_FFFW_Pos            10           /**< \brief (BPM_BPR) Force Flash Fast Wakeup */
#define BPM_BPR_FFFW                (_U_(0x1) << BPM_BPR_FFFW_Pos)
#define BPM_BPR_FBRDYEN_Pos         11           /**< \brief (BPM_BPR) Flash Bias Ready Enable */
#define BPM_BPR_FBRDYEN             (_U_(0x1) << BPM_BPR_FBRDYEN_Pos)
#define BPM_BPR_FVREFSEN_Pos        12           /**< \brief (BPM_BPR) Flash Vref Switch Enable */
#define BPM_BPR_FVREFSEN            (_U_(0x1) << BPM_BPR_FVREFSEN_Pos)
#define BPM_BPR_MASK                _U_(0x00001FFF) /**< \brief (BPM_BPR) MASK Register */

/* -------- BPM_FWRUNPS : (BPM Offset: 0x44) (R/  32) Factory Word Run PS Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t REGLEVEL:4;       /*!< bit:  0.. 3  Regulator Voltage Level            */
    uint32_t REGTYPE:2;        /*!< bit:  4.. 5  Regulator Type                     */
    uint32_t REFTYPE:2;        /*!< bit:  6.. 7  Reference Type                     */
    uint32_t FLASHLATDEL:5;    /*!< bit:  8..12  Flash Latch Delay Value            */
    uint32_t FLASHBIAS:4;      /*!< bit: 13..16  Flash Bias Value                   */
    uint32_t FPPW:1;           /*!< bit:     17  Flash Pico Power Mode              */
    uint32_t RC115:7;          /*!< bit: 18..24  RC 115KHZ Calibration Value        */
    uint32_t RCFAST:7;         /*!< bit: 25..31  RCFAST Calibration Value           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} BPM_FWRUNPS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define BPM_FWRUNPS_OFFSET          0x44         /**< \brief (BPM_FWRUNPS offset) Factory Word Run PS Register */

#define BPM_FWRUNPS_REGLEVEL_Pos    0            /**< \brief (BPM_FWRUNPS) Regulator Voltage Level */
#define BPM_FWRUNPS_REGLEVEL_Msk    (_U_(0xF) << BPM_FWRUNPS_REGLEVEL_Pos)
#define BPM_FWRUNPS_REGLEVEL(value) (BPM_FWRUNPS_REGLEVEL_Msk & ((value) << BPM_FWRUNPS_REGLEVEL_Pos))
#define BPM_FWRUNPS_REGTYPE_Pos     4            /**< \brief (BPM_FWRUNPS) Regulator Type */
#define BPM_FWRUNPS_REGTYPE_Msk     (_U_(0x3) << BPM_FWRUNPS_REGTYPE_Pos)
#define BPM_FWRUNPS_REGTYPE(value)  (BPM_FWRUNPS_REGTYPE_Msk & ((value) << BPM_FWRUNPS_REGTYPE_Pos))
#define   BPM_FWRUNPS_REGTYPE_NORMAL_Val  _U_(0x0)   /**< \brief (BPM_FWRUNPS)  */
#define   BPM_FWRUNPS_REGTYPE_LP_Val      _U_(0x1)   /**< \brief (BPM_FWRUNPS)  */
#define   BPM_FWRUNPS_REGTYPE_XULP_Val    _U_(0x2)   /**< \brief (BPM_FWRUNPS)  */
#define BPM_FWRUNPS_REGTYPE_NORMAL  (BPM_FWRUNPS_REGTYPE_NORMAL_Val << BPM_FWRUNPS_REGTYPE_Pos)
#define BPM_FWRUNPS_REGTYPE_LP      (BPM_FWRUNPS_REGTYPE_LP_Val    << BPM_FWRUNPS_REGTYPE_Pos)
#define BPM_FWRUNPS_REGTYPE_XULP    (BPM_FWRUNPS_REGTYPE_XULP_Val  << BPM_FWRUNPS_REGTYPE_Pos)
#define BPM_FWRUNPS_REFTYPE_Pos     6            /**< \brief (BPM_FWRUNPS) Reference Type */
#define BPM_FWRUNPS_REFTYPE_Msk     (_U_(0x3) << BPM_FWRUNPS_REFTYPE_Pos)
#define BPM_FWRUNPS_REFTYPE(value)  (BPM_FWRUNPS_REFTYPE_Msk & ((value) << BPM_FWRUNPS_REFTYPE_Pos))
#define   BPM_FWRUNPS_REFTYPE_BOTH_Val    _U_(0x0)   /**< \brief (BPM_FWRUNPS)  */
#define   BPM_FWRUNPS_REFTYPE_BG_Val      _U_(0x1)   /**< \brief (BPM_FWRUNPS)  */
#define   BPM_FWRUNPS_REFTYPE_LPBG_Val    _U_(0x2)   /**< \brief (BPM_FWRUNPS)  */
#define   BPM_FWRUNPS_REFTYPE_INTERNAL_Val _U_(0x3)   /**< \brief (BPM_FWRUNPS)  */
#define BPM_FWRUNPS_REFTYPE_BOTH    (BPM_FWRUNPS_REFTYPE_BOTH_Val  << BPM_FWRUNPS_REFTYPE_Pos)
#define BPM_FWRUNPS_REFTYPE_BG      (BPM_FWRUNPS_REFTYPE_BG_Val    << BPM_FWRUNPS_REFTYPE_Pos)
#define BPM_FWRUNPS_REFTYPE_LPBG    (BPM_FWRUNPS_REFTYPE_LPBG_Val  << BPM_FWRUNPS_REFTYPE_Pos)
#define BPM_FWRUNPS_REFTYPE_INTERNAL (BPM_FWRUNPS_REFTYPE_INTERNAL_Val << BPM_FWRUNPS_REFTYPE_Pos)
#define BPM_FWRUNPS_FLASHLATDEL_Pos 8            /**< \brief (BPM_FWRUNPS) Flash Latch Delay Value */
#define BPM_FWRUNPS_FLASHLATDEL_Msk (_U_(0x1F) << BPM_FWRUNPS_FLASHLATDEL_Pos)
#define BPM_FWRUNPS_FLASHLATDEL(value) (BPM_FWRUNPS_FLASHLATDEL_Msk & ((value) << BPM_FWRUNPS_FLASHLATDEL_Pos))
#define BPM_FWRUNPS_FLASHBIAS_Pos   13           /**< \brief (BPM_FWRUNPS) Flash Bias Value */
#define BPM_FWRUNPS_FLASHBIAS_Msk   (_U_(0xF) << BPM_FWRUNPS_FLASHBIAS_Pos)
#define BPM_FWRUNPS_FLASHBIAS(value) (BPM_FWRUNPS_FLASHBIAS_Msk & ((value) << BPM_FWRUNPS_FLASHBIAS_Pos))
#define BPM_FWRUNPS_FPPW_Pos        17           /**< \brief (BPM_FWRUNPS) Flash Pico Power Mode */
#define BPM_FWRUNPS_FPPW            (_U_(0x1) << BPM_FWRUNPS_FPPW_Pos)
#define BPM_FWRUNPS_RC115_Pos       18           /**< \brief (BPM_FWRUNPS) RC 115KHZ Calibration Value */
#define BPM_FWRUNPS_RC115_Msk       (_U_(0x7F) << BPM_FWRUNPS_RC115_Pos)
#define BPM_FWRUNPS_RC115(value)    (BPM_FWRUNPS_RC115_Msk & ((value) << BPM_FWRUNPS_RC115_Pos))
#define BPM_FWRUNPS_RCFAST_Pos      25           /**< \brief (BPM_FWRUNPS) RCFAST Calibration Value */
#define BPM_FWRUNPS_RCFAST_Msk      (_U_(0x7F) << BPM_FWRUNPS_RCFAST_Pos)
#define BPM_FWRUNPS_RCFAST(value)   (BPM_FWRUNPS_RCFAST_Msk & ((value) << BPM_FWRUNPS_RCFAST_Pos))
#define BPM_FWRUNPS_MASK            _U_(0xFFFFFFFF) /**< \brief (BPM_FWRUNPS) MASK Register */

/* -------- BPM_FWPSAVEPS : (BPM Offset: 0x48) (R/  32) Factory Word Power Save PS Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t WREGLEVEL:4;      /*!< bit:  0.. 3  Wait mode Regulator Level          */
    uint32_t WBIAS:4;          /*!< bit:  4.. 7  Bias in wait mode                  */
    uint32_t WLATDEL:5;        /*!< bit:  8..12  Flash Latdel in wait mode          */
    uint32_t RREGLEVEL:4;      /*!< bit: 13..16  Retention mode Regulator Level     */
    uint32_t RBIAS:4;          /*!< bit: 17..20  Bias in Retention mode             */
    uint32_t RLATDEL:5;        /*!< bit: 21..25  Flash Latdel in Retention mode     */
    uint32_t BREGLEVEL:4;      /*!< bit: 26..29  Backup mode Regulator Level        */
    uint32_t POR18DIS:1;       /*!< bit:     30  POR 18 Disable                     */
    uint32_t FWSAS:1;          /*!< bit:     31  Flash Wait State Automatic Switching */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} BPM_FWPSAVEPS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define BPM_FWPSAVEPS_OFFSET        0x48         /**< \brief (BPM_FWPSAVEPS offset) Factory Word Power Save PS Register */

#define BPM_FWPSAVEPS_WREGLEVEL_Pos 0            /**< \brief (BPM_FWPSAVEPS) Wait mode Regulator Level */
#define BPM_FWPSAVEPS_WREGLEVEL_Msk (_U_(0xF) << BPM_FWPSAVEPS_WREGLEVEL_Pos)
#define BPM_FWPSAVEPS_WREGLEVEL(value) (BPM_FWPSAVEPS_WREGLEVEL_Msk & ((value) << BPM_FWPSAVEPS_WREGLEVEL_Pos))
#define BPM_FWPSAVEPS_WBIAS_Pos     4            /**< \brief (BPM_FWPSAVEPS) Bias in wait mode */
#define BPM_FWPSAVEPS_WBIAS_Msk     (_U_(0xF) << BPM_FWPSAVEPS_WBIAS_Pos)
#define BPM_FWPSAVEPS_WBIAS(value)  (BPM_FWPSAVEPS_WBIAS_Msk & ((value) << BPM_FWPSAVEPS_WBIAS_Pos))
#define BPM_FWPSAVEPS_WLATDEL_Pos   8            /**< \brief (BPM_FWPSAVEPS) Flash Latdel in wait mode */
#define BPM_FWPSAVEPS_WLATDEL_Msk   (_U_(0x1F) << BPM_FWPSAVEPS_WLATDEL_Pos)
#define BPM_FWPSAVEPS_WLATDEL(value) (BPM_FWPSAVEPS_WLATDEL_Msk & ((value) << BPM_FWPSAVEPS_WLATDEL_Pos))
#define BPM_FWPSAVEPS_RREGLEVEL_Pos 13           /**< \brief (BPM_FWPSAVEPS) Retention mode Regulator Level */
#define BPM_FWPSAVEPS_RREGLEVEL_Msk (_U_(0xF) << BPM_FWPSAVEPS_RREGLEVEL_Pos)
#define BPM_FWPSAVEPS_RREGLEVEL(value) (BPM_FWPSAVEPS_RREGLEVEL_Msk & ((value) << BPM_FWPSAVEPS_RREGLEVEL_Pos))
#define BPM_FWPSAVEPS_RBIAS_Pos     17           /**< \brief (BPM_FWPSAVEPS) Bias in Retention mode */
#define BPM_FWPSAVEPS_RBIAS_Msk     (_U_(0xF) << BPM_FWPSAVEPS_RBIAS_Pos)
#define BPM_FWPSAVEPS_RBIAS(value)  (BPM_FWPSAVEPS_RBIAS_Msk & ((value) << BPM_FWPSAVEPS_RBIAS_Pos))
#define BPM_FWPSAVEPS_RLATDEL_Pos   21           /**< \brief (BPM_FWPSAVEPS) Flash Latdel in Retention mode */
#define BPM_FWPSAVEPS_RLATDEL_Msk   (_U_(0x1F) << BPM_FWPSAVEPS_RLATDEL_Pos)
#define BPM_FWPSAVEPS_RLATDEL(value) (BPM_FWPSAVEPS_RLATDEL_Msk & ((value) << BPM_FWPSAVEPS_RLATDEL_Pos))
#define BPM_FWPSAVEPS_BREGLEVEL_Pos 26           /**< \brief (BPM_FWPSAVEPS) Backup mode Regulator Level */
#define BPM_FWPSAVEPS_BREGLEVEL_Msk (_U_(0xF) << BPM_FWPSAVEPS_BREGLEVEL_Pos)
#define BPM_FWPSAVEPS_BREGLEVEL(value) (BPM_FWPSAVEPS_BREGLEVEL_Msk & ((value) << BPM_FWPSAVEPS_BREGLEVEL_Pos))
#define BPM_FWPSAVEPS_POR18DIS_Pos  30           /**< \brief (BPM_FWPSAVEPS) POR 18 Disable */
#define BPM_FWPSAVEPS_POR18DIS      (_U_(0x1) << BPM_FWPSAVEPS_POR18DIS_Pos)
#define BPM_FWPSAVEPS_FWSAS_Pos     31           /**< \brief (BPM_FWPSAVEPS) Flash Wait State Automatic Switching */
#define BPM_FWPSAVEPS_FWSAS         (_U_(0x1) << BPM_FWPSAVEPS_FWSAS_Pos)
#define BPM_FWPSAVEPS_MASK          _U_(0xFFFFFFFF) /**< \brief (BPM_FWPSAVEPS) MASK Register */

/* -------- BPM_VERSION : (BPM Offset: 0xFC) (R/  32) Version Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t VERSION:12;       /*!< bit:  0..11  Version Number                     */
    uint32_t :4;               /*!< bit: 12..15  Reserved                           */
    uint32_t VARIANT:4;        /*!< bit: 16..19  Variant Number                     */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} BPM_VERSION_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define BPM_VERSION_OFFSET          0xFC         /**< \brief (BPM_VERSION offset) Version Register */
#define BPM_VERSION_RESETVALUE      _U_(0x00000120); /**< \brief (BPM_VERSION reset_value) Version Register */

#define BPM_VERSION_VERSION_Pos     0            /**< \brief (BPM_VERSION) Version Number */
#define BPM_VERSION_VERSION_Msk     (_U_(0xFFF) << BPM_VERSION_VERSION_Pos)
#define BPM_VERSION_VERSION(value)  (BPM_VERSION_VERSION_Msk & ((value) << BPM_VERSION_VERSION_Pos))
#define BPM_VERSION_VARIANT_Pos     16           /**< \brief (BPM_VERSION) Variant Number */
#define BPM_VERSION_VARIANT_Msk     (_U_(0xF) << BPM_VERSION_VARIANT_Pos)
#define BPM_VERSION_VARIANT(value)  (BPM_VERSION_VARIANT_Msk & ((value) << BPM_VERSION_VARIANT_Pos))
#define BPM_VERSION_MASK            _U_(0x000F0FFF) /**< \brief (BPM_VERSION) MASK Register */

/** \brief BPM hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {
  __O  uint32_t IER;         /**< \brief Offset: 0x00 ( /W 32) Interrupt Enable Register */
  __O  uint32_t IDR;         /**< \brief Offset: 0x04 ( /W 32) Interrupt Disable Register */
  __I  uint32_t IMR;         /**< \brief Offset: 0x08 (R/  32) Interrupt Mask Register */
  __I  uint32_t ISR;         /**< \brief Offset: 0x0C (R/  32) Interrupt Status Register */
  __O  uint32_t ICR;         /**< \brief Offset: 0x10 ( /W 32) Interrupt Clear Register */
  __I  uint32_t SR;          /**< \brief Offset: 0x14 (R/  32) Status Register */
  __O  uint32_t UNLOCK;      /**< \brief Offset: 0x18 ( /W 32) Unlock Register */
  __IO uint32_t PMCON;       /**< \brief Offset: 0x1C (R/W 32) Power Mode Control Register */
       RoReg8   Reserved1[0x8];
  __I  uint32_t BKUPWCAUSE;  /**< \brief Offset: 0x28 (R/  32) Backup Wake up Cause Register */
  __IO uint32_t BKUPWEN;     /**< \brief Offset: 0x2C (R/W 32) Backup Wake up Enable Register */
  __IO uint32_t BKUPPMUX;    /**< \brief Offset: 0x30 (R/W 32) Backup Pin Muxing Register */
  __IO uint32_t IORET;       /**< \brief Offset: 0x34 (R/W 32) Input Output Retention Register */
       RoReg8   Reserved2[0x8];
  __IO uint32_t BPR;         /**< \brief Offset: 0x40 (R/W 32) Bypass Register */
  __I  uint32_t FWRUNPS;     /**< \brief Offset: 0x44 (R/  32) Factory Word Run PS Register */
  __I  uint32_t FWPSAVEPS;   /**< \brief Offset: 0x48 (R/  32) Factory Word Power Save PS Register */
       RoReg8   Reserved3[0xB0];
  __I  uint32_t VERSION;     /**< \brief Offset: 0xFC (R/  32) Version Register */
} Bpm;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAM4L_BPM_COMPONENT_ */
