/**
 * \file
 *
 * \brief Component description for BSCIF
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

#ifndef _SAM4L_BSCIF_COMPONENT_
#define _SAM4L_BSCIF_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR BSCIF */
/* ========================================================================== */
/** \addtogroup SAM4L_BSCIF Backup System Control Interface */
/*@{*/

#define BSCIF_
#define REV_BSCIF                   0x100

/* -------- BSCIF_IER : (BSCIF Offset: 0x000) ( /W 32) Interrupt Enable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t OSC32RDY:1;       /*!< bit:      0  32kHz Oscillator Ready             */
    uint32_t RC32KRDY:1;       /*!< bit:      1  32kHz RC Oscillator Ready          */
    uint32_t RC32KLOCK:1;      /*!< bit:      2  32kHz RC Oscillator Lock           */
    uint32_t RC32KREFE:1;      /*!< bit:      3  32kHz RC Oscillator Reference Error */
    uint32_t RC32KSAT:1;       /*!< bit:      4  32kHz RC Oscillator Saturation     */
    uint32_t BOD33DET:1;       /*!< bit:      5  BOD33 Detected                     */
    uint32_t BOD18DET:1;       /*!< bit:      6  BOD18 Detected                     */
    uint32_t BOD33SYNRDY:1;    /*!< bit:      7  BOD33 Synchronization Ready        */
    uint32_t BOD18SYNRDY:1;    /*!< bit:      8  BOD18 Synchronization Ready        */
    uint32_t SSWRDY:1;         /*!< bit:      9  VREG Stop Switching Ready          */
    uint32_t VREGOK:1;         /*!< bit:     10  Main VREG OK                       */
    uint32_t :1;               /*!< bit:     11  Reserved                           */
    uint32_t LPBGRDY:1;        /*!< bit:     12  Low Power Bandgap Voltage Reference Ready */
    uint32_t :18;              /*!< bit: 13..30  Reserved                           */
    uint32_t AE:1;             /*!< bit:     31  Access Error                       */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} BSCIF_IER_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define BSCIF_IER_OFFSET            0x000        /**< \brief (BSCIF_IER offset) Interrupt Enable Register */
#define BSCIF_IER_RESETVALUE        _U_(0x00000000); /**< \brief (BSCIF_IER reset_value) Interrupt Enable Register */

#define BSCIF_IER_OSC32RDY_Pos      0            /**< \brief (BSCIF_IER) 32kHz Oscillator Ready */
#define BSCIF_IER_OSC32RDY          (_U_(0x1) << BSCIF_IER_OSC32RDY_Pos)
#define BSCIF_IER_RC32KRDY_Pos      1            /**< \brief (BSCIF_IER) 32kHz RC Oscillator Ready */
#define BSCIF_IER_RC32KRDY          (_U_(0x1) << BSCIF_IER_RC32KRDY_Pos)
#define BSCIF_IER_RC32KLOCK_Pos     2            /**< \brief (BSCIF_IER) 32kHz RC Oscillator Lock */
#define BSCIF_IER_RC32KLOCK         (_U_(0x1) << BSCIF_IER_RC32KLOCK_Pos)
#define BSCIF_IER_RC32KREFE_Pos     3            /**< \brief (BSCIF_IER) 32kHz RC Oscillator Reference Error */
#define BSCIF_IER_RC32KREFE         (_U_(0x1) << BSCIF_IER_RC32KREFE_Pos)
#define BSCIF_IER_RC32KSAT_Pos      4            /**< \brief (BSCIF_IER) 32kHz RC Oscillator Saturation */
#define BSCIF_IER_RC32KSAT          (_U_(0x1) << BSCIF_IER_RC32KSAT_Pos)
#define BSCIF_IER_BOD33DET_Pos      5            /**< \brief (BSCIF_IER) BOD33 Detected */
#define BSCIF_IER_BOD33DET          (_U_(0x1) << BSCIF_IER_BOD33DET_Pos)
#define BSCIF_IER_BOD18DET_Pos      6            /**< \brief (BSCIF_IER) BOD18 Detected */
#define BSCIF_IER_BOD18DET          (_U_(0x1) << BSCIF_IER_BOD18DET_Pos)
#define BSCIF_IER_BOD33SYNRDY_Pos   7            /**< \brief (BSCIF_IER) BOD33 Synchronization Ready */
#define BSCIF_IER_BOD33SYNRDY       (_U_(0x1) << BSCIF_IER_BOD33SYNRDY_Pos)
#define BSCIF_IER_BOD18SYNRDY_Pos   8            /**< \brief (BSCIF_IER) BOD18 Synchronization Ready */
#define BSCIF_IER_BOD18SYNRDY       (_U_(0x1) << BSCIF_IER_BOD18SYNRDY_Pos)
#define BSCIF_IER_SSWRDY_Pos        9            /**< \brief (BSCIF_IER) VREG Stop Switching Ready */
#define BSCIF_IER_SSWRDY            (_U_(0x1) << BSCIF_IER_SSWRDY_Pos)
#define BSCIF_IER_VREGOK_Pos        10           /**< \brief (BSCIF_IER) Main VREG OK */
#define BSCIF_IER_VREGOK            (_U_(0x1) << BSCIF_IER_VREGOK_Pos)
#define BSCIF_IER_LPBGRDY_Pos       12           /**< \brief (BSCIF_IER) Low Power Bandgap Voltage Reference Ready */
#define BSCIF_IER_LPBGRDY           (_U_(0x1) << BSCIF_IER_LPBGRDY_Pos)
#define BSCIF_IER_AE_Pos            31           /**< \brief (BSCIF_IER) Access Error */
#define BSCIF_IER_AE                (_U_(0x1) << BSCIF_IER_AE_Pos)
#define BSCIF_IER_MASK              _U_(0x800017FF) /**< \brief (BSCIF_IER) MASK Register */

/* -------- BSCIF_IDR : (BSCIF Offset: 0x004) ( /W 32) Interrupt Disable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t OSC32RDY:1;       /*!< bit:      0  32kHz Oscillator Ready             */
    uint32_t RC32KRDY:1;       /*!< bit:      1  32kHz RC Oscillator Ready          */
    uint32_t RC32KLOCK:1;      /*!< bit:      2  32kHz RC Oscillator Lock           */
    uint32_t RC32KREFE:1;      /*!< bit:      3  32kHz RC Oscillator Reference Error */
    uint32_t RC32KSAT:1;       /*!< bit:      4  32kHz RC Oscillator Saturation     */
    uint32_t BOD33DET:1;       /*!< bit:      5  BOD33 Detected                     */
    uint32_t BOD18DET:1;       /*!< bit:      6  BOD18 Detected                     */
    uint32_t BOD33SYNRDY:1;    /*!< bit:      7  BOD33 Synchronization Ready        */
    uint32_t BOD18SYNRDY:1;    /*!< bit:      8  BOD18 Synchronization Ready        */
    uint32_t SSWRDY:1;         /*!< bit:      9  VREG Stop Switching Ready          */
    uint32_t VREGOK:1;         /*!< bit:     10  Mai n VREG OK                      */
    uint32_t :1;               /*!< bit:     11  Reserved                           */
    uint32_t LPBGRDY:1;        /*!< bit:     12  Low Power Bandgap Voltage Reference Ready */
    uint32_t :18;              /*!< bit: 13..30  Reserved                           */
    uint32_t AE:1;             /*!< bit:     31  Access Error                       */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} BSCIF_IDR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define BSCIF_IDR_OFFSET            0x004        /**< \brief (BSCIF_IDR offset) Interrupt Disable Register */
#define BSCIF_IDR_RESETVALUE        _U_(0x00000000); /**< \brief (BSCIF_IDR reset_value) Interrupt Disable Register */

#define BSCIF_IDR_OSC32RDY_Pos      0            /**< \brief (BSCIF_IDR) 32kHz Oscillator Ready */
#define BSCIF_IDR_OSC32RDY          (_U_(0x1) << BSCIF_IDR_OSC32RDY_Pos)
#define BSCIF_IDR_RC32KRDY_Pos      1            /**< \brief (BSCIF_IDR) 32kHz RC Oscillator Ready */
#define BSCIF_IDR_RC32KRDY          (_U_(0x1) << BSCIF_IDR_RC32KRDY_Pos)
#define BSCIF_IDR_RC32KLOCK_Pos     2            /**< \brief (BSCIF_IDR) 32kHz RC Oscillator Lock */
#define BSCIF_IDR_RC32KLOCK         (_U_(0x1) << BSCIF_IDR_RC32KLOCK_Pos)
#define BSCIF_IDR_RC32KREFE_Pos     3            /**< \brief (BSCIF_IDR) 32kHz RC Oscillator Reference Error */
#define BSCIF_IDR_RC32KREFE         (_U_(0x1) << BSCIF_IDR_RC32KREFE_Pos)
#define BSCIF_IDR_RC32KSAT_Pos      4            /**< \brief (BSCIF_IDR) 32kHz RC Oscillator Saturation */
#define BSCIF_IDR_RC32KSAT          (_U_(0x1) << BSCIF_IDR_RC32KSAT_Pos)
#define BSCIF_IDR_BOD33DET_Pos      5            /**< \brief (BSCIF_IDR) BOD33 Detected */
#define BSCIF_IDR_BOD33DET          (_U_(0x1) << BSCIF_IDR_BOD33DET_Pos)
#define BSCIF_IDR_BOD18DET_Pos      6            /**< \brief (BSCIF_IDR) BOD18 Detected */
#define BSCIF_IDR_BOD18DET          (_U_(0x1) << BSCIF_IDR_BOD18DET_Pos)
#define BSCIF_IDR_BOD33SYNRDY_Pos   7            /**< \brief (BSCIF_IDR) BOD33 Synchronization Ready */
#define BSCIF_IDR_BOD33SYNRDY       (_U_(0x1) << BSCIF_IDR_BOD33SYNRDY_Pos)
#define BSCIF_IDR_BOD18SYNRDY_Pos   8            /**< \brief (BSCIF_IDR) BOD18 Synchronization Ready */
#define BSCIF_IDR_BOD18SYNRDY       (_U_(0x1) << BSCIF_IDR_BOD18SYNRDY_Pos)
#define BSCIF_IDR_SSWRDY_Pos        9            /**< \brief (BSCIF_IDR) VREG Stop Switching Ready */
#define BSCIF_IDR_SSWRDY            (_U_(0x1) << BSCIF_IDR_SSWRDY_Pos)
#define BSCIF_IDR_VREGOK_Pos        10           /**< \brief (BSCIF_IDR) Mai n VREG OK */
#define BSCIF_IDR_VREGOK            (_U_(0x1) << BSCIF_IDR_VREGOK_Pos)
#define BSCIF_IDR_LPBGRDY_Pos       12           /**< \brief (BSCIF_IDR) Low Power Bandgap Voltage Reference Ready */
#define BSCIF_IDR_LPBGRDY           (_U_(0x1) << BSCIF_IDR_LPBGRDY_Pos)
#define BSCIF_IDR_AE_Pos            31           /**< \brief (BSCIF_IDR) Access Error */
#define BSCIF_IDR_AE                (_U_(0x1) << BSCIF_IDR_AE_Pos)
#define BSCIF_IDR_MASK              _U_(0x800017FF) /**< \brief (BSCIF_IDR) MASK Register */

/* -------- BSCIF_IMR : (BSCIF Offset: 0x008) (R/  32) Interrupt Mask Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t OSC32RDY:1;       /*!< bit:      0  32kHz Oscillator Ready             */
    uint32_t RC32KRDY:1;       /*!< bit:      1  32kHz RC Oscillator Ready          */
    uint32_t RC32KLOCK:1;      /*!< bit:      2  32kHz RC Oscillator Lock           */
    uint32_t RC32KREFE:1;      /*!< bit:      3  32kHz RC Oscillator Reference Error */
    uint32_t RC32KSAT:1;       /*!< bit:      4  32kHz RC Oscillator Saturation     */
    uint32_t BOD33DET:1;       /*!< bit:      5  BOD33 Detected                     */
    uint32_t BOD18DET:1;       /*!< bit:      6  BOD18 Detected                     */
    uint32_t BOD33SYNRDY:1;    /*!< bit:      7  BOD33 Synchronization Ready        */
    uint32_t BOD18SYNRDY:1;    /*!< bit:      8  BOD18 Synchronization Ready        */
    uint32_t SSWRDY:1;         /*!< bit:      9  VREG Stop Switching Ready          */
    uint32_t VREGOK:1;         /*!< bit:     10  Main VREG OK                       */
    uint32_t :1;               /*!< bit:     11  Reserved                           */
    uint32_t LPBGRDY:1;        /*!< bit:     12  Low Power Bandgap Voltage Reference Ready */
    uint32_t :18;              /*!< bit: 13..30  Reserved                           */
    uint32_t AE:1;             /*!< bit:     31  Access Error                       */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} BSCIF_IMR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define BSCIF_IMR_OFFSET            0x008        /**< \brief (BSCIF_IMR offset) Interrupt Mask Register */
#define BSCIF_IMR_RESETVALUE        _U_(0x00000000); /**< \brief (BSCIF_IMR reset_value) Interrupt Mask Register */

#define BSCIF_IMR_OSC32RDY_Pos      0            /**< \brief (BSCIF_IMR) 32kHz Oscillator Ready */
#define BSCIF_IMR_OSC32RDY          (_U_(0x1) << BSCIF_IMR_OSC32RDY_Pos)
#define BSCIF_IMR_RC32KRDY_Pos      1            /**< \brief (BSCIF_IMR) 32kHz RC Oscillator Ready */
#define BSCIF_IMR_RC32KRDY          (_U_(0x1) << BSCIF_IMR_RC32KRDY_Pos)
#define BSCIF_IMR_RC32KLOCK_Pos     2            /**< \brief (BSCIF_IMR) 32kHz RC Oscillator Lock */
#define BSCIF_IMR_RC32KLOCK         (_U_(0x1) << BSCIF_IMR_RC32KLOCK_Pos)
#define BSCIF_IMR_RC32KREFE_Pos     3            /**< \brief (BSCIF_IMR) 32kHz RC Oscillator Reference Error */
#define BSCIF_IMR_RC32KREFE         (_U_(0x1) << BSCIF_IMR_RC32KREFE_Pos)
#define BSCIF_IMR_RC32KSAT_Pos      4            /**< \brief (BSCIF_IMR) 32kHz RC Oscillator Saturation */
#define BSCIF_IMR_RC32KSAT          (_U_(0x1) << BSCIF_IMR_RC32KSAT_Pos)
#define BSCIF_IMR_BOD33DET_Pos      5            /**< \brief (BSCIF_IMR) BOD33 Detected */
#define BSCIF_IMR_BOD33DET          (_U_(0x1) << BSCIF_IMR_BOD33DET_Pos)
#define BSCIF_IMR_BOD18DET_Pos      6            /**< \brief (BSCIF_IMR) BOD18 Detected */
#define BSCIF_IMR_BOD18DET          (_U_(0x1) << BSCIF_IMR_BOD18DET_Pos)
#define BSCIF_IMR_BOD33SYNRDY_Pos   7            /**< \brief (BSCIF_IMR) BOD33 Synchronization Ready */
#define BSCIF_IMR_BOD33SYNRDY       (_U_(0x1) << BSCIF_IMR_BOD33SYNRDY_Pos)
#define BSCIF_IMR_BOD18SYNRDY_Pos   8            /**< \brief (BSCIF_IMR) BOD18 Synchronization Ready */
#define BSCIF_IMR_BOD18SYNRDY       (_U_(0x1) << BSCIF_IMR_BOD18SYNRDY_Pos)
#define BSCIF_IMR_SSWRDY_Pos        9            /**< \brief (BSCIF_IMR) VREG Stop Switching Ready */
#define BSCIF_IMR_SSWRDY            (_U_(0x1) << BSCIF_IMR_SSWRDY_Pos)
#define BSCIF_IMR_VREGOK_Pos        10           /**< \brief (BSCIF_IMR) Main VREG OK */
#define BSCIF_IMR_VREGOK            (_U_(0x1) << BSCIF_IMR_VREGOK_Pos)
#define BSCIF_IMR_LPBGRDY_Pos       12           /**< \brief (BSCIF_IMR) Low Power Bandgap Voltage Reference Ready */
#define BSCIF_IMR_LPBGRDY           (_U_(0x1) << BSCIF_IMR_LPBGRDY_Pos)
#define BSCIF_IMR_AE_Pos            31           /**< \brief (BSCIF_IMR) Access Error */
#define BSCIF_IMR_AE                (_U_(0x1) << BSCIF_IMR_AE_Pos)
#define BSCIF_IMR_MASK              _U_(0x800017FF) /**< \brief (BSCIF_IMR) MASK Register */

/* -------- BSCIF_ISR : (BSCIF Offset: 0x00C) (R/  32) Interrupt Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t OSC32RDY:1;       /*!< bit:      0  32kHz Oscillator Ready             */
    uint32_t RC32KRDY:1;       /*!< bit:      1  32kHz RC Oscillator Ready          */
    uint32_t RC32KLOCK:1;      /*!< bit:      2  32kHz RC Oscillator Lock           */
    uint32_t RC32KREFE:1;      /*!< bit:      3  32kHz RC Oscillator Reference Error */
    uint32_t RC32KSAT:1;       /*!< bit:      4  32kHz RC Oscillator Saturation     */
    uint32_t BOD33DET:1;       /*!< bit:      5  BOD33 Detected                     */
    uint32_t BOD18DET:1;       /*!< bit:      6  BOD18 Detected                     */
    uint32_t BOD33SYNRDY:1;    /*!< bit:      7  BOD33 Synchronization Ready        */
    uint32_t BOD18SYNRDY:1;    /*!< bit:      8  BOD18 Synchronization Ready        */
    uint32_t SSWRDY:1;         /*!< bit:      9  VREG Stop Switching Ready          */
    uint32_t VREGOK:1;         /*!< bit:     10  Main VREG OK                       */
    uint32_t :1;               /*!< bit:     11  Reserved                           */
    uint32_t LPBGRDY:1;        /*!< bit:     12  Low Power Bandgap Voltage Reference Ready */
    uint32_t :18;              /*!< bit: 13..30  Reserved                           */
    uint32_t AE:1;             /*!< bit:     31  Access Error                       */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} BSCIF_ISR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define BSCIF_ISR_OFFSET            0x00C        /**< \brief (BSCIF_ISR offset) Interrupt Status Register */
#define BSCIF_ISR_RESETVALUE        _U_(0x00000000); /**< \brief (BSCIF_ISR reset_value) Interrupt Status Register */

#define BSCIF_ISR_OSC32RDY_Pos      0            /**< \brief (BSCIF_ISR) 32kHz Oscillator Ready */
#define BSCIF_ISR_OSC32RDY          (_U_(0x1) << BSCIF_ISR_OSC32RDY_Pos)
#define BSCIF_ISR_RC32KRDY_Pos      1            /**< \brief (BSCIF_ISR) 32kHz RC Oscillator Ready */
#define BSCIF_ISR_RC32KRDY          (_U_(0x1) << BSCIF_ISR_RC32KRDY_Pos)
#define BSCIF_ISR_RC32KLOCK_Pos     2            /**< \brief (BSCIF_ISR) 32kHz RC Oscillator Lock */
#define BSCIF_ISR_RC32KLOCK         (_U_(0x1) << BSCIF_ISR_RC32KLOCK_Pos)
#define BSCIF_ISR_RC32KREFE_Pos     3            /**< \brief (BSCIF_ISR) 32kHz RC Oscillator Reference Error */
#define BSCIF_ISR_RC32KREFE         (_U_(0x1) << BSCIF_ISR_RC32KREFE_Pos)
#define BSCIF_ISR_RC32KSAT_Pos      4            /**< \brief (BSCIF_ISR) 32kHz RC Oscillator Saturation */
#define BSCIF_ISR_RC32KSAT          (_U_(0x1) << BSCIF_ISR_RC32KSAT_Pos)
#define BSCIF_ISR_BOD33DET_Pos      5            /**< \brief (BSCIF_ISR) BOD33 Detected */
#define BSCIF_ISR_BOD33DET          (_U_(0x1) << BSCIF_ISR_BOD33DET_Pos)
#define BSCIF_ISR_BOD18DET_Pos      6            /**< \brief (BSCIF_ISR) BOD18 Detected */
#define BSCIF_ISR_BOD18DET          (_U_(0x1) << BSCIF_ISR_BOD18DET_Pos)
#define BSCIF_ISR_BOD33SYNRDY_Pos   7            /**< \brief (BSCIF_ISR) BOD33 Synchronization Ready */
#define BSCIF_ISR_BOD33SYNRDY       (_U_(0x1) << BSCIF_ISR_BOD33SYNRDY_Pos)
#define BSCIF_ISR_BOD18SYNRDY_Pos   8            /**< \brief (BSCIF_ISR) BOD18 Synchronization Ready */
#define BSCIF_ISR_BOD18SYNRDY       (_U_(0x1) << BSCIF_ISR_BOD18SYNRDY_Pos)
#define BSCIF_ISR_SSWRDY_Pos        9            /**< \brief (BSCIF_ISR) VREG Stop Switching Ready */
#define BSCIF_ISR_SSWRDY            (_U_(0x1) << BSCIF_ISR_SSWRDY_Pos)
#define BSCIF_ISR_VREGOK_Pos        10           /**< \brief (BSCIF_ISR) Main VREG OK */
#define BSCIF_ISR_VREGOK            (_U_(0x1) << BSCIF_ISR_VREGOK_Pos)
#define BSCIF_ISR_LPBGRDY_Pos       12           /**< \brief (BSCIF_ISR) Low Power Bandgap Voltage Reference Ready */
#define BSCIF_ISR_LPBGRDY           (_U_(0x1) << BSCIF_ISR_LPBGRDY_Pos)
#define BSCIF_ISR_AE_Pos            31           /**< \brief (BSCIF_ISR) Access Error */
#define BSCIF_ISR_AE                (_U_(0x1) << BSCIF_ISR_AE_Pos)
#define BSCIF_ISR_MASK              _U_(0x800017FF) /**< \brief (BSCIF_ISR) MASK Register */

/* -------- BSCIF_ICR : (BSCIF Offset: 0x010) ( /W 32) Interrupt Clear Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t OSC32RDY:1;       /*!< bit:      0  32kHz Oscillator Ready             */
    uint32_t RC32KRDY:1;       /*!< bit:      1  32kHz RC Oscillator Ready          */
    uint32_t RC32KLOCK:1;      /*!< bit:      2  32kHz RC Oscillator Lock           */
    uint32_t RC32KREFE:1;      /*!< bit:      3  32kHz RC Oscillator Reference Error */
    uint32_t RC32KSAT:1;       /*!< bit:      4  32kHz RC Oscillator Saturation     */
    uint32_t BOD33DET:1;       /*!< bit:      5  BOD33 Detected                     */
    uint32_t BOD18DET:1;       /*!< bit:      6  BOD18 Detected                     */
    uint32_t BOD33SYNRDY:1;    /*!< bit:      7  BOD33 Synchronization Ready        */
    uint32_t BOD18SYNRDY:1;    /*!< bit:      8  BOD18 Synchronization Ready        */
    uint32_t SSWRDY:1;         /*!< bit:      9  VREG Stop Switching Ready          */
    uint32_t VREGOK:1;         /*!< bit:     10  Main VREG OK                       */
    uint32_t :1;               /*!< bit:     11  Reserved                           */
    uint32_t LPBGRDY:1;        /*!< bit:     12  Low Power Bandgap Voltage Reference Ready */
    uint32_t :18;              /*!< bit: 13..30  Reserved                           */
    uint32_t AE:1;             /*!< bit:     31  Access Error                       */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} BSCIF_ICR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define BSCIF_ICR_OFFSET            0x010        /**< \brief (BSCIF_ICR offset) Interrupt Clear Register */
#define BSCIF_ICR_RESETVALUE        _U_(0x00000000); /**< \brief (BSCIF_ICR reset_value) Interrupt Clear Register */

#define BSCIF_ICR_OSC32RDY_Pos      0            /**< \brief (BSCIF_ICR) 32kHz Oscillator Ready */
#define BSCIF_ICR_OSC32RDY          (_U_(0x1) << BSCIF_ICR_OSC32RDY_Pos)
#define BSCIF_ICR_RC32KRDY_Pos      1            /**< \brief (BSCIF_ICR) 32kHz RC Oscillator Ready */
#define BSCIF_ICR_RC32KRDY          (_U_(0x1) << BSCIF_ICR_RC32KRDY_Pos)
#define BSCIF_ICR_RC32KLOCK_Pos     2            /**< \brief (BSCIF_ICR) 32kHz RC Oscillator Lock */
#define BSCIF_ICR_RC32KLOCK         (_U_(0x1) << BSCIF_ICR_RC32KLOCK_Pos)
#define BSCIF_ICR_RC32KREFE_Pos     3            /**< \brief (BSCIF_ICR) 32kHz RC Oscillator Reference Error */
#define BSCIF_ICR_RC32KREFE         (_U_(0x1) << BSCIF_ICR_RC32KREFE_Pos)
#define BSCIF_ICR_RC32KSAT_Pos      4            /**< \brief (BSCIF_ICR) 32kHz RC Oscillator Saturation */
#define BSCIF_ICR_RC32KSAT          (_U_(0x1) << BSCIF_ICR_RC32KSAT_Pos)
#define BSCIF_ICR_BOD33DET_Pos      5            /**< \brief (BSCIF_ICR) BOD33 Detected */
#define BSCIF_ICR_BOD33DET          (_U_(0x1) << BSCIF_ICR_BOD33DET_Pos)
#define BSCIF_ICR_BOD18DET_Pos      6            /**< \brief (BSCIF_ICR) BOD18 Detected */
#define BSCIF_ICR_BOD18DET          (_U_(0x1) << BSCIF_ICR_BOD18DET_Pos)
#define BSCIF_ICR_BOD33SYNRDY_Pos   7            /**< \brief (BSCIF_ICR) BOD33 Synchronization Ready */
#define BSCIF_ICR_BOD33SYNRDY       (_U_(0x1) << BSCIF_ICR_BOD33SYNRDY_Pos)
#define BSCIF_ICR_BOD18SYNRDY_Pos   8            /**< \brief (BSCIF_ICR) BOD18 Synchronization Ready */
#define BSCIF_ICR_BOD18SYNRDY       (_U_(0x1) << BSCIF_ICR_BOD18SYNRDY_Pos)
#define BSCIF_ICR_SSWRDY_Pos        9            /**< \brief (BSCIF_ICR) VREG Stop Switching Ready */
#define BSCIF_ICR_SSWRDY            (_U_(0x1) << BSCIF_ICR_SSWRDY_Pos)
#define BSCIF_ICR_VREGOK_Pos        10           /**< \brief (BSCIF_ICR) Main VREG OK */
#define BSCIF_ICR_VREGOK            (_U_(0x1) << BSCIF_ICR_VREGOK_Pos)
#define BSCIF_ICR_LPBGRDY_Pos       12           /**< \brief (BSCIF_ICR) Low Power Bandgap Voltage Reference Ready */
#define BSCIF_ICR_LPBGRDY           (_U_(0x1) << BSCIF_ICR_LPBGRDY_Pos)
#define BSCIF_ICR_AE_Pos            31           /**< \brief (BSCIF_ICR) Access Error */
#define BSCIF_ICR_AE                (_U_(0x1) << BSCIF_ICR_AE_Pos)
#define BSCIF_ICR_MASK              _U_(0x800017FF) /**< \brief (BSCIF_ICR) MASK Register */

/* -------- BSCIF_PCLKSR : (BSCIF Offset: 0x014) (R/  32) Power and Clocks Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t OSC32RDY:1;       /*!< bit:      0  32kHz Oscillator Ready             */
    uint32_t RC32KRDY:1;       /*!< bit:      1  32kHz RC Oscillator Ready          */
    uint32_t RC32KLOCK:1;      /*!< bit:      2  32kHz RC Oscillator Lock           */
    uint32_t RC32KREFE:1;      /*!< bit:      3  32kHz RC Oscillator Reference Error */
    uint32_t RC32KSAT:1;       /*!< bit:      4  32kHz RC Oscillator Saturation     */
    uint32_t BOD33DET:1;       /*!< bit:      5  BOD33 Detected                     */
    uint32_t BOD18DET:1;       /*!< bit:      6  BOD18 Detected                     */
    uint32_t BOD33SYNRDY:1;    /*!< bit:      7  BOD33 Synchronization Ready        */
    uint32_t BOD18SYNRDY:1;    /*!< bit:      8  BOD18 Synchronization Ready        */
    uint32_t SSWRDY:1;         /*!< bit:      9  VREG Stop Switching Ready          */
    uint32_t VREGOK:1;         /*!< bit:     10  Main VREG OK                       */
    uint32_t RC1MRDY:1;        /*!< bit:     11  RC 1MHz Oscillator Ready           */
    uint32_t LPBGRDY:1;        /*!< bit:     12  Low Power Bandgap Voltage Reference Ready */
    uint32_t :19;              /*!< bit: 13..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} BSCIF_PCLKSR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define BSCIF_PCLKSR_OFFSET         0x014        /**< \brief (BSCIF_PCLKSR offset) Power and Clocks Status Register */
#define BSCIF_PCLKSR_RESETVALUE     _U_(0x00000000); /**< \brief (BSCIF_PCLKSR reset_value) Power and Clocks Status Register */

#define BSCIF_PCLKSR_OSC32RDY_Pos   0            /**< \brief (BSCIF_PCLKSR) 32kHz Oscillator Ready */
#define BSCIF_PCLKSR_OSC32RDY       (_U_(0x1) << BSCIF_PCLKSR_OSC32RDY_Pos)
#define BSCIF_PCLKSR_RC32KRDY_Pos   1            /**< \brief (BSCIF_PCLKSR) 32kHz RC Oscillator Ready */
#define BSCIF_PCLKSR_RC32KRDY       (_U_(0x1) << BSCIF_PCLKSR_RC32KRDY_Pos)
#define BSCIF_PCLKSR_RC32KLOCK_Pos  2            /**< \brief (BSCIF_PCLKSR) 32kHz RC Oscillator Lock */
#define BSCIF_PCLKSR_RC32KLOCK      (_U_(0x1) << BSCIF_PCLKSR_RC32KLOCK_Pos)
#define BSCIF_PCLKSR_RC32KREFE_Pos  3            /**< \brief (BSCIF_PCLKSR) 32kHz RC Oscillator Reference Error */
#define BSCIF_PCLKSR_RC32KREFE      (_U_(0x1) << BSCIF_PCLKSR_RC32KREFE_Pos)
#define BSCIF_PCLKSR_RC32KSAT_Pos   4            /**< \brief (BSCIF_PCLKSR) 32kHz RC Oscillator Saturation */
#define BSCIF_PCLKSR_RC32KSAT       (_U_(0x1) << BSCIF_PCLKSR_RC32KSAT_Pos)
#define BSCIF_PCLKSR_BOD33DET_Pos   5            /**< \brief (BSCIF_PCLKSR) BOD33 Detected */
#define BSCIF_PCLKSR_BOD33DET       (_U_(0x1) << BSCIF_PCLKSR_BOD33DET_Pos)
#define BSCIF_PCLKSR_BOD18DET_Pos   6            /**< \brief (BSCIF_PCLKSR) BOD18 Detected */
#define BSCIF_PCLKSR_BOD18DET       (_U_(0x1) << BSCIF_PCLKSR_BOD18DET_Pos)
#define BSCIF_PCLKSR_BOD33SYNRDY_Pos 7            /**< \brief (BSCIF_PCLKSR) BOD33 Synchronization Ready */
#define BSCIF_PCLKSR_BOD33SYNRDY    (_U_(0x1) << BSCIF_PCLKSR_BOD33SYNRDY_Pos)
#define BSCIF_PCLKSR_BOD18SYNRDY_Pos 8            /**< \brief (BSCIF_PCLKSR) BOD18 Synchronization Ready */
#define BSCIF_PCLKSR_BOD18SYNRDY    (_U_(0x1) << BSCIF_PCLKSR_BOD18SYNRDY_Pos)
#define BSCIF_PCLKSR_SSWRDY_Pos     9            /**< \brief (BSCIF_PCLKSR) VREG Stop Switching Ready */
#define BSCIF_PCLKSR_SSWRDY         (_U_(0x1) << BSCIF_PCLKSR_SSWRDY_Pos)
#define BSCIF_PCLKSR_VREGOK_Pos     10           /**< \brief (BSCIF_PCLKSR) Main VREG OK */
#define BSCIF_PCLKSR_VREGOK         (_U_(0x1) << BSCIF_PCLKSR_VREGOK_Pos)
#define BSCIF_PCLKSR_RC1MRDY_Pos    11           /**< \brief (BSCIF_PCLKSR) RC 1MHz Oscillator Ready */
#define BSCIF_PCLKSR_RC1MRDY        (_U_(0x1) << BSCIF_PCLKSR_RC1MRDY_Pos)
#define BSCIF_PCLKSR_LPBGRDY_Pos    12           /**< \brief (BSCIF_PCLKSR) Low Power Bandgap Voltage Reference Ready */
#define BSCIF_PCLKSR_LPBGRDY        (_U_(0x1) << BSCIF_PCLKSR_LPBGRDY_Pos)
#define BSCIF_PCLKSR_MASK           _U_(0x00001FFF) /**< \brief (BSCIF_PCLKSR) MASK Register */

/* -------- BSCIF_UNLOCK : (BSCIF Offset: 0x018) ( /W 32) Unlock Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t ADDR:10;          /*!< bit:  0.. 9  Unlock Address                     */
    uint32_t :14;              /*!< bit: 10..23  Reserved                           */
    uint32_t KEY:8;            /*!< bit: 24..31  Unlock Key                         */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} BSCIF_UNLOCK_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define BSCIF_UNLOCK_OFFSET         0x018        /**< \brief (BSCIF_UNLOCK offset) Unlock Register */
#define BSCIF_UNLOCK_RESETVALUE     _U_(0x00000000); /**< \brief (BSCIF_UNLOCK reset_value) Unlock Register */

#define BSCIF_UNLOCK_ADDR_Pos       0            /**< \brief (BSCIF_UNLOCK) Unlock Address */
#define BSCIF_UNLOCK_ADDR_Msk       (_U_(0x3FF) << BSCIF_UNLOCK_ADDR_Pos)
#define BSCIF_UNLOCK_ADDR(value)    (BSCIF_UNLOCK_ADDR_Msk & ((value) << BSCIF_UNLOCK_ADDR_Pos))
#define BSCIF_UNLOCK_KEY_Pos        24           /**< \brief (BSCIF_UNLOCK) Unlock Key */
#define BSCIF_UNLOCK_KEY_Msk        (_U_(0xFF) << BSCIF_UNLOCK_KEY_Pos)
#define BSCIF_UNLOCK_KEY(value)     (BSCIF_UNLOCK_KEY_Msk & ((value) << BSCIF_UNLOCK_KEY_Pos))
#define   BSCIF_UNLOCK_KEY_VALID_Val      _U_(0xAA)   /**< \brief (BSCIF_UNLOCK) Valid Key to Unlock register */
#define BSCIF_UNLOCK_KEY_VALID      (BSCIF_UNLOCK_KEY_VALID_Val    << BSCIF_UNLOCK_KEY_Pos)
#define BSCIF_UNLOCK_MASK           _U_(0xFF0003FF) /**< \brief (BSCIF_UNLOCK) MASK Register */

/* -------- BSCIF_CSCR : (BSCIF Offset: 0x01C) (R/W 32) Chip Specific Configuration Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  uint32_t reg;                /*!< Type      used for register access              */
} BSCIF_CSCR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define BSCIF_CSCR_OFFSET           0x01C        /**< \brief (BSCIF_CSCR offset) Chip Specific Configuration Register */
#define BSCIF_CSCR_RESETVALUE       _U_(0x00000000); /**< \brief (BSCIF_CSCR reset_value) Chip Specific Configuration Register */

#define BSCIF_CSCR_MASK             _U_(0x00000000) /**< \brief (BSCIF_CSCR) MASK Register */

/* -------- BSCIF_OSCCTRL32 : (BSCIF Offset: 0x020) (R/W 32) Oscillator 32 Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t OSC32EN:1;        /*!< bit:      0  32 KHz Oscillator Enable           */
    uint32_t PINSEL:1;         /*!< bit:      1  Pins Select                        */
    uint32_t EN32K:1;          /*!< bit:      2  32 KHz output Enable               */
    uint32_t EN1K:1;           /*!< bit:      3  1 KHz output Enable                */
    uint32_t :4;               /*!< bit:  4.. 7  Reserved                           */
    uint32_t MODE:3;           /*!< bit:  8..10  Oscillator Mode                    */
    uint32_t :1;               /*!< bit:     11  Reserved                           */
    uint32_t SELCURR:4;        /*!< bit: 12..15  Current selection                  */
    uint32_t STARTUP:3;        /*!< bit: 16..18  Oscillator Start-up Time           */
    uint32_t :13;              /*!< bit: 19..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} BSCIF_OSCCTRL32_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define BSCIF_OSCCTRL32_OFFSET      0x020        /**< \brief (BSCIF_OSCCTRL32 offset) Oscillator 32 Control Register */
#define BSCIF_OSCCTRL32_RESETVALUE  _U_(0x00000004); /**< \brief (BSCIF_OSCCTRL32 reset_value) Oscillator 32 Control Register */

#define BSCIF_OSCCTRL32_OSC32EN_Pos 0            /**< \brief (BSCIF_OSCCTRL32) 32 KHz Oscillator Enable */
#define BSCIF_OSCCTRL32_OSC32EN     (_U_(0x1) << BSCIF_OSCCTRL32_OSC32EN_Pos)
#define BSCIF_OSCCTRL32_PINSEL_Pos  1            /**< \brief (BSCIF_OSCCTRL32) Pins Select */
#define BSCIF_OSCCTRL32_PINSEL      (_U_(0x1) << BSCIF_OSCCTRL32_PINSEL_Pos)
#define BSCIF_OSCCTRL32_EN32K_Pos   2            /**< \brief (BSCIF_OSCCTRL32) 32 KHz output Enable */
#define BSCIF_OSCCTRL32_EN32K       (_U_(0x1) << BSCIF_OSCCTRL32_EN32K_Pos)
#define BSCIF_OSCCTRL32_EN1K_Pos    3            /**< \brief (BSCIF_OSCCTRL32) 1 KHz output Enable */
#define BSCIF_OSCCTRL32_EN1K        (_U_(0x1) << BSCIF_OSCCTRL32_EN1K_Pos)
#define BSCIF_OSCCTRL32_MODE_Pos    8            /**< \brief (BSCIF_OSCCTRL32) Oscillator Mode */
#define BSCIF_OSCCTRL32_MODE_Msk    (_U_(0x7) << BSCIF_OSCCTRL32_MODE_Pos)
#define BSCIF_OSCCTRL32_MODE(value) (BSCIF_OSCCTRL32_MODE_Msk & ((value) << BSCIF_OSCCTRL32_MODE_Pos))
#define BSCIF_OSCCTRL32_SELCURR_Pos 12           /**< \brief (BSCIF_OSCCTRL32) Current selection */
#define BSCIF_OSCCTRL32_SELCURR_Msk (_U_(0xF) << BSCIF_OSCCTRL32_SELCURR_Pos)
#define BSCIF_OSCCTRL32_SELCURR(value) (BSCIF_OSCCTRL32_SELCURR_Msk & ((value) << BSCIF_OSCCTRL32_SELCURR_Pos))
#define BSCIF_OSCCTRL32_STARTUP_Pos 16           /**< \brief (BSCIF_OSCCTRL32) Oscillator Start-up Time */
#define BSCIF_OSCCTRL32_STARTUP_Msk (_U_(0x7) << BSCIF_OSCCTRL32_STARTUP_Pos)
#define BSCIF_OSCCTRL32_STARTUP(value) (BSCIF_OSCCTRL32_STARTUP_Msk & ((value) << BSCIF_OSCCTRL32_STARTUP_Pos))
#define BSCIF_OSCCTRL32_MASK        _U_(0x0007F70F) /**< \brief (BSCIF_OSCCTRL32) MASK Register */

/* -------- BSCIF_RC32KCR : (BSCIF Offset: 0x024) (R/W 32) 32 kHz RC Oscillator Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t EN:1;             /*!< bit:      0  Enable as Generic clock source     */
    uint32_t TCEN:1;           /*!< bit:      1  Temperature Compensation Enable    */
    uint32_t EN32K:1;          /*!< bit:      2  Enable 32 KHz output               */
    uint32_t EN1K:1;           /*!< bit:      3  Enable 1 kHz output                */
    uint32_t MODE:1;           /*!< bit:      4  Mode Selection                     */
    uint32_t REF:1;            /*!< bit:      5  Reference select                   */
    uint32_t :1;               /*!< bit:      6  Reserved                           */
    uint32_t FCD:1;            /*!< bit:      7  Flash calibration done             */
    uint32_t :24;              /*!< bit:  8..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} BSCIF_RC32KCR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define BSCIF_RC32KCR_OFFSET        0x024        /**< \brief (BSCIF_RC32KCR offset) 32 kHz RC Oscillator Control Register */
#define BSCIF_RC32KCR_RESETVALUE    _U_(0x00000000); /**< \brief (BSCIF_RC32KCR reset_value) 32 kHz RC Oscillator Control Register */

#define BSCIF_RC32KCR_EN_Pos        0            /**< \brief (BSCIF_RC32KCR) Enable as Generic clock source */
#define BSCIF_RC32KCR_EN            (_U_(0x1) << BSCIF_RC32KCR_EN_Pos)
#define BSCIF_RC32KCR_TCEN_Pos      1            /**< \brief (BSCIF_RC32KCR) Temperature Compensation Enable */
#define BSCIF_RC32KCR_TCEN          (_U_(0x1) << BSCIF_RC32KCR_TCEN_Pos)
#define BSCIF_RC32KCR_EN32K_Pos     2            /**< \brief (BSCIF_RC32KCR) Enable 32 KHz output */
#define BSCIF_RC32KCR_EN32K         (_U_(0x1) << BSCIF_RC32KCR_EN32K_Pos)
#define BSCIF_RC32KCR_EN1K_Pos      3            /**< \brief (BSCIF_RC32KCR) Enable 1 kHz output */
#define BSCIF_RC32KCR_EN1K          (_U_(0x1) << BSCIF_RC32KCR_EN1K_Pos)
#define BSCIF_RC32KCR_MODE_Pos      4            /**< \brief (BSCIF_RC32KCR) Mode Selection */
#define BSCIF_RC32KCR_MODE          (_U_(0x1) << BSCIF_RC32KCR_MODE_Pos)
#define BSCIF_RC32KCR_REF_Pos       5            /**< \brief (BSCIF_RC32KCR) Reference select */
#define BSCIF_RC32KCR_REF           (_U_(0x1) << BSCIF_RC32KCR_REF_Pos)
#define BSCIF_RC32KCR_FCD_Pos       7            /**< \brief (BSCIF_RC32KCR) Flash calibration done */
#define BSCIF_RC32KCR_FCD           (_U_(0x1) << BSCIF_RC32KCR_FCD_Pos)
#define BSCIF_RC32KCR_MASK          _U_(0x000000BF) /**< \brief (BSCIF_RC32KCR) MASK Register */

/* -------- BSCIF_RC32KTUNE : (BSCIF Offset: 0x028) (R/W 32) 32kHz RC Oscillator Tuning Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t FINE:6;           /*!< bit:  0.. 5  Fine value                         */
    uint32_t :10;              /*!< bit:  6..15  Reserved                           */
    uint32_t COARSE:7;         /*!< bit: 16..22  Coarse Value                       */
    uint32_t :9;               /*!< bit: 23..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} BSCIF_RC32KTUNE_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define BSCIF_RC32KTUNE_OFFSET      0x028        /**< \brief (BSCIF_RC32KTUNE offset) 32kHz RC Oscillator Tuning Register */
#define BSCIF_RC32KTUNE_RESETVALUE  _U_(0x00000000); /**< \brief (BSCIF_RC32KTUNE reset_value) 32kHz RC Oscillator Tuning Register */

#define BSCIF_RC32KTUNE_FINE_Pos    0            /**< \brief (BSCIF_RC32KTUNE) Fine value */
#define BSCIF_RC32KTUNE_FINE_Msk    (_U_(0x3F) << BSCIF_RC32KTUNE_FINE_Pos)
#define BSCIF_RC32KTUNE_FINE(value) (BSCIF_RC32KTUNE_FINE_Msk & ((value) << BSCIF_RC32KTUNE_FINE_Pos))
#define BSCIF_RC32KTUNE_COARSE_Pos  16           /**< \brief (BSCIF_RC32KTUNE) Coarse Value */
#define BSCIF_RC32KTUNE_COARSE_Msk  (_U_(0x7F) << BSCIF_RC32KTUNE_COARSE_Pos)
#define BSCIF_RC32KTUNE_COARSE(value) (BSCIF_RC32KTUNE_COARSE_Msk & ((value) << BSCIF_RC32KTUNE_COARSE_Pos))
#define BSCIF_RC32KTUNE_MASK        _U_(0x007F003F) /**< \brief (BSCIF_RC32KTUNE) MASK Register */

/* -------- BSCIF_BOD33CTRL : (BSCIF Offset: 0x02C) (R/W 32) BOD33 Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t EN:1;             /*!< bit:      0  Enable                             */
    uint32_t HYST:1;           /*!< bit:      1  BOD Hysteresis                     */
    uint32_t :6;               /*!< bit:  2.. 7  Reserved                           */
    uint32_t ACTION:2;         /*!< bit:  8.. 9  Action                             */
    uint32_t :6;               /*!< bit: 10..15  Reserved                           */
    uint32_t MODE:1;           /*!< bit:     16  Operation modes                    */
    uint32_t :13;              /*!< bit: 17..29  Reserved                           */
    uint32_t FCD:1;            /*!< bit:     30  BOD Fuse Calibration Done          */
    uint32_t SFV:1;            /*!< bit:     31  BOD Control Register Store Final Value */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} BSCIF_BOD33CTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define BSCIF_BOD33CTRL_OFFSET      0x02C        /**< \brief (BSCIF_BOD33CTRL offset) BOD33 Control Register */

#define BSCIF_BOD33CTRL_EN_Pos      0            /**< \brief (BSCIF_BOD33CTRL) Enable */
#define BSCIF_BOD33CTRL_EN          (_U_(0x1) << BSCIF_BOD33CTRL_EN_Pos)
#define BSCIF_BOD33CTRL_HYST_Pos    1            /**< \brief (BSCIF_BOD33CTRL) BOD Hysteresis */
#define BSCIF_BOD33CTRL_HYST        (_U_(0x1) << BSCIF_BOD33CTRL_HYST_Pos)
#define BSCIF_BOD33CTRL_ACTION_Pos  8            /**< \brief (BSCIF_BOD33CTRL) Action */
#define BSCIF_BOD33CTRL_ACTION_Msk  (_U_(0x3) << BSCIF_BOD33CTRL_ACTION_Pos)
#define BSCIF_BOD33CTRL_ACTION(value) (BSCIF_BOD33CTRL_ACTION_Msk & ((value) << BSCIF_BOD33CTRL_ACTION_Pos))
#define BSCIF_BOD33CTRL_MODE_Pos    16           /**< \brief (BSCIF_BOD33CTRL) Operation modes */
#define BSCIF_BOD33CTRL_MODE        (_U_(0x1) << BSCIF_BOD33CTRL_MODE_Pos)
#define BSCIF_BOD33CTRL_FCD_Pos     30           /**< \brief (BSCIF_BOD33CTRL) BOD Fuse Calibration Done */
#define BSCIF_BOD33CTRL_FCD         (_U_(0x1) << BSCIF_BOD33CTRL_FCD_Pos)
#define BSCIF_BOD33CTRL_SFV_Pos     31           /**< \brief (BSCIF_BOD33CTRL) BOD Control Register Store Final Value */
#define BSCIF_BOD33CTRL_SFV         (_U_(0x1) << BSCIF_BOD33CTRL_SFV_Pos)
#define BSCIF_BOD33CTRL_MASK        _U_(0xC0010303) /**< \brief (BSCIF_BOD33CTRL) MASK Register */

/* -------- BSCIF_BOD33LEVEL : (BSCIF Offset: 0x030) (R/W 32) BOD33 Level Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t VAL:6;            /*!< bit:  0.. 5  BOD Value                          */
    uint32_t :26;              /*!< bit:  6..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} BSCIF_BOD33LEVEL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define BSCIF_BOD33LEVEL_OFFSET     0x030        /**< \brief (BSCIF_BOD33LEVEL offset) BOD33 Level Register */
#define BSCIF_BOD33LEVEL_RESETVALUE _U_(0x00000000); /**< \brief (BSCIF_BOD33LEVEL reset_value) BOD33 Level Register */

#define BSCIF_BOD33LEVEL_VAL_Pos    0            /**< \brief (BSCIF_BOD33LEVEL) BOD Value */
#define BSCIF_BOD33LEVEL_VAL_Msk    (_U_(0x3F) << BSCIF_BOD33LEVEL_VAL_Pos)
#define BSCIF_BOD33LEVEL_VAL(value) (BSCIF_BOD33LEVEL_VAL_Msk & ((value) << BSCIF_BOD33LEVEL_VAL_Pos))
#define BSCIF_BOD33LEVEL_MASK       _U_(0x0000003F) /**< \brief (BSCIF_BOD33LEVEL) MASK Register */

/* -------- BSCIF_BOD33SAMPLING : (BSCIF Offset: 0x034) (R/W 32) BOD33 Sampling Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t CEN:1;            /*!< bit:      0  Clock Enable                       */
    uint32_t CSSEL:1;          /*!< bit:      1  Clock Source Select                */
    uint32_t :6;               /*!< bit:  2.. 7  Reserved                           */
    uint32_t PSEL:4;           /*!< bit:  8..11  Prescaler Select                   */
    uint32_t :20;              /*!< bit: 12..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} BSCIF_BOD33SAMPLING_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define BSCIF_BOD33SAMPLING_OFFSET  0x034        /**< \brief (BSCIF_BOD33SAMPLING offset) BOD33 Sampling Control Register */
#define BSCIF_BOD33SAMPLING_RESETVALUE _U_(0x00000000); /**< \brief (BSCIF_BOD33SAMPLING reset_value) BOD33 Sampling Control Register */

#define BSCIF_BOD33SAMPLING_CEN_Pos 0            /**< \brief (BSCIF_BOD33SAMPLING) Clock Enable */
#define BSCIF_BOD33SAMPLING_CEN     (_U_(0x1) << BSCIF_BOD33SAMPLING_CEN_Pos)
#define BSCIF_BOD33SAMPLING_CSSEL_Pos 1            /**< \brief (BSCIF_BOD33SAMPLING) Clock Source Select */
#define BSCIF_BOD33SAMPLING_CSSEL   (_U_(0x1) << BSCIF_BOD33SAMPLING_CSSEL_Pos)
#define BSCIF_BOD33SAMPLING_PSEL_Pos 8            /**< \brief (BSCIF_BOD33SAMPLING) Prescaler Select */
#define BSCIF_BOD33SAMPLING_PSEL_Msk (_U_(0xF) << BSCIF_BOD33SAMPLING_PSEL_Pos)
#define BSCIF_BOD33SAMPLING_PSEL(value) (BSCIF_BOD33SAMPLING_PSEL_Msk & ((value) << BSCIF_BOD33SAMPLING_PSEL_Pos))
#define BSCIF_BOD33SAMPLING_MASK    _U_(0x00000F03) /**< \brief (BSCIF_BOD33SAMPLING) MASK Register */

/* -------- BSCIF_BOD18CTRL : (BSCIF Offset: 0x038) (R/W 32) BOD18 Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t EN:1;             /*!< bit:      0  Enable                             */
    uint32_t HYST:1;           /*!< bit:      1  BOD Hysteresis                     */
    uint32_t :6;               /*!< bit:  2.. 7  Reserved                           */
    uint32_t ACTION:2;         /*!< bit:  8.. 9  Action                             */
    uint32_t :6;               /*!< bit: 10..15  Reserved                           */
    uint32_t MODE:1;           /*!< bit:     16  Operation modes                    */
    uint32_t :13;              /*!< bit: 17..29  Reserved                           */
    uint32_t FCD:1;            /*!< bit:     30  BOD Fuse Calibration Done          */
    uint32_t SFV:1;            /*!< bit:     31  BOD Control Register Store Final Value */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} BSCIF_BOD18CTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define BSCIF_BOD18CTRL_OFFSET      0x038        /**< \brief (BSCIF_BOD18CTRL offset) BOD18 Control Register */
#define BSCIF_BOD18CTRL_RESETVALUE  _U_(0x00000000); /**< \brief (BSCIF_BOD18CTRL reset_value) BOD18 Control Register */

#define BSCIF_BOD18CTRL_EN_Pos      0            /**< \brief (BSCIF_BOD18CTRL) Enable */
#define BSCIF_BOD18CTRL_EN          (_U_(0x1) << BSCIF_BOD18CTRL_EN_Pos)
#define BSCIF_BOD18CTRL_HYST_Pos    1            /**< \brief (BSCIF_BOD18CTRL) BOD Hysteresis */
#define BSCIF_BOD18CTRL_HYST        (_U_(0x1) << BSCIF_BOD18CTRL_HYST_Pos)
#define BSCIF_BOD18CTRL_ACTION_Pos  8            /**< \brief (BSCIF_BOD18CTRL) Action */
#define BSCIF_BOD18CTRL_ACTION_Msk  (_U_(0x3) << BSCIF_BOD18CTRL_ACTION_Pos)
#define BSCIF_BOD18CTRL_ACTION(value) (BSCIF_BOD18CTRL_ACTION_Msk & ((value) << BSCIF_BOD18CTRL_ACTION_Pos))
#define BSCIF_BOD18CTRL_MODE_Pos    16           /**< \brief (BSCIF_BOD18CTRL) Operation modes */
#define BSCIF_BOD18CTRL_MODE        (_U_(0x1) << BSCIF_BOD18CTRL_MODE_Pos)
#define BSCIF_BOD18CTRL_FCD_Pos     30           /**< \brief (BSCIF_BOD18CTRL) BOD Fuse Calibration Done */
#define BSCIF_BOD18CTRL_FCD         (_U_(0x1) << BSCIF_BOD18CTRL_FCD_Pos)
#define BSCIF_BOD18CTRL_SFV_Pos     31           /**< \brief (BSCIF_BOD18CTRL) BOD Control Register Store Final Value */
#define BSCIF_BOD18CTRL_SFV         (_U_(0x1) << BSCIF_BOD18CTRL_SFV_Pos)
#define BSCIF_BOD18CTRL_MASK        _U_(0xC0010303) /**< \brief (BSCIF_BOD18CTRL) MASK Register */

/* -------- BSCIF_BOD18LEVEL : (BSCIF Offset: 0x03C) (R/W 32) BOD18 Level Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t VAL:6;            /*!< bit:  0.. 5  BOD Value                          */
    uint32_t :25;              /*!< bit:  6..30  Reserved                           */
    uint32_t RANGE:1;          /*!< bit:     31  BOD Threshold Range                */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} BSCIF_BOD18LEVEL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define BSCIF_BOD18LEVEL_OFFSET     0x03C        /**< \brief (BSCIF_BOD18LEVEL offset) BOD18 Level Register */
#define BSCIF_BOD18LEVEL_RESETVALUE _U_(0x00000000); /**< \brief (BSCIF_BOD18LEVEL reset_value) BOD18 Level Register */

#define BSCIF_BOD18LEVEL_VAL_Pos    0            /**< \brief (BSCIF_BOD18LEVEL) BOD Value */
#define BSCIF_BOD18LEVEL_VAL_Msk    (_U_(0x3F) << BSCIF_BOD18LEVEL_VAL_Pos)
#define BSCIF_BOD18LEVEL_VAL(value) (BSCIF_BOD18LEVEL_VAL_Msk & ((value) << BSCIF_BOD18LEVEL_VAL_Pos))
#define BSCIF_BOD18LEVEL_RANGE_Pos  31           /**< \brief (BSCIF_BOD18LEVEL) BOD Threshold Range */
#define BSCIF_BOD18LEVEL_RANGE      (_U_(0x1) << BSCIF_BOD18LEVEL_RANGE_Pos)
#define BSCIF_BOD18LEVEL_MASK       _U_(0x8000003F) /**< \brief (BSCIF_BOD18LEVEL) MASK Register */

/* -------- BSCIF_VREGCR : (BSCIF Offset: 0x044) (R/W 32) Voltage Regulator Configuration Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DIS:1;            /*!< bit:      0  Voltage Regulator disable          */
    uint32_t :7;               /*!< bit:  1.. 7  Reserved                           */
    uint32_t SSG:1;            /*!< bit:      8  Spread Spectrum Generator Enable   */
    uint32_t SSW:1;            /*!< bit:      9  Stop Switching                     */
    uint32_t SSWEVT:1;         /*!< bit:     10  Stop Switching On Event Enable     */
    uint32_t :20;              /*!< bit: 11..30  Reserved                           */
    uint32_t SFV:1;            /*!< bit:     31  Store Final Value                  */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} BSCIF_VREGCR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define BSCIF_VREGCR_OFFSET         0x044        /**< \brief (BSCIF_VREGCR offset) Voltage Regulator Configuration Register */
#define BSCIF_VREGCR_RESETVALUE     _U_(0x00000000); /**< \brief (BSCIF_VREGCR reset_value) Voltage Regulator Configuration Register */

#define BSCIF_VREGCR_DIS_Pos        0            /**< \brief (BSCIF_VREGCR) Voltage Regulator disable */
#define BSCIF_VREGCR_DIS            (_U_(0x1) << BSCIF_VREGCR_DIS_Pos)
#define BSCIF_VREGCR_SSG_Pos        8            /**< \brief (BSCIF_VREGCR) Spread Spectrum Generator Enable */
#define BSCIF_VREGCR_SSG            (_U_(0x1) << BSCIF_VREGCR_SSG_Pos)
#define BSCIF_VREGCR_SSW_Pos        9            /**< \brief (BSCIF_VREGCR) Stop Switching */
#define BSCIF_VREGCR_SSW            (_U_(0x1) << BSCIF_VREGCR_SSW_Pos)
#define BSCIF_VREGCR_SSWEVT_Pos     10           /**< \brief (BSCIF_VREGCR) Stop Switching On Event Enable */
#define BSCIF_VREGCR_SSWEVT         (_U_(0x1) << BSCIF_VREGCR_SSWEVT_Pos)
#define BSCIF_VREGCR_SFV_Pos        31           /**< \brief (BSCIF_VREGCR) Store Final Value */
#define BSCIF_VREGCR_SFV            (_U_(0x1) << BSCIF_VREGCR_SFV_Pos)
#define BSCIF_VREGCR_MASK           _U_(0x80000701) /**< \brief (BSCIF_VREGCR) MASK Register */

/* -------- BSCIF_VREGNCSR : (BSCIF Offset: 0x04C) (R/W 32) Normal Mode Control and Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  uint32_t reg;                /*!< Type      used for register access              */
} BSCIF_VREGNCSR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define BSCIF_VREGNCSR_OFFSET       0x04C        /**< \brief (BSCIF_VREGNCSR offset) Normal Mode Control and Status Register */
#define BSCIF_VREGNCSR_RESETVALUE   _U_(0x00000000); /**< \brief (BSCIF_VREGNCSR reset_value) Normal Mode Control and Status Register */

#define BSCIF_VREGNCSR_MASK         _U_(0x00000000) /**< \brief (BSCIF_VREGNCSR) MASK Register */

/* -------- BSCIF_VREGLPCSR : (BSCIF Offset: 0x050) (R/W 32) LP Mode Control and Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  uint32_t reg;                /*!< Type      used for register access              */
} BSCIF_VREGLPCSR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define BSCIF_VREGLPCSR_OFFSET      0x050        /**< \brief (BSCIF_VREGLPCSR offset) LP Mode Control and Status Register */
#define BSCIF_VREGLPCSR_RESETVALUE  _U_(0x00000000); /**< \brief (BSCIF_VREGLPCSR reset_value) LP Mode Control and Status Register */

#define BSCIF_VREGLPCSR_MASK        _U_(0x00000000) /**< \brief (BSCIF_VREGLPCSR) MASK Register */

/* -------- BSCIF_RC1MCR : (BSCIF Offset: 0x058) (R/W 32) 1MHz RC Clock Configuration Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t CLKOE:1;          /*!< bit:      0  1MHz RC Osc Clock Output Enable    */
    uint32_t :6;               /*!< bit:  1.. 6  Reserved                           */
    uint32_t FCD:1;            /*!< bit:      7  Flash Calibration Done             */
    uint32_t CLKCAL:5;         /*!< bit:  8..12  1MHz RC Osc Calibration            */
    uint32_t :19;              /*!< bit: 13..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} BSCIF_RC1MCR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define BSCIF_RC1MCR_OFFSET         0x058        /**< \brief (BSCIF_RC1MCR offset) 1MHz RC Clock Configuration Register */
#define BSCIF_RC1MCR_RESETVALUE     _U_(0x00000F00); /**< \brief (BSCIF_RC1MCR reset_value) 1MHz RC Clock Configuration Register */

#define BSCIF_RC1MCR_CLKOE_Pos      0            /**< \brief (BSCIF_RC1MCR) 1MHz RC Osc Clock Output Enable */
#define BSCIF_RC1MCR_CLKOE          (_U_(0x1) << BSCIF_RC1MCR_CLKOE_Pos)
#define BSCIF_RC1MCR_FCD_Pos        7            /**< \brief (BSCIF_RC1MCR) Flash Calibration Done */
#define BSCIF_RC1MCR_FCD            (_U_(0x1) << BSCIF_RC1MCR_FCD_Pos)
#define BSCIF_RC1MCR_CLKCAL_Pos     8            /**< \brief (BSCIF_RC1MCR) 1MHz RC Osc Calibration */
#define BSCIF_RC1MCR_CLKCAL_Msk     (_U_(0x1F) << BSCIF_RC1MCR_CLKCAL_Pos)
#define BSCIF_RC1MCR_CLKCAL(value)  (BSCIF_RC1MCR_CLKCAL_Msk & ((value) << BSCIF_RC1MCR_CLKCAL_Pos))
#define BSCIF_RC1MCR_MASK           _U_(0x00001F81) /**< \brief (BSCIF_RC1MCR) MASK Register */

/* -------- BSCIF_BGCR : (BSCIF Offset: 0x05C) (R/W 32) Bandgap Calibration Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  uint32_t reg;                /*!< Type      used for register access              */
} BSCIF_BGCR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define BSCIF_BGCR_OFFSET           0x05C        /**< \brief (BSCIF_BGCR offset) Bandgap Calibration Register */
#define BSCIF_BGCR_RESETVALUE       _U_(0x00000000); /**< \brief (BSCIF_BGCR reset_value) Bandgap Calibration Register */

#define BSCIF_BGCR_MASK             _U_(0x00000000) /**< \brief (BSCIF_BGCR) MASK Register */

/* -------- BSCIF_BGCTRL : (BSCIF Offset: 0x060) (R/W 32) Bandgap Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t ADCISEL:2;        /*!< bit:  0.. 1  ADC Input Selection                */
    uint32_t :6;               /*!< bit:  2.. 7  Reserved                           */
    uint32_t TSEN:1;           /*!< bit:      8  Temperature Sensor Enable          */
    uint32_t :23;              /*!< bit:  9..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} BSCIF_BGCTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define BSCIF_BGCTRL_OFFSET         0x060        /**< \brief (BSCIF_BGCTRL offset) Bandgap Control Register */
#define BSCIF_BGCTRL_RESETVALUE     _U_(0x00000000); /**< \brief (BSCIF_BGCTRL reset_value) Bandgap Control Register */

#define BSCIF_BGCTRL_ADCISEL_Pos    0            /**< \brief (BSCIF_BGCTRL) ADC Input Selection */
#define BSCIF_BGCTRL_ADCISEL_Msk    (_U_(0x3) << BSCIF_BGCTRL_ADCISEL_Pos)
#define BSCIF_BGCTRL_ADCISEL(value) (BSCIF_BGCTRL_ADCISEL_Msk & ((value) << BSCIF_BGCTRL_ADCISEL_Pos))
#define   BSCIF_BGCTRL_ADCISEL_DIS_Val    _U_(0x0)   /**< \brief (BSCIF_BGCTRL)  */
#define   BSCIF_BGCTRL_ADCISEL_VTEMP_Val  _U_(0x1)   /**< \brief (BSCIF_BGCTRL)  */
#define   BSCIF_BGCTRL_ADCISEL_VREF_Val   _U_(0x2)   /**< \brief (BSCIF_BGCTRL)  */
#define BSCIF_BGCTRL_ADCISEL_DIS    (BSCIF_BGCTRL_ADCISEL_DIS_Val  << BSCIF_BGCTRL_ADCISEL_Pos)
#define BSCIF_BGCTRL_ADCISEL_VTEMP  (BSCIF_BGCTRL_ADCISEL_VTEMP_Val << BSCIF_BGCTRL_ADCISEL_Pos)
#define BSCIF_BGCTRL_ADCISEL_VREF   (BSCIF_BGCTRL_ADCISEL_VREF_Val << BSCIF_BGCTRL_ADCISEL_Pos)
#define BSCIF_BGCTRL_TSEN_Pos       8            /**< \brief (BSCIF_BGCTRL) Temperature Sensor Enable */
#define BSCIF_BGCTRL_TSEN           (_U_(0x1) << BSCIF_BGCTRL_TSEN_Pos)
#define BSCIF_BGCTRL_MASK           _U_(0x00000103) /**< \brief (BSCIF_BGCTRL) MASK Register */

/* -------- BSCIF_BGSR : (BSCIF Offset: 0x064) (R/  32) Bandgap Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t BGBUFRDY:8;       /*!< bit:  0.. 7  Bandgap Buffer Ready               */
    uint32_t :8;               /*!< bit:  8..15  Reserved                           */
    uint32_t BGRDY:1;          /*!< bit:     16  Bandgap Voltage Reference Ready    */
    uint32_t LPBGRDY:1;        /*!< bit:     17  Low Power Bandgap Voltage Reference Ready */
    uint32_t VREF:2;           /*!< bit: 18..19  Voltage Reference Used by the System */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} BSCIF_BGSR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define BSCIF_BGSR_OFFSET           0x064        /**< \brief (BSCIF_BGSR offset) Bandgap Status Register */
#define BSCIF_BGSR_RESETVALUE       _U_(0x00000000); /**< \brief (BSCIF_BGSR reset_value) Bandgap Status Register */

#define BSCIF_BGSR_BGBUFRDY_Pos     0            /**< \brief (BSCIF_BGSR) Bandgap Buffer Ready */
#define BSCIF_BGSR_BGBUFRDY_Msk     (_U_(0xFF) << BSCIF_BGSR_BGBUFRDY_Pos)
#define BSCIF_BGSR_BGBUFRDY(value)  (BSCIF_BGSR_BGBUFRDY_Msk & ((value) << BSCIF_BGSR_BGBUFRDY_Pos))
#define   BSCIF_BGSR_BGBUFRDY_FLASH_Val   _U_(0x1)   /**< \brief (BSCIF_BGSR)  */
#define   BSCIF_BGSR_BGBUFRDY_PLL_Val     _U_(0x2)   /**< \brief (BSCIF_BGSR)  */
#define   BSCIF_BGSR_BGBUFRDY_VREG_Val    _U_(0x4)   /**< \brief (BSCIF_BGSR)  */
#define   BSCIF_BGSR_BGBUFRDY_BUFRR_Val   _U_(0x8)   /**< \brief (BSCIF_BGSR)  */
#define   BSCIF_BGSR_BGBUFRDY_ADC_Val     _U_(0x10)   /**< \brief (BSCIF_BGSR)  */
#define   BSCIF_BGSR_BGBUFRDY_LCD_Val     _U_(0x20)   /**< \brief (BSCIF_BGSR)  */
#define BSCIF_BGSR_BGBUFRDY_FLASH   (BSCIF_BGSR_BGBUFRDY_FLASH_Val << BSCIF_BGSR_BGBUFRDY_Pos)
#define BSCIF_BGSR_BGBUFRDY_PLL     (BSCIF_BGSR_BGBUFRDY_PLL_Val   << BSCIF_BGSR_BGBUFRDY_Pos)
#define BSCIF_BGSR_BGBUFRDY_VREG    (BSCIF_BGSR_BGBUFRDY_VREG_Val  << BSCIF_BGSR_BGBUFRDY_Pos)
#define BSCIF_BGSR_BGBUFRDY_BUFRR   (BSCIF_BGSR_BGBUFRDY_BUFRR_Val << BSCIF_BGSR_BGBUFRDY_Pos)
#define BSCIF_BGSR_BGBUFRDY_ADC     (BSCIF_BGSR_BGBUFRDY_ADC_Val   << BSCIF_BGSR_BGBUFRDY_Pos)
#define BSCIF_BGSR_BGBUFRDY_LCD     (BSCIF_BGSR_BGBUFRDY_LCD_Val   << BSCIF_BGSR_BGBUFRDY_Pos)
#define BSCIF_BGSR_BGRDY_Pos        16           /**< \brief (BSCIF_BGSR) Bandgap Voltage Reference Ready */
#define BSCIF_BGSR_BGRDY            (_U_(0x1) << BSCIF_BGSR_BGRDY_Pos)
#define BSCIF_BGSR_LPBGRDY_Pos      17           /**< \brief (BSCIF_BGSR) Low Power Bandgap Voltage Reference Ready */
#define BSCIF_BGSR_LPBGRDY          (_U_(0x1) << BSCIF_BGSR_LPBGRDY_Pos)
#define BSCIF_BGSR_VREF_Pos         18           /**< \brief (BSCIF_BGSR) Voltage Reference Used by the System */
#define BSCIF_BGSR_VREF_Msk         (_U_(0x3) << BSCIF_BGSR_VREF_Pos)
#define BSCIF_BGSR_VREF(value)      (BSCIF_BGSR_VREF_Msk & ((value) << BSCIF_BGSR_VREF_Pos))
#define BSCIF_BGSR_MASK             _U_(0x000F00FF) /**< \brief (BSCIF_BGSR) MASK Register */

/* -------- BSCIF_BR : (BSCIF Offset: 0x078) (R/W 32) br Backup Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  uint32_t reg;                /*!< Type      used for register access              */
} BSCIF_BR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define BSCIF_BR_OFFSET             0x078        /**< \brief (BSCIF_BR offset) Backup Register */
#define BSCIF_BR_RESETVALUE         _U_(0x00000000); /**< \brief (BSCIF_BR reset_value) Backup Register */
#define BSCIF_BR_MASK               _U_(0xFFFFFFFF) /**< \brief (BSCIF_BR) MASK Register */

/* -------- BSCIF_BRIFBVERSION : (BSCIF Offset: 0x3E4) (R/  32) Backup Register Interface Version Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t VERSION:12;       /*!< bit:  0..11  Version Number                     */
    uint32_t :4;               /*!< bit: 12..15  Reserved                           */
    uint32_t VARIANT:4;        /*!< bit: 16..19  Variant Number                     */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} BSCIF_BRIFBVERSION_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define BSCIF_BRIFBVERSION_OFFSET   0x3E4        /**< \brief (BSCIF_BRIFBVERSION offset) Backup Register Interface Version Register */
#define BSCIF_BRIFBVERSION_RESETVALUE _U_(0x00000100); /**< \brief (BSCIF_BRIFBVERSION reset_value) Backup Register Interface Version Register */

#define BSCIF_BRIFBVERSION_VERSION_Pos 0            /**< \brief (BSCIF_BRIFBVERSION) Version Number */
#define BSCIF_BRIFBVERSION_VERSION_Msk (_U_(0xFFF) << BSCIF_BRIFBVERSION_VERSION_Pos)
#define BSCIF_BRIFBVERSION_VERSION(value) (BSCIF_BRIFBVERSION_VERSION_Msk & ((value) << BSCIF_BRIFBVERSION_VERSION_Pos))
#define BSCIF_BRIFBVERSION_VARIANT_Pos 16           /**< \brief (BSCIF_BRIFBVERSION) Variant Number */
#define BSCIF_BRIFBVERSION_VARIANT_Msk (_U_(0xF) << BSCIF_BRIFBVERSION_VARIANT_Pos)
#define BSCIF_BRIFBVERSION_VARIANT(value) (BSCIF_BRIFBVERSION_VARIANT_Msk & ((value) << BSCIF_BRIFBVERSION_VARIANT_Pos))
#define BSCIF_BRIFBVERSION_MASK     _U_(0x000F0FFF) /**< \brief (BSCIF_BRIFBVERSION) MASK Register */

/* -------- BSCIF_BGREFIFBVERSION : (BSCIF Offset: 0x3E8) (R/  32) BGREFIFB Version Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t VERSION:12;       /*!< bit:  0..11  Version Number                     */
    uint32_t :4;               /*!< bit: 12..15  Reserved                           */
    uint32_t VARIANT:4;        /*!< bit: 16..19  Variant Number                     */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} BSCIF_BGREFIFBVERSION_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define BSCIF_BGREFIFBVERSION_OFFSET 0x3E8        /**< \brief (BSCIF_BGREFIFBVERSION offset) BGREFIFB Version Register */
#define BSCIF_BGREFIFBVERSION_RESETVALUE _U_(0x00000110); /**< \brief (BSCIF_BGREFIFBVERSION reset_value) BGREFIFB Version Register */

#define BSCIF_BGREFIFBVERSION_VERSION_Pos 0            /**< \brief (BSCIF_BGREFIFBVERSION) Version Number */
#define BSCIF_BGREFIFBVERSION_VERSION_Msk (_U_(0xFFF) << BSCIF_BGREFIFBVERSION_VERSION_Pos)
#define BSCIF_BGREFIFBVERSION_VERSION(value) (BSCIF_BGREFIFBVERSION_VERSION_Msk & ((value) << BSCIF_BGREFIFBVERSION_VERSION_Pos))
#define BSCIF_BGREFIFBVERSION_VARIANT_Pos 16           /**< \brief (BSCIF_BGREFIFBVERSION) Variant Number */
#define BSCIF_BGREFIFBVERSION_VARIANT_Msk (_U_(0xF) << BSCIF_BGREFIFBVERSION_VARIANT_Pos)
#define BSCIF_BGREFIFBVERSION_VARIANT(value) (BSCIF_BGREFIFBVERSION_VARIANT_Msk & ((value) << BSCIF_BGREFIFBVERSION_VARIANT_Pos))
#define BSCIF_BGREFIFBVERSION_MASK  _U_(0x000F0FFF) /**< \brief (BSCIF_BGREFIFBVERSION) MASK Register */

/* -------- BSCIF_VREGIFGVERSION : (BSCIF Offset: 0x3EC) (R/  32) VREGIFA Version Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t VERSION:12;       /*!< bit:  0..11  Version Number                     */
    uint32_t :4;               /*!< bit: 12..15  Reserved                           */
    uint32_t VARIANT:4;        /*!< bit: 16..19  Variant Number                     */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} BSCIF_VREGIFGVERSION_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define BSCIF_VREGIFGVERSION_OFFSET 0x3EC        /**< \brief (BSCIF_VREGIFGVERSION offset) VREGIFA Version Register */
#define BSCIF_VREGIFGVERSION_RESETVALUE _U_(0x00000110); /**< \brief (BSCIF_VREGIFGVERSION reset_value) VREGIFA Version Register */

#define BSCIF_VREGIFGVERSION_VERSION_Pos 0            /**< \brief (BSCIF_VREGIFGVERSION) Version Number */
#define BSCIF_VREGIFGVERSION_VERSION_Msk (_U_(0xFFF) << BSCIF_VREGIFGVERSION_VERSION_Pos)
#define BSCIF_VREGIFGVERSION_VERSION(value) (BSCIF_VREGIFGVERSION_VERSION_Msk & ((value) << BSCIF_VREGIFGVERSION_VERSION_Pos))
#define BSCIF_VREGIFGVERSION_VARIANT_Pos 16           /**< \brief (BSCIF_VREGIFGVERSION) Variant Number */
#define BSCIF_VREGIFGVERSION_VARIANT_Msk (_U_(0xF) << BSCIF_VREGIFGVERSION_VARIANT_Pos)
#define BSCIF_VREGIFGVERSION_VARIANT(value) (BSCIF_VREGIFGVERSION_VARIANT_Msk & ((value) << BSCIF_VREGIFGVERSION_VARIANT_Pos))
#define BSCIF_VREGIFGVERSION_MASK   _U_(0x000F0FFF) /**< \brief (BSCIF_VREGIFGVERSION) MASK Register */

/* -------- BSCIF_BODIFCVERSION : (BSCIF Offset: 0x3F0) (R/  32) BODIFC Version Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t VERSION:12;       /*!< bit:  0..11  Version Number                     */
    uint32_t :4;               /*!< bit: 12..15  Reserved                           */
    uint32_t VARIANT:4;        /*!< bit: 16..19  Variant Number                     */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} BSCIF_BODIFCVERSION_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define BSCIF_BODIFCVERSION_OFFSET  0x3F0        /**< \brief (BSCIF_BODIFCVERSION offset) BODIFC Version Register */
#define BSCIF_BODIFCVERSION_RESETVALUE _U_(0x00000110); /**< \brief (BSCIF_BODIFCVERSION reset_value) BODIFC Version Register */

#define BSCIF_BODIFCVERSION_VERSION_Pos 0            /**< \brief (BSCIF_BODIFCVERSION) Version Number */
#define BSCIF_BODIFCVERSION_VERSION_Msk (_U_(0xFFF) << BSCIF_BODIFCVERSION_VERSION_Pos)
#define BSCIF_BODIFCVERSION_VERSION(value) (BSCIF_BODIFCVERSION_VERSION_Msk & ((value) << BSCIF_BODIFCVERSION_VERSION_Pos))
#define BSCIF_BODIFCVERSION_VARIANT_Pos 16           /**< \brief (BSCIF_BODIFCVERSION) Variant Number */
#define BSCIF_BODIFCVERSION_VARIANT_Msk (_U_(0xF) << BSCIF_BODIFCVERSION_VARIANT_Pos)
#define BSCIF_BODIFCVERSION_VARIANT(value) (BSCIF_BODIFCVERSION_VARIANT_Msk & ((value) << BSCIF_BODIFCVERSION_VARIANT_Pos))
#define BSCIF_BODIFCVERSION_MASK    _U_(0x000F0FFF) /**< \brief (BSCIF_BODIFCVERSION) MASK Register */

/* -------- BSCIF_RC32KIFBVERSION : (BSCIF Offset: 0x3F4) (R/  32) 32 kHz RC Oscillator Version Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t VERSION:12;       /*!< bit:  0..11  Version number                     */
    uint32_t :4;               /*!< bit: 12..15  Reserved                           */
    uint32_t VARIANT:4;        /*!< bit: 16..19  Variant number                     */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} BSCIF_RC32KIFBVERSION_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define BSCIF_RC32KIFBVERSION_OFFSET 0x3F4        /**< \brief (BSCIF_RC32KIFBVERSION offset) 32 kHz RC Oscillator Version Register */
#define BSCIF_RC32KIFBVERSION_RESETVALUE _U_(0x00000100); /**< \brief (BSCIF_RC32KIFBVERSION reset_value) 32 kHz RC Oscillator Version Register */

#define BSCIF_RC32KIFBVERSION_VERSION_Pos 0            /**< \brief (BSCIF_RC32KIFBVERSION) Version number */
#define BSCIF_RC32KIFBVERSION_VERSION_Msk (_U_(0xFFF) << BSCIF_RC32KIFBVERSION_VERSION_Pos)
#define BSCIF_RC32KIFBVERSION_VERSION(value) (BSCIF_RC32KIFBVERSION_VERSION_Msk & ((value) << BSCIF_RC32KIFBVERSION_VERSION_Pos))
#define BSCIF_RC32KIFBVERSION_VARIANT_Pos 16           /**< \brief (BSCIF_RC32KIFBVERSION) Variant number */
#define BSCIF_RC32KIFBVERSION_VARIANT_Msk (_U_(0xF) << BSCIF_RC32KIFBVERSION_VARIANT_Pos)
#define BSCIF_RC32KIFBVERSION_VARIANT(value) (BSCIF_RC32KIFBVERSION_VARIANT_Msk & ((value) << BSCIF_RC32KIFBVERSION_VARIANT_Pos))
#define BSCIF_RC32KIFBVERSION_MASK  _U_(0x000F0FFF) /**< \brief (BSCIF_RC32KIFBVERSION) MASK Register */

/* -------- BSCIF_OSC32IFAVERSION : (BSCIF Offset: 0x3F8) (R/  32) 32 KHz Oscillator Version Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t VERSION:12;       /*!< bit:  0..11  Version number                     */
    uint32_t :4;               /*!< bit: 12..15  Reserved                           */
    uint32_t VARIANT:4;        /*!< bit: 16..19  Variant nubmer                     */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} BSCIF_OSC32IFAVERSION_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define BSCIF_OSC32IFAVERSION_OFFSET 0x3F8        /**< \brief (BSCIF_OSC32IFAVERSION offset) 32 KHz Oscillator Version Register */
#define BSCIF_OSC32IFAVERSION_RESETVALUE _U_(0x00000200); /**< \brief (BSCIF_OSC32IFAVERSION reset_value) 32 KHz Oscillator Version Register */

#define BSCIF_OSC32IFAVERSION_VERSION_Pos 0            /**< \brief (BSCIF_OSC32IFAVERSION) Version number */
#define BSCIF_OSC32IFAVERSION_VERSION_Msk (_U_(0xFFF) << BSCIF_OSC32IFAVERSION_VERSION_Pos)
#define BSCIF_OSC32IFAVERSION_VERSION(value) (BSCIF_OSC32IFAVERSION_VERSION_Msk & ((value) << BSCIF_OSC32IFAVERSION_VERSION_Pos))
#define BSCIF_OSC32IFAVERSION_VARIANT_Pos 16           /**< \brief (BSCIF_OSC32IFAVERSION) Variant nubmer */
#define BSCIF_OSC32IFAVERSION_VARIANT_Msk (_U_(0xF) << BSCIF_OSC32IFAVERSION_VARIANT_Pos)
#define BSCIF_OSC32IFAVERSION_VARIANT(value) (BSCIF_OSC32IFAVERSION_VARIANT_Msk & ((value) << BSCIF_OSC32IFAVERSION_VARIANT_Pos))
#define BSCIF_OSC32IFAVERSION_MASK  _U_(0x000F0FFF) /**< \brief (BSCIF_OSC32IFAVERSION) MASK Register */

/* -------- BSCIF_VERSION : (BSCIF Offset: 0x3FC) (R/  32) BSCIF Version Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t VERSION:12;       /*!< bit:  0..11  Version Number                     */
    uint32_t :4;               /*!< bit: 12..15  Reserved                           */
    uint32_t VARIANT:4;        /*!< bit: 16..19  Variant Number                     */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} BSCIF_VERSION_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define BSCIF_VERSION_OFFSET        0x3FC        /**< \brief (BSCIF_VERSION offset) BSCIF Version Register */
#define BSCIF_VERSION_RESETVALUE    _U_(0x00000100); /**< \brief (BSCIF_VERSION reset_value) BSCIF Version Register */

#define BSCIF_VERSION_VERSION_Pos   0            /**< \brief (BSCIF_VERSION) Version Number */
#define BSCIF_VERSION_VERSION_Msk   (_U_(0xFFF) << BSCIF_VERSION_VERSION_Pos)
#define BSCIF_VERSION_VERSION(value) (BSCIF_VERSION_VERSION_Msk & ((value) << BSCIF_VERSION_VERSION_Pos))
#define BSCIF_VERSION_VARIANT_Pos   16           /**< \brief (BSCIF_VERSION) Variant Number */
#define BSCIF_VERSION_VARIANT_Msk   (_U_(0xF) << BSCIF_VERSION_VARIANT_Pos)
#define BSCIF_VERSION_VARIANT(value) (BSCIF_VERSION_VARIANT_Msk & ((value) << BSCIF_VERSION_VARIANT_Pos))
#define BSCIF_VERSION_MASK          _U_(0x000F0FFF) /**< \brief (BSCIF_VERSION) MASK Register */

/** \brief BscifBr hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {
  __IO uint32_t BR;          /**< \brief Offset: 0x000 (R/W 32) Backup Register */
} BscifBr;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/** \brief BSCIF hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {
  __O  uint32_t IER;             /**< \brief Offset: 0x000 ( /W 32) Interrupt Enable Register */
  __O  uint32_t IDR;             /**< \brief Offset: 0x004 ( /W 32) Interrupt Disable Register */
  __I  uint32_t IMR;             /**< \brief Offset: 0x008 (R/  32) Interrupt Mask Register */
  __I  uint32_t ISR;             /**< \brief Offset: 0x00C (R/  32) Interrupt Status Register */
  __O  uint32_t ICR;             /**< \brief Offset: 0x010 ( /W 32) Interrupt Clear Register */
  __I  uint32_t PCLKSR;          /**< \brief Offset: 0x014 (R/  32) Power and Clocks Status Register */
  __O  uint32_t UNLOCK;          /**< \brief Offset: 0x018 ( /W 32) Unlock Register */
  __IO uint32_t CSCR;            /**< \brief Offset: 0x01C (R/W 32) Chip Specific Configuration Register */
  __IO uint32_t OSCCTRL32;       /**< \brief Offset: 0x020 (R/W 32) Oscillator 32 Control Register */
  __IO uint32_t RC32KCR;         /**< \brief Offset: 0x024 (R/W 32) 32 kHz RC Oscillator Control Register */
  __IO uint32_t RC32KTUNE;       /**< \brief Offset: 0x028 (R/W 32) 32kHz RC Oscillator Tuning Register */
  __IO uint32_t BOD33CTRL;       /**< \brief Offset: 0x02C (R/W 32) BOD33 Control Register */
  __IO uint32_t BOD33LEVEL;      /**< \brief Offset: 0x030 (R/W 32) BOD33 Level Register */
  __IO uint32_t BOD33SAMPLING;   /**< \brief Offset: 0x034 (R/W 32) BOD33 Sampling Control Register */
  __IO uint32_t BOD18CTRL;       /**< \brief Offset: 0x038 (R/W 32) BOD18 Control Register */
  __IO uint32_t BOD18LEVEL;      /**< \brief Offset: 0x03C (R/W 32) BOD18 Level Register */
       RoReg8   Reserved1[0x4];
  __IO uint32_t VREGCR;          /**< \brief Offset: 0x044 (R/W 32) Voltage Regulator Configuration Register */
       RoReg8   Reserved2[0x4];
  __IO uint32_t VREGNCSR;        /**< \brief Offset: 0x04C (R/W 32) Normal Mode Control and Status Register */
  __IO uint32_t VREGLPCSR;       /**< \brief Offset: 0x050 (R/W 32) LP Mode Control and Status Register */
       RoReg8   Reserved3[0x4];
  __IO uint32_t RC1MCR;          /**< \brief Offset: 0x058 (R/W 32) 1MHz RC Clock Configuration Register */
  __IO uint32_t BGCR;            /**< \brief Offset: 0x05C (R/W 32) Bandgap Calibration Register */
  __IO uint32_t BGCTRL;          /**< \brief Offset: 0x060 (R/W 32) Bandgap Control Register */
  __I  uint32_t BGSR;            /**< \brief Offset: 0x064 (R/  32) Bandgap Status Register */
       RoReg8   Reserved4[0x10];
       uint32_t BR[4];           /**< \brief Offset: 0x078 BscifBr groups */
       RoReg8   Reserved5[0x35C];
  __I  uint32_t BRIFBVERSION;    /**< \brief Offset: 0x3E4 (R/  32) Backup Register Interface Version Register */
  __I  uint32_t BGREFIFBVERSION; /**< \brief Offset: 0x3E8 (R/  32) BGREFIFB Version Register */
  __I  uint32_t VREGIFGVERSION;  /**< \brief Offset: 0x3EC (R/  32) VREGIFA Version Register */
  __I  uint32_t BODIFCVERSION;   /**< \brief Offset: 0x3F0 (R/  32) BODIFC Version Register */
  __I  uint32_t RC32KIFBVERSION; /**< \brief Offset: 0x3F4 (R/  32) 32 kHz RC Oscillator Version Register */
  __I  uint32_t OSC32IFAVERSION; /**< \brief Offset: 0x3F8 (R/  32) 32 KHz Oscillator Version Register */
  __I  uint32_t VERSION;         /**< \brief Offset: 0x3FC (R/  32) BSCIF Version Register */
} Bscif;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAM4L_BSCIF_COMPONENT_ */
