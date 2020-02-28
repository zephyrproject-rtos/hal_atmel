/**
 * \file
 *
 * \brief Component description for LCDCA
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

#ifndef _SAM4L_LCDCA_COMPONENT_
#define _SAM4L_LCDCA_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR LCDCA */
/* ========================================================================== */
/** \addtogroup SAM4L_LCDCA LCD Controller */
/*@{*/

#define LCDCA_I7572
#define REV_LCDCA                   0x100

/* -------- LCDCA_CR : (LCDCA Offset: 0x00) ( /W 32) Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DIS:1;            /*!< bit:      0  Disable                            */
    uint32_t EN:1;             /*!< bit:      1  Enable                             */
    uint32_t FC0DIS:1;         /*!< bit:      2  Frame Counter 0 Disable            */
    uint32_t FC0EN:1;          /*!< bit:      3  Frame Counter 0 Enable             */
    uint32_t FC1DIS:1;         /*!< bit:      4  Frame Counter 1 Disable            */
    uint32_t FC1EN:1;          /*!< bit:      5  Frame Counter 1 Enable             */
    uint32_t FC2DIS:1;         /*!< bit:      6  Frame Counter 2 Disable            */
    uint32_t FC2EN:1;          /*!< bit:      7  Frame Counter 2 Enable             */
    uint32_t CDM:1;            /*!< bit:      8  Clear Display Memory               */
    uint32_t WDIS:1;           /*!< bit:      9  Wake up Disable                    */
    uint32_t WEN:1;            /*!< bit:     10  Wake up Enable                     */
    uint32_t BSTART:1;         /*!< bit:     11  Blinking Start                     */
    uint32_t BSTOP:1;          /*!< bit:     12  Blinking Stop                      */
    uint32_t CSTART:1;         /*!< bit:     13  Circular Shift Start               */
    uint32_t CSTOP:1;          /*!< bit:     14  Circular Shift Stop                */
    uint32_t :17;              /*!< bit: 15..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} LCDCA_CR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDCA_CR_OFFSET             0x00         /**< \brief (LCDCA_CR offset) Control Register */
#define LCDCA_CR_RESETVALUE         _U_(0x00000000); /**< \brief (LCDCA_CR reset_value) Control Register */

#define LCDCA_CR_DIS_Pos            0            /**< \brief (LCDCA_CR) Disable */
#define LCDCA_CR_DIS                (_U_(0x1) << LCDCA_CR_DIS_Pos)
#define LCDCA_CR_EN_Pos             1            /**< \brief (LCDCA_CR) Enable */
#define LCDCA_CR_EN                 (_U_(0x1) << LCDCA_CR_EN_Pos)
#define LCDCA_CR_FC0DIS_Pos         2            /**< \brief (LCDCA_CR) Frame Counter 0 Disable */
#define LCDCA_CR_FC0DIS             (_U_(0x1) << LCDCA_CR_FC0DIS_Pos)
#define LCDCA_CR_FC0EN_Pos          3            /**< \brief (LCDCA_CR) Frame Counter 0 Enable */
#define LCDCA_CR_FC0EN              (_U_(0x1) << LCDCA_CR_FC0EN_Pos)
#define LCDCA_CR_FC1DIS_Pos         4            /**< \brief (LCDCA_CR) Frame Counter 1 Disable */
#define LCDCA_CR_FC1DIS             (_U_(0x1) << LCDCA_CR_FC1DIS_Pos)
#define LCDCA_CR_FC1EN_Pos          5            /**< \brief (LCDCA_CR) Frame Counter 1 Enable */
#define LCDCA_CR_FC1EN              (_U_(0x1) << LCDCA_CR_FC1EN_Pos)
#define LCDCA_CR_FC2DIS_Pos         6            /**< \brief (LCDCA_CR) Frame Counter 2 Disable */
#define LCDCA_CR_FC2DIS             (_U_(0x1) << LCDCA_CR_FC2DIS_Pos)
#define LCDCA_CR_FC2EN_Pos          7            /**< \brief (LCDCA_CR) Frame Counter 2 Enable */
#define LCDCA_CR_FC2EN              (_U_(0x1) << LCDCA_CR_FC2EN_Pos)
#define LCDCA_CR_CDM_Pos            8            /**< \brief (LCDCA_CR) Clear Display Memory */
#define LCDCA_CR_CDM                (_U_(0x1) << LCDCA_CR_CDM_Pos)
#define LCDCA_CR_WDIS_Pos           9            /**< \brief (LCDCA_CR) Wake up Disable */
#define LCDCA_CR_WDIS               (_U_(0x1) << LCDCA_CR_WDIS_Pos)
#define LCDCA_CR_WEN_Pos            10           /**< \brief (LCDCA_CR) Wake up Enable */
#define LCDCA_CR_WEN                (_U_(0x1) << LCDCA_CR_WEN_Pos)
#define LCDCA_CR_BSTART_Pos         11           /**< \brief (LCDCA_CR) Blinking Start */
#define LCDCA_CR_BSTART             (_U_(0x1) << LCDCA_CR_BSTART_Pos)
#define LCDCA_CR_BSTOP_Pos          12           /**< \brief (LCDCA_CR) Blinking Stop */
#define LCDCA_CR_BSTOP              (_U_(0x1) << LCDCA_CR_BSTOP_Pos)
#define LCDCA_CR_CSTART_Pos         13           /**< \brief (LCDCA_CR) Circular Shift Start */
#define LCDCA_CR_CSTART             (_U_(0x1) << LCDCA_CR_CSTART_Pos)
#define LCDCA_CR_CSTOP_Pos          14           /**< \brief (LCDCA_CR) Circular Shift Stop */
#define LCDCA_CR_CSTOP              (_U_(0x1) << LCDCA_CR_CSTOP_Pos)
#define LCDCA_CR_MASK               _U_(0x00007FFF) /**< \brief (LCDCA_CR) MASK Register */

/* -------- LCDCA_CFG : (LCDCA Offset: 0x04) (R/W 32) Configuration Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t XBIAS:1;          /*!< bit:      0  External Bias Generation           */
    uint32_t WMOD:1;           /*!< bit:      1  Waveform Mode                      */
    uint32_t BLANK:1;          /*!< bit:      2  Blank LCD                          */
    uint32_t LOCK:1;           /*!< bit:      3  Lock                               */
    uint32_t :4;               /*!< bit:  4.. 7  Reserved                           */
    uint32_t DUTY:2;           /*!< bit:  8.. 9  Duty Select                        */
    uint32_t :6;               /*!< bit: 10..15  Reserved                           */
    uint32_t FCST:6;           /*!< bit: 16..21  Fine Contrast                      */
    uint32_t :2;               /*!< bit: 22..23  Reserved                           */
    uint32_t NSU:6;            /*!< bit: 24..29  Number of Segment Terminals in Use */
    uint32_t :2;               /*!< bit: 30..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} LCDCA_CFG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDCA_CFG_OFFSET            0x04         /**< \brief (LCDCA_CFG offset) Configuration Register */
#define LCDCA_CFG_RESETVALUE        _U_(0x00000000); /**< \brief (LCDCA_CFG reset_value) Configuration Register */

#define LCDCA_CFG_XBIAS_Pos         0            /**< \brief (LCDCA_CFG) External Bias Generation */
#define LCDCA_CFG_XBIAS             (_U_(0x1) << LCDCA_CFG_XBIAS_Pos)
#define LCDCA_CFG_WMOD_Pos          1            /**< \brief (LCDCA_CFG) Waveform Mode */
#define LCDCA_CFG_WMOD              (_U_(0x1) << LCDCA_CFG_WMOD_Pos)
#define LCDCA_CFG_BLANK_Pos         2            /**< \brief (LCDCA_CFG) Blank LCD */
#define LCDCA_CFG_BLANK             (_U_(0x1) << LCDCA_CFG_BLANK_Pos)
#define LCDCA_CFG_LOCK_Pos          3            /**< \brief (LCDCA_CFG) Lock */
#define LCDCA_CFG_LOCK              (_U_(0x1) << LCDCA_CFG_LOCK_Pos)
#define LCDCA_CFG_DUTY_Pos          8            /**< \brief (LCDCA_CFG) Duty Select */
#define LCDCA_CFG_DUTY_Msk          (_U_(0x3) << LCDCA_CFG_DUTY_Pos)
#define LCDCA_CFG_DUTY(value)       (LCDCA_CFG_DUTY_Msk & ((value) << LCDCA_CFG_DUTY_Pos))
#define LCDCA_CFG_FCST_Pos          16           /**< \brief (LCDCA_CFG) Fine Contrast */
#define LCDCA_CFG_FCST_Msk          (_U_(0x3F) << LCDCA_CFG_FCST_Pos)
#define LCDCA_CFG_FCST(value)       (LCDCA_CFG_FCST_Msk & ((value) << LCDCA_CFG_FCST_Pos))
#define LCDCA_CFG_NSU_Pos           24           /**< \brief (LCDCA_CFG) Number of Segment Terminals in Use */
#define LCDCA_CFG_NSU_Msk           (_U_(0x3F) << LCDCA_CFG_NSU_Pos)
#define LCDCA_CFG_NSU(value)        (LCDCA_CFG_NSU_Msk & ((value) << LCDCA_CFG_NSU_Pos))
#define LCDCA_CFG_MASK              _U_(0x3F3F030F) /**< \brief (LCDCA_CFG) MASK Register */

/* -------- LCDCA_TIM : (LCDCA Offset: 0x08) (R/W 32) Timing Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t PRESC:1;          /*!< bit:      0  LCD Prescaler Select               */
    uint32_t CLKDIV:3;         /*!< bit:  1.. 3  LCD Clock Division                 */
    uint32_t :4;               /*!< bit:  4.. 7  Reserved                           */
    uint32_t FC0:5;            /*!< bit:  8..12  Frame Counter 0                    */
    uint32_t FC0PB:1;          /*!< bit:     13  Frame Counter 0 Prescaler Bypass   */
    uint32_t :2;               /*!< bit: 14..15  Reserved                           */
    uint32_t FC1:5;            /*!< bit: 16..20  Frame Counter 1                    */
    uint32_t :3;               /*!< bit: 21..23  Reserved                           */
    uint32_t FC2:5;            /*!< bit: 24..28  Frame Counter 2                    */
    uint32_t :3;               /*!< bit: 29..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} LCDCA_TIM_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDCA_TIM_OFFSET            0x08         /**< \brief (LCDCA_TIM offset) Timing Register */
#define LCDCA_TIM_RESETVALUE        _U_(0x00000000); /**< \brief (LCDCA_TIM reset_value) Timing Register */

#define LCDCA_TIM_PRESC_Pos         0            /**< \brief (LCDCA_TIM) LCD Prescaler Select */
#define LCDCA_TIM_PRESC             (_U_(0x1) << LCDCA_TIM_PRESC_Pos)
#define LCDCA_TIM_CLKDIV_Pos        1            /**< \brief (LCDCA_TIM) LCD Clock Division */
#define LCDCA_TIM_CLKDIV_Msk        (_U_(0x7) << LCDCA_TIM_CLKDIV_Pos)
#define LCDCA_TIM_CLKDIV(value)     (LCDCA_TIM_CLKDIV_Msk & ((value) << LCDCA_TIM_CLKDIV_Pos))
#define LCDCA_TIM_FC0_Pos           8            /**< \brief (LCDCA_TIM) Frame Counter 0 */
#define LCDCA_TIM_FC0_Msk           (_U_(0x1F) << LCDCA_TIM_FC0_Pos)
#define LCDCA_TIM_FC0(value)        (LCDCA_TIM_FC0_Msk & ((value) << LCDCA_TIM_FC0_Pos))
#define LCDCA_TIM_FC0PB_Pos         13           /**< \brief (LCDCA_TIM) Frame Counter 0 Prescaler Bypass */
#define LCDCA_TIM_FC0PB             (_U_(0x1) << LCDCA_TIM_FC0PB_Pos)
#define LCDCA_TIM_FC1_Pos           16           /**< \brief (LCDCA_TIM) Frame Counter 1 */
#define LCDCA_TIM_FC1_Msk           (_U_(0x1F) << LCDCA_TIM_FC1_Pos)
#define LCDCA_TIM_FC1(value)        (LCDCA_TIM_FC1_Msk & ((value) << LCDCA_TIM_FC1_Pos))
#define LCDCA_TIM_FC2_Pos           24           /**< \brief (LCDCA_TIM) Frame Counter 2 */
#define LCDCA_TIM_FC2_Msk           (_U_(0x1F) << LCDCA_TIM_FC2_Pos)
#define LCDCA_TIM_FC2(value)        (LCDCA_TIM_FC2_Msk & ((value) << LCDCA_TIM_FC2_Pos))
#define LCDCA_TIM_MASK              _U_(0x1F1F3F0F) /**< \brief (LCDCA_TIM) MASK Register */

/* -------- LCDCA_SR : (LCDCA Offset: 0x0C) (R/  32) Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t FC0R:1;           /*!< bit:      0  Frame Counter 0 Rollover           */
    uint32_t FC0S:1;           /*!< bit:      1  Frame Counter 0 Status             */
    uint32_t FC1S:1;           /*!< bit:      2  Frame Counter 1 Status             */
    uint32_t FC2S:1;           /*!< bit:      3  Frame Counter 2 Status             */
    uint32_t EN:1;             /*!< bit:      4  LCDCA Status                       */
    uint32_t WEN:1;            /*!< bit:      5  Wake up Status                     */
    uint32_t BLKS:1;           /*!< bit:      6  Blink Status                       */
    uint32_t CSRS:1;           /*!< bit:      7  Circular Shift Register Status     */
    uint32_t CPS:1;            /*!< bit:      8  Charge Pump Status                 */
    uint32_t :23;              /*!< bit:  9..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} LCDCA_SR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDCA_SR_OFFSET             0x0C         /**< \brief (LCDCA_SR offset) Status Register */
#define LCDCA_SR_RESETVALUE         _U_(0x00000000); /**< \brief (LCDCA_SR reset_value) Status Register */

#define LCDCA_SR_FC0R_Pos           0            /**< \brief (LCDCA_SR) Frame Counter 0 Rollover */
#define LCDCA_SR_FC0R               (_U_(0x1) << LCDCA_SR_FC0R_Pos)
#define LCDCA_SR_FC0S_Pos           1            /**< \brief (LCDCA_SR) Frame Counter 0 Status */
#define LCDCA_SR_FC0S               (_U_(0x1) << LCDCA_SR_FC0S_Pos)
#define LCDCA_SR_FC1S_Pos           2            /**< \brief (LCDCA_SR) Frame Counter 1 Status */
#define LCDCA_SR_FC1S               (_U_(0x1) << LCDCA_SR_FC1S_Pos)
#define LCDCA_SR_FC2S_Pos           3            /**< \brief (LCDCA_SR) Frame Counter 2 Status */
#define LCDCA_SR_FC2S               (_U_(0x1) << LCDCA_SR_FC2S_Pos)
#define LCDCA_SR_EN_Pos             4            /**< \brief (LCDCA_SR) LCDCA Status */
#define LCDCA_SR_EN                 (_U_(0x1) << LCDCA_SR_EN_Pos)
#define LCDCA_SR_WEN_Pos            5            /**< \brief (LCDCA_SR) Wake up Status */
#define LCDCA_SR_WEN                (_U_(0x1) << LCDCA_SR_WEN_Pos)
#define LCDCA_SR_BLKS_Pos           6            /**< \brief (LCDCA_SR) Blink Status */
#define LCDCA_SR_BLKS               (_U_(0x1) << LCDCA_SR_BLKS_Pos)
#define LCDCA_SR_CSRS_Pos           7            /**< \brief (LCDCA_SR) Circular Shift Register Status */
#define LCDCA_SR_CSRS               (_U_(0x1) << LCDCA_SR_CSRS_Pos)
#define LCDCA_SR_CPS_Pos            8            /**< \brief (LCDCA_SR) Charge Pump Status */
#define LCDCA_SR_CPS                (_U_(0x1) << LCDCA_SR_CPS_Pos)
#define LCDCA_SR_MASK               _U_(0x000001FF) /**< \brief (LCDCA_SR) MASK Register */

/* -------- LCDCA_SCR : (LCDCA Offset: 0x10) ( /W 32) Status Clear Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t FC0R:1;           /*!< bit:      0  Frame Counter 0 Rollover           */
    uint32_t :31;              /*!< bit:  1..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} LCDCA_SCR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDCA_SCR_OFFSET            0x10         /**< \brief (LCDCA_SCR offset) Status Clear Register */
#define LCDCA_SCR_RESETVALUE        _U_(0x00000000); /**< \brief (LCDCA_SCR reset_value) Status Clear Register */

#define LCDCA_SCR_FC0R_Pos          0            /**< \brief (LCDCA_SCR) Frame Counter 0 Rollover */
#define LCDCA_SCR_FC0R              (_U_(0x1) << LCDCA_SCR_FC0R_Pos)
#define LCDCA_SCR_MASK              _U_(0x00000001) /**< \brief (LCDCA_SCR) MASK Register */

/* -------- LCDCA_DRL0 : (LCDCA Offset: 0x14) (R/W 32) Data Register Low 0 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DATA:32;          /*!< bit:  0..31  Segments Value                     */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} LCDCA_DRL0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDCA_DRL0_OFFSET           0x14         /**< \brief (LCDCA_DRL0 offset) Data Register Low 0 */
#define LCDCA_DRL0_RESETVALUE       _U_(0x00000000); /**< \brief (LCDCA_DRL0 reset_value) Data Register Low 0 */

#define LCDCA_DRL0_DATA_Pos         0            /**< \brief (LCDCA_DRL0) Segments Value */
#define LCDCA_DRL0_DATA_Msk         (_U_(0xFFFFFFFF) << LCDCA_DRL0_DATA_Pos)
#define LCDCA_DRL0_DATA(value)      (LCDCA_DRL0_DATA_Msk & ((value) << LCDCA_DRL0_DATA_Pos))
#define LCDCA_DRL0_MASK             _U_(0xFFFFFFFF) /**< \brief (LCDCA_DRL0) MASK Register */

/* -------- LCDCA_DRH0 : (LCDCA Offset: 0x18) (R/W 32) Data Register High 0 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DATA:8;           /*!< bit:  0.. 7  Segments Value                     */
    uint32_t :24;              /*!< bit:  8..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} LCDCA_DRH0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDCA_DRH0_OFFSET           0x18         /**< \brief (LCDCA_DRH0 offset) Data Register High 0 */
#define LCDCA_DRH0_RESETVALUE       _U_(0x00000000); /**< \brief (LCDCA_DRH0 reset_value) Data Register High 0 */

#define LCDCA_DRH0_DATA_Pos         0            /**< \brief (LCDCA_DRH0) Segments Value */
#define LCDCA_DRH0_DATA_Msk         (_U_(0xFF) << LCDCA_DRH0_DATA_Pos)
#define LCDCA_DRH0_DATA(value)      (LCDCA_DRH0_DATA_Msk & ((value) << LCDCA_DRH0_DATA_Pos))
#define LCDCA_DRH0_MASK             _U_(0x000000FF) /**< \brief (LCDCA_DRH0) MASK Register */

/* -------- LCDCA_DRL1 : (LCDCA Offset: 0x1C) (R/W 32) Data Register Low 1 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DATA:32;          /*!< bit:  0..31  Segments Value                     */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} LCDCA_DRL1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDCA_DRL1_OFFSET           0x1C         /**< \brief (LCDCA_DRL1 offset) Data Register Low 1 */
#define LCDCA_DRL1_RESETVALUE       _U_(0x00000000); /**< \brief (LCDCA_DRL1 reset_value) Data Register Low 1 */

#define LCDCA_DRL1_DATA_Pos         0            /**< \brief (LCDCA_DRL1) Segments Value */
#define LCDCA_DRL1_DATA_Msk         (_U_(0xFFFFFFFF) << LCDCA_DRL1_DATA_Pos)
#define LCDCA_DRL1_DATA(value)      (LCDCA_DRL1_DATA_Msk & ((value) << LCDCA_DRL1_DATA_Pos))
#define LCDCA_DRL1_MASK             _U_(0xFFFFFFFF) /**< \brief (LCDCA_DRL1) MASK Register */

/* -------- LCDCA_DRH1 : (LCDCA Offset: 0x20) (R/W 32) Data Register High 1 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DATA:8;           /*!< bit:  0.. 7  Segments Value                     */
    uint32_t :24;              /*!< bit:  8..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} LCDCA_DRH1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDCA_DRH1_OFFSET           0x20         /**< \brief (LCDCA_DRH1 offset) Data Register High 1 */
#define LCDCA_DRH1_RESETVALUE       _U_(0x00000000); /**< \brief (LCDCA_DRH1 reset_value) Data Register High 1 */

#define LCDCA_DRH1_DATA_Pos         0            /**< \brief (LCDCA_DRH1) Segments Value */
#define LCDCA_DRH1_DATA_Msk         (_U_(0xFF) << LCDCA_DRH1_DATA_Pos)
#define LCDCA_DRH1_DATA(value)      (LCDCA_DRH1_DATA_Msk & ((value) << LCDCA_DRH1_DATA_Pos))
#define LCDCA_DRH1_MASK             _U_(0x000000FF) /**< \brief (LCDCA_DRH1) MASK Register */

/* -------- LCDCA_DRL2 : (LCDCA Offset: 0x24) (R/W 32) Data Register Low 2 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DATA:32;          /*!< bit:  0..31  Segments Value                     */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} LCDCA_DRL2_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDCA_DRL2_OFFSET           0x24         /**< \brief (LCDCA_DRL2 offset) Data Register Low 2 */
#define LCDCA_DRL2_RESETVALUE       _U_(0x00000000); /**< \brief (LCDCA_DRL2 reset_value) Data Register Low 2 */

#define LCDCA_DRL2_DATA_Pos         0            /**< \brief (LCDCA_DRL2) Segments Value */
#define LCDCA_DRL2_DATA_Msk         (_U_(0xFFFFFFFF) << LCDCA_DRL2_DATA_Pos)
#define LCDCA_DRL2_DATA(value)      (LCDCA_DRL2_DATA_Msk & ((value) << LCDCA_DRL2_DATA_Pos))
#define LCDCA_DRL2_MASK             _U_(0xFFFFFFFF) /**< \brief (LCDCA_DRL2) MASK Register */

/* -------- LCDCA_DRH2 : (LCDCA Offset: 0x28) (R/W 32) Data Register High 2 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DATA:8;           /*!< bit:  0.. 7  Segments Value                     */
    uint32_t :24;              /*!< bit:  8..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} LCDCA_DRH2_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDCA_DRH2_OFFSET           0x28         /**< \brief (LCDCA_DRH2 offset) Data Register High 2 */
#define LCDCA_DRH2_RESETVALUE       _U_(0x00000000); /**< \brief (LCDCA_DRH2 reset_value) Data Register High 2 */

#define LCDCA_DRH2_DATA_Pos         0            /**< \brief (LCDCA_DRH2) Segments Value */
#define LCDCA_DRH2_DATA_Msk         (_U_(0xFF) << LCDCA_DRH2_DATA_Pos)
#define LCDCA_DRH2_DATA(value)      (LCDCA_DRH2_DATA_Msk & ((value) << LCDCA_DRH2_DATA_Pos))
#define LCDCA_DRH2_MASK             _U_(0x000000FF) /**< \brief (LCDCA_DRH2) MASK Register */

/* -------- LCDCA_DRL3 : (LCDCA Offset: 0x2C) (R/W 32) Data Register Low 3 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DATA:32;          /*!< bit:  0..31  Segments Value                     */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} LCDCA_DRL3_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDCA_DRL3_OFFSET           0x2C         /**< \brief (LCDCA_DRL3 offset) Data Register Low 3 */
#define LCDCA_DRL3_RESETVALUE       _U_(0x00000000); /**< \brief (LCDCA_DRL3 reset_value) Data Register Low 3 */

#define LCDCA_DRL3_DATA_Pos         0            /**< \brief (LCDCA_DRL3) Segments Value */
#define LCDCA_DRL3_DATA_Msk         (_U_(0xFFFFFFFF) << LCDCA_DRL3_DATA_Pos)
#define LCDCA_DRL3_DATA(value)      (LCDCA_DRL3_DATA_Msk & ((value) << LCDCA_DRL3_DATA_Pos))
#define LCDCA_DRL3_MASK             _U_(0xFFFFFFFF) /**< \brief (LCDCA_DRL3) MASK Register */

/* -------- LCDCA_DRH3 : (LCDCA Offset: 0x30) (R/W 32) Data Register High 3 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DATA:8;           /*!< bit:  0.. 7  Segments Value                     */
    uint32_t :24;              /*!< bit:  8..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} LCDCA_DRH3_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDCA_DRH3_OFFSET           0x30         /**< \brief (LCDCA_DRH3 offset) Data Register High 3 */
#define LCDCA_DRH3_RESETVALUE       _U_(0x00000000); /**< \brief (LCDCA_DRH3 reset_value) Data Register High 3 */

#define LCDCA_DRH3_DATA_Pos         0            /**< \brief (LCDCA_DRH3) Segments Value */
#define LCDCA_DRH3_DATA_Msk         (_U_(0xFF) << LCDCA_DRH3_DATA_Pos)
#define LCDCA_DRH3_DATA(value)      (LCDCA_DRH3_DATA_Msk & ((value) << LCDCA_DRH3_DATA_Pos))
#define LCDCA_DRH3_MASK             _U_(0x000000FF) /**< \brief (LCDCA_DRH3) MASK Register */

/* -------- LCDCA_IADR : (LCDCA Offset: 0x34) ( /W 32) Indirect Access Data Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DATA:8;           /*!< bit:  0.. 7  Segments Value                     */
    uint32_t DMASK:8;          /*!< bit:  8..15  Data Mask                          */
    uint32_t OFF:5;            /*!< bit: 16..20  Byte Offset                        */
    uint32_t :11;              /*!< bit: 21..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} LCDCA_IADR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDCA_IADR_OFFSET           0x34         /**< \brief (LCDCA_IADR offset) Indirect Access Data Register */
#define LCDCA_IADR_RESETVALUE       _U_(0x00000000); /**< \brief (LCDCA_IADR reset_value) Indirect Access Data Register */

#define LCDCA_IADR_DATA_Pos         0            /**< \brief (LCDCA_IADR) Segments Value */
#define LCDCA_IADR_DATA_Msk         (_U_(0xFF) << LCDCA_IADR_DATA_Pos)
#define LCDCA_IADR_DATA(value)      (LCDCA_IADR_DATA_Msk & ((value) << LCDCA_IADR_DATA_Pos))
#define LCDCA_IADR_DMASK_Pos        8            /**< \brief (LCDCA_IADR) Data Mask */
#define LCDCA_IADR_DMASK_Msk        (_U_(0xFF) << LCDCA_IADR_DMASK_Pos)
#define LCDCA_IADR_DMASK(value)     (LCDCA_IADR_DMASK_Msk & ((value) << LCDCA_IADR_DMASK_Pos))
#define LCDCA_IADR_OFF_Pos          16           /**< \brief (LCDCA_IADR) Byte Offset */
#define LCDCA_IADR_OFF_Msk          (_U_(0x1F) << LCDCA_IADR_OFF_Pos)
#define LCDCA_IADR_OFF(value)       (LCDCA_IADR_OFF_Msk & ((value) << LCDCA_IADR_OFF_Pos))
#define LCDCA_IADR_MASK             _U_(0x001FFFFF) /**< \brief (LCDCA_IADR) MASK Register */

/* -------- LCDCA_BCFG : (LCDCA Offset: 0x38) (R/W 32) Blink Configuration Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t MODE:1;           /*!< bit:      0  Blinking Mode                      */
    uint32_t FCS:2;            /*!< bit:  1.. 2  Frame Counter Selection            */
    uint32_t :5;               /*!< bit:  3.. 7  Reserved                           */
    uint32_t BSS0:4;           /*!< bit:  8..11  Blink Segment Selection 0          */
    uint32_t BSS1:4;           /*!< bit: 12..15  Blink Segment Selection 1          */
    uint32_t :16;              /*!< bit: 16..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} LCDCA_BCFG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDCA_BCFG_OFFSET           0x38         /**< \brief (LCDCA_BCFG offset) Blink Configuration Register */
#define LCDCA_BCFG_RESETVALUE       _U_(0x00000000); /**< \brief (LCDCA_BCFG reset_value) Blink Configuration Register */

#define LCDCA_BCFG_MODE_Pos         0            /**< \brief (LCDCA_BCFG) Blinking Mode */
#define LCDCA_BCFG_MODE             (_U_(0x1) << LCDCA_BCFG_MODE_Pos)
#define LCDCA_BCFG_FCS_Pos          1            /**< \brief (LCDCA_BCFG) Frame Counter Selection */
#define LCDCA_BCFG_FCS_Msk          (_U_(0x3) << LCDCA_BCFG_FCS_Pos)
#define LCDCA_BCFG_FCS(value)       (LCDCA_BCFG_FCS_Msk & ((value) << LCDCA_BCFG_FCS_Pos))
#define LCDCA_BCFG_BSS0_Pos         8            /**< \brief (LCDCA_BCFG) Blink Segment Selection 0 */
#define LCDCA_BCFG_BSS0_Msk         (_U_(0xF) << LCDCA_BCFG_BSS0_Pos)
#define LCDCA_BCFG_BSS0(value)      (LCDCA_BCFG_BSS0_Msk & ((value) << LCDCA_BCFG_BSS0_Pos))
#define LCDCA_BCFG_BSS1_Pos         12           /**< \brief (LCDCA_BCFG) Blink Segment Selection 1 */
#define LCDCA_BCFG_BSS1_Msk         (_U_(0xF) << LCDCA_BCFG_BSS1_Pos)
#define LCDCA_BCFG_BSS1(value)      (LCDCA_BCFG_BSS1_Msk & ((value) << LCDCA_BCFG_BSS1_Pos))
#define LCDCA_BCFG_MASK             _U_(0x0000FF07) /**< \brief (LCDCA_BCFG) MASK Register */

/* -------- LCDCA_CSRCFG : (LCDCA Offset: 0x3C) (R/W 32) Circular Shift Register Configuration -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DIR:1;            /*!< bit:      0  Direction                          */
    uint32_t FCS:2;            /*!< bit:  1.. 2  Frame Counter Selection            */
    uint32_t SIZE:3;           /*!< bit:  3.. 5  Size                               */
    uint32_t :2;               /*!< bit:  6.. 7  Reserved                           */
    uint32_t DATA:8;           /*!< bit:  8..15  Circular Shift Register Value      */
    uint32_t :16;              /*!< bit: 16..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} LCDCA_CSRCFG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDCA_CSRCFG_OFFSET         0x3C         /**< \brief (LCDCA_CSRCFG offset) Circular Shift Register Configuration */
#define LCDCA_CSRCFG_RESETVALUE     _U_(0x00000000); /**< \brief (LCDCA_CSRCFG reset_value) Circular Shift Register Configuration */

#define LCDCA_CSRCFG_DIR_Pos        0            /**< \brief (LCDCA_CSRCFG) Direction */
#define LCDCA_CSRCFG_DIR            (_U_(0x1) << LCDCA_CSRCFG_DIR_Pos)
#define LCDCA_CSRCFG_FCS_Pos        1            /**< \brief (LCDCA_CSRCFG) Frame Counter Selection */
#define LCDCA_CSRCFG_FCS_Msk        (_U_(0x3) << LCDCA_CSRCFG_FCS_Pos)
#define LCDCA_CSRCFG_FCS(value)     (LCDCA_CSRCFG_FCS_Msk & ((value) << LCDCA_CSRCFG_FCS_Pos))
#define LCDCA_CSRCFG_SIZE_Pos       3            /**< \brief (LCDCA_CSRCFG) Size */
#define LCDCA_CSRCFG_SIZE_Msk       (_U_(0x7) << LCDCA_CSRCFG_SIZE_Pos)
#define LCDCA_CSRCFG_SIZE(value)    (LCDCA_CSRCFG_SIZE_Msk & ((value) << LCDCA_CSRCFG_SIZE_Pos))
#define LCDCA_CSRCFG_DATA_Pos       8            /**< \brief (LCDCA_CSRCFG) Circular Shift Register Value */
#define LCDCA_CSRCFG_DATA_Msk       (_U_(0xFF) << LCDCA_CSRCFG_DATA_Pos)
#define LCDCA_CSRCFG_DATA(value)    (LCDCA_CSRCFG_DATA_Msk & ((value) << LCDCA_CSRCFG_DATA_Pos))
#define LCDCA_CSRCFG_MASK           _U_(0x0000FF3F) /**< \brief (LCDCA_CSRCFG) MASK Register */

/* -------- LCDCA_CMCFG : (LCDCA Offset: 0x40) (R/W 32) Character Mapping Configuration Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DREV:1;           /*!< bit:      0  Digit Reverse Mode                 */
    uint32_t TDG:2;            /*!< bit:  1.. 2  Type of Digit                      */
    uint32_t :5;               /*!< bit:  3.. 7  Reserved                           */
    uint32_t STSEG:6;          /*!< bit:  8..13  Start Segment                      */
    uint32_t :18;              /*!< bit: 14..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} LCDCA_CMCFG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDCA_CMCFG_OFFSET          0x40         /**< \brief (LCDCA_CMCFG offset) Character Mapping Configuration Register */
#define LCDCA_CMCFG_RESETVALUE      _U_(0x00000000); /**< \brief (LCDCA_CMCFG reset_value) Character Mapping Configuration Register */

#define LCDCA_CMCFG_DREV_Pos        0            /**< \brief (LCDCA_CMCFG) Digit Reverse Mode */
#define LCDCA_CMCFG_DREV            (_U_(0x1) << LCDCA_CMCFG_DREV_Pos)
#define LCDCA_CMCFG_TDG_Pos         1            /**< \brief (LCDCA_CMCFG) Type of Digit */
#define LCDCA_CMCFG_TDG_Msk         (_U_(0x3) << LCDCA_CMCFG_TDG_Pos)
#define LCDCA_CMCFG_TDG(value)      (LCDCA_CMCFG_TDG_Msk & ((value) << LCDCA_CMCFG_TDG_Pos))
#define LCDCA_CMCFG_STSEG_Pos       8            /**< \brief (LCDCA_CMCFG) Start Segment */
#define LCDCA_CMCFG_STSEG_Msk       (_U_(0x3F) << LCDCA_CMCFG_STSEG_Pos)
#define LCDCA_CMCFG_STSEG(value)    (LCDCA_CMCFG_STSEG_Msk & ((value) << LCDCA_CMCFG_STSEG_Pos))
#define LCDCA_CMCFG_MASK            _U_(0x00003F07) /**< \brief (LCDCA_CMCFG) MASK Register */

/* -------- LCDCA_CMDR : (LCDCA Offset: 0x44) ( /W 32) Character Mapping Data Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t ASCII:7;          /*!< bit:  0.. 6  ASCII Code                         */
    uint32_t :25;              /*!< bit:  7..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} LCDCA_CMDR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDCA_CMDR_OFFSET           0x44         /**< \brief (LCDCA_CMDR offset) Character Mapping Data Register */
#define LCDCA_CMDR_RESETVALUE       _U_(0x00000000); /**< \brief (LCDCA_CMDR reset_value) Character Mapping Data Register */

#define LCDCA_CMDR_ASCII_Pos        0            /**< \brief (LCDCA_CMDR) ASCII Code */
#define LCDCA_CMDR_ASCII_Msk        (_U_(0x7F) << LCDCA_CMDR_ASCII_Pos)
#define LCDCA_CMDR_ASCII(value)     (LCDCA_CMDR_ASCII_Msk & ((value) << LCDCA_CMDR_ASCII_Pos))
#define LCDCA_CMDR_MASK             _U_(0x0000007F) /**< \brief (LCDCA_CMDR) MASK Register */

/* -------- LCDCA_ACMCFG : (LCDCA Offset: 0x48) (R/W 32) Automated Character Mapping Configuration Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t EN:1;             /*!< bit:      0  Enable                             */
    uint32_t FCS:2;            /*!< bit:  1.. 2  Frame Counter Selection            */
    uint32_t MODE:1;           /*!< bit:      3  Mode (sequential or scrolling)     */
    uint32_t DREV:1;           /*!< bit:      4  Digit Reverse                      */
    uint32_t TDG:2;            /*!< bit:  5.. 6  Type of Digit                      */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t STSEG:6;          /*!< bit:  8..13  Start Segment                      */
    uint32_t :2;               /*!< bit: 14..15  Reserved                           */
    uint32_t STEPS:8;          /*!< bit: 16..23  Scrolling Steps                    */
    uint32_t DIGN:4;           /*!< bit: 24..27  Digit Number                       */
    uint32_t :4;               /*!< bit: 28..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} LCDCA_ACMCFG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDCA_ACMCFG_OFFSET         0x48         /**< \brief (LCDCA_ACMCFG offset) Automated Character Mapping Configuration Register */
#define LCDCA_ACMCFG_RESETVALUE     _U_(0x00000000); /**< \brief (LCDCA_ACMCFG reset_value) Automated Character Mapping Configuration Register */

#define LCDCA_ACMCFG_EN_Pos         0            /**< \brief (LCDCA_ACMCFG) Enable */
#define LCDCA_ACMCFG_EN             (_U_(0x1) << LCDCA_ACMCFG_EN_Pos)
#define LCDCA_ACMCFG_FCS_Pos        1            /**< \brief (LCDCA_ACMCFG) Frame Counter Selection */
#define LCDCA_ACMCFG_FCS_Msk        (_U_(0x3) << LCDCA_ACMCFG_FCS_Pos)
#define LCDCA_ACMCFG_FCS(value)     (LCDCA_ACMCFG_FCS_Msk & ((value) << LCDCA_ACMCFG_FCS_Pos))
#define LCDCA_ACMCFG_MODE_Pos       3            /**< \brief (LCDCA_ACMCFG) Mode (sequential or scrolling) */
#define LCDCA_ACMCFG_MODE           (_U_(0x1) << LCDCA_ACMCFG_MODE_Pos)
#define LCDCA_ACMCFG_DREV_Pos       4            /**< \brief (LCDCA_ACMCFG) Digit Reverse */
#define LCDCA_ACMCFG_DREV           (_U_(0x1) << LCDCA_ACMCFG_DREV_Pos)
#define LCDCA_ACMCFG_TDG_Pos        5            /**< \brief (LCDCA_ACMCFG) Type of Digit */
#define LCDCA_ACMCFG_TDG_Msk        (_U_(0x3) << LCDCA_ACMCFG_TDG_Pos)
#define LCDCA_ACMCFG_TDG(value)     (LCDCA_ACMCFG_TDG_Msk & ((value) << LCDCA_ACMCFG_TDG_Pos))
#define LCDCA_ACMCFG_STSEG_Pos      8            /**< \brief (LCDCA_ACMCFG) Start Segment */
#define LCDCA_ACMCFG_STSEG_Msk      (_U_(0x3F) << LCDCA_ACMCFG_STSEG_Pos)
#define LCDCA_ACMCFG_STSEG(value)   (LCDCA_ACMCFG_STSEG_Msk & ((value) << LCDCA_ACMCFG_STSEG_Pos))
#define LCDCA_ACMCFG_STEPS_Pos      16           /**< \brief (LCDCA_ACMCFG) Scrolling Steps */
#define LCDCA_ACMCFG_STEPS_Msk      (_U_(0xFF) << LCDCA_ACMCFG_STEPS_Pos)
#define LCDCA_ACMCFG_STEPS(value)   (LCDCA_ACMCFG_STEPS_Msk & ((value) << LCDCA_ACMCFG_STEPS_Pos))
#define LCDCA_ACMCFG_DIGN_Pos       24           /**< \brief (LCDCA_ACMCFG) Digit Number */
#define LCDCA_ACMCFG_DIGN_Msk       (_U_(0xF) << LCDCA_ACMCFG_DIGN_Pos)
#define LCDCA_ACMCFG_DIGN(value)    (LCDCA_ACMCFG_DIGN_Msk & ((value) << LCDCA_ACMCFG_DIGN_Pos))
#define LCDCA_ACMCFG_MASK           _U_(0x0FFF3F7F) /**< \brief (LCDCA_ACMCFG) MASK Register */

/* -------- LCDCA_ACMDR : (LCDCA Offset: 0x4C) ( /W 32) Automated Character Mapping Data Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t ASCII:7;          /*!< bit:  0.. 6  ASCII Code                         */
    uint32_t :25;              /*!< bit:  7..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} LCDCA_ACMDR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDCA_ACMDR_OFFSET          0x4C         /**< \brief (LCDCA_ACMDR offset) Automated Character Mapping Data Register */
#define LCDCA_ACMDR_RESETVALUE      _U_(0x00000000); /**< \brief (LCDCA_ACMDR reset_value) Automated Character Mapping Data Register */

#define LCDCA_ACMDR_ASCII_Pos       0            /**< \brief (LCDCA_ACMDR) ASCII Code */
#define LCDCA_ACMDR_ASCII_Msk       (_U_(0x7F) << LCDCA_ACMDR_ASCII_Pos)
#define LCDCA_ACMDR_ASCII(value)    (LCDCA_ACMDR_ASCII_Msk & ((value) << LCDCA_ACMDR_ASCII_Pos))
#define LCDCA_ACMDR_MASK            _U_(0x0000007F) /**< \brief (LCDCA_ACMDR) MASK Register */

/* -------- LCDCA_ABMCFG : (LCDCA Offset: 0x50) (R/W 32) Automated Bit Mapping Configuration Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t EN:1;             /*!< bit:      0  Enable                             */
    uint32_t FCS:2;            /*!< bit:  1.. 2  Frame Counter Selection            */
    uint32_t :5;               /*!< bit:  3.. 7  Reserved                           */
    uint32_t SIZE:5;           /*!< bit:  8..12  Size                               */
    uint32_t :19;              /*!< bit: 13..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} LCDCA_ABMCFG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDCA_ABMCFG_OFFSET         0x50         /**< \brief (LCDCA_ABMCFG offset) Automated Bit Mapping Configuration Register */
#define LCDCA_ABMCFG_RESETVALUE     _U_(0x00000000); /**< \brief (LCDCA_ABMCFG reset_value) Automated Bit Mapping Configuration Register */

#define LCDCA_ABMCFG_EN_Pos         0            /**< \brief (LCDCA_ABMCFG) Enable */
#define LCDCA_ABMCFG_EN             (_U_(0x1) << LCDCA_ABMCFG_EN_Pos)
#define LCDCA_ABMCFG_FCS_Pos        1            /**< \brief (LCDCA_ABMCFG) Frame Counter Selection */
#define LCDCA_ABMCFG_FCS_Msk        (_U_(0x3) << LCDCA_ABMCFG_FCS_Pos)
#define LCDCA_ABMCFG_FCS(value)     (LCDCA_ABMCFG_FCS_Msk & ((value) << LCDCA_ABMCFG_FCS_Pos))
#define LCDCA_ABMCFG_SIZE_Pos       8            /**< \brief (LCDCA_ABMCFG) Size */
#define LCDCA_ABMCFG_SIZE_Msk       (_U_(0x1F) << LCDCA_ABMCFG_SIZE_Pos)
#define LCDCA_ABMCFG_SIZE(value)    (LCDCA_ABMCFG_SIZE_Msk & ((value) << LCDCA_ABMCFG_SIZE_Pos))
#define LCDCA_ABMCFG_MASK           _U_(0x00001F07) /**< \brief (LCDCA_ABMCFG) MASK Register */

/* -------- LCDCA_ABMDR : (LCDCA Offset: 0x54) ( /W 32) Automated Bit Mapping Data Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DATA:8;           /*!< bit:  0.. 7  Segments Value                     */
    uint32_t DMASK:8;          /*!< bit:  8..15  Data Mask                          */
    uint32_t OFF:5;            /*!< bit: 16..20  Byte Offset                        */
    uint32_t :11;              /*!< bit: 21..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} LCDCA_ABMDR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDCA_ABMDR_OFFSET          0x54         /**< \brief (LCDCA_ABMDR offset) Automated Bit Mapping Data Register */
#define LCDCA_ABMDR_RESETVALUE      _U_(0x00000000); /**< \brief (LCDCA_ABMDR reset_value) Automated Bit Mapping Data Register */

#define LCDCA_ABMDR_DATA_Pos        0            /**< \brief (LCDCA_ABMDR) Segments Value */
#define LCDCA_ABMDR_DATA_Msk        (_U_(0xFF) << LCDCA_ABMDR_DATA_Pos)
#define LCDCA_ABMDR_DATA(value)     (LCDCA_ABMDR_DATA_Msk & ((value) << LCDCA_ABMDR_DATA_Pos))
#define LCDCA_ABMDR_DMASK_Pos       8            /**< \brief (LCDCA_ABMDR) Data Mask */
#define LCDCA_ABMDR_DMASK_Msk       (_U_(0xFF) << LCDCA_ABMDR_DMASK_Pos)
#define LCDCA_ABMDR_DMASK(value)    (LCDCA_ABMDR_DMASK_Msk & ((value) << LCDCA_ABMDR_DMASK_Pos))
#define LCDCA_ABMDR_OFF_Pos         16           /**< \brief (LCDCA_ABMDR) Byte Offset */
#define LCDCA_ABMDR_OFF_Msk         (_U_(0x1F) << LCDCA_ABMDR_OFF_Pos)
#define LCDCA_ABMDR_OFF(value)      (LCDCA_ABMDR_OFF_Msk & ((value) << LCDCA_ABMDR_OFF_Pos))
#define LCDCA_ABMDR_MASK            _U_(0x001FFFFF) /**< \brief (LCDCA_ABMDR) MASK Register */

/* -------- LCDCA_IER : (LCDCA Offset: 0x58) ( /W 32) Interrupt Enable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t FC0R:1;           /*!< bit:      0  Frame Counter 0 Rollover           */
    uint32_t :31;              /*!< bit:  1..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} LCDCA_IER_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDCA_IER_OFFSET            0x58         /**< \brief (LCDCA_IER offset) Interrupt Enable Register */
#define LCDCA_IER_RESETVALUE        _U_(0x00000000); /**< \brief (LCDCA_IER reset_value) Interrupt Enable Register */

#define LCDCA_IER_FC0R_Pos          0            /**< \brief (LCDCA_IER) Frame Counter 0 Rollover */
#define LCDCA_IER_FC0R              (_U_(0x1) << LCDCA_IER_FC0R_Pos)
#define LCDCA_IER_MASK              _U_(0x00000001) /**< \brief (LCDCA_IER) MASK Register */

/* -------- LCDCA_IDR : (LCDCA Offset: 0x5C) ( /W 32) Interrupt Disable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t FC0R:1;           /*!< bit:      0  Frame Counter 0 Rollover           */
    uint32_t :31;              /*!< bit:  1..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} LCDCA_IDR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDCA_IDR_OFFSET            0x5C         /**< \brief (LCDCA_IDR offset) Interrupt Disable Register */
#define LCDCA_IDR_RESETVALUE        _U_(0x00000000); /**< \brief (LCDCA_IDR reset_value) Interrupt Disable Register */

#define LCDCA_IDR_FC0R_Pos          0            /**< \brief (LCDCA_IDR) Frame Counter 0 Rollover */
#define LCDCA_IDR_FC0R              (_U_(0x1) << LCDCA_IDR_FC0R_Pos)
#define LCDCA_IDR_MASK              _U_(0x00000001) /**< \brief (LCDCA_IDR) MASK Register */

/* -------- LCDCA_IMR : (LCDCA Offset: 0x60) (R/  32) Interrupt Mask Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t FC0R:1;           /*!< bit:      0  Frame Counter 0 Rollover           */
    uint32_t :31;              /*!< bit:  1..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} LCDCA_IMR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDCA_IMR_OFFSET            0x60         /**< \brief (LCDCA_IMR offset) Interrupt Mask Register */
#define LCDCA_IMR_RESETVALUE        _U_(0x00000000); /**< \brief (LCDCA_IMR reset_value) Interrupt Mask Register */

#define LCDCA_IMR_FC0R_Pos          0            /**< \brief (LCDCA_IMR) Frame Counter 0 Rollover */
#define LCDCA_IMR_FC0R              (_U_(0x1) << LCDCA_IMR_FC0R_Pos)
#define LCDCA_IMR_MASK              _U_(0x00000001) /**< \brief (LCDCA_IMR) MASK Register */

/* -------- LCDCA_VERSION : (LCDCA Offset: 0x64) (R/  32) Version Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t VERSION:12;       /*!< bit:  0..11  Version Number                     */
    uint32_t :4;               /*!< bit: 12..15  Reserved                           */
    uint32_t VARIANT:4;        /*!< bit: 16..19  Variant Number                     */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} LCDCA_VERSION_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define LCDCA_VERSION_OFFSET        0x64         /**< \brief (LCDCA_VERSION offset) Version Register */
#define LCDCA_VERSION_RESETVALUE    _U_(0x00000100); /**< \brief (LCDCA_VERSION reset_value) Version Register */

#define LCDCA_VERSION_VERSION_Pos   0            /**< \brief (LCDCA_VERSION) Version Number */
#define LCDCA_VERSION_VERSION_Msk   (_U_(0xFFF) << LCDCA_VERSION_VERSION_Pos)
#define LCDCA_VERSION_VERSION(value) (LCDCA_VERSION_VERSION_Msk & ((value) << LCDCA_VERSION_VERSION_Pos))
#define LCDCA_VERSION_VARIANT_Pos   16           /**< \brief (LCDCA_VERSION) Variant Number */
#define LCDCA_VERSION_VARIANT_Msk   (_U_(0xF) << LCDCA_VERSION_VARIANT_Pos)
#define LCDCA_VERSION_VARIANT(value) (LCDCA_VERSION_VARIANT_Msk & ((value) << LCDCA_VERSION_VARIANT_Pos))
#define LCDCA_VERSION_MASK          _U_(0x000F0FFF) /**< \brief (LCDCA_VERSION) MASK Register */

/** \brief LCDCA hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {
  __O  uint32_t CR;          /**< \brief Offset: 0x00 ( /W 32) Control Register */
  __IO uint32_t CFG;         /**< \brief Offset: 0x04 (R/W 32) Configuration Register */
  __IO uint32_t TIM;         /**< \brief Offset: 0x08 (R/W 32) Timing Register */
  __I  uint32_t SR;          /**< \brief Offset: 0x0C (R/  32) Status Register */
  __O  uint32_t SCR;         /**< \brief Offset: 0x10 ( /W 32) Status Clear Register */
  __IO uint32_t DRL0;        /**< \brief Offset: 0x14 (R/W 32) Data Register Low 0 */
  __IO uint32_t DRH0;        /**< \brief Offset: 0x18 (R/W 32) Data Register High 0 */
  __IO uint32_t DRL1;        /**< \brief Offset: 0x1C (R/W 32) Data Register Low 1 */
  __IO uint32_t DRH1;        /**< \brief Offset: 0x20 (R/W 32) Data Register High 1 */
  __IO uint32_t DRL2;        /**< \brief Offset: 0x24 (R/W 32) Data Register Low 2 */
  __IO uint32_t DRH2;        /**< \brief Offset: 0x28 (R/W 32) Data Register High 2 */
  __IO uint32_t DRL3;        /**< \brief Offset: 0x2C (R/W 32) Data Register Low 3 */
  __IO uint32_t DRH3;        /**< \brief Offset: 0x30 (R/W 32) Data Register High 3 */
  __O  uint32_t IADR;        /**< \brief Offset: 0x34 ( /W 32) Indirect Access Data Register */
  __IO uint32_t BCFG;        /**< \brief Offset: 0x38 (R/W 32) Blink Configuration Register */
  __IO uint32_t CSRCFG;      /**< \brief Offset: 0x3C (R/W 32) Circular Shift Register Configuration */
  __IO uint32_t CMCFG;       /**< \brief Offset: 0x40 (R/W 32) Character Mapping Configuration Register */
  __O  uint32_t CMDR;        /**< \brief Offset: 0x44 ( /W 32) Character Mapping Data Register */
  __IO uint32_t ACMCFG;      /**< \brief Offset: 0x48 (R/W 32) Automated Character Mapping Configuration Register */
  __O  uint32_t ACMDR;       /**< \brief Offset: 0x4C ( /W 32) Automated Character Mapping Data Register */
  __IO uint32_t ABMCFG;      /**< \brief Offset: 0x50 (R/W 32) Automated Bit Mapping Configuration Register */
  __O  uint32_t ABMDR;       /**< \brief Offset: 0x54 ( /W 32) Automated Bit Mapping Data Register */
  __O  uint32_t IER;         /**< \brief Offset: 0x58 ( /W 32) Interrupt Enable Register */
  __O  uint32_t IDR;         /**< \brief Offset: 0x5C ( /W 32) Interrupt Disable Register */
  __I  uint32_t IMR;         /**< \brief Offset: 0x60 (R/  32) Interrupt Mask Register */
  __I  uint32_t VERSION;     /**< \brief Offset: 0x64 (R/  32) Version Register */
} Lcdca;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAM4L_LCDCA_COMPONENT_ */
