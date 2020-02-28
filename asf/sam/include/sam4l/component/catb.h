/**
 * \file
 *
 * \brief Component description for CATB
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

#ifndef _SAM4L_CATB_COMPONENT_
#define _SAM4L_CATB_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR CATB */
/* ========================================================================== */
/** \addtogroup SAM4L_CATB Capacitive Touch Module B */
/*@{*/

#define CATB_I7567
#define REV_CATB                    0x100

/* -------- CATB_CR : (CATB Offset: 0x00) (R/W 32) Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t EN:1;             /*!< bit:      0  Module Enable                      */
    uint32_t RUN:1;            /*!< bit:      1  Start Operation                    */
    uint32_t IIDLE:1;          /*!< bit:      2  Initialize Idle Value              */
    uint32_t ETRIG:1;          /*!< bit:      3  Event Triggered Operation          */
    uint32_t INTRES:1;         /*!< bit:      4  Internal Resistors                 */
    uint32_t CKSEL:1;          /*!< bit:      5  Clock Select                       */
    uint32_t DIFF:1;           /*!< bit:      6  Differential Mode                  */
    uint32_t DMAEN:1;          /*!< bit:      7  DMA Enable                         */
    uint32_t ESAMPLES:7;       /*!< bit:  8..14  Number of Event Samples            */
    uint32_t :1;               /*!< bit:     15  Reserved                           */
    uint32_t CHARGET:4;        /*!< bit: 16..19  Charge Time                        */
    uint32_t :11;              /*!< bit: 20..30  Reserved                           */
    uint32_t SWRST:1;          /*!< bit:     31  Software Reset                     */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} CATB_CR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define CATB_CR_OFFSET              0x00         /**< \brief (CATB_CR offset) Control Register */
#define CATB_CR_RESETVALUE          _U_(0x00000000); /**< \brief (CATB_CR reset_value) Control Register */

#define CATB_CR_EN_Pos              0            /**< \brief (CATB_CR) Module Enable */
#define CATB_CR_EN                  (_U_(0x1) << CATB_CR_EN_Pos)
#define CATB_CR_RUN_Pos             1            /**< \brief (CATB_CR) Start Operation */
#define CATB_CR_RUN                 (_U_(0x1) << CATB_CR_RUN_Pos)
#define CATB_CR_IIDLE_Pos           2            /**< \brief (CATB_CR) Initialize Idle Value */
#define CATB_CR_IIDLE               (_U_(0x1) << CATB_CR_IIDLE_Pos)
#define CATB_CR_ETRIG_Pos           3            /**< \brief (CATB_CR) Event Triggered Operation */
#define CATB_CR_ETRIG               (_U_(0x1) << CATB_CR_ETRIG_Pos)
#define CATB_CR_INTRES_Pos          4            /**< \brief (CATB_CR) Internal Resistors */
#define CATB_CR_INTRES              (_U_(0x1) << CATB_CR_INTRES_Pos)
#define CATB_CR_CKSEL_Pos           5            /**< \brief (CATB_CR) Clock Select */
#define CATB_CR_CKSEL               (_U_(0x1) << CATB_CR_CKSEL_Pos)
#define CATB_CR_DIFF_Pos            6            /**< \brief (CATB_CR) Differential Mode */
#define CATB_CR_DIFF                (_U_(0x1) << CATB_CR_DIFF_Pos)
#define CATB_CR_DMAEN_Pos           7            /**< \brief (CATB_CR) DMA Enable */
#define CATB_CR_DMAEN               (_U_(0x1) << CATB_CR_DMAEN_Pos)
#define CATB_CR_ESAMPLES_Pos        8            /**< \brief (CATB_CR) Number of Event Samples */
#define CATB_CR_ESAMPLES_Msk        (_U_(0x7F) << CATB_CR_ESAMPLES_Pos)
#define CATB_CR_ESAMPLES(value)     (CATB_CR_ESAMPLES_Msk & ((value) << CATB_CR_ESAMPLES_Pos))
#define CATB_CR_CHARGET_Pos         16           /**< \brief (CATB_CR) Charge Time */
#define CATB_CR_CHARGET_Msk         (_U_(0xF) << CATB_CR_CHARGET_Pos)
#define CATB_CR_CHARGET(value)      (CATB_CR_CHARGET_Msk & ((value) << CATB_CR_CHARGET_Pos))
#define CATB_CR_SWRST_Pos           31           /**< \brief (CATB_CR) Software Reset */
#define CATB_CR_SWRST               (_U_(0x1) << CATB_CR_SWRST_Pos)
#define CATB_CR_MASK                _U_(0x800F7FFF) /**< \brief (CATB_CR) MASK Register */

/* -------- CATB_CNTCR : (CATB Offset: 0x04) (R/W 32) Counter Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TOP:24;           /*!< bit:  0..23  Counter Top Value                  */
    uint32_t SPREAD:4;         /*!< bit: 24..27  Spread Spectrum                    */
    uint32_t REPEAT:3;         /*!< bit: 28..30  Repeat Measurements                */
    uint32_t :1;               /*!< bit:     31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} CATB_CNTCR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define CATB_CNTCR_OFFSET           0x04         /**< \brief (CATB_CNTCR offset) Counter Control Register */
#define CATB_CNTCR_RESETVALUE       _U_(0x00000000); /**< \brief (CATB_CNTCR reset_value) Counter Control Register */

#define CATB_CNTCR_TOP_Pos          0            /**< \brief (CATB_CNTCR) Counter Top Value */
#define CATB_CNTCR_TOP_Msk          (_U_(0xFFFFFF) << CATB_CNTCR_TOP_Pos)
#define CATB_CNTCR_TOP(value)       (CATB_CNTCR_TOP_Msk & ((value) << CATB_CNTCR_TOP_Pos))
#define CATB_CNTCR_SPREAD_Pos       24           /**< \brief (CATB_CNTCR) Spread Spectrum */
#define CATB_CNTCR_SPREAD_Msk       (_U_(0xF) << CATB_CNTCR_SPREAD_Pos)
#define CATB_CNTCR_SPREAD(value)    (CATB_CNTCR_SPREAD_Msk & ((value) << CATB_CNTCR_SPREAD_Pos))
#define CATB_CNTCR_REPEAT_Pos       28           /**< \brief (CATB_CNTCR) Repeat Measurements */
#define CATB_CNTCR_REPEAT_Msk       (_U_(0x7) << CATB_CNTCR_REPEAT_Pos)
#define CATB_CNTCR_REPEAT(value)    (CATB_CNTCR_REPEAT_Msk & ((value) << CATB_CNTCR_REPEAT_Pos))
#define CATB_CNTCR_MASK             _U_(0x7FFFFFFF) /**< \brief (CATB_CNTCR) MASK Register */

/* -------- CATB_IDLE : (CATB Offset: 0x08) (R/W 32) Sensor Idle Level -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t FIDLE:12;         /*!< bit:  0..11  Fractional Sensor Idle             */
    uint32_t RIDLE:16;         /*!< bit: 12..27  Integer Sensor Idle                */
    uint32_t :4;               /*!< bit: 28..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} CATB_IDLE_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define CATB_IDLE_OFFSET            0x08         /**< \brief (CATB_IDLE offset) Sensor Idle Level */
#define CATB_IDLE_RESETVALUE        _U_(0x00000000); /**< \brief (CATB_IDLE reset_value) Sensor Idle Level */

#define CATB_IDLE_FIDLE_Pos         0            /**< \brief (CATB_IDLE) Fractional Sensor Idle */
#define CATB_IDLE_FIDLE_Msk         (_U_(0xFFF) << CATB_IDLE_FIDLE_Pos)
#define CATB_IDLE_FIDLE(value)      (CATB_IDLE_FIDLE_Msk & ((value) << CATB_IDLE_FIDLE_Pos))
#define CATB_IDLE_RIDLE_Pos         12           /**< \brief (CATB_IDLE) Integer Sensor Idle */
#define CATB_IDLE_RIDLE_Msk         (_U_(0xFFFF) << CATB_IDLE_RIDLE_Pos)
#define CATB_IDLE_RIDLE(value)      (CATB_IDLE_RIDLE_Msk & ((value) << CATB_IDLE_RIDLE_Pos))
#define CATB_IDLE_MASK              _U_(0x0FFFFFFF) /**< \brief (CATB_IDLE) MASK Register */

/* -------- CATB_LEVEL : (CATB Offset: 0x0C) (R/  32) Sensor Relative Level -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t FLEVEL:12;        /*!< bit:  0..11  Fractional Sensor Level            */
    uint32_t RLEVEL:8;         /*!< bit: 12..19  Integer Sensor Level               */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} CATB_LEVEL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define CATB_LEVEL_OFFSET           0x0C         /**< \brief (CATB_LEVEL offset) Sensor Relative Level */
#define CATB_LEVEL_RESETVALUE       _U_(0x00000000); /**< \brief (CATB_LEVEL reset_value) Sensor Relative Level */

#define CATB_LEVEL_FLEVEL_Pos       0            /**< \brief (CATB_LEVEL) Fractional Sensor Level */
#define CATB_LEVEL_FLEVEL_Msk       (_U_(0xFFF) << CATB_LEVEL_FLEVEL_Pos)
#define CATB_LEVEL_FLEVEL(value)    (CATB_LEVEL_FLEVEL_Msk & ((value) << CATB_LEVEL_FLEVEL_Pos))
#define CATB_LEVEL_RLEVEL_Pos       12           /**< \brief (CATB_LEVEL) Integer Sensor Level */
#define CATB_LEVEL_RLEVEL_Msk       (_U_(0xFF) << CATB_LEVEL_RLEVEL_Pos)
#define CATB_LEVEL_RLEVEL(value)    (CATB_LEVEL_RLEVEL_Msk & ((value) << CATB_LEVEL_RLEVEL_Pos))
#define CATB_LEVEL_MASK             _U_(0x000FFFFF) /**< \brief (CATB_LEVEL) MASK Register */

/* -------- CATB_RAW : (CATB Offset: 0x10) (R/  32) Sensor Raw Value -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t :16;              /*!< bit:  0..15  Reserved                           */
    uint32_t RAWA:8;           /*!< bit: 16..23  Current Sensor Raw Value           */
    uint32_t RAWB:8;           /*!< bit: 24..31  Last Sensor Raw Value              */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} CATB_RAW_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define CATB_RAW_OFFSET             0x10         /**< \brief (CATB_RAW offset) Sensor Raw Value */
#define CATB_RAW_RESETVALUE         _U_(0x00000000); /**< \brief (CATB_RAW reset_value) Sensor Raw Value */

#define CATB_RAW_RAWA_Pos           16           /**< \brief (CATB_RAW) Current Sensor Raw Value */
#define CATB_RAW_RAWA_Msk           (_U_(0xFF) << CATB_RAW_RAWA_Pos)
#define CATB_RAW_RAWA(value)        (CATB_RAW_RAWA_Msk & ((value) << CATB_RAW_RAWA_Pos))
#define CATB_RAW_RAWB_Pos           24           /**< \brief (CATB_RAW) Last Sensor Raw Value */
#define CATB_RAW_RAWB_Msk           (_U_(0xFF) << CATB_RAW_RAWB_Pos)
#define CATB_RAW_RAWB(value)        (CATB_RAW_RAWB_Msk & ((value) << CATB_RAW_RAWB_Pos))
#define CATB_RAW_MASK               _U_(0xFFFF0000) /**< \brief (CATB_RAW) MASK Register */

/* -------- CATB_TIMING : (CATB Offset: 0x14) (R/W 32) Filter Timing Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TLEVEL:12;        /*!< bit:  0..11  Relative Level Smoothing           */
    uint32_t :4;               /*!< bit: 12..15  Reserved                           */
    uint32_t TIDLE:12;         /*!< bit: 16..27  Idle Smoothening                   */
    uint32_t :4;               /*!< bit: 28..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} CATB_TIMING_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define CATB_TIMING_OFFSET          0x14         /**< \brief (CATB_TIMING offset) Filter Timing Register */
#define CATB_TIMING_RESETVALUE      _U_(0x00000000); /**< \brief (CATB_TIMING reset_value) Filter Timing Register */

#define CATB_TIMING_TLEVEL_Pos      0            /**< \brief (CATB_TIMING) Relative Level Smoothing */
#define CATB_TIMING_TLEVEL_Msk      (_U_(0xFFF) << CATB_TIMING_TLEVEL_Pos)
#define CATB_TIMING_TLEVEL(value)   (CATB_TIMING_TLEVEL_Msk & ((value) << CATB_TIMING_TLEVEL_Pos))
#define CATB_TIMING_TIDLE_Pos       16           /**< \brief (CATB_TIMING) Idle Smoothening */
#define CATB_TIMING_TIDLE_Msk       (_U_(0xFFF) << CATB_TIMING_TIDLE_Pos)
#define CATB_TIMING_TIDLE(value)    (CATB_TIMING_TIDLE_Msk & ((value) << CATB_TIMING_TIDLE_Pos))
#define CATB_TIMING_MASK            _U_(0x0FFF0FFF) /**< \brief (CATB_TIMING) MASK Register */

/* -------- CATB_THRESH : (CATB Offset: 0x18) (R/W 32) Threshold Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t FTHRESH:12;       /*!< bit:  0..11  Fractional part of Threshold Value */
    uint32_t RTHRESH:8;        /*!< bit: 12..19  Rational part of Threshold Value   */
    uint32_t :3;               /*!< bit: 20..22  Reserved                           */
    uint32_t DIR:1;            /*!< bit:     23  Threshold Direction                */
    uint32_t LENGTH:5;         /*!< bit: 24..28  Threshold Length                   */
    uint32_t :3;               /*!< bit: 29..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} CATB_THRESH_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define CATB_THRESH_OFFSET          0x18         /**< \brief (CATB_THRESH offset) Threshold Register */
#define CATB_THRESH_RESETVALUE      _U_(0x00000000); /**< \brief (CATB_THRESH reset_value) Threshold Register */

#define CATB_THRESH_FTHRESH_Pos     0            /**< \brief (CATB_THRESH) Fractional part of Threshold Value */
#define CATB_THRESH_FTHRESH_Msk     (_U_(0xFFF) << CATB_THRESH_FTHRESH_Pos)
#define CATB_THRESH_FTHRESH(value)  (CATB_THRESH_FTHRESH_Msk & ((value) << CATB_THRESH_FTHRESH_Pos))
#define CATB_THRESH_RTHRESH_Pos     12           /**< \brief (CATB_THRESH) Rational part of Threshold Value */
#define CATB_THRESH_RTHRESH_Msk     (_U_(0xFF) << CATB_THRESH_RTHRESH_Pos)
#define CATB_THRESH_RTHRESH(value)  (CATB_THRESH_RTHRESH_Msk & ((value) << CATB_THRESH_RTHRESH_Pos))
#define CATB_THRESH_DIR_Pos         23           /**< \brief (CATB_THRESH) Threshold Direction */
#define CATB_THRESH_DIR             (_U_(0x1) << CATB_THRESH_DIR_Pos)
#define CATB_THRESH_LENGTH_Pos      24           /**< \brief (CATB_THRESH) Threshold Length */
#define CATB_THRESH_LENGTH_Msk      (_U_(0x1F) << CATB_THRESH_LENGTH_Pos)
#define CATB_THRESH_LENGTH(value)   (CATB_THRESH_LENGTH_Msk & ((value) << CATB_THRESH_LENGTH_Pos))
#define CATB_THRESH_MASK            _U_(0x1F8FFFFF) /**< \brief (CATB_THRESH) MASK Register */

/* -------- CATB_PINSEL : (CATB Offset: 0x1C) (R/W 32) Pin Selection Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t PINSEL:8;         /*!< bit:  0.. 7  Pin Select                         */
    uint32_t :24;              /*!< bit:  8..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} CATB_PINSEL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define CATB_PINSEL_OFFSET          0x1C         /**< \brief (CATB_PINSEL offset) Pin Selection Register */
#define CATB_PINSEL_RESETVALUE      _U_(0x00000000); /**< \brief (CATB_PINSEL reset_value) Pin Selection Register */

#define CATB_PINSEL_PINSEL_Pos      0            /**< \brief (CATB_PINSEL) Pin Select */
#define CATB_PINSEL_PINSEL_Msk      (_U_(0xFF) << CATB_PINSEL_PINSEL_Pos)
#define CATB_PINSEL_PINSEL(value)   (CATB_PINSEL_PINSEL_Msk & ((value) << CATB_PINSEL_PINSEL_Pos))
#define CATB_PINSEL_MASK            _U_(0x000000FF) /**< \brief (CATB_PINSEL) MASK Register */

/* -------- CATB_DMA : (CATB Offset: 0x20) (R/W 32) Direct Memory Access Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DMA:32;           /*!< bit:  0..31  Direct Memory Access               */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} CATB_DMA_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define CATB_DMA_OFFSET             0x20         /**< \brief (CATB_DMA offset) Direct Memory Access Register */
#define CATB_DMA_RESETVALUE         _U_(0x00000000); /**< \brief (CATB_DMA reset_value) Direct Memory Access Register */

#define CATB_DMA_DMA_Pos            0            /**< \brief (CATB_DMA) Direct Memory Access */
#define CATB_DMA_DMA_Msk            (_U_(0xFFFFFFFF) << CATB_DMA_DMA_Pos)
#define CATB_DMA_DMA(value)         (CATB_DMA_DMA_Msk & ((value) << CATB_DMA_DMA_Pos))
#define CATB_DMA_MASK               _U_(0xFFFFFFFF) /**< \brief (CATB_DMA) MASK Register */

/* -------- CATB_ISR : (CATB Offset: 0x24) (R/  32) Interrupt Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t SAMPLE:1;         /*!< bit:      0  Sample Ready Interrupt Status      */
    uint32_t INTCH:1;          /*!< bit:      1  In-touch Interrupt Status          */
    uint32_t OUTTCH:1;         /*!< bit:      2  Out-of-Touch Interrupt Status      */
    uint32_t :29;              /*!< bit:  3..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} CATB_ISR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define CATB_ISR_OFFSET             0x24         /**< \brief (CATB_ISR offset) Interrupt Status Register */
#define CATB_ISR_RESETVALUE         _U_(0x00000000); /**< \brief (CATB_ISR reset_value) Interrupt Status Register */

#define CATB_ISR_SAMPLE_Pos         0            /**< \brief (CATB_ISR) Sample Ready Interrupt Status */
#define CATB_ISR_SAMPLE             (_U_(0x1) << CATB_ISR_SAMPLE_Pos)
#define CATB_ISR_INTCH_Pos          1            /**< \brief (CATB_ISR) In-touch Interrupt Status */
#define CATB_ISR_INTCH              (_U_(0x1) << CATB_ISR_INTCH_Pos)
#define CATB_ISR_OUTTCH_Pos         2            /**< \brief (CATB_ISR) Out-of-Touch Interrupt Status */
#define CATB_ISR_OUTTCH             (_U_(0x1) << CATB_ISR_OUTTCH_Pos)
#define CATB_ISR_MASK               _U_(0x00000007) /**< \brief (CATB_ISR) MASK Register */

/* -------- CATB_IER : (CATB Offset: 0x28) ( /W 32) Interrupt Enable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t SAMPLE:1;         /*!< bit:      0  Sample Ready Interrupt Enable      */
    uint32_t INTCH:1;          /*!< bit:      1  In-touch Interrupt Enable          */
    uint32_t OUTTCH:1;         /*!< bit:      2  Out-of-Touch Interrupt Enable      */
    uint32_t :29;              /*!< bit:  3..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} CATB_IER_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define CATB_IER_OFFSET             0x28         /**< \brief (CATB_IER offset) Interrupt Enable Register */
#define CATB_IER_RESETVALUE         _U_(0x00000000); /**< \brief (CATB_IER reset_value) Interrupt Enable Register */

#define CATB_IER_SAMPLE_Pos         0            /**< \brief (CATB_IER) Sample Ready Interrupt Enable */
#define CATB_IER_SAMPLE             (_U_(0x1) << CATB_IER_SAMPLE_Pos)
#define CATB_IER_INTCH_Pos          1            /**< \brief (CATB_IER) In-touch Interrupt Enable */
#define CATB_IER_INTCH              (_U_(0x1) << CATB_IER_INTCH_Pos)
#define CATB_IER_OUTTCH_Pos         2            /**< \brief (CATB_IER) Out-of-Touch Interrupt Enable */
#define CATB_IER_OUTTCH             (_U_(0x1) << CATB_IER_OUTTCH_Pos)
#define CATB_IER_MASK               _U_(0x00000007) /**< \brief (CATB_IER) MASK Register */

/* -------- CATB_IDR : (CATB Offset: 0x2C) ( /W 32) Interrupt Disable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t SAMPLE:1;         /*!< bit:      0  Sample Ready Interrupt Disable     */
    uint32_t INTCH:1;          /*!< bit:      1  In-touch Interrupt Disable         */
    uint32_t OUTTCH:1;         /*!< bit:      2  Out-of-Touch Interrupt Disable     */
    uint32_t :29;              /*!< bit:  3..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} CATB_IDR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define CATB_IDR_OFFSET             0x2C         /**< \brief (CATB_IDR offset) Interrupt Disable Register */
#define CATB_IDR_RESETVALUE         _U_(0x00000000); /**< \brief (CATB_IDR reset_value) Interrupt Disable Register */

#define CATB_IDR_SAMPLE_Pos         0            /**< \brief (CATB_IDR) Sample Ready Interrupt Disable */
#define CATB_IDR_SAMPLE             (_U_(0x1) << CATB_IDR_SAMPLE_Pos)
#define CATB_IDR_INTCH_Pos          1            /**< \brief (CATB_IDR) In-touch Interrupt Disable */
#define CATB_IDR_INTCH              (_U_(0x1) << CATB_IDR_INTCH_Pos)
#define CATB_IDR_OUTTCH_Pos         2            /**< \brief (CATB_IDR) Out-of-Touch Interrupt Disable */
#define CATB_IDR_OUTTCH             (_U_(0x1) << CATB_IDR_OUTTCH_Pos)
#define CATB_IDR_MASK               _U_(0x00000007) /**< \brief (CATB_IDR) MASK Register */

/* -------- CATB_IMR : (CATB Offset: 0x30) (R/  32) Interrupt Mask Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t SAMPLE:1;         /*!< bit:      0  Sample Ready Interrupt Mask        */
    uint32_t INTCH:1;          /*!< bit:      1  In-touch Interrupt Mask            */
    uint32_t OUTTCH:1;         /*!< bit:      2  Out-of-Touch Interrupt Mask        */
    uint32_t :29;              /*!< bit:  3..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} CATB_IMR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define CATB_IMR_OFFSET             0x30         /**< \brief (CATB_IMR offset) Interrupt Mask Register */
#define CATB_IMR_RESETVALUE         _U_(0x00000000); /**< \brief (CATB_IMR reset_value) Interrupt Mask Register */

#define CATB_IMR_SAMPLE_Pos         0            /**< \brief (CATB_IMR) Sample Ready Interrupt Mask */
#define CATB_IMR_SAMPLE             (_U_(0x1) << CATB_IMR_SAMPLE_Pos)
#define CATB_IMR_INTCH_Pos          1            /**< \brief (CATB_IMR) In-touch Interrupt Mask */
#define CATB_IMR_INTCH              (_U_(0x1) << CATB_IMR_INTCH_Pos)
#define CATB_IMR_OUTTCH_Pos         2            /**< \brief (CATB_IMR) Out-of-Touch Interrupt Mask */
#define CATB_IMR_OUTTCH             (_U_(0x1) << CATB_IMR_OUTTCH_Pos)
#define CATB_IMR_MASK               _U_(0x00000007) /**< \brief (CATB_IMR) MASK Register */

/* -------- CATB_SCR : (CATB Offset: 0x34) ( /W 32) Status Clear Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t SAMPLE:1;         /*!< bit:      0  Sample Ready                       */
    uint32_t INTCH:1;          /*!< bit:      1  In-touch                           */
    uint32_t OUTTCH:1;         /*!< bit:      2  Out-of-Touch                       */
    uint32_t :29;              /*!< bit:  3..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} CATB_SCR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define CATB_SCR_OFFSET             0x34         /**< \brief (CATB_SCR offset) Status Clear Register */
#define CATB_SCR_RESETVALUE         _U_(0x00000000); /**< \brief (CATB_SCR reset_value) Status Clear Register */

#define CATB_SCR_SAMPLE_Pos         0            /**< \brief (CATB_SCR) Sample Ready */
#define CATB_SCR_SAMPLE             (_U_(0x1) << CATB_SCR_SAMPLE_Pos)
#define CATB_SCR_INTCH_Pos          1            /**< \brief (CATB_SCR) In-touch */
#define CATB_SCR_INTCH              (_U_(0x1) << CATB_SCR_INTCH_Pos)
#define CATB_SCR_OUTTCH_Pos         2            /**< \brief (CATB_SCR) Out-of-Touch */
#define CATB_SCR_OUTTCH             (_U_(0x1) << CATB_SCR_OUTTCH_Pos)
#define CATB_SCR_MASK               _U_(0x00000007) /**< \brief (CATB_SCR) MASK Register */

/* -------- CATB_INTCH : (CATB Offset: 0x40) (R/  32) INTCH In-Touch Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t INTCH:32;         /*!< bit:  0..31  In-Touch                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} CATB_INTCH_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define CATB_INTCH_OFFSET           0x40         /**< \brief (CATB_INTCH offset) In-Touch Status Register */
#define CATB_INTCH_RESETVALUE       _U_(0x00000000); /**< \brief (CATB_INTCH reset_value) In-Touch Status Register */

#define CATB_INTCH_INTCH_Pos        0            /**< \brief (CATB_INTCH) In-Touch */
#define CATB_INTCH_INTCH_Msk        (_U_(0xFFFFFFFF) << CATB_INTCH_INTCH_Pos)
#define CATB_INTCH_INTCH(value)     (CATB_INTCH_INTCH_Msk & ((value) << CATB_INTCH_INTCH_Pos))
#define CATB_INTCH_MASK             _U_(0xFFFFFFFF) /**< \brief (CATB_INTCH) MASK Register */

/* -------- CATB_INTCHCLR : (CATB Offset: 0x50) ( /W 32) INTCHCLR In-Touch Status Clear Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t INTCHCLR:32;      /*!< bit:  0..31  In-Touch Clear                     */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} CATB_INTCHCLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define CATB_INTCHCLR_OFFSET        0x50         /**< \brief (CATB_INTCHCLR offset) In-Touch Status Clear Register */
#define CATB_INTCHCLR_RESETVALUE    _U_(0x00000000); /**< \brief (CATB_INTCHCLR reset_value) In-Touch Status Clear Register */

#define CATB_INTCHCLR_INTCHCLR_Pos  0            /**< \brief (CATB_INTCHCLR) In-Touch Clear */
#define CATB_INTCHCLR_INTCHCLR_Msk  (_U_(0xFFFFFFFF) << CATB_INTCHCLR_INTCHCLR_Pos)
#define CATB_INTCHCLR_INTCHCLR(value) (CATB_INTCHCLR_INTCHCLR_Msk & ((value) << CATB_INTCHCLR_INTCHCLR_Pos))
#define CATB_INTCHCLR_MASK          _U_(0xFFFFFFFF) /**< \brief (CATB_INTCHCLR) MASK Register */

/* -------- CATB_OUTTCH : (CATB Offset: 0x60) (R/  32) OUTTCH Out-of-Touch Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t OUTTCH:32;        /*!< bit:  0..31  Out-of-Touch                       */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} CATB_OUTTCH_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define CATB_OUTTCH_OFFSET          0x60         /**< \brief (CATB_OUTTCH offset) Out-of-Touch Status Register */
#define CATB_OUTTCH_RESETVALUE      _U_(0x00000000); /**< \brief (CATB_OUTTCH reset_value) Out-of-Touch Status Register */

#define CATB_OUTTCH_OUTTCH_Pos      0            /**< \brief (CATB_OUTTCH) Out-of-Touch */
#define CATB_OUTTCH_OUTTCH_Msk      (_U_(0xFFFFFFFF) << CATB_OUTTCH_OUTTCH_Pos)
#define CATB_OUTTCH_OUTTCH(value)   (CATB_OUTTCH_OUTTCH_Msk & ((value) << CATB_OUTTCH_OUTTCH_Pos))
#define CATB_OUTTCH_MASK            _U_(0xFFFFFFFF) /**< \brief (CATB_OUTTCH) MASK Register */

/* -------- CATB_OUTTCHCLR : (CATB Offset: 0x70) ( /W 32) OUTTCHCLR Out-of-Touch Status Clear Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t OUTTCHCLR:32;     /*!< bit:  0..31  Out of Touch                       */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} CATB_OUTTCHCLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define CATB_OUTTCHCLR_OFFSET       0x70         /**< \brief (CATB_OUTTCHCLR offset) Out-of-Touch Status Clear Register */
#define CATB_OUTTCHCLR_RESETVALUE   _U_(0x00000000); /**< \brief (CATB_OUTTCHCLR reset_value) Out-of-Touch Status Clear Register */

#define CATB_OUTTCHCLR_OUTTCHCLR_Pos 0            /**< \brief (CATB_OUTTCHCLR) Out of Touch */
#define CATB_OUTTCHCLR_OUTTCHCLR_Msk (_U_(0xFFFFFFFF) << CATB_OUTTCHCLR_OUTTCHCLR_Pos)
#define CATB_OUTTCHCLR_OUTTCHCLR(value) (CATB_OUTTCHCLR_OUTTCHCLR_Msk & ((value) << CATB_OUTTCHCLR_OUTTCHCLR_Pos))
#define CATB_OUTTCHCLR_MASK         _U_(0xFFFFFFFF) /**< \brief (CATB_OUTTCHCLR) MASK Register */

/* -------- CATB_PARAMETER : (CATB Offset: 0xF8) (R/  32) Parameter Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t NPINS:8;          /*!< bit:  0.. 7  Number of Pins                     */
    uint32_t NSTATUS:8;        /*!< bit:  8..15  Number of Status bits              */
    uint32_t FRACTIONAL:4;     /*!< bit: 16..19  Number of Fractional bits          */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} CATB_PARAMETER_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define CATB_PARAMETER_OFFSET       0xF8         /**< \brief (CATB_PARAMETER offset) Parameter Register */

#define CATB_PARAMETER_NPINS_Pos    0            /**< \brief (CATB_PARAMETER) Number of Pins */
#define CATB_PARAMETER_NPINS_Msk    (_U_(0xFF) << CATB_PARAMETER_NPINS_Pos)
#define CATB_PARAMETER_NPINS(value) (CATB_PARAMETER_NPINS_Msk & ((value) << CATB_PARAMETER_NPINS_Pos))
#define CATB_PARAMETER_NSTATUS_Pos  8            /**< \brief (CATB_PARAMETER) Number of Status bits */
#define CATB_PARAMETER_NSTATUS_Msk  (_U_(0xFF) << CATB_PARAMETER_NSTATUS_Pos)
#define CATB_PARAMETER_NSTATUS(value) (CATB_PARAMETER_NSTATUS_Msk & ((value) << CATB_PARAMETER_NSTATUS_Pos))
#define CATB_PARAMETER_FRACTIONAL_Pos 16           /**< \brief (CATB_PARAMETER) Number of Fractional bits */
#define CATB_PARAMETER_FRACTIONAL_Msk (_U_(0xF) << CATB_PARAMETER_FRACTIONAL_Pos)
#define CATB_PARAMETER_FRACTIONAL(value) (CATB_PARAMETER_FRACTIONAL_Msk & ((value) << CATB_PARAMETER_FRACTIONAL_Pos))
#define CATB_PARAMETER_MASK         _U_(0x000FFFFF) /**< \brief (CATB_PARAMETER) MASK Register */

/* -------- CATB_VERSION : (CATB Offset: 0xFC) (R/  32) Version Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t VERSION:12;       /*!< bit:  0..11  Version number                     */
    uint32_t :4;               /*!< bit: 12..15  Reserved                           */
    uint32_t VARIANT:4;        /*!< bit: 16..19  Variant number                     */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} CATB_VERSION_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define CATB_VERSION_OFFSET         0xFC         /**< \brief (CATB_VERSION offset) Version Register */
#define CATB_VERSION_RESETVALUE     _U_(0x00000100); /**< \brief (CATB_VERSION reset_value) Version Register */

#define CATB_VERSION_VERSION_Pos    0            /**< \brief (CATB_VERSION) Version number */
#define CATB_VERSION_VERSION_Msk    (_U_(0xFFF) << CATB_VERSION_VERSION_Pos)
#define CATB_VERSION_VERSION(value) (CATB_VERSION_VERSION_Msk & ((value) << CATB_VERSION_VERSION_Pos))
#define CATB_VERSION_VARIANT_Pos    16           /**< \brief (CATB_VERSION) Variant number */
#define CATB_VERSION_VARIANT_Msk    (_U_(0xF) << CATB_VERSION_VARIANT_Pos)
#define CATB_VERSION_VARIANT(value) (CATB_VERSION_VARIANT_Msk & ((value) << CATB_VERSION_VARIANT_Pos))
#define CATB_VERSION_MASK           _U_(0x000F0FFF) /**< \brief (CATB_VERSION) MASK Register */

/** \brief CatbIntch hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
 struct {
  __I  CATB_INTCH_Type           INTCH;       /**< \brief Offset: 0x00 (R/  32) In-Touch Status Register */
 } bf;
 struct {
  RoReg   CATB_INTCH;         /**< \brief (CATB Offset: 0x00) In-Touch Status Register */
 } reg;
} CatbIntch;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/** \brief CatbIntchclr hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
 struct {
  __O  CATB_INTCHCLR_Type        INTCHCLR;    /**< \brief Offset: 0x00 ( /W 32) In-Touch Status Clear Register */
 } bf;
 struct {
  WoReg   CATB_INTCHCLR;      /**< \brief (CATB Offset: 0x00) In-Touch Status Clear Register */
 } reg;
} CatbIntchclr;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/** \brief CatbOuttch hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
 struct {
  __I  CATB_OUTTCH_Type          OUTTCH;      /**< \brief Offset: 0x00 (R/  32) Out-of-Touch Status Register */
 } bf;
 struct {
  RoReg   CATB_OUTTCH;        /**< \brief (CATB Offset: 0x00) Out-of-Touch Status Register */
 } reg;
} CatbOuttch;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/** \brief CatbOuttchclr hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
 struct {
  __O  CATB_OUTTCHCLR_Type       OUTTCHCLR;   /**< \brief Offset: 0x00 ( /W 32) Out-of-Touch Status Clear Register */
 } bf;
 struct {
  WoReg   CATB_OUTTCHCLR;     /**< \brief (CATB Offset: 0x00) Out-of-Touch Status Clear Register */
 } reg;
} CatbOuttchclr;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/** \brief CATB hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {
  __IO uint32_t CR;          /**< \brief Offset: 0x00 (R/W 32) Control Register */
  __IO uint32_t CNTCR;       /**< \brief Offset: 0x04 (R/W 32) Counter Control Register */
  __IO uint32_t IDLE;        /**< \brief Offset: 0x08 (R/W 32) Sensor Idle Level */
  __I  uint32_t LEVEL;       /**< \brief Offset: 0x0C (R/  32) Sensor Relative Level */
  __I  uint32_t RAW;         /**< \brief Offset: 0x10 (R/  32) Sensor Raw Value */
  __IO uint32_t TIMING;      /**< \brief Offset: 0x14 (R/W 32) Filter Timing Register */
  __IO uint32_t THRESH;      /**< \brief Offset: 0x18 (R/W 32) Threshold Register */
  __IO uint32_t PINSEL;      /**< \brief Offset: 0x1C (R/W 32) Pin Selection Register */
  __IO uint32_t DMA;         /**< \brief Offset: 0x20 (R/W 32) Direct Memory Access Register */
  __I  uint32_t ISR;         /**< \brief Offset: 0x24 (R/  32) Interrupt Status Register */
  __O  uint32_t IER;         /**< \brief Offset: 0x28 ( /W 32) Interrupt Enable Register */
  __O  uint32_t IDR;         /**< \brief Offset: 0x2C ( /W 32) Interrupt Disable Register */
  __I  uint32_t IMR;         /**< \brief Offset: 0x30 (R/  32) Interrupt Mask Register */
  __O  uint32_t SCR;         /**< \brief Offset: 0x34 ( /W 32) Status Clear Register */
       RoReg8   Reserved1[0x8];
  __I  uint32_t Intch[1];    /**< \brief Offset: 0x40 CatbIntch groups [STATUS_REG_NUMBER] */
       RoReg8   Reserved2[0xC];
  __O  uint32_t Intchclr[1]; /**< \brief Offset: 0x50 CatbIntchclr groups [STATUS_REG_NUMBER] */
       RoReg8   Reserved3[0xC];
  __I  uint32_t Outtch[1];   /**< \brief Offset: 0x60 CatbOuttch groups [STATUS_REG_NUMBER] */
       RoReg8   Reserved4[0xC];
  __O  uint32_t Outtchclr[1]; /**< \brief Offset: 0x70 CatbOuttchclr groups [STATUS_REG_NUMBER] */
       RoReg8   Reserved5[0x84];
  __I  uint32_t PARAMETER;   /**< \brief Offset: 0xF8 (R/  32) Parameter Register */
  __I  uint32_t VERSION;     /**< \brief Offset: 0xFC (R/  32) Version Register */
} Catb;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAM4L_CATB_COMPONENT_ */
