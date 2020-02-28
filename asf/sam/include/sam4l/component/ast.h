/**
 * \file
 *
 * \brief Component description for AST
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

#ifndef _SAM4L_AST_COMPONENT_
#define _SAM4L_AST_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR AST */
/* ========================================================================== */
/** \addtogroup SAM4L_AST Asynchronous Timer */
/*@{*/

#define AST_I7532
#define REV_AST                     0x311

/* -------- AST_CR : (AST Offset: 0x00) (R/W 32) Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t EN:1;             /*!< bit:      0  Enable                             */
    uint32_t PCLR:1;           /*!< bit:      1  Prescaler Clear                    */
    uint32_t CAL:1;            /*!< bit:      2  Calendar mode                      */
    uint32_t :5;               /*!< bit:  3.. 7  Reserved                           */
    uint32_t CA0:1;            /*!< bit:      8  Clear on Alarm 0                   */
    uint32_t CA1:1;            /*!< bit:      9  Clear on Alarm 1                   */
    uint32_t :6;               /*!< bit: 10..15  Reserved                           */
    uint32_t PSEL:5;           /*!< bit: 16..20  Prescaler Select                   */
    uint32_t :11;              /*!< bit: 21..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} AST_CR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AST_CR_OFFSET               0x00         /**< \brief (AST_CR offset) Control Register */
#define AST_CR_RESETVALUE           _U_(0x00000000); /**< \brief (AST_CR reset_value) Control Register */

#define AST_CR_EN_Pos               0            /**< \brief (AST_CR) Enable */
#define AST_CR_EN                   (_U_(0x1) << AST_CR_EN_Pos)
#define   AST_CR_EN_0_Val                 _U_(0x0)   /**< \brief (AST_CR) The AST is disabled. */
#define   AST_CR_EN_1_Val                 _U_(0x1)   /**< \brief (AST_CR) The AST is enabled */
#define AST_CR_EN_0                 (AST_CR_EN_0_Val               << AST_CR_EN_Pos)
#define AST_CR_EN_1                 (AST_CR_EN_1_Val               << AST_CR_EN_Pos)
#define AST_CR_PCLR_Pos             1            /**< \brief (AST_CR) Prescaler Clear */
#define AST_CR_PCLR                 (_U_(0x1) << AST_CR_PCLR_Pos)
#define AST_CR_CAL_Pos              2            /**< \brief (AST_CR) Calendar mode */
#define AST_CR_CAL                  (_U_(0x1) << AST_CR_CAL_Pos)
#define AST_CR_CA0_Pos              8            /**< \brief (AST_CR) Clear on Alarm 0 */
#define AST_CR_CA0                  (_U_(0x1) << AST_CR_CA0_Pos)
#define AST_CR_CA1_Pos              9            /**< \brief (AST_CR) Clear on Alarm 1 */
#define AST_CR_CA1                  (_U_(0x1) << AST_CR_CA1_Pos)
#define AST_CR_PSEL_Pos             16           /**< \brief (AST_CR) Prescaler Select */
#define AST_CR_PSEL_Msk             (_U_(0x1F) << AST_CR_PSEL_Pos)
#define AST_CR_PSEL(value)          (AST_CR_PSEL_Msk & ((value) << AST_CR_PSEL_Pos))
#define AST_CR_MASK                 _U_(0x001F0307) /**< \brief (AST_CR) MASK Register */

/* -------- AST_CV : (AST Offset: 0x04) (R/W 32) Counter Value -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t VALUE:32;         /*!< bit:  0..31  AST Value                          */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} AST_CV_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AST_CV_OFFSET               0x04         /**< \brief (AST_CV offset) Counter Value */
#define AST_CV_RESETVALUE           _U_(0x00000000); /**< \brief (AST_CV reset_value) Counter Value */

#define AST_CV_VALUE_Pos            0            /**< \brief (AST_CV) AST Value */
#define AST_CV_VALUE_Msk            (_U_(0xFFFFFFFF) << AST_CV_VALUE_Pos)
#define AST_CV_VALUE(value)         (AST_CV_VALUE_Msk & ((value) << AST_CV_VALUE_Pos))
#define AST_CV_MASK                 _U_(0xFFFFFFFF) /**< \brief (AST_CV) MASK Register */

/* -------- AST_SR : (AST Offset: 0x08) (R/  32) Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t OVF:1;            /*!< bit:      0  Overflow                           */
    uint32_t :7;               /*!< bit:  1.. 7  Reserved                           */
    uint32_t ALARM0:1;         /*!< bit:      8  Alarm 0                            */
    uint32_t ALARM1:1;         /*!< bit:      9  Alarm 1                            */
    uint32_t :6;               /*!< bit: 10..15  Reserved                           */
    uint32_t PER0:1;           /*!< bit:     16  Periodic 0                         */
    uint32_t PER1:1;           /*!< bit:     17  Periodic 1                         */
    uint32_t :6;               /*!< bit: 18..23  Reserved                           */
    uint32_t BUSY:1;           /*!< bit:     24  AST Busy                           */
    uint32_t READY:1;          /*!< bit:     25  AST Ready                          */
    uint32_t :2;               /*!< bit: 26..27  Reserved                           */
    uint32_t CLKBUSY:1;        /*!< bit:     28  Clock Busy                         */
    uint32_t CLKRDY:1;         /*!< bit:     29  Clock Ready                        */
    uint32_t :2;               /*!< bit: 30..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} AST_SR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AST_SR_OFFSET               0x08         /**< \brief (AST_SR offset) Status Register */
#define AST_SR_RESETVALUE           _U_(0x00000000); /**< \brief (AST_SR reset_value) Status Register */

#define AST_SR_OVF_Pos              0            /**< \brief (AST_SR) Overflow */
#define AST_SR_OVF                  (_U_(0x1) << AST_SR_OVF_Pos)
#define AST_SR_ALARM0_Pos           8            /**< \brief (AST_SR) Alarm 0 */
#define AST_SR_ALARM0               (_U_(0x1) << AST_SR_ALARM0_Pos)
#define AST_SR_ALARM1_Pos           9            /**< \brief (AST_SR) Alarm 1 */
#define AST_SR_ALARM1               (_U_(0x1) << AST_SR_ALARM1_Pos)
#define AST_SR_PER0_Pos             16           /**< \brief (AST_SR) Periodic 0 */
#define AST_SR_PER0                 (_U_(0x1) << AST_SR_PER0_Pos)
#define AST_SR_PER1_Pos             17           /**< \brief (AST_SR) Periodic 1 */
#define AST_SR_PER1                 (_U_(0x1) << AST_SR_PER1_Pos)
#define AST_SR_BUSY_Pos             24           /**< \brief (AST_SR) AST Busy */
#define AST_SR_BUSY                 (_U_(0x1) << AST_SR_BUSY_Pos)
#define   AST_SR_BUSY_0_Val               _U_(0x0)   /**< \brief (AST_SR) The AST accepts writes to CV, WER, DTR, SCR, AR, PIR and CR */
#define   AST_SR_BUSY_1_Val               _U_(0x1)   /**< \brief (AST_SR) The AST is busy and will discard writes to CV, WER, DTR, SCR, AR, PIR and CR */
#define AST_SR_BUSY_0               (AST_SR_BUSY_0_Val             << AST_SR_BUSY_Pos)
#define AST_SR_BUSY_1               (AST_SR_BUSY_1_Val             << AST_SR_BUSY_Pos)
#define AST_SR_READY_Pos            25           /**< \brief (AST_SR) AST Ready */
#define AST_SR_READY                (_U_(0x1) << AST_SR_READY_Pos)
#define AST_SR_CLKBUSY_Pos          28           /**< \brief (AST_SR) Clock Busy */
#define AST_SR_CLKBUSY              (_U_(0x1) << AST_SR_CLKBUSY_Pos)
#define   AST_SR_CLKBUSY_0_Val            _U_(0x0)   /**< \brief (AST_SR) The clock is ready and can be changed */
#define   AST_SR_CLKBUSY_1_Val            _U_(0x1)   /**< \brief (AST_SR) CEN has been written and the clock is busy */
#define AST_SR_CLKBUSY_0            (AST_SR_CLKBUSY_0_Val          << AST_SR_CLKBUSY_Pos)
#define AST_SR_CLKBUSY_1            (AST_SR_CLKBUSY_1_Val          << AST_SR_CLKBUSY_Pos)
#define AST_SR_CLKRDY_Pos           29           /**< \brief (AST_SR) Clock Ready */
#define AST_SR_CLKRDY               (_U_(0x1) << AST_SR_CLKRDY_Pos)
#define AST_SR_MASK                 _U_(0x33030301) /**< \brief (AST_SR) MASK Register */

/* -------- AST_SCR : (AST Offset: 0x0C) ( /W 32) Status Clear Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t OVF:1;            /*!< bit:      0  Overflow                           */
    uint32_t :7;               /*!< bit:  1.. 7  Reserved                           */
    uint32_t ALARM0:1;         /*!< bit:      8  Alarm 0                            */
    uint32_t ALARM1:1;         /*!< bit:      9  Alarm 1                            */
    uint32_t :6;               /*!< bit: 10..15  Reserved                           */
    uint32_t PER0:1;           /*!< bit:     16  Periodic 0                         */
    uint32_t PER1:1;           /*!< bit:     17  Periodic 1                         */
    uint32_t :7;               /*!< bit: 18..24  Reserved                           */
    uint32_t READY:1;          /*!< bit:     25  AST Ready                          */
    uint32_t :3;               /*!< bit: 26..28  Reserved                           */
    uint32_t CLKRDY:1;         /*!< bit:     29  Clock Ready                        */
    uint32_t :2;               /*!< bit: 30..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} AST_SCR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AST_SCR_OFFSET              0x0C         /**< \brief (AST_SCR offset) Status Clear Register */
#define AST_SCR_RESETVALUE          _U_(0x00000000); /**< \brief (AST_SCR reset_value) Status Clear Register */

#define AST_SCR_OVF_Pos             0            /**< \brief (AST_SCR) Overflow */
#define AST_SCR_OVF                 (_U_(0x1) << AST_SCR_OVF_Pos)
#define AST_SCR_ALARM0_Pos          8            /**< \brief (AST_SCR) Alarm 0 */
#define AST_SCR_ALARM0              (_U_(0x1) << AST_SCR_ALARM0_Pos)
#define AST_SCR_ALARM1_Pos          9            /**< \brief (AST_SCR) Alarm 1 */
#define AST_SCR_ALARM1              (_U_(0x1) << AST_SCR_ALARM1_Pos)
#define AST_SCR_PER0_Pos            16           /**< \brief (AST_SCR) Periodic 0 */
#define AST_SCR_PER0                (_U_(0x1) << AST_SCR_PER0_Pos)
#define AST_SCR_PER1_Pos            17           /**< \brief (AST_SCR) Periodic 1 */
#define AST_SCR_PER1                (_U_(0x1) << AST_SCR_PER1_Pos)
#define AST_SCR_READY_Pos           25           /**< \brief (AST_SCR) AST Ready */
#define AST_SCR_READY               (_U_(0x1) << AST_SCR_READY_Pos)
#define AST_SCR_CLKRDY_Pos          29           /**< \brief (AST_SCR) Clock Ready */
#define AST_SCR_CLKRDY              (_U_(0x1) << AST_SCR_CLKRDY_Pos)
#define AST_SCR_MASK                _U_(0x22030301) /**< \brief (AST_SCR) MASK Register */

/* -------- AST_IER : (AST Offset: 0x10) ( /W 32) Interrupt Enable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t OVF:1;            /*!< bit:      0  Overflow                           */
    uint32_t :7;               /*!< bit:  1.. 7  Reserved                           */
    uint32_t ALARM0:1;         /*!< bit:      8  Alarm 0                            */
    uint32_t ALARM1:1;         /*!< bit:      9  Alarm 1                            */
    uint32_t :6;               /*!< bit: 10..15  Reserved                           */
    uint32_t PER0:1;           /*!< bit:     16  Periodic 0                         */
    uint32_t PER1:1;           /*!< bit:     17  Periodic 1                         */
    uint32_t :7;               /*!< bit: 18..24  Reserved                           */
    uint32_t READY:1;          /*!< bit:     25  AST Ready                          */
    uint32_t :3;               /*!< bit: 26..28  Reserved                           */
    uint32_t CLKRDY:1;         /*!< bit:     29  Clock Ready                        */
    uint32_t :2;               /*!< bit: 30..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} AST_IER_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AST_IER_OFFSET              0x10         /**< \brief (AST_IER offset) Interrupt Enable Register */
#define AST_IER_RESETVALUE          _U_(0x00000000); /**< \brief (AST_IER reset_value) Interrupt Enable Register */

#define AST_IER_OVF_Pos             0            /**< \brief (AST_IER) Overflow */
#define AST_IER_OVF                 (_U_(0x1) << AST_IER_OVF_Pos)
#define   AST_IER_OVF_0_Val               _U_(0x0)   /**< \brief (AST_IER) No effect */
#define   AST_IER_OVF_1_Val               _U_(0x1)   /**< \brief (AST_IER) Enable Interrupt. */
#define AST_IER_OVF_0               (AST_IER_OVF_0_Val             << AST_IER_OVF_Pos)
#define AST_IER_OVF_1               (AST_IER_OVF_1_Val             << AST_IER_OVF_Pos)
#define AST_IER_ALARM0_Pos          8            /**< \brief (AST_IER) Alarm 0 */
#define AST_IER_ALARM0              (_U_(0x1) << AST_IER_ALARM0_Pos)
#define   AST_IER_ALARM0_0_Val            _U_(0x0)   /**< \brief (AST_IER) No effect */
#define   AST_IER_ALARM0_1_Val            _U_(0x1)   /**< \brief (AST_IER) Enable interrupt */
#define AST_IER_ALARM0_0            (AST_IER_ALARM0_0_Val          << AST_IER_ALARM0_Pos)
#define AST_IER_ALARM0_1            (AST_IER_ALARM0_1_Val          << AST_IER_ALARM0_Pos)
#define AST_IER_ALARM1_Pos          9            /**< \brief (AST_IER) Alarm 1 */
#define AST_IER_ALARM1              (_U_(0x1) << AST_IER_ALARM1_Pos)
#define   AST_IER_ALARM1_0_Val            _U_(0x0)   /**< \brief (AST_IER) No effect */
#define   AST_IER_ALARM1_1_Val            _U_(0x1)   /**< \brief (AST_IER) Enable interrupt */
#define AST_IER_ALARM1_0            (AST_IER_ALARM1_0_Val          << AST_IER_ALARM1_Pos)
#define AST_IER_ALARM1_1            (AST_IER_ALARM1_1_Val          << AST_IER_ALARM1_Pos)
#define AST_IER_PER0_Pos            16           /**< \brief (AST_IER) Periodic 0 */
#define AST_IER_PER0                (_U_(0x1) << AST_IER_PER0_Pos)
#define   AST_IER_PER0_0_Val              _U_(0x0)   /**< \brief (AST_IER) No effect */
#define   AST_IER_PER0_1_Val              _U_(0x1)   /**< \brief (AST_IER) Enable interrupt */
#define AST_IER_PER0_0              (AST_IER_PER0_0_Val            << AST_IER_PER0_Pos)
#define AST_IER_PER0_1              (AST_IER_PER0_1_Val            << AST_IER_PER0_Pos)
#define AST_IER_PER1_Pos            17           /**< \brief (AST_IER) Periodic 1 */
#define AST_IER_PER1                (_U_(0x1) << AST_IER_PER1_Pos)
#define   AST_IER_PER1_0_Val              _U_(0x0)   /**< \brief (AST_IER) No effect */
#define   AST_IER_PER1_1_Val              _U_(0x1)   /**< \brief (AST_IER) Enable interrupt */
#define AST_IER_PER1_0              (AST_IER_PER1_0_Val            << AST_IER_PER1_Pos)
#define AST_IER_PER1_1              (AST_IER_PER1_1_Val            << AST_IER_PER1_Pos)
#define AST_IER_READY_Pos           25           /**< \brief (AST_IER) AST Ready */
#define AST_IER_READY               (_U_(0x1) << AST_IER_READY_Pos)
#define   AST_IER_READY_0_Val             _U_(0x0)   /**< \brief (AST_IER) No effect */
#define   AST_IER_READY_1_Val             _U_(0x1)   /**< \brief (AST_IER) Enable interrupt */
#define AST_IER_READY_0             (AST_IER_READY_0_Val           << AST_IER_READY_Pos)
#define AST_IER_READY_1             (AST_IER_READY_1_Val           << AST_IER_READY_Pos)
#define AST_IER_CLKRDY_Pos          29           /**< \brief (AST_IER) Clock Ready */
#define AST_IER_CLKRDY              (_U_(0x1) << AST_IER_CLKRDY_Pos)
#define   AST_IER_CLKRDY_0_Val            _U_(0x0)   /**< \brief (AST_IER) No effect */
#define   AST_IER_CLKRDY_1_Val            _U_(0x1)   /**< \brief (AST_IER) Enable interrupt */
#define AST_IER_CLKRDY_0            (AST_IER_CLKRDY_0_Val          << AST_IER_CLKRDY_Pos)
#define AST_IER_CLKRDY_1            (AST_IER_CLKRDY_1_Val          << AST_IER_CLKRDY_Pos)
#define AST_IER_MASK                _U_(0x22030301) /**< \brief (AST_IER) MASK Register */

/* -------- AST_IDR : (AST Offset: 0x14) ( /W 32) Interrupt Disable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t OVF:1;            /*!< bit:      0  Overflow                           */
    uint32_t :7;               /*!< bit:  1.. 7  Reserved                           */
    uint32_t ALARM0:1;         /*!< bit:      8  Alarm 0                            */
    uint32_t ALARM1:1;         /*!< bit:      9  Alarm 1                            */
    uint32_t :6;               /*!< bit: 10..15  Reserved                           */
    uint32_t PER0:1;           /*!< bit:     16  Periodic 0                         */
    uint32_t PER1:1;           /*!< bit:     17  Periodic 1                         */
    uint32_t :7;               /*!< bit: 18..24  Reserved                           */
    uint32_t READY:1;          /*!< bit:     25  AST Ready                          */
    uint32_t :3;               /*!< bit: 26..28  Reserved                           */
    uint32_t CLKRDY:1;         /*!< bit:     29  Clock Ready                        */
    uint32_t :2;               /*!< bit: 30..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} AST_IDR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AST_IDR_OFFSET              0x14         /**< \brief (AST_IDR offset) Interrupt Disable Register */
#define AST_IDR_RESETVALUE          _U_(0x00000000); /**< \brief (AST_IDR reset_value) Interrupt Disable Register */

#define AST_IDR_OVF_Pos             0            /**< \brief (AST_IDR) Overflow */
#define AST_IDR_OVF                 (_U_(0x1) << AST_IDR_OVF_Pos)
#define   AST_IDR_OVF_0_Val               _U_(0x0)   /**< \brief (AST_IDR) No effect */
#define   AST_IDR_OVF_1_Val               _U_(0x1)   /**< \brief (AST_IDR) Disable Interrupt. */
#define AST_IDR_OVF_0               (AST_IDR_OVF_0_Val             << AST_IDR_OVF_Pos)
#define AST_IDR_OVF_1               (AST_IDR_OVF_1_Val             << AST_IDR_OVF_Pos)
#define AST_IDR_ALARM0_Pos          8            /**< \brief (AST_IDR) Alarm 0 */
#define AST_IDR_ALARM0              (_U_(0x1) << AST_IDR_ALARM0_Pos)
#define   AST_IDR_ALARM0_0_Val            _U_(0x0)   /**< \brief (AST_IDR) No effect */
#define   AST_IDR_ALARM0_1_Val            _U_(0x1)   /**< \brief (AST_IDR) Disable interrupt */
#define AST_IDR_ALARM0_0            (AST_IDR_ALARM0_0_Val          << AST_IDR_ALARM0_Pos)
#define AST_IDR_ALARM0_1            (AST_IDR_ALARM0_1_Val          << AST_IDR_ALARM0_Pos)
#define AST_IDR_ALARM1_Pos          9            /**< \brief (AST_IDR) Alarm 1 */
#define AST_IDR_ALARM1              (_U_(0x1) << AST_IDR_ALARM1_Pos)
#define   AST_IDR_ALARM1_0_Val            _U_(0x0)   /**< \brief (AST_IDR) No effect */
#define   AST_IDR_ALARM1_1_Val            _U_(0x1)   /**< \brief (AST_IDR) Disable interrupt */
#define AST_IDR_ALARM1_0            (AST_IDR_ALARM1_0_Val          << AST_IDR_ALARM1_Pos)
#define AST_IDR_ALARM1_1            (AST_IDR_ALARM1_1_Val          << AST_IDR_ALARM1_Pos)
#define AST_IDR_PER0_Pos            16           /**< \brief (AST_IDR) Periodic 0 */
#define AST_IDR_PER0                (_U_(0x1) << AST_IDR_PER0_Pos)
#define   AST_IDR_PER0_0_Val              _U_(0x0)   /**< \brief (AST_IDR) No effet */
#define   AST_IDR_PER0_1_Val              _U_(0x1)   /**< \brief (AST_IDR) Disalbe interrupt */
#define AST_IDR_PER0_0              (AST_IDR_PER0_0_Val            << AST_IDR_PER0_Pos)
#define AST_IDR_PER0_1              (AST_IDR_PER0_1_Val            << AST_IDR_PER0_Pos)
#define AST_IDR_PER1_Pos            17           /**< \brief (AST_IDR) Periodic 1 */
#define AST_IDR_PER1                (_U_(0x1) << AST_IDR_PER1_Pos)
#define   AST_IDR_PER1_0_Val              _U_(0x0)   /**< \brief (AST_IDR) No effect */
#define   AST_IDR_PER1_1_Val              _U_(0x1)   /**< \brief (AST_IDR) Disable interrupt */
#define AST_IDR_PER1_0              (AST_IDR_PER1_0_Val            << AST_IDR_PER1_Pos)
#define AST_IDR_PER1_1              (AST_IDR_PER1_1_Val            << AST_IDR_PER1_Pos)
#define AST_IDR_READY_Pos           25           /**< \brief (AST_IDR) AST Ready */
#define AST_IDR_READY               (_U_(0x1) << AST_IDR_READY_Pos)
#define   AST_IDR_READY_0_Val             _U_(0x0)   /**< \brief (AST_IDR) No effect */
#define   AST_IDR_READY_1_Val             _U_(0x1)   /**< \brief (AST_IDR) Disable interrupt */
#define AST_IDR_READY_0             (AST_IDR_READY_0_Val           << AST_IDR_READY_Pos)
#define AST_IDR_READY_1             (AST_IDR_READY_1_Val           << AST_IDR_READY_Pos)
#define AST_IDR_CLKRDY_Pos          29           /**< \brief (AST_IDR) Clock Ready */
#define AST_IDR_CLKRDY              (_U_(0x1) << AST_IDR_CLKRDY_Pos)
#define   AST_IDR_CLKRDY_0_Val            _U_(0x0)   /**< \brief (AST_IDR) No effect */
#define   AST_IDR_CLKRDY_1_Val            _U_(0x1)   /**< \brief (AST_IDR) Disable interrupt */
#define AST_IDR_CLKRDY_0            (AST_IDR_CLKRDY_0_Val          << AST_IDR_CLKRDY_Pos)
#define AST_IDR_CLKRDY_1            (AST_IDR_CLKRDY_1_Val          << AST_IDR_CLKRDY_Pos)
#define AST_IDR_MASK                _U_(0x22030301) /**< \brief (AST_IDR) MASK Register */

/* -------- AST_IMR : (AST Offset: 0x18) (R/  32) Interrupt Mask Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t OVF:1;            /*!< bit:      0  Overflow                           */
    uint32_t :7;               /*!< bit:  1.. 7  Reserved                           */
    uint32_t ALARM0:1;         /*!< bit:      8  Alarm 0                            */
    uint32_t ALARM1:1;         /*!< bit:      9  Alarm 1                            */
    uint32_t :6;               /*!< bit: 10..15  Reserved                           */
    uint32_t PER0:1;           /*!< bit:     16  Periodic 0                         */
    uint32_t PER1:1;           /*!< bit:     17  Periodic 1                         */
    uint32_t :7;               /*!< bit: 18..24  Reserved                           */
    uint32_t READY:1;          /*!< bit:     25  AST Ready                          */
    uint32_t :3;               /*!< bit: 26..28  Reserved                           */
    uint32_t CLKRDY:1;         /*!< bit:     29  Clock Ready                        */
    uint32_t :2;               /*!< bit: 30..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} AST_IMR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AST_IMR_OFFSET              0x18         /**< \brief (AST_IMR offset) Interrupt Mask Register */
#define AST_IMR_RESETVALUE          _U_(0x00000000); /**< \brief (AST_IMR reset_value) Interrupt Mask Register */

#define AST_IMR_OVF_Pos             0            /**< \brief (AST_IMR) Overflow */
#define AST_IMR_OVF                 (_U_(0x1) << AST_IMR_OVF_Pos)
#define   AST_IMR_OVF_0_Val               _U_(0x0)   /**< \brief (AST_IMR) Interrupt is disabled */
#define   AST_IMR_OVF_1_Val               _U_(0x1)   /**< \brief (AST_IMR) Interrupt is enabled. */
#define AST_IMR_OVF_0               (AST_IMR_OVF_0_Val             << AST_IMR_OVF_Pos)
#define AST_IMR_OVF_1               (AST_IMR_OVF_1_Val             << AST_IMR_OVF_Pos)
#define AST_IMR_ALARM0_Pos          8            /**< \brief (AST_IMR) Alarm 0 */
#define AST_IMR_ALARM0              (_U_(0x1) << AST_IMR_ALARM0_Pos)
#define   AST_IMR_ALARM0_0_Val            _U_(0x0)   /**< \brief (AST_IMR) Interupt is disabled */
#define   AST_IMR_ALARM0_1_Val            _U_(0x1)   /**< \brief (AST_IMR) Interrupt is enabled */
#define AST_IMR_ALARM0_0            (AST_IMR_ALARM0_0_Val          << AST_IMR_ALARM0_Pos)
#define AST_IMR_ALARM0_1            (AST_IMR_ALARM0_1_Val          << AST_IMR_ALARM0_Pos)
#define AST_IMR_ALARM1_Pos          9            /**< \brief (AST_IMR) Alarm 1 */
#define AST_IMR_ALARM1              (_U_(0x1) << AST_IMR_ALARM1_Pos)
#define   AST_IMR_ALARM1_0_Val            _U_(0x0)   /**< \brief (AST_IMR) Interrupt is disabled */
#define   AST_IMR_ALARM1_1_Val            _U_(0x1)   /**< \brief (AST_IMR) Interrupt is enabled */
#define AST_IMR_ALARM1_0            (AST_IMR_ALARM1_0_Val          << AST_IMR_ALARM1_Pos)
#define AST_IMR_ALARM1_1            (AST_IMR_ALARM1_1_Val          << AST_IMR_ALARM1_Pos)
#define AST_IMR_PER0_Pos            16           /**< \brief (AST_IMR) Periodic 0 */
#define AST_IMR_PER0                (_U_(0x1) << AST_IMR_PER0_Pos)
#define   AST_IMR_PER0_0_Val              _U_(0x0)   /**< \brief (AST_IMR) Interrupt is disabled */
#define   AST_IMR_PER0_1_Val              _U_(0x1)   /**< \brief (AST_IMR) Interrupt is enabled */
#define AST_IMR_PER0_0              (AST_IMR_PER0_0_Val            << AST_IMR_PER0_Pos)
#define AST_IMR_PER0_1              (AST_IMR_PER0_1_Val            << AST_IMR_PER0_Pos)
#define AST_IMR_PER1_Pos            17           /**< \brief (AST_IMR) Periodic 1 */
#define AST_IMR_PER1                (_U_(0x1) << AST_IMR_PER1_Pos)
#define   AST_IMR_PER1_0_Val              _U_(0x0)   /**< \brief (AST_IMR) Interrupt is disabled */
#define   AST_IMR_PER1_1_Val              _U_(0x1)   /**< \brief (AST_IMR) Interrupt is enabled */
#define AST_IMR_PER1_0              (AST_IMR_PER1_0_Val            << AST_IMR_PER1_Pos)
#define AST_IMR_PER1_1              (AST_IMR_PER1_1_Val            << AST_IMR_PER1_Pos)
#define AST_IMR_READY_Pos           25           /**< \brief (AST_IMR) AST Ready */
#define AST_IMR_READY               (_U_(0x1) << AST_IMR_READY_Pos)
#define   AST_IMR_READY_0_Val             _U_(0x0)   /**< \brief (AST_IMR) Interrupt is disabled */
#define   AST_IMR_READY_1_Val             _U_(0x1)   /**< \brief (AST_IMR) Interrupt is enabled */
#define AST_IMR_READY_0             (AST_IMR_READY_0_Val           << AST_IMR_READY_Pos)
#define AST_IMR_READY_1             (AST_IMR_READY_1_Val           << AST_IMR_READY_Pos)
#define AST_IMR_CLKRDY_Pos          29           /**< \brief (AST_IMR) Clock Ready */
#define AST_IMR_CLKRDY              (_U_(0x1) << AST_IMR_CLKRDY_Pos)
#define   AST_IMR_CLKRDY_0_Val            _U_(0x0)   /**< \brief (AST_IMR) Interrupt is disabled */
#define   AST_IMR_CLKRDY_1_Val            _U_(0x1)   /**< \brief (AST_IMR) Interrupt is enabled */
#define AST_IMR_CLKRDY_0            (AST_IMR_CLKRDY_0_Val          << AST_IMR_CLKRDY_Pos)
#define AST_IMR_CLKRDY_1            (AST_IMR_CLKRDY_1_Val          << AST_IMR_CLKRDY_Pos)
#define AST_IMR_MASK                _U_(0x22030301) /**< \brief (AST_IMR) MASK Register */

/* -------- AST_WER : (AST Offset: 0x1C) (R/W 32) Wake Enable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t OVF:1;            /*!< bit:      0  Overflow                           */
    uint32_t :7;               /*!< bit:  1.. 7  Reserved                           */
    uint32_t ALARM0:1;         /*!< bit:      8  Alarm 0                            */
    uint32_t ALARM1:1;         /*!< bit:      9  Alarm 1                            */
    uint32_t :6;               /*!< bit: 10..15  Reserved                           */
    uint32_t PER0:1;           /*!< bit:     16  Periodic 0                         */
    uint32_t PER1:1;           /*!< bit:     17  Periodic 1                         */
    uint32_t :14;              /*!< bit: 18..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} AST_WER_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AST_WER_OFFSET              0x1C         /**< \brief (AST_WER offset) Wake Enable Register */
#define AST_WER_RESETVALUE          _U_(0x00000000); /**< \brief (AST_WER reset_value) Wake Enable Register */

#define AST_WER_OVF_Pos             0            /**< \brief (AST_WER) Overflow */
#define AST_WER_OVF                 (_U_(0x1) << AST_WER_OVF_Pos)
#define   AST_WER_OVF_0_Val               _U_(0x0)   /**< \brief (AST_WER) The corresponing event will not wake up the CPU from sleep mode */
#define   AST_WER_OVF_1_Val               _U_(0x1)   /**< \brief (AST_WER) The corresponding event will wake up the CPU from sleep mode */
#define AST_WER_OVF_0               (AST_WER_OVF_0_Val             << AST_WER_OVF_Pos)
#define AST_WER_OVF_1               (AST_WER_OVF_1_Val             << AST_WER_OVF_Pos)
#define AST_WER_ALARM0_Pos          8            /**< \brief (AST_WER) Alarm 0 */
#define AST_WER_ALARM0              (_U_(0x1) << AST_WER_ALARM0_Pos)
#define   AST_WER_ALARM0_0_Val            _U_(0x0)   /**< \brief (AST_WER) The corresponing event will not wake up the CPU from sleep mode */
#define   AST_WER_ALARM0_1_Val            _U_(0x1)   /**< \brief (AST_WER) The corresponding event will wake up the CPU from sleep mode */
#define AST_WER_ALARM0_0            (AST_WER_ALARM0_0_Val          << AST_WER_ALARM0_Pos)
#define AST_WER_ALARM0_1            (AST_WER_ALARM0_1_Val          << AST_WER_ALARM0_Pos)
#define AST_WER_ALARM1_Pos          9            /**< \brief (AST_WER) Alarm 1 */
#define AST_WER_ALARM1              (_U_(0x1) << AST_WER_ALARM1_Pos)
#define   AST_WER_ALARM1_0_Val            _U_(0x0)   /**< \brief (AST_WER) The corresponing event will not wake up the CPU from sleep mode */
#define   AST_WER_ALARM1_1_Val            _U_(0x1)   /**< \brief (AST_WER) The corresponding event will wake up the CPU from sleep mode */
#define AST_WER_ALARM1_0            (AST_WER_ALARM1_0_Val          << AST_WER_ALARM1_Pos)
#define AST_WER_ALARM1_1            (AST_WER_ALARM1_1_Val          << AST_WER_ALARM1_Pos)
#define AST_WER_PER0_Pos            16           /**< \brief (AST_WER) Periodic 0 */
#define AST_WER_PER0                (_U_(0x1) << AST_WER_PER0_Pos)
#define   AST_WER_PER0_0_Val              _U_(0x0)   /**< \brief (AST_WER) The corresponing event will not wake up the CPU from sleep mode */
#define   AST_WER_PER0_1_Val              _U_(0x1)   /**< \brief (AST_WER) The corresponding event will wake up the CPU from sleep mode */
#define AST_WER_PER0_0              (AST_WER_PER0_0_Val            << AST_WER_PER0_Pos)
#define AST_WER_PER0_1              (AST_WER_PER0_1_Val            << AST_WER_PER0_Pos)
#define AST_WER_PER1_Pos            17           /**< \brief (AST_WER) Periodic 1 */
#define AST_WER_PER1                (_U_(0x1) << AST_WER_PER1_Pos)
#define   AST_WER_PER1_0_Val              _U_(0x0)   /**< \brief (AST_WER) The corresponing event will not wake up the CPU from sleep mode */
#define   AST_WER_PER1_1_Val              _U_(0x1)   /**< \brief (AST_WER) The corresponding event will wake up the CPU from sleep mode */
#define AST_WER_PER1_0              (AST_WER_PER1_0_Val            << AST_WER_PER1_Pos)
#define AST_WER_PER1_1              (AST_WER_PER1_1_Val            << AST_WER_PER1_Pos)
#define AST_WER_MASK                _U_(0x00030301) /**< \brief (AST_WER) MASK Register */

/* -------- AST_AR0 : (AST Offset: 0x20) (R/W 32) Alarm Register 0 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t VALUE:32;         /*!< bit:  0..31  Alarm Value                        */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} AST_AR0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AST_AR0_OFFSET              0x20         /**< \brief (AST_AR0 offset) Alarm Register 0 */
#define AST_AR0_RESETVALUE          _U_(0x00000000); /**< \brief (AST_AR0 reset_value) Alarm Register 0 */

#define AST_AR0_VALUE_Pos           0            /**< \brief (AST_AR0) Alarm Value */
#define AST_AR0_VALUE_Msk           (_U_(0xFFFFFFFF) << AST_AR0_VALUE_Pos)
#define AST_AR0_VALUE(value)        (AST_AR0_VALUE_Msk & ((value) << AST_AR0_VALUE_Pos))
#define AST_AR0_MASK                _U_(0xFFFFFFFF) /**< \brief (AST_AR0) MASK Register */

/* -------- AST_AR1 : (AST Offset: 0x24) (R/W 32) Alarm Register 1 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t VALUE:32;         /*!< bit:  0..31  Alarm Value                        */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} AST_AR1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AST_AR1_OFFSET              0x24         /**< \brief (AST_AR1 offset) Alarm Register 1 */
#define AST_AR1_RESETVALUE          _U_(0x00000000); /**< \brief (AST_AR1 reset_value) Alarm Register 1 */

#define AST_AR1_VALUE_Pos           0            /**< \brief (AST_AR1) Alarm Value */
#define AST_AR1_VALUE_Msk           (_U_(0xFFFFFFFF) << AST_AR1_VALUE_Pos)
#define AST_AR1_VALUE(value)        (AST_AR1_VALUE_Msk & ((value) << AST_AR1_VALUE_Pos))
#define AST_AR1_MASK                _U_(0xFFFFFFFF) /**< \brief (AST_AR1) MASK Register */

/* -------- AST_PIR0 : (AST Offset: 0x30) (R/W 32) Periodic Interval Register 0 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t INSEL:5;          /*!< bit:  0.. 4  Interval Select                    */
    uint32_t :27;              /*!< bit:  5..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} AST_PIR0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AST_PIR0_OFFSET             0x30         /**< \brief (AST_PIR0 offset) Periodic Interval Register 0 */
#define AST_PIR0_RESETVALUE         _U_(0x00000000); /**< \brief (AST_PIR0 reset_value) Periodic Interval Register 0 */

#define AST_PIR0_INSEL_Pos          0            /**< \brief (AST_PIR0) Interval Select */
#define AST_PIR0_INSEL_Msk          (_U_(0x1F) << AST_PIR0_INSEL_Pos)
#define AST_PIR0_INSEL(value)       (AST_PIR0_INSEL_Msk & ((value) << AST_PIR0_INSEL_Pos))
#define AST_PIR0_MASK               _U_(0x0000001F) /**< \brief (AST_PIR0) MASK Register */

/* -------- AST_PIR1 : (AST Offset: 0x34) (R/W 32) Periodic Interval Register 1 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t INSEL:5;          /*!< bit:  0.. 4  Interval Select                    */
    uint32_t :27;              /*!< bit:  5..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} AST_PIR1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AST_PIR1_OFFSET             0x34         /**< \brief (AST_PIR1 offset) Periodic Interval Register 1 */
#define AST_PIR1_RESETVALUE         _U_(0x00000000); /**< \brief (AST_PIR1 reset_value) Periodic Interval Register 1 */

#define AST_PIR1_INSEL_Pos          0            /**< \brief (AST_PIR1) Interval Select */
#define AST_PIR1_INSEL_Msk          (_U_(0x1F) << AST_PIR1_INSEL_Pos)
#define AST_PIR1_INSEL(value)       (AST_PIR1_INSEL_Msk & ((value) << AST_PIR1_INSEL_Pos))
#define AST_PIR1_MASK               _U_(0x0000001F) /**< \brief (AST_PIR1) MASK Register */

/* -------- AST_CLOCK : (AST Offset: 0x40) (R/W 32) Clock Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t CEN:1;            /*!< bit:      0  Clock Enable                       */
    uint32_t :7;               /*!< bit:  1.. 7  Reserved                           */
    uint32_t CSSEL:3;          /*!< bit:  8..10  Clock Source Selection             */
    uint32_t :21;              /*!< bit: 11..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} AST_CLOCK_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AST_CLOCK_OFFSET            0x40         /**< \brief (AST_CLOCK offset) Clock Control Register */
#define AST_CLOCK_RESETVALUE        _U_(0x00000000); /**< \brief (AST_CLOCK reset_value) Clock Control Register */

#define AST_CLOCK_CEN_Pos           0            /**< \brief (AST_CLOCK) Clock Enable */
#define AST_CLOCK_CEN               (_U_(0x1) << AST_CLOCK_CEN_Pos)
#define   AST_CLOCK_CEN_0_Val             _U_(0x0)   /**< \brief (AST_CLOCK) The clock is disabled */
#define   AST_CLOCK_CEN_1_Val             _U_(0x1)   /**< \brief (AST_CLOCK) The clock is enabled */
#define AST_CLOCK_CEN_0             (AST_CLOCK_CEN_0_Val           << AST_CLOCK_CEN_Pos)
#define AST_CLOCK_CEN_1             (AST_CLOCK_CEN_1_Val           << AST_CLOCK_CEN_Pos)
#define AST_CLOCK_CSSEL_Pos         8            /**< \brief (AST_CLOCK) Clock Source Selection */
#define AST_CLOCK_CSSEL_Msk         (_U_(0x7) << AST_CLOCK_CSSEL_Pos)
#define AST_CLOCK_CSSEL(value)      (AST_CLOCK_CSSEL_Msk & ((value) << AST_CLOCK_CSSEL_Pos))
#define   AST_CLOCK_CSSEL_SLOWCLOCK_Val   _U_(0x0)   /**< \brief (AST_CLOCK) Slow clock */
#define   AST_CLOCK_CSSEL_32KHZCLK_Val    _U_(0x1)   /**< \brief (AST_CLOCK) 32 kHz clock */
#define   AST_CLOCK_CSSEL_PBCLOCK_Val     _U_(0x2)   /**< \brief (AST_CLOCK) PB clock */
#define   AST_CLOCK_CSSEL_GCLK_Val        _U_(0x3)   /**< \brief (AST_CLOCK) Generic clock */
#define   AST_CLOCK_CSSEL_1KHZCLK_Val     _U_(0x4)   /**< \brief (AST_CLOCK) 1kHz clock from 32 kHz oscillator */
#define AST_CLOCK_CSSEL_SLOWCLOCK   (AST_CLOCK_CSSEL_SLOWCLOCK_Val << AST_CLOCK_CSSEL_Pos)
#define AST_CLOCK_CSSEL_32KHZCLK    (AST_CLOCK_CSSEL_32KHZCLK_Val  << AST_CLOCK_CSSEL_Pos)
#define AST_CLOCK_CSSEL_PBCLOCK     (AST_CLOCK_CSSEL_PBCLOCK_Val   << AST_CLOCK_CSSEL_Pos)
#define AST_CLOCK_CSSEL_GCLK        (AST_CLOCK_CSSEL_GCLK_Val      << AST_CLOCK_CSSEL_Pos)
#define AST_CLOCK_CSSEL_1KHZCLK     (AST_CLOCK_CSSEL_1KHZCLK_Val   << AST_CLOCK_CSSEL_Pos)
#define AST_CLOCK_MASK              _U_(0x00000701) /**< \brief (AST_CLOCK) MASK Register */

/* -------- AST_DTR : (AST Offset: 0x44) (R/W 32) Digital Tuner Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t EXP:5;            /*!< bit:  0.. 4  EXP                                */
    uint32_t ADD:1;            /*!< bit:      5  ADD                                */
    uint32_t :2;               /*!< bit:  6.. 7  Reserved                           */
    uint32_t VALUE:8;          /*!< bit:  8..15  VALUE                              */
    uint32_t :16;              /*!< bit: 16..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} AST_DTR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AST_DTR_OFFSET              0x44         /**< \brief (AST_DTR offset) Digital Tuner Register */
#define AST_DTR_RESETVALUE          _U_(0x00000000); /**< \brief (AST_DTR reset_value) Digital Tuner Register */

#define AST_DTR_EXP_Pos             0            /**< \brief (AST_DTR) EXP */
#define AST_DTR_EXP_Msk             (_U_(0x1F) << AST_DTR_EXP_Pos)
#define AST_DTR_EXP(value)          (AST_DTR_EXP_Msk & ((value) << AST_DTR_EXP_Pos))
#define AST_DTR_ADD_Pos             5            /**< \brief (AST_DTR) ADD */
#define AST_DTR_ADD                 (_U_(0x1) << AST_DTR_ADD_Pos)
#define AST_DTR_VALUE_Pos           8            /**< \brief (AST_DTR) VALUE */
#define AST_DTR_VALUE_Msk           (_U_(0xFF) << AST_DTR_VALUE_Pos)
#define AST_DTR_VALUE(value)        (AST_DTR_VALUE_Msk & ((value) << AST_DTR_VALUE_Pos))
#define AST_DTR_MASK                _U_(0x0000FF3F) /**< \brief (AST_DTR) MASK Register */

/* -------- AST_EVE : (AST Offset: 0x48) ( /W 32) Event Enable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t OVF:1;            /*!< bit:      0  Overflow                           */
    uint32_t :7;               /*!< bit:  1.. 7  Reserved                           */
    uint32_t ALARM0:1;         /*!< bit:      8  Alarm 0                            */
    uint32_t ALARM1:1;         /*!< bit:      9  Alarm 1                            */
    uint32_t :6;               /*!< bit: 10..15  Reserved                           */
    uint32_t PER0:1;           /*!< bit:     16  Perioidc 0                         */
    uint32_t PER1:1;           /*!< bit:     17  Periodic 1                         */
    uint32_t :14;              /*!< bit: 18..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} AST_EVE_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AST_EVE_OFFSET              0x48         /**< \brief (AST_EVE offset) Event Enable Register */
#define AST_EVE_RESETVALUE          _U_(0x00000000); /**< \brief (AST_EVE reset_value) Event Enable Register */

#define AST_EVE_OVF_Pos             0            /**< \brief (AST_EVE) Overflow */
#define AST_EVE_OVF                 (_U_(0x1) << AST_EVE_OVF_Pos)
#define AST_EVE_ALARM0_Pos          8            /**< \brief (AST_EVE) Alarm 0 */
#define AST_EVE_ALARM0              (_U_(0x1) << AST_EVE_ALARM0_Pos)
#define AST_EVE_ALARM1_Pos          9            /**< \brief (AST_EVE) Alarm 1 */
#define AST_EVE_ALARM1              (_U_(0x1) << AST_EVE_ALARM1_Pos)
#define AST_EVE_PER0_Pos            16           /**< \brief (AST_EVE) Perioidc 0 */
#define AST_EVE_PER0                (_U_(0x1) << AST_EVE_PER0_Pos)
#define AST_EVE_PER1_Pos            17           /**< \brief (AST_EVE) Periodic 1 */
#define AST_EVE_PER1                (_U_(0x1) << AST_EVE_PER1_Pos)
#define AST_EVE_MASK                _U_(0x00030301) /**< \brief (AST_EVE) MASK Register */

/* -------- AST_EVD : (AST Offset: 0x4C) ( /W 32) Event Disable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t OVF:1;            /*!< bit:      0  Overflow                           */
    uint32_t :7;               /*!< bit:  1.. 7  Reserved                           */
    uint32_t ALARM0:1;         /*!< bit:      8  Alarm 0                            */
    uint32_t ALARM1:1;         /*!< bit:      9  Alarm 1                            */
    uint32_t :6;               /*!< bit: 10..15  Reserved                           */
    uint32_t PER0:1;           /*!< bit:     16  Perioidc 0                         */
    uint32_t PER1:1;           /*!< bit:     17  Periodic 1                         */
    uint32_t :14;              /*!< bit: 18..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} AST_EVD_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AST_EVD_OFFSET              0x4C         /**< \brief (AST_EVD offset) Event Disable Register */
#define AST_EVD_RESETVALUE          _U_(0x00000000); /**< \brief (AST_EVD reset_value) Event Disable Register */

#define AST_EVD_OVF_Pos             0            /**< \brief (AST_EVD) Overflow */
#define AST_EVD_OVF                 (_U_(0x1) << AST_EVD_OVF_Pos)
#define AST_EVD_ALARM0_Pos          8            /**< \brief (AST_EVD) Alarm 0 */
#define AST_EVD_ALARM0              (_U_(0x1) << AST_EVD_ALARM0_Pos)
#define AST_EVD_ALARM1_Pos          9            /**< \brief (AST_EVD) Alarm 1 */
#define AST_EVD_ALARM1              (_U_(0x1) << AST_EVD_ALARM1_Pos)
#define AST_EVD_PER0_Pos            16           /**< \brief (AST_EVD) Perioidc 0 */
#define AST_EVD_PER0                (_U_(0x1) << AST_EVD_PER0_Pos)
#define AST_EVD_PER1_Pos            17           /**< \brief (AST_EVD) Periodic 1 */
#define AST_EVD_PER1                (_U_(0x1) << AST_EVD_PER1_Pos)
#define AST_EVD_MASK                _U_(0x00030301) /**< \brief (AST_EVD) MASK Register */

/* -------- AST_EVM : (AST Offset: 0x50) (R/  32) Event Mask Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t OVF:1;            /*!< bit:      0  Overflow                           */
    uint32_t :7;               /*!< bit:  1.. 7  Reserved                           */
    uint32_t ALARM0:1;         /*!< bit:      8  Alarm 0                            */
    uint32_t ALARM1:1;         /*!< bit:      9  Alarm 1                            */
    uint32_t :6;               /*!< bit: 10..15  Reserved                           */
    uint32_t PER0:1;           /*!< bit:     16  Perioidc 0                         */
    uint32_t PER1:1;           /*!< bit:     17  Periodic 1                         */
    uint32_t :14;              /*!< bit: 18..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} AST_EVM_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AST_EVM_OFFSET              0x50         /**< \brief (AST_EVM offset) Event Mask Register */
#define AST_EVM_RESETVALUE          _U_(0x00000000); /**< \brief (AST_EVM reset_value) Event Mask Register */

#define AST_EVM_OVF_Pos             0            /**< \brief (AST_EVM) Overflow */
#define AST_EVM_OVF                 (_U_(0x1) << AST_EVM_OVF_Pos)
#define AST_EVM_ALARM0_Pos          8            /**< \brief (AST_EVM) Alarm 0 */
#define AST_EVM_ALARM0              (_U_(0x1) << AST_EVM_ALARM0_Pos)
#define AST_EVM_ALARM1_Pos          9            /**< \brief (AST_EVM) Alarm 1 */
#define AST_EVM_ALARM1              (_U_(0x1) << AST_EVM_ALARM1_Pos)
#define AST_EVM_PER0_Pos            16           /**< \brief (AST_EVM) Perioidc 0 */
#define AST_EVM_PER0                (_U_(0x1) << AST_EVM_PER0_Pos)
#define AST_EVM_PER1_Pos            17           /**< \brief (AST_EVM) Periodic 1 */
#define AST_EVM_PER1                (_U_(0x1) << AST_EVM_PER1_Pos)
#define AST_EVM_MASK                _U_(0x00030301) /**< \brief (AST_EVM) MASK Register */

/* -------- AST_CALV : (AST Offset: 0x54) (R/W 32) Calendar Value -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t SEC:6;            /*!< bit:  0.. 5  Second                             */
    uint32_t MIN:6;            /*!< bit:  6..11  Minute                             */
    uint32_t HOUR:5;           /*!< bit: 12..16  Hour                               */
    uint32_t DAY:5;            /*!< bit: 17..21  Day                                */
    uint32_t MONTH:4;          /*!< bit: 22..25  Month                              */
    uint32_t YEAR:6;           /*!< bit: 26..31  Year                               */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} AST_CALV_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AST_CALV_OFFSET             0x54         /**< \brief (AST_CALV offset) Calendar Value */
#define AST_CALV_RESETVALUE         _U_(0x00000000); /**< \brief (AST_CALV reset_value) Calendar Value */

#define AST_CALV_SEC_Pos            0            /**< \brief (AST_CALV) Second */
#define AST_CALV_SEC_Msk            (_U_(0x3F) << AST_CALV_SEC_Pos)
#define AST_CALV_SEC(value)         (AST_CALV_SEC_Msk & ((value) << AST_CALV_SEC_Pos))
#define AST_CALV_MIN_Pos            6            /**< \brief (AST_CALV) Minute */
#define AST_CALV_MIN_Msk            (_U_(0x3F) << AST_CALV_MIN_Pos)
#define AST_CALV_MIN(value)         (AST_CALV_MIN_Msk & ((value) << AST_CALV_MIN_Pos))
#define AST_CALV_HOUR_Pos           12           /**< \brief (AST_CALV) Hour */
#define AST_CALV_HOUR_Msk           (_U_(0x1F) << AST_CALV_HOUR_Pos)
#define AST_CALV_HOUR(value)        (AST_CALV_HOUR_Msk & ((value) << AST_CALV_HOUR_Pos))
#define AST_CALV_DAY_Pos            17           /**< \brief (AST_CALV) Day */
#define AST_CALV_DAY_Msk            (_U_(0x1F) << AST_CALV_DAY_Pos)
#define AST_CALV_DAY(value)         (AST_CALV_DAY_Msk & ((value) << AST_CALV_DAY_Pos))
#define AST_CALV_MONTH_Pos          22           /**< \brief (AST_CALV) Month */
#define AST_CALV_MONTH_Msk          (_U_(0xF) << AST_CALV_MONTH_Pos)
#define AST_CALV_MONTH(value)       (AST_CALV_MONTH_Msk & ((value) << AST_CALV_MONTH_Pos))
#define AST_CALV_YEAR_Pos           26           /**< \brief (AST_CALV) Year */
#define AST_CALV_YEAR_Msk           (_U_(0x3F) << AST_CALV_YEAR_Pos)
#define AST_CALV_YEAR(value)        (AST_CALV_YEAR_Msk & ((value) << AST_CALV_YEAR_Pos))
#define AST_CALV_MASK               _U_(0xFFFFFFFF) /**< \brief (AST_CALV) MASK Register */

/* -------- AST_PARAMETER : (AST Offset: 0xF0) (R/  32) Parameter Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DT:1;             /*!< bit:      0  Digital Tuner                      */
    uint32_t DTEXPWA:1;        /*!< bit:      1  Digital Tuner Exponent Writeable   */
    uint32_t DTEXPVALUE:5;     /*!< bit:  2.. 6  Digital Tuner Exponent Value       */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t NUMAR:2;          /*!< bit:  8.. 9  Number of alarm comparators        */
    uint32_t :2;               /*!< bit: 10..11  Reserved                           */
    uint32_t NUMPIR:1;         /*!< bit:     12  Number of periodic comparators     */
    uint32_t :1;               /*!< bit:     13  Reserved                           */
    uint32_t PIR0WA:1;         /*!< bit:     14  Periodic Interval 0 Writeable      */
    uint32_t PIR1WA:1;         /*!< bit:     15  Periodic Interval 1 Writeable      */
    uint32_t PER0VALUE:5;      /*!< bit: 16..20  Periodic Interval 0 Value          */
    uint32_t :3;               /*!< bit: 21..23  Reserved                           */
    uint32_t PER1VALUE:5;      /*!< bit: 24..28  Periodic Interval 1 Value          */
    uint32_t :3;               /*!< bit: 29..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} AST_PARAMETER_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AST_PARAMETER_OFFSET        0xF0         /**< \brief (AST_PARAMETER offset) Parameter Register */

#define AST_PARAMETER_DT_Pos        0            /**< \brief (AST_PARAMETER) Digital Tuner */
#define AST_PARAMETER_DT            (_U_(0x1) << AST_PARAMETER_DT_Pos)
#define   AST_PARAMETER_DT_OFF_Val        _U_(0x0)   /**< \brief (AST_PARAMETER) Digital tuner off */
#define   AST_PARAMETER_DT_ON_Val         _U_(0x1)   /**< \brief (AST_PARAMETER) Digital tuner on */
#define AST_PARAMETER_DT_OFF        (AST_PARAMETER_DT_OFF_Val      << AST_PARAMETER_DT_Pos)
#define AST_PARAMETER_DT_ON         (AST_PARAMETER_DT_ON_Val       << AST_PARAMETER_DT_Pos)
#define AST_PARAMETER_DTEXPWA_Pos   1            /**< \brief (AST_PARAMETER) Digital Tuner Exponent Writeable */
#define AST_PARAMETER_DTEXPWA       (_U_(0x1) << AST_PARAMETER_DTEXPWA_Pos)
#define   AST_PARAMETER_DTEXPWA_0_Val     _U_(0x0)   /**< \brief (AST_PARAMETER) Digital tuner exponent is a constant value. Writes to EXP bitfield in DTR will be discarded. */
#define   AST_PARAMETER_DTEXPWA_1_Val     _U_(0x1)   /**< \brief (AST_PARAMETER) Digital tuner exponent is chosen by writing to EXP bitfield in DTR */
#define AST_PARAMETER_DTEXPWA_0     (AST_PARAMETER_DTEXPWA_0_Val   << AST_PARAMETER_DTEXPWA_Pos)
#define AST_PARAMETER_DTEXPWA_1     (AST_PARAMETER_DTEXPWA_1_Val   << AST_PARAMETER_DTEXPWA_Pos)
#define AST_PARAMETER_DTEXPVALUE_Pos 2            /**< \brief (AST_PARAMETER) Digital Tuner Exponent Value */
#define AST_PARAMETER_DTEXPVALUE_Msk (_U_(0x1F) << AST_PARAMETER_DTEXPVALUE_Pos)
#define AST_PARAMETER_DTEXPVALUE(value) (AST_PARAMETER_DTEXPVALUE_Msk & ((value) << AST_PARAMETER_DTEXPVALUE_Pos))
#define AST_PARAMETER_NUMAR_Pos     8            /**< \brief (AST_PARAMETER) Number of alarm comparators */
#define AST_PARAMETER_NUMAR_Msk     (_U_(0x3) << AST_PARAMETER_NUMAR_Pos)
#define AST_PARAMETER_NUMAR(value)  (AST_PARAMETER_NUMAR_Msk & ((value) << AST_PARAMETER_NUMAR_Pos))
#define   AST_PARAMETER_NUMAR_ZERO_Val    _U_(0x0)   /**< \brief (AST_PARAMETER) No alarm comparators */
#define   AST_PARAMETER_NUMAR_ONE_Val     _U_(0x1)   /**< \brief (AST_PARAMETER) One alarm comparator */
#define   AST_PARAMETER_NUMAR_TWO_Val     _U_(0x2)   /**< \brief (AST_PARAMETER) Two alarm comparators */
#define AST_PARAMETER_NUMAR_ZERO    (AST_PARAMETER_NUMAR_ZERO_Val  << AST_PARAMETER_NUMAR_Pos)
#define AST_PARAMETER_NUMAR_ONE     (AST_PARAMETER_NUMAR_ONE_Val   << AST_PARAMETER_NUMAR_Pos)
#define AST_PARAMETER_NUMAR_TWO     (AST_PARAMETER_NUMAR_TWO_Val   << AST_PARAMETER_NUMAR_Pos)
#define AST_PARAMETER_NUMPIR_Pos    12           /**< \brief (AST_PARAMETER) Number of periodic comparators */
#define AST_PARAMETER_NUMPIR        (_U_(0x1) << AST_PARAMETER_NUMPIR_Pos)
#define   AST_PARAMETER_NUMPIR_ONE_Val    _U_(0x0)   /**< \brief (AST_PARAMETER) One periodic comparator */
#define   AST_PARAMETER_NUMPIR_TWO_Val    _U_(0x1)   /**< \brief (AST_PARAMETER) Two periodic comparators */
#define AST_PARAMETER_NUMPIR_ONE    (AST_PARAMETER_NUMPIR_ONE_Val  << AST_PARAMETER_NUMPIR_Pos)
#define AST_PARAMETER_NUMPIR_TWO    (AST_PARAMETER_NUMPIR_TWO_Val  << AST_PARAMETER_NUMPIR_Pos)
#define AST_PARAMETER_PIR0WA_Pos    14           /**< \brief (AST_PARAMETER) Periodic Interval 0 Writeable */
#define AST_PARAMETER_PIR0WA        (_U_(0x1) << AST_PARAMETER_PIR0WA_Pos)
#define   AST_PARAMETER_PIR0WA_0_Val      _U_(0x0)   /**< \brief (AST_PARAMETER) Periodic alarm prescaler 0 tapping is a constant value. Writes to INSEL bitfield in PIR0 will be discarded. */
#define   AST_PARAMETER_PIR0WA_1_Val      _U_(0x1)   /**< \brief (AST_PARAMETER) Periodic alarm prescaler 0 tapping is chosen by writing to INSEL bitfield in PIR0 */
#define AST_PARAMETER_PIR0WA_0      (AST_PARAMETER_PIR0WA_0_Val    << AST_PARAMETER_PIR0WA_Pos)
#define AST_PARAMETER_PIR0WA_1      (AST_PARAMETER_PIR0WA_1_Val    << AST_PARAMETER_PIR0WA_Pos)
#define AST_PARAMETER_PIR1WA_Pos    15           /**< \brief (AST_PARAMETER) Periodic Interval 1 Writeable */
#define AST_PARAMETER_PIR1WA        (_U_(0x1) << AST_PARAMETER_PIR1WA_Pos)
#define   AST_PARAMETER_PIR1WA_0_Val      _U_(0x0)   /**< \brief (AST_PARAMETER) Writes to PIR1 will be discarded */
#define   AST_PARAMETER_PIR1WA_1_Val      _U_(0x1)   /**< \brief (AST_PARAMETER) PIR1 can be written */
#define AST_PARAMETER_PIR1WA_0      (AST_PARAMETER_PIR1WA_0_Val    << AST_PARAMETER_PIR1WA_Pos)
#define AST_PARAMETER_PIR1WA_1      (AST_PARAMETER_PIR1WA_1_Val    << AST_PARAMETER_PIR1WA_Pos)
#define AST_PARAMETER_PER0VALUE_Pos 16           /**< \brief (AST_PARAMETER) Periodic Interval 0 Value */
#define AST_PARAMETER_PER0VALUE_Msk (_U_(0x1F) << AST_PARAMETER_PER0VALUE_Pos)
#define AST_PARAMETER_PER0VALUE(value) (AST_PARAMETER_PER0VALUE_Msk & ((value) << AST_PARAMETER_PER0VALUE_Pos))
#define AST_PARAMETER_PER1VALUE_Pos 24           /**< \brief (AST_PARAMETER) Periodic Interval 1 Value */
#define AST_PARAMETER_PER1VALUE_Msk (_U_(0x1F) << AST_PARAMETER_PER1VALUE_Pos)
#define AST_PARAMETER_PER1VALUE(value) (AST_PARAMETER_PER1VALUE_Msk & ((value) << AST_PARAMETER_PER1VALUE_Pos))
#define AST_PARAMETER_MASK          _U_(0x1F1FD37F) /**< \brief (AST_PARAMETER) MASK Register */

/* -------- AST_VERSION : (AST Offset: 0xFC) (R/  32) Version Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t VERSION:12;       /*!< bit:  0..11  Version Number                     */
    uint32_t :4;               /*!< bit: 12..15  Reserved                           */
    uint32_t VARIANT:4;        /*!< bit: 16..19  Variant Number                     */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} AST_VERSION_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AST_VERSION_OFFSET          0xFC         /**< \brief (AST_VERSION offset) Version Register */
#define AST_VERSION_RESETVALUE      _U_(0x00000311); /**< \brief (AST_VERSION reset_value) Version Register */

#define AST_VERSION_VERSION_Pos     0            /**< \brief (AST_VERSION) Version Number */
#define AST_VERSION_VERSION_Msk     (_U_(0xFFF) << AST_VERSION_VERSION_Pos)
#define AST_VERSION_VERSION(value)  (AST_VERSION_VERSION_Msk & ((value) << AST_VERSION_VERSION_Pos))
#define AST_VERSION_VARIANT_Pos     16           /**< \brief (AST_VERSION) Variant Number */
#define AST_VERSION_VARIANT_Msk     (_U_(0xF) << AST_VERSION_VARIANT_Pos)
#define AST_VERSION_VARIANT(value)  (AST_VERSION_VARIANT_Msk & ((value) << AST_VERSION_VARIANT_Pos))
#define AST_VERSION_MASK            _U_(0x000F0FFF) /**< \brief (AST_VERSION) MASK Register */

/** \brief AST hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {
  __IO uint32_t CR;          /**< \brief Offset: 0x00 (R/W 32) Control Register */
  __IO uint32_t CV;          /**< \brief Offset: 0x04 (R/W 32) Counter Value */
  __I  uint32_t SR;          /**< \brief Offset: 0x08 (R/  32) Status Register */
  __O  uint32_t SCR;         /**< \brief Offset: 0x0C ( /W 32) Status Clear Register */
  __O  uint32_t IER;         /**< \brief Offset: 0x10 ( /W 32) Interrupt Enable Register */
  __O  uint32_t IDR;         /**< \brief Offset: 0x14 ( /W 32) Interrupt Disable Register */
  __I  uint32_t IMR;         /**< \brief Offset: 0x18 (R/  32) Interrupt Mask Register */
  __IO uint32_t WER;         /**< \brief Offset: 0x1C (R/W 32) Wake Enable Register */
  __IO uint32_t AR0;         /**< \brief Offset: 0x20 (R/W 32) Alarm Register 0 */
  __IO uint32_t AR1;         /**< \brief Offset: 0x24 (R/W 32) Alarm Register 1 */
       RoReg8   Reserved1[0x8];
  __IO uint32_t PIR0;        /**< \brief Offset: 0x30 (R/W 32) Periodic Interval Register 0 */
  __IO uint32_t PIR1;        /**< \brief Offset: 0x34 (R/W 32) Periodic Interval Register 1 */
       RoReg8   Reserved2[0x8];
  __IO uint32_t CLOCK;       /**< \brief Offset: 0x40 (R/W 32) Clock Control Register */
  __IO uint32_t DTR;         /**< \brief Offset: 0x44 (R/W 32) Digital Tuner Register */
  __O  uint32_t EVE;         /**< \brief Offset: 0x48 ( /W 32) Event Enable Register */
  __O  uint32_t EVD;         /**< \brief Offset: 0x4C ( /W 32) Event Disable Register */
  __I  uint32_t EVM;         /**< \brief Offset: 0x50 (R/  32) Event Mask Register */
  __IO uint32_t CALV;        /**< \brief Offset: 0x54 (R/W 32) Calendar Value */
       RoReg8   Reserved3[0x98];
  __I  uint32_t PARAMETER;   /**< \brief Offset: 0xF0 (R/  32) Parameter Register */
       RoReg8   Reserved4[0x8];
  __I  uint32_t VERSION;     /**< \brief Offset: 0xFC (R/  32) Version Register */
} Ast;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAM4L_AST_COMPONENT_ */
