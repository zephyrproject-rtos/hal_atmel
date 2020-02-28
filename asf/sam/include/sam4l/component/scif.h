/**
 * \file
 *
 * \brief Component description for SCIF
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

#ifndef _SAM4L_SCIF_COMPONENT_
#define _SAM4L_SCIF_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR SCIF */
/* ========================================================================== */
/** \addtogroup SAM4L_SCIF System Control Interface */
/*@{*/

#define SCIF_I7149
#define REV_SCIF                    0x130

/* -------- SCIF_IER : (SCIF Offset: 0x000) ( /W 32) Interrupt Enable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t OSC0RDY:1;        /*!< bit:      0  OSC0 Ready                         */
    uint32_t DFLL0LOCKC:1;     /*!< bit:      1  DFLL0 Lock Coarse                  */
    uint32_t DFLL0LOCKF:1;     /*!< bit:      2  DFLL0 Lock Fine                    */
    uint32_t DFLL0RDY:1;       /*!< bit:      3  DFLL0 Ready                        */
    uint32_t DFLL0RCS:1;       /*!< bit:      4  DFLL0 Reference Clock Stopped      */
    uint32_t DFLL0OOB:1;       /*!< bit:      5  DFLL0 Out Of Bounds                */
    uint32_t PLL0LOCK:1;       /*!< bit:      6  PLL0 Lock                          */
    uint32_t PLL0LOCKLOST:1;   /*!< bit:      7  PLL0 Lock Lost                     */
    uint32_t :5;               /*!< bit:  8..12  Reserved                           */
    uint32_t RCFASTLOCK:1;     /*!< bit:     13  RCFAST Lock                        */
    uint32_t RCFASTLOCKLOST:1; /*!< bit:     14  RCFAST Lock Lost                   */
    uint32_t :16;              /*!< bit: 15..30  Reserved                           */
    uint32_t AE:1;             /*!< bit:     31  Access Error                       */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SCIF_IER_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SCIF_IER_OFFSET             0x000        /**< \brief (SCIF_IER offset) Interrupt Enable Register */
#define SCIF_IER_RESETVALUE         _U_(0x00000000); /**< \brief (SCIF_IER reset_value) Interrupt Enable Register */

#define SCIF_IER_OSC0RDY_Pos        0            /**< \brief (SCIF_IER) OSC0 Ready */
#define SCIF_IER_OSC0RDY            (_U_(0x1) << SCIF_IER_OSC0RDY_Pos)
#define SCIF_IER_DFLL0LOCKC_Pos     1            /**< \brief (SCIF_IER) DFLL0 Lock Coarse */
#define SCIF_IER_DFLL0LOCKC         (_U_(0x1) << SCIF_IER_DFLL0LOCKC_Pos)
#define SCIF_IER_DFLL0LOCKF_Pos     2            /**< \brief (SCIF_IER) DFLL0 Lock Fine */
#define SCIF_IER_DFLL0LOCKF         (_U_(0x1) << SCIF_IER_DFLL0LOCKF_Pos)
#define SCIF_IER_DFLL0RDY_Pos       3            /**< \brief (SCIF_IER) DFLL0 Ready */
#define SCIF_IER_DFLL0RDY           (_U_(0x1) << SCIF_IER_DFLL0RDY_Pos)
#define SCIF_IER_DFLL0RCS_Pos       4            /**< \brief (SCIF_IER) DFLL0 Reference Clock Stopped */
#define SCIF_IER_DFLL0RCS           (_U_(0x1) << SCIF_IER_DFLL0RCS_Pos)
#define SCIF_IER_DFLL0OOB_Pos       5            /**< \brief (SCIF_IER) DFLL0 Out Of Bounds */
#define SCIF_IER_DFLL0OOB           (_U_(0x1) << SCIF_IER_DFLL0OOB_Pos)
#define SCIF_IER_PLL0LOCK_Pos       6            /**< \brief (SCIF_IER) PLL0 Lock */
#define SCIF_IER_PLL0LOCK           (_U_(0x1) << SCIF_IER_PLL0LOCK_Pos)
#define SCIF_IER_PLL0LOCKLOST_Pos   7            /**< \brief (SCIF_IER) PLL0 Lock Lost */
#define SCIF_IER_PLL0LOCKLOST       (_U_(0x1) << SCIF_IER_PLL0LOCKLOST_Pos)
#define SCIF_IER_RCFASTLOCK_Pos     13           /**< \brief (SCIF_IER) RCFAST Lock */
#define SCIF_IER_RCFASTLOCK         (_U_(0x1) << SCIF_IER_RCFASTLOCK_Pos)
#define SCIF_IER_RCFASTLOCKLOST_Pos 14           /**< \brief (SCIF_IER) RCFAST Lock Lost */
#define SCIF_IER_RCFASTLOCKLOST     (_U_(0x1) << SCIF_IER_RCFASTLOCKLOST_Pos)
#define SCIF_IER_AE_Pos             31           /**< \brief (SCIF_IER) Access Error */
#define SCIF_IER_AE                 (_U_(0x1) << SCIF_IER_AE_Pos)
#define SCIF_IER_MASK               _U_(0x800060FF) /**< \brief (SCIF_IER) MASK Register */

/* -------- SCIF_IDR : (SCIF Offset: 0x004) ( /W 32) Interrupt Disable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t OSC0RDY:1;        /*!< bit:      0  OSC0 Ready                         */
    uint32_t DFLL0LOCKC:1;     /*!< bit:      1  DFLL0 Lock Coarse                  */
    uint32_t DFLL0LOCKF:1;     /*!< bit:      2  DFLL0 Lock Fine                    */
    uint32_t DFLL0RDY:1;       /*!< bit:      3  DFLL0 Ready                        */
    uint32_t DFLL0RCS:1;       /*!< bit:      4  DFLL0 Reference Clock Stopped      */
    uint32_t DFLL0OOB:1;       /*!< bit:      5  DFLL0 Out Of Bounds                */
    uint32_t PLL0LOCK:1;       /*!< bit:      6  PLL0 Lock                          */
    uint32_t PLL0LOCKLOST:1;   /*!< bit:      7  PLL0 Lock Lost                     */
    uint32_t :5;               /*!< bit:  8..12  Reserved                           */
    uint32_t RCFASTLOCK:1;     /*!< bit:     13  RCFAST Lock                        */
    uint32_t RCFASTLOCKLOST:1; /*!< bit:     14  RCFAST Lock Lost                   */
    uint32_t :16;              /*!< bit: 15..30  Reserved                           */
    uint32_t AE:1;             /*!< bit:     31  Access Error                       */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SCIF_IDR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SCIF_IDR_OFFSET             0x004        /**< \brief (SCIF_IDR offset) Interrupt Disable Register */
#define SCIF_IDR_RESETVALUE         _U_(0x00000000); /**< \brief (SCIF_IDR reset_value) Interrupt Disable Register */

#define SCIF_IDR_OSC0RDY_Pos        0            /**< \brief (SCIF_IDR) OSC0 Ready */
#define SCIF_IDR_OSC0RDY            (_U_(0x1) << SCIF_IDR_OSC0RDY_Pos)
#define SCIF_IDR_DFLL0LOCKC_Pos     1            /**< \brief (SCIF_IDR) DFLL0 Lock Coarse */
#define SCIF_IDR_DFLL0LOCKC         (_U_(0x1) << SCIF_IDR_DFLL0LOCKC_Pos)
#define SCIF_IDR_DFLL0LOCKF_Pos     2            /**< \brief (SCIF_IDR) DFLL0 Lock Fine */
#define SCIF_IDR_DFLL0LOCKF         (_U_(0x1) << SCIF_IDR_DFLL0LOCKF_Pos)
#define SCIF_IDR_DFLL0RDY_Pos       3            /**< \brief (SCIF_IDR) DFLL0 Ready */
#define SCIF_IDR_DFLL0RDY           (_U_(0x1) << SCIF_IDR_DFLL0RDY_Pos)
#define SCIF_IDR_DFLL0RCS_Pos       4            /**< \brief (SCIF_IDR) DFLL0 Reference Clock Stopped */
#define SCIF_IDR_DFLL0RCS           (_U_(0x1) << SCIF_IDR_DFLL0RCS_Pos)
#define SCIF_IDR_DFLL0OOB_Pos       5            /**< \brief (SCIF_IDR) DFLL0 Out Of Bounds */
#define SCIF_IDR_DFLL0OOB           (_U_(0x1) << SCIF_IDR_DFLL0OOB_Pos)
#define SCIF_IDR_PLL0LOCK_Pos       6            /**< \brief (SCIF_IDR) PLL0 Lock */
#define SCIF_IDR_PLL0LOCK           (_U_(0x1) << SCIF_IDR_PLL0LOCK_Pos)
#define SCIF_IDR_PLL0LOCKLOST_Pos   7            /**< \brief (SCIF_IDR) PLL0 Lock Lost */
#define SCIF_IDR_PLL0LOCKLOST       (_U_(0x1) << SCIF_IDR_PLL0LOCKLOST_Pos)
#define SCIF_IDR_RCFASTLOCK_Pos     13           /**< \brief (SCIF_IDR) RCFAST Lock */
#define SCIF_IDR_RCFASTLOCK         (_U_(0x1) << SCIF_IDR_RCFASTLOCK_Pos)
#define SCIF_IDR_RCFASTLOCKLOST_Pos 14           /**< \brief (SCIF_IDR) RCFAST Lock Lost */
#define SCIF_IDR_RCFASTLOCKLOST     (_U_(0x1) << SCIF_IDR_RCFASTLOCKLOST_Pos)
#define SCIF_IDR_AE_Pos             31           /**< \brief (SCIF_IDR) Access Error */
#define SCIF_IDR_AE                 (_U_(0x1) << SCIF_IDR_AE_Pos)
#define SCIF_IDR_MASK               _U_(0x800060FF) /**< \brief (SCIF_IDR) MASK Register */

/* -------- SCIF_IMR : (SCIF Offset: 0x008) (R/  32) Interrupt Mask Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t OSC0RDY:1;        /*!< bit:      0  OSC0 Ready                         */
    uint32_t DFLL0LOCKC:1;     /*!< bit:      1  DFLL0 Lock Coarse                  */
    uint32_t DFLL0LOCKF:1;     /*!< bit:      2  DFLL0 Lock Fine                    */
    uint32_t DFLL0RDY:1;       /*!< bit:      3  DFLL0 Ready                        */
    uint32_t DFLL0RCS:1;       /*!< bit:      4  DFLL0 Reference Clock Stopped      */
    uint32_t DFLL0OOB:1;       /*!< bit:      5  DFLL0 Out Of Bounds                */
    uint32_t PLL0LOCK:1;       /*!< bit:      6  PLL0 Lock                          */
    uint32_t PLL0LOCKLOST:1;   /*!< bit:      7  PLL0 Lock Lost                     */
    uint32_t :5;               /*!< bit:  8..12  Reserved                           */
    uint32_t RCFASTLOCK:1;     /*!< bit:     13  RCFAST Lock                        */
    uint32_t RCFASTLOCKLOST:1; /*!< bit:     14  RCFAST Lock Lost                   */
    uint32_t :16;              /*!< bit: 15..30  Reserved                           */
    uint32_t AE:1;             /*!< bit:     31  Access Error                       */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SCIF_IMR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SCIF_IMR_OFFSET             0x008        /**< \brief (SCIF_IMR offset) Interrupt Mask Register */
#define SCIF_IMR_RESETVALUE         _U_(0x00000000); /**< \brief (SCIF_IMR reset_value) Interrupt Mask Register */

#define SCIF_IMR_OSC0RDY_Pos        0            /**< \brief (SCIF_IMR) OSC0 Ready */
#define SCIF_IMR_OSC0RDY            (_U_(0x1) << SCIF_IMR_OSC0RDY_Pos)
#define SCIF_IMR_DFLL0LOCKC_Pos     1            /**< \brief (SCIF_IMR) DFLL0 Lock Coarse */
#define SCIF_IMR_DFLL0LOCKC         (_U_(0x1) << SCIF_IMR_DFLL0LOCKC_Pos)
#define SCIF_IMR_DFLL0LOCKF_Pos     2            /**< \brief (SCIF_IMR) DFLL0 Lock Fine */
#define SCIF_IMR_DFLL0LOCKF         (_U_(0x1) << SCIF_IMR_DFLL0LOCKF_Pos)
#define SCIF_IMR_DFLL0RDY_Pos       3            /**< \brief (SCIF_IMR) DFLL0 Ready */
#define SCIF_IMR_DFLL0RDY           (_U_(0x1) << SCIF_IMR_DFLL0RDY_Pos)
#define SCIF_IMR_DFLL0RCS_Pos       4            /**< \brief (SCIF_IMR) DFLL0 Reference Clock Stopped */
#define SCIF_IMR_DFLL0RCS           (_U_(0x1) << SCIF_IMR_DFLL0RCS_Pos)
#define SCIF_IMR_DFLL0OOB_Pos       5            /**< \brief (SCIF_IMR) DFLL0 Out Of Bounds */
#define SCIF_IMR_DFLL0OOB           (_U_(0x1) << SCIF_IMR_DFLL0OOB_Pos)
#define SCIF_IMR_PLL0LOCK_Pos       6            /**< \brief (SCIF_IMR) PLL0 Lock */
#define SCIF_IMR_PLL0LOCK           (_U_(0x1) << SCIF_IMR_PLL0LOCK_Pos)
#define SCIF_IMR_PLL0LOCKLOST_Pos   7            /**< \brief (SCIF_IMR) PLL0 Lock Lost */
#define SCIF_IMR_PLL0LOCKLOST       (_U_(0x1) << SCIF_IMR_PLL0LOCKLOST_Pos)
#define SCIF_IMR_RCFASTLOCK_Pos     13           /**< \brief (SCIF_IMR) RCFAST Lock */
#define SCIF_IMR_RCFASTLOCK         (_U_(0x1) << SCIF_IMR_RCFASTLOCK_Pos)
#define SCIF_IMR_RCFASTLOCKLOST_Pos 14           /**< \brief (SCIF_IMR) RCFAST Lock Lost */
#define SCIF_IMR_RCFASTLOCKLOST     (_U_(0x1) << SCIF_IMR_RCFASTLOCKLOST_Pos)
#define SCIF_IMR_AE_Pos             31           /**< \brief (SCIF_IMR) Access Error */
#define SCIF_IMR_AE                 (_U_(0x1) << SCIF_IMR_AE_Pos)
#define SCIF_IMR_MASK               _U_(0x800060FF) /**< \brief (SCIF_IMR) MASK Register */

/* -------- SCIF_ISR : (SCIF Offset: 0x00C) (R/  32) Interrupt Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t OSC0RDY:1;        /*!< bit:      0  OSC0 Ready                         */
    uint32_t DFLL0LOCKC:1;     /*!< bit:      1  DFLL0 Lock Coarse                  */
    uint32_t DFLL0LOCKF:1;     /*!< bit:      2  DFLL0 Lock Fine                    */
    uint32_t DFLL0RDY:1;       /*!< bit:      3  DFLL0 Ready                        */
    uint32_t DFLL0RCS:1;       /*!< bit:      4  DFLL0 Reference Clock Stopped      */
    uint32_t DFLL0OOB:1;       /*!< bit:      5  DFLL0 Out Of Bounds                */
    uint32_t PLL0LOCK:1;       /*!< bit:      6  PLL0 Lock                          */
    uint32_t PLL0LOCKLOST:1;   /*!< bit:      7  PLL0 Lock Lost                     */
    uint32_t :5;               /*!< bit:  8..12  Reserved                           */
    uint32_t RCFASTLOCK:1;     /*!< bit:     13  RCFAST Lock                        */
    uint32_t RCFASTLOCKLOST:1; /*!< bit:     14  RCFAST Lock Lost                   */
    uint32_t :16;              /*!< bit: 15..30  Reserved                           */
    uint32_t AE:1;             /*!< bit:     31  Access Error                       */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SCIF_ISR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SCIF_ISR_OFFSET             0x00C        /**< \brief (SCIF_ISR offset) Interrupt Status Register */
#define SCIF_ISR_RESETVALUE         _U_(0x00000000); /**< \brief (SCIF_ISR reset_value) Interrupt Status Register */

#define SCIF_ISR_OSC0RDY_Pos        0            /**< \brief (SCIF_ISR) OSC0 Ready */
#define SCIF_ISR_OSC0RDY            (_U_(0x1) << SCIF_ISR_OSC0RDY_Pos)
#define SCIF_ISR_DFLL0LOCKC_Pos     1            /**< \brief (SCIF_ISR) DFLL0 Lock Coarse */
#define SCIF_ISR_DFLL0LOCKC         (_U_(0x1) << SCIF_ISR_DFLL0LOCKC_Pos)
#define SCIF_ISR_DFLL0LOCKF_Pos     2            /**< \brief (SCIF_ISR) DFLL0 Lock Fine */
#define SCIF_ISR_DFLL0LOCKF         (_U_(0x1) << SCIF_ISR_DFLL0LOCKF_Pos)
#define SCIF_ISR_DFLL0RDY_Pos       3            /**< \brief (SCIF_ISR) DFLL0 Ready */
#define SCIF_ISR_DFLL0RDY           (_U_(0x1) << SCIF_ISR_DFLL0RDY_Pos)
#define SCIF_ISR_DFLL0RCS_Pos       4            /**< \brief (SCIF_ISR) DFLL0 Reference Clock Stopped */
#define SCIF_ISR_DFLL0RCS           (_U_(0x1) << SCIF_ISR_DFLL0RCS_Pos)
#define SCIF_ISR_DFLL0OOB_Pos       5            /**< \brief (SCIF_ISR) DFLL0 Out Of Bounds */
#define SCIF_ISR_DFLL0OOB           (_U_(0x1) << SCIF_ISR_DFLL0OOB_Pos)
#define SCIF_ISR_PLL0LOCK_Pos       6            /**< \brief (SCIF_ISR) PLL0 Lock */
#define SCIF_ISR_PLL0LOCK           (_U_(0x1) << SCIF_ISR_PLL0LOCK_Pos)
#define SCIF_ISR_PLL0LOCKLOST_Pos   7            /**< \brief (SCIF_ISR) PLL0 Lock Lost */
#define SCIF_ISR_PLL0LOCKLOST       (_U_(0x1) << SCIF_ISR_PLL0LOCKLOST_Pos)
#define SCIF_ISR_RCFASTLOCK_Pos     13           /**< \brief (SCIF_ISR) RCFAST Lock */
#define SCIF_ISR_RCFASTLOCK         (_U_(0x1) << SCIF_ISR_RCFASTLOCK_Pos)
#define SCIF_ISR_RCFASTLOCKLOST_Pos 14           /**< \brief (SCIF_ISR) RCFAST Lock Lost */
#define SCIF_ISR_RCFASTLOCKLOST     (_U_(0x1) << SCIF_ISR_RCFASTLOCKLOST_Pos)
#define SCIF_ISR_AE_Pos             31           /**< \brief (SCIF_ISR) Access Error */
#define SCIF_ISR_AE                 (_U_(0x1) << SCIF_ISR_AE_Pos)
#define SCIF_ISR_MASK               _U_(0x800060FF) /**< \brief (SCIF_ISR) MASK Register */

/* -------- SCIF_ICR : (SCIF Offset: 0x010) ( /W 32) Interrupt Clear Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t OSC0RDY:1;        /*!< bit:      0  OSC0 Ready                         */
    uint32_t DFLL0LOCKC:1;     /*!< bit:      1  DFLL0 Lock Coarse                  */
    uint32_t DFLL0LOCKF:1;     /*!< bit:      2  DFLL0 Lock Fine                    */
    uint32_t DFLL0RDY:1;       /*!< bit:      3  DFLL0 Ready                        */
    uint32_t DFLL0RCS:1;       /*!< bit:      4  DFLL0 Reference Clock Stopped      */
    uint32_t DFLL0OOB:1;       /*!< bit:      5  DFLL0 Out Of Bounds                */
    uint32_t PLL0LOCK:1;       /*!< bit:      6  PLL0 Lock                          */
    uint32_t PLL0LOCKLOST:1;   /*!< bit:      7  PLL0 Lock Lost                     */
    uint32_t :5;               /*!< bit:  8..12  Reserved                           */
    uint32_t RCFASTLOCK:1;     /*!< bit:     13  RCFAST Lock                        */
    uint32_t RCFASTLOCKLOST:1; /*!< bit:     14  RCFAST Lock Lost                   */
    uint32_t :16;              /*!< bit: 15..30  Reserved                           */
    uint32_t AE:1;             /*!< bit:     31  Access Error                       */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SCIF_ICR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SCIF_ICR_OFFSET             0x010        /**< \brief (SCIF_ICR offset) Interrupt Clear Register */
#define SCIF_ICR_RESETVALUE         _U_(0x00000000); /**< \brief (SCIF_ICR reset_value) Interrupt Clear Register */

#define SCIF_ICR_OSC0RDY_Pos        0            /**< \brief (SCIF_ICR) OSC0 Ready */
#define SCIF_ICR_OSC0RDY            (_U_(0x1) << SCIF_ICR_OSC0RDY_Pos)
#define SCIF_ICR_DFLL0LOCKC_Pos     1            /**< \brief (SCIF_ICR) DFLL0 Lock Coarse */
#define SCIF_ICR_DFLL0LOCKC         (_U_(0x1) << SCIF_ICR_DFLL0LOCKC_Pos)
#define SCIF_ICR_DFLL0LOCKF_Pos     2            /**< \brief (SCIF_ICR) DFLL0 Lock Fine */
#define SCIF_ICR_DFLL0LOCKF         (_U_(0x1) << SCIF_ICR_DFLL0LOCKF_Pos)
#define SCIF_ICR_DFLL0RDY_Pos       3            /**< \brief (SCIF_ICR) DFLL0 Ready */
#define SCIF_ICR_DFLL0RDY           (_U_(0x1) << SCIF_ICR_DFLL0RDY_Pos)
#define SCIF_ICR_DFLL0RCS_Pos       4            /**< \brief (SCIF_ICR) DFLL0 Reference Clock Stopped */
#define SCIF_ICR_DFLL0RCS           (_U_(0x1) << SCIF_ICR_DFLL0RCS_Pos)
#define SCIF_ICR_DFLL0OOB_Pos       5            /**< \brief (SCIF_ICR) DFLL0 Out Of Bounds */
#define SCIF_ICR_DFLL0OOB           (_U_(0x1) << SCIF_ICR_DFLL0OOB_Pos)
#define SCIF_ICR_PLL0LOCK_Pos       6            /**< \brief (SCIF_ICR) PLL0 Lock */
#define SCIF_ICR_PLL0LOCK           (_U_(0x1) << SCIF_ICR_PLL0LOCK_Pos)
#define SCIF_ICR_PLL0LOCKLOST_Pos   7            /**< \brief (SCIF_ICR) PLL0 Lock Lost */
#define SCIF_ICR_PLL0LOCKLOST       (_U_(0x1) << SCIF_ICR_PLL0LOCKLOST_Pos)
#define SCIF_ICR_RCFASTLOCK_Pos     13           /**< \brief (SCIF_ICR) RCFAST Lock */
#define SCIF_ICR_RCFASTLOCK         (_U_(0x1) << SCIF_ICR_RCFASTLOCK_Pos)
#define SCIF_ICR_RCFASTLOCKLOST_Pos 14           /**< \brief (SCIF_ICR) RCFAST Lock Lost */
#define SCIF_ICR_RCFASTLOCKLOST     (_U_(0x1) << SCIF_ICR_RCFASTLOCKLOST_Pos)
#define SCIF_ICR_AE_Pos             31           /**< \brief (SCIF_ICR) Access Error */
#define SCIF_ICR_AE                 (_U_(0x1) << SCIF_ICR_AE_Pos)
#define SCIF_ICR_MASK               _U_(0x800060FF) /**< \brief (SCIF_ICR) MASK Register */

/* -------- SCIF_PCLKSR : (SCIF Offset: 0x014) (R/  32) Power and Clocks Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t OSC0RDY:1;        /*!< bit:      0  OSC0 Ready                         */
    uint32_t DFLL0LOCKC:1;     /*!< bit:      1  DFLL0 Locked on Coarse Value       */
    uint32_t DFLL0LOCKF:1;     /*!< bit:      2  DFLL0 Locked on Fine Value         */
    uint32_t DFLL0RDY:1;       /*!< bit:      3  DFLL0 Synchronization Ready        */
    uint32_t DFLL0RCS:1;       /*!< bit:      4  DFLL0 Reference Clock Stopped      */
    uint32_t DFLL0OOB:1;       /*!< bit:      5  DFLL0 Track Out Of Bounds          */
    uint32_t PLL0LOCK:1;       /*!< bit:      6  PLL0 Locked on Accurate value      */
    uint32_t PLL0LOCKLOST:1;   /*!< bit:      7  PLL0 lock lost value               */
    uint32_t :5;               /*!< bit:  8..12  Reserved                           */
    uint32_t RCFASTLOCK:1;     /*!< bit:     13  RCFAST Locked on Accurate value    */
    uint32_t RCFASTLOCKLOST:1; /*!< bit:     14  RCFAST lock lost value             */
    uint32_t :17;              /*!< bit: 15..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SCIF_PCLKSR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SCIF_PCLKSR_OFFSET          0x014        /**< \brief (SCIF_PCLKSR offset) Power and Clocks Status Register */
#define SCIF_PCLKSR_RESETVALUE      _U_(0x00000000); /**< \brief (SCIF_PCLKSR reset_value) Power and Clocks Status Register */

#define SCIF_PCLKSR_OSC0RDY_Pos     0            /**< \brief (SCIF_PCLKSR) OSC0 Ready */
#define SCIF_PCLKSR_OSC0RDY         (_U_(0x1) << SCIF_PCLKSR_OSC0RDY_Pos)
#define SCIF_PCLKSR_DFLL0LOCKC_Pos  1            /**< \brief (SCIF_PCLKSR) DFLL0 Locked on Coarse Value */
#define SCIF_PCLKSR_DFLL0LOCKC      (_U_(0x1) << SCIF_PCLKSR_DFLL0LOCKC_Pos)
#define SCIF_PCLKSR_DFLL0LOCKF_Pos  2            /**< \brief (SCIF_PCLKSR) DFLL0 Locked on Fine Value */
#define SCIF_PCLKSR_DFLL0LOCKF      (_U_(0x1) << SCIF_PCLKSR_DFLL0LOCKF_Pos)
#define SCIF_PCLKSR_DFLL0RDY_Pos    3            /**< \brief (SCIF_PCLKSR) DFLL0 Synchronization Ready */
#define SCIF_PCLKSR_DFLL0RDY        (_U_(0x1) << SCIF_PCLKSR_DFLL0RDY_Pos)
#define SCIF_PCLKSR_DFLL0RCS_Pos    4            /**< \brief (SCIF_PCLKSR) DFLL0 Reference Clock Stopped */
#define SCIF_PCLKSR_DFLL0RCS        (_U_(0x1) << SCIF_PCLKSR_DFLL0RCS_Pos)
#define SCIF_PCLKSR_DFLL0OOB_Pos    5            /**< \brief (SCIF_PCLKSR) DFLL0 Track Out Of Bounds */
#define SCIF_PCLKSR_DFLL0OOB        (_U_(0x1) << SCIF_PCLKSR_DFLL0OOB_Pos)
#define SCIF_PCLKSR_PLL0LOCK_Pos    6            /**< \brief (SCIF_PCLKSR) PLL0 Locked on Accurate value */
#define SCIF_PCLKSR_PLL0LOCK        (_U_(0x1) << SCIF_PCLKSR_PLL0LOCK_Pos)
#define SCIF_PCLKSR_PLL0LOCKLOST_Pos 7            /**< \brief (SCIF_PCLKSR) PLL0 lock lost value */
#define SCIF_PCLKSR_PLL0LOCKLOST    (_U_(0x1) << SCIF_PCLKSR_PLL0LOCKLOST_Pos)
#define SCIF_PCLKSR_RCFASTLOCK_Pos  13           /**< \brief (SCIF_PCLKSR) RCFAST Locked on Accurate value */
#define SCIF_PCLKSR_RCFASTLOCK      (_U_(0x1) << SCIF_PCLKSR_RCFASTLOCK_Pos)
#define SCIF_PCLKSR_RCFASTLOCKLOST_Pos 14           /**< \brief (SCIF_PCLKSR) RCFAST lock lost value */
#define SCIF_PCLKSR_RCFASTLOCKLOST  (_U_(0x1) << SCIF_PCLKSR_RCFASTLOCKLOST_Pos)
#define SCIF_PCLKSR_MASK            _U_(0x000060FF) /**< \brief (SCIF_PCLKSR) MASK Register */

/* -------- SCIF_UNLOCK : (SCIF Offset: 0x018) ( /W 32) Unlock Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t ADDR:10;          /*!< bit:  0.. 9  Unlock Address                     */
    uint32_t :14;              /*!< bit: 10..23  Reserved                           */
    uint32_t KEY:8;            /*!< bit: 24..31  Unlock Key                         */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SCIF_UNLOCK_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SCIF_UNLOCK_OFFSET          0x018        /**< \brief (SCIF_UNLOCK offset) Unlock Register */
#define SCIF_UNLOCK_RESETVALUE      _U_(0x00000000); /**< \brief (SCIF_UNLOCK reset_value) Unlock Register */

#define SCIF_UNLOCK_ADDR_Pos        0            /**< \brief (SCIF_UNLOCK) Unlock Address */
#define SCIF_UNLOCK_ADDR_Msk        (_U_(0x3FF) << SCIF_UNLOCK_ADDR_Pos)
#define SCIF_UNLOCK_ADDR(value)     (SCIF_UNLOCK_ADDR_Msk & ((value) << SCIF_UNLOCK_ADDR_Pos))
#define SCIF_UNLOCK_KEY_Pos         24           /**< \brief (SCIF_UNLOCK) Unlock Key */
#define SCIF_UNLOCK_KEY_Msk         (_U_(0xFF) << SCIF_UNLOCK_KEY_Pos)
#define SCIF_UNLOCK_KEY(value)      (SCIF_UNLOCK_KEY_Msk & ((value) << SCIF_UNLOCK_KEY_Pos))
#define SCIF_UNLOCK_MASK            _U_(0xFF0003FF) /**< \brief (SCIF_UNLOCK) MASK Register */

/* -------- SCIF_CSCR : (SCIF Offset: 0x01C) (R/W 32) Chip Specific Configuration Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  uint32_t reg;                /*!< Type      used for register access              */
} SCIF_CSCR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SCIF_CSCR_OFFSET            0x01C        /**< \brief (SCIF_CSCR offset) Chip Specific Configuration Register */
#define SCIF_CSCR_RESETVALUE        _U_(0x00000000); /**< \brief (SCIF_CSCR reset_value) Chip Specific Configuration Register */
#define SCIF_CSCR_MASK              _U_(0xFFFFFFFF) /**< \brief (SCIF_CSCR) MASK Register */

/* -------- SCIF_OSCCTRL0 : (SCIF Offset: 0x020) (R/W 32) Oscillator Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t MODE:1;           /*!< bit:      0  Oscillator Mode                    */
    uint32_t GAIN:2;           /*!< bit:  1.. 2  Gain                               */
    uint32_t AGC:1;            /*!< bit:      3  Automatic Gain Control             */
    uint32_t :4;               /*!< bit:  4.. 7  Reserved                           */
    uint32_t STARTUP:4;        /*!< bit:  8..11  Oscillator Start-up Time           */
    uint32_t :4;               /*!< bit: 12..15  Reserved                           */
    uint32_t OSCEN:1;          /*!< bit:     16  Oscillator Enable                  */
    uint32_t :15;              /*!< bit: 17..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SCIF_OSCCTRL0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SCIF_OSCCTRL0_OFFSET        0x020        /**< \brief (SCIF_OSCCTRL0 offset) Oscillator Control Register */
#define SCIF_OSCCTRL0_RESETVALUE    _U_(0x00000000); /**< \brief (SCIF_OSCCTRL0 reset_value) Oscillator Control Register */

#define SCIF_OSCCTRL0_MODE_Pos      0            /**< \brief (SCIF_OSCCTRL0) Oscillator Mode */
#define SCIF_OSCCTRL0_MODE          (_U_(0x1) << SCIF_OSCCTRL0_MODE_Pos)
#define SCIF_OSCCTRL0_GAIN_Pos      1            /**< \brief (SCIF_OSCCTRL0) Gain */
#define SCIF_OSCCTRL0_GAIN_Msk      (_U_(0x3) << SCIF_OSCCTRL0_GAIN_Pos)
#define SCIF_OSCCTRL0_GAIN(value)   (SCIF_OSCCTRL0_GAIN_Msk & ((value) << SCIF_OSCCTRL0_GAIN_Pos))
#define SCIF_OSCCTRL0_AGC_Pos       3            /**< \brief (SCIF_OSCCTRL0) Automatic Gain Control */
#define SCIF_OSCCTRL0_AGC           (_U_(0x1) << SCIF_OSCCTRL0_AGC_Pos)
#define SCIF_OSCCTRL0_STARTUP_Pos   8            /**< \brief (SCIF_OSCCTRL0) Oscillator Start-up Time */
#define SCIF_OSCCTRL0_STARTUP_Msk   (_U_(0xF) << SCIF_OSCCTRL0_STARTUP_Pos)
#define SCIF_OSCCTRL0_STARTUP(value) (SCIF_OSCCTRL0_STARTUP_Msk & ((value) << SCIF_OSCCTRL0_STARTUP_Pos))
#define SCIF_OSCCTRL0_OSCEN_Pos     16           /**< \brief (SCIF_OSCCTRL0) Oscillator Enable */
#define SCIF_OSCCTRL0_OSCEN         (_U_(0x1) << SCIF_OSCCTRL0_OSCEN_Pos)
#define SCIF_OSCCTRL0_MASK          _U_(0x00010F0F) /**< \brief (SCIF_OSCCTRL0) MASK Register */

/* -------- SCIF_PLL : (SCIF Offset: 0x024) (R/W 32) pll PLL0 Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t PLLEN:1;          /*!< bit:      0  PLL Enable                         */
    uint32_t PLLOSC:2;         /*!< bit:  1.. 2  PLL Oscillator Select              */
    uint32_t PLLOPT:3;         /*!< bit:  3.. 5  PLL Option                         */
    uint32_t :2;               /*!< bit:  6.. 7  Reserved                           */
    uint32_t PLLDIV:4;         /*!< bit:  8..11  PLL Division Factor                */
    uint32_t :4;               /*!< bit: 12..15  Reserved                           */
    uint32_t PLLMUL:4;         /*!< bit: 16..19  PLL Multiply Factor                */
    uint32_t :4;               /*!< bit: 20..23  Reserved                           */
    uint32_t PLLCOUNT:6;       /*!< bit: 24..29  PLL Count                          */
    uint32_t :2;               /*!< bit: 30..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SCIF_PLL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SCIF_PLL_OFFSET             0x024        /**< \brief (SCIF_PLL offset) PLL0 Control Register */
#define SCIF_PLL_RESETVALUE         _U_(0x00000000); /**< \brief (SCIF_PLL reset_value) PLL0 Control Register */

#define SCIF_PLL_PLLEN_Pos          0            /**< \brief (SCIF_PLL) PLL Enable */
#define SCIF_PLL_PLLEN              (_U_(0x1) << SCIF_PLL_PLLEN_Pos)
#define SCIF_PLL_PLLOSC_Pos         1            /**< \brief (SCIF_PLL) PLL Oscillator Select */
#define SCIF_PLL_PLLOSC_Msk         (_U_(0x3) << SCIF_PLL_PLLOSC_Pos)
#define SCIF_PLL_PLLOSC(value)      (SCIF_PLL_PLLOSC_Msk & ((value) << SCIF_PLL_PLLOSC_Pos))
#define SCIF_PLL_PLLOPT_Pos         3            /**< \brief (SCIF_PLL) PLL Option */
#define SCIF_PLL_PLLOPT_Msk         (_U_(0x7) << SCIF_PLL_PLLOPT_Pos)
#define SCIF_PLL_PLLOPT(value)      (SCIF_PLL_PLLOPT_Msk & ((value) << SCIF_PLL_PLLOPT_Pos))
#define SCIF_PLL_PLLDIV_Pos         8            /**< \brief (SCIF_PLL) PLL Division Factor */
#define SCIF_PLL_PLLDIV_Msk         (_U_(0xF) << SCIF_PLL_PLLDIV_Pos)
#define SCIF_PLL_PLLDIV(value)      (SCIF_PLL_PLLDIV_Msk & ((value) << SCIF_PLL_PLLDIV_Pos))
#define SCIF_PLL_PLLMUL_Pos         16           /**< \brief (SCIF_PLL) PLL Multiply Factor */
#define SCIF_PLL_PLLMUL_Msk         (_U_(0xF) << SCIF_PLL_PLLMUL_Pos)
#define SCIF_PLL_PLLMUL(value)      (SCIF_PLL_PLLMUL_Msk & ((value) << SCIF_PLL_PLLMUL_Pos))
#define SCIF_PLL_PLLCOUNT_Pos       24           /**< \brief (SCIF_PLL) PLL Count */
#define SCIF_PLL_PLLCOUNT_Msk       (_U_(0x3F) << SCIF_PLL_PLLCOUNT_Pos)
#define SCIF_PLL_PLLCOUNT(value)    (SCIF_PLL_PLLCOUNT_Msk & ((value) << SCIF_PLL_PLLCOUNT_Pos))
#define SCIF_PLL_MASK               _U_(0x3F0F0F3F) /**< \brief (SCIF_PLL) MASK Register */

/* -------- SCIF_DFLL0CONF : (SCIF Offset: 0x028) (R/W 32) DFLL0 Config Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t EN:1;             /*!< bit:      0  Enable                             */
    uint32_t MODE:1;           /*!< bit:      1  Mode Selection                     */
    uint32_t STABLE:1;         /*!< bit:      2  Stable DFLL Frequency              */
    uint32_t LLAW:1;           /*!< bit:      3  Lose Lock After Wake               */
    uint32_t :1;               /*!< bit:      4  Reserved                           */
    uint32_t CCDIS:1;          /*!< bit:      5  Chill Cycle Disable                */
    uint32_t QLDIS:1;          /*!< bit:      6  Quick Lock Disable                 */
    uint32_t :9;               /*!< bit:  7..15  Reserved                           */
    uint32_t RANGE:2;          /*!< bit: 16..17  Range Value                        */
    uint32_t :5;               /*!< bit: 18..22  Reserved                           */
    uint32_t FCD:1;            /*!< bit:     23  Fuse Calibration Done              */
    uint32_t CALIB:4;          /*!< bit: 24..27  Calibration Value                  */
    uint32_t :4;               /*!< bit: 28..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SCIF_DFLL0CONF_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SCIF_DFLL0CONF_OFFSET       0x028        /**< \brief (SCIF_DFLL0CONF offset) DFLL0 Config Register */
#define SCIF_DFLL0CONF_RESETVALUE   _U_(0x00000000); /**< \brief (SCIF_DFLL0CONF reset_value) DFLL0 Config Register */

#define SCIF_DFLL0CONF_EN_Pos       0            /**< \brief (SCIF_DFLL0CONF) Enable */
#define SCIF_DFLL0CONF_EN           (_U_(0x1) << SCIF_DFLL0CONF_EN_Pos)
#define SCIF_DFLL0CONF_MODE_Pos     1            /**< \brief (SCIF_DFLL0CONF) Mode Selection */
#define SCIF_DFLL0CONF_MODE         (_U_(0x1) << SCIF_DFLL0CONF_MODE_Pos)
#define SCIF_DFLL0CONF_STABLE_Pos   2            /**< \brief (SCIF_DFLL0CONF) Stable DFLL Frequency */
#define SCIF_DFLL0CONF_STABLE       (_U_(0x1) << SCIF_DFLL0CONF_STABLE_Pos)
#define SCIF_DFLL0CONF_LLAW_Pos     3            /**< \brief (SCIF_DFLL0CONF) Lose Lock After Wake */
#define SCIF_DFLL0CONF_LLAW         (_U_(0x1) << SCIF_DFLL0CONF_LLAW_Pos)
#define SCIF_DFLL0CONF_CCDIS_Pos    5            /**< \brief (SCIF_DFLL0CONF) Chill Cycle Disable */
#define SCIF_DFLL0CONF_CCDIS        (_U_(0x1) << SCIF_DFLL0CONF_CCDIS_Pos)
#define SCIF_DFLL0CONF_QLDIS_Pos    6            /**< \brief (SCIF_DFLL0CONF) Quick Lock Disable */
#define SCIF_DFLL0CONF_QLDIS        (_U_(0x1) << SCIF_DFLL0CONF_QLDIS_Pos)
#define SCIF_DFLL0CONF_RANGE_Pos    16           /**< \brief (SCIF_DFLL0CONF) Range Value */
#define SCIF_DFLL0CONF_RANGE_Msk    (_U_(0x3) << SCIF_DFLL0CONF_RANGE_Pos)
#define SCIF_DFLL0CONF_RANGE(value) (SCIF_DFLL0CONF_RANGE_Msk & ((value) << SCIF_DFLL0CONF_RANGE_Pos))
#define SCIF_DFLL0CONF_FCD_Pos      23           /**< \brief (SCIF_DFLL0CONF) Fuse Calibration Done */
#define SCIF_DFLL0CONF_FCD          (_U_(0x1) << SCIF_DFLL0CONF_FCD_Pos)
#define SCIF_DFLL0CONF_CALIB_Pos    24           /**< \brief (SCIF_DFLL0CONF) Calibration Value */
#define SCIF_DFLL0CONF_CALIB_Msk    (_U_(0xF) << SCIF_DFLL0CONF_CALIB_Pos)
#define SCIF_DFLL0CONF_CALIB(value) (SCIF_DFLL0CONF_CALIB_Msk & ((value) << SCIF_DFLL0CONF_CALIB_Pos))
#define SCIF_DFLL0CONF_MASK         _U_(0x0F83006F) /**< \brief (SCIF_DFLL0CONF) MASK Register */

/* -------- SCIF_DFLL0VAL : (SCIF Offset: 0x02C) (R/W 32) DFLL Value Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t FINE:8;           /*!< bit:  0.. 7  Fine Value                         */
    uint32_t :8;               /*!< bit:  8..15  Reserved                           */
    uint32_t COARSE:5;         /*!< bit: 16..20  Coarse Value                       */
    uint32_t :11;              /*!< bit: 21..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SCIF_DFLL0VAL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SCIF_DFLL0VAL_OFFSET        0x02C        /**< \brief (SCIF_DFLL0VAL offset) DFLL Value Register */
#define SCIF_DFLL0VAL_RESETVALUE    _U_(0x00000000); /**< \brief (SCIF_DFLL0VAL reset_value) DFLL Value Register */

#define SCIF_DFLL0VAL_FINE_Pos      0            /**< \brief (SCIF_DFLL0VAL) Fine Value */
#define SCIF_DFLL0VAL_FINE_Msk      (_U_(0xFF) << SCIF_DFLL0VAL_FINE_Pos)
#define SCIF_DFLL0VAL_FINE(value)   (SCIF_DFLL0VAL_FINE_Msk & ((value) << SCIF_DFLL0VAL_FINE_Pos))
#define SCIF_DFLL0VAL_COARSE_Pos    16           /**< \brief (SCIF_DFLL0VAL) Coarse Value */
#define SCIF_DFLL0VAL_COARSE_Msk    (_U_(0x1F) << SCIF_DFLL0VAL_COARSE_Pos)
#define SCIF_DFLL0VAL_COARSE(value) (SCIF_DFLL0VAL_COARSE_Msk & ((value) << SCIF_DFLL0VAL_COARSE_Pos))
#define SCIF_DFLL0VAL_MASK          _U_(0x001F00FF) /**< \brief (SCIF_DFLL0VAL) MASK Register */

/* -------- SCIF_DFLL0MUL : (SCIF Offset: 0x030) (R/W 32) DFLL0 Multiplier Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t MUL:16;           /*!< bit:  0..15  DFLL Multiply Factor               */
    uint32_t :16;              /*!< bit: 16..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SCIF_DFLL0MUL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SCIF_DFLL0MUL_OFFSET        0x030        /**< \brief (SCIF_DFLL0MUL offset) DFLL0 Multiplier Register */
#define SCIF_DFLL0MUL_RESETVALUE    _U_(0x00000000); /**< \brief (SCIF_DFLL0MUL reset_value) DFLL0 Multiplier Register */

#define SCIF_DFLL0MUL_MUL_Pos       0            /**< \brief (SCIF_DFLL0MUL) DFLL Multiply Factor */
#define SCIF_DFLL0MUL_MUL_Msk       (_U_(0xFFFF) << SCIF_DFLL0MUL_MUL_Pos)
#define SCIF_DFLL0MUL_MUL(value)    (SCIF_DFLL0MUL_MUL_Msk & ((value) << SCIF_DFLL0MUL_MUL_Pos))
#define SCIF_DFLL0MUL_MASK          _U_(0x0000FFFF) /**< \brief (SCIF_DFLL0MUL) MASK Register */

/* -------- SCIF_DFLL0STEP : (SCIF Offset: 0x034) (R/W 32) DFLL0 Step Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t FSTEP:8;          /*!< bit:  0.. 7  Fine Maximum Step                  */
    uint32_t :8;               /*!< bit:  8..15  Reserved                           */
    uint32_t CSTEP:5;          /*!< bit: 16..20  Coarse Maximum Step                */
    uint32_t :11;              /*!< bit: 21..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SCIF_DFLL0STEP_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SCIF_DFLL0STEP_OFFSET       0x034        /**< \brief (SCIF_DFLL0STEP offset) DFLL0 Step Register */
#define SCIF_DFLL0STEP_RESETVALUE   _U_(0x00000000); /**< \brief (SCIF_DFLL0STEP reset_value) DFLL0 Step Register */

#define SCIF_DFLL0STEP_FSTEP_Pos    0            /**< \brief (SCIF_DFLL0STEP) Fine Maximum Step */
#define SCIF_DFLL0STEP_FSTEP_Msk    (_U_(0xFF) << SCIF_DFLL0STEP_FSTEP_Pos)
#define SCIF_DFLL0STEP_FSTEP(value) (SCIF_DFLL0STEP_FSTEP_Msk & ((value) << SCIF_DFLL0STEP_FSTEP_Pos))
#define SCIF_DFLL0STEP_CSTEP_Pos    16           /**< \brief (SCIF_DFLL0STEP) Coarse Maximum Step */
#define SCIF_DFLL0STEP_CSTEP_Msk    (_U_(0x1F) << SCIF_DFLL0STEP_CSTEP_Pos)
#define SCIF_DFLL0STEP_CSTEP(value) (SCIF_DFLL0STEP_CSTEP_Msk & ((value) << SCIF_DFLL0STEP_CSTEP_Pos))
#define SCIF_DFLL0STEP_MASK         _U_(0x001F00FF) /**< \brief (SCIF_DFLL0STEP) MASK Register */

/* -------- SCIF_DFLL0SSG : (SCIF Offset: 0x038) (R/W 32) DFLL0 Spread Spectrum Generator Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t EN:1;             /*!< bit:      0  Enable                             */
    uint32_t PRBS:1;           /*!< bit:      1  Pseudo Random Bit Sequence         */
    uint32_t :6;               /*!< bit:  2.. 7  Reserved                           */
    uint32_t AMPLITUDE:5;      /*!< bit:  8..12  SSG Amplitude                      */
    uint32_t :3;               /*!< bit: 13..15  Reserved                           */
    uint32_t STEPSIZE:5;       /*!< bit: 16..20  SSG Step Size                      */
    uint32_t :11;              /*!< bit: 21..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SCIF_DFLL0SSG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SCIF_DFLL0SSG_OFFSET        0x038        /**< \brief (SCIF_DFLL0SSG offset) DFLL0 Spread Spectrum Generator Control Register */
#define SCIF_DFLL0SSG_RESETVALUE    _U_(0x00000000); /**< \brief (SCIF_DFLL0SSG reset_value) DFLL0 Spread Spectrum Generator Control Register */

#define SCIF_DFLL0SSG_EN_Pos        0            /**< \brief (SCIF_DFLL0SSG) Enable */
#define SCIF_DFLL0SSG_EN            (_U_(0x1) << SCIF_DFLL0SSG_EN_Pos)
#define SCIF_DFLL0SSG_PRBS_Pos      1            /**< \brief (SCIF_DFLL0SSG) Pseudo Random Bit Sequence */
#define SCIF_DFLL0SSG_PRBS          (_U_(0x1) << SCIF_DFLL0SSG_PRBS_Pos)
#define SCIF_DFLL0SSG_AMPLITUDE_Pos 8            /**< \brief (SCIF_DFLL0SSG) SSG Amplitude */
#define SCIF_DFLL0SSG_AMPLITUDE_Msk (_U_(0x1F) << SCIF_DFLL0SSG_AMPLITUDE_Pos)
#define SCIF_DFLL0SSG_AMPLITUDE(value) (SCIF_DFLL0SSG_AMPLITUDE_Msk & ((value) << SCIF_DFLL0SSG_AMPLITUDE_Pos))
#define SCIF_DFLL0SSG_STEPSIZE_Pos  16           /**< \brief (SCIF_DFLL0SSG) SSG Step Size */
#define SCIF_DFLL0SSG_STEPSIZE_Msk  (_U_(0x1F) << SCIF_DFLL0SSG_STEPSIZE_Pos)
#define SCIF_DFLL0SSG_STEPSIZE(value) (SCIF_DFLL0SSG_STEPSIZE_Msk & ((value) << SCIF_DFLL0SSG_STEPSIZE_Pos))
#define SCIF_DFLL0SSG_MASK          _U_(0x001F1F03) /**< \brief (SCIF_DFLL0SSG) MASK Register */

/* -------- SCIF_DFLL0RATIO : (SCIF Offset: 0x03C) (R/  32) DFLL0 Ratio Registe -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RATIODIFF:16;     /*!< bit:  0..15  Multiplication Ratio Difference    */
    uint32_t :16;              /*!< bit: 16..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SCIF_DFLL0RATIO_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SCIF_DFLL0RATIO_OFFSET      0x03C        /**< \brief (SCIF_DFLL0RATIO offset) DFLL0 Ratio Registe */
#define SCIF_DFLL0RATIO_RESETVALUE  _U_(0x00000000); /**< \brief (SCIF_DFLL0RATIO reset_value) DFLL0 Ratio Registe */

#define SCIF_DFLL0RATIO_RATIODIFF_Pos 0            /**< \brief (SCIF_DFLL0RATIO) Multiplication Ratio Difference */
#define SCIF_DFLL0RATIO_RATIODIFF_Msk (_U_(0xFFFF) << SCIF_DFLL0RATIO_RATIODIFF_Pos)
#define SCIF_DFLL0RATIO_RATIODIFF(value) (SCIF_DFLL0RATIO_RATIODIFF_Msk & ((value) << SCIF_DFLL0RATIO_RATIODIFF_Pos))
#define SCIF_DFLL0RATIO_MASK        _U_(0x0000FFFF) /**< \brief (SCIF_DFLL0RATIO) MASK Register */

/* -------- SCIF_DFLL0SYNC : (SCIF Offset: 0x040) ( /W 32) DFLL0 Synchronization Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t SYNC:1;           /*!< bit:      0  Synchronization                    */
    uint32_t :31;              /*!< bit:  1..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SCIF_DFLL0SYNC_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SCIF_DFLL0SYNC_OFFSET       0x040        /**< \brief (SCIF_DFLL0SYNC offset) DFLL0 Synchronization Register */
#define SCIF_DFLL0SYNC_RESETVALUE   _U_(0x00000000); /**< \brief (SCIF_DFLL0SYNC reset_value) DFLL0 Synchronization Register */

#define SCIF_DFLL0SYNC_SYNC_Pos     0            /**< \brief (SCIF_DFLL0SYNC) Synchronization */
#define SCIF_DFLL0SYNC_SYNC         (_U_(0x1) << SCIF_DFLL0SYNC_SYNC_Pos)
#define SCIF_DFLL0SYNC_MASK         _U_(0x00000001) /**< \brief (SCIF_DFLL0SYNC) MASK Register */

/* -------- SCIF_RCCR : (SCIF Offset: 0x044) (R/W 32) System RC Oscillator Calibration Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t CALIB:10;         /*!< bit:  0.. 9  Calibration Value                  */
    uint32_t :6;               /*!< bit: 10..15  Reserved                           */
    uint32_t FCD:1;            /*!< bit:     16  Flash Calibration Done             */
    uint32_t :15;              /*!< bit: 17..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SCIF_RCCR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SCIF_RCCR_OFFSET            0x044        /**< \brief (SCIF_RCCR offset) System RC Oscillator Calibration Register */

#define SCIF_RCCR_CALIB_Pos         0            /**< \brief (SCIF_RCCR) Calibration Value */
#define SCIF_RCCR_CALIB_Msk         (_U_(0x3FF) << SCIF_RCCR_CALIB_Pos)
#define SCIF_RCCR_CALIB(value)      (SCIF_RCCR_CALIB_Msk & ((value) << SCIF_RCCR_CALIB_Pos))
#define SCIF_RCCR_FCD_Pos           16           /**< \brief (SCIF_RCCR) Flash Calibration Done */
#define SCIF_RCCR_FCD               (_U_(0x1) << SCIF_RCCR_FCD_Pos)
#define SCIF_RCCR_MASK              _U_(0x000103FF) /**< \brief (SCIF_RCCR) MASK Register */

/* -------- SCIF_RCFASTCFG : (SCIF Offset: 0x048) (R/W 32) 4/8/12 MHz RC Oscillator Configuration Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t EN:1;             /*!< bit:      0  Oscillator Enable                  */
    uint32_t TUNEEN:1;         /*!< bit:      1  Tuner Enable                       */
    uint32_t JITMODE:1;        /*!< bit:      2  Jitter Mode                        */
    uint32_t :1;               /*!< bit:      3  Reserved                           */
    uint32_t NBPERIODS:3;      /*!< bit:  4.. 6  Number of 32kHz Periods            */
    uint32_t FCD:1;            /*!< bit:      7  RCFAST Fuse Calibration Done       */
    uint32_t FRANGE:2;         /*!< bit:  8.. 9  Frequency Range                    */
    uint32_t :2;               /*!< bit: 10..11  Reserved                           */
    uint32_t LOCKMARGIN:4;     /*!< bit: 12..15  Accepted Count Error for Lock      */
    uint32_t CALIB:7;          /*!< bit: 16..22  Oscillator Calibration Value       */
    uint32_t :9;               /*!< bit: 23..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SCIF_RCFASTCFG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SCIF_RCFASTCFG_OFFSET       0x048        /**< \brief (SCIF_RCFASTCFG offset) 4/8/12 MHz RC Oscillator Configuration Register */
#define SCIF_RCFASTCFG_RESETVALUE   _U_(0x00000000); /**< \brief (SCIF_RCFASTCFG reset_value) 4/8/12 MHz RC Oscillator Configuration Register */

#define SCIF_RCFASTCFG_EN_Pos       0            /**< \brief (SCIF_RCFASTCFG) Oscillator Enable */
#define SCIF_RCFASTCFG_EN           (_U_(0x1) << SCIF_RCFASTCFG_EN_Pos)
#define SCIF_RCFASTCFG_TUNEEN_Pos   1            /**< \brief (SCIF_RCFASTCFG) Tuner Enable */
#define SCIF_RCFASTCFG_TUNEEN       (_U_(0x1) << SCIF_RCFASTCFG_TUNEEN_Pos)
#define SCIF_RCFASTCFG_JITMODE_Pos  2            /**< \brief (SCIF_RCFASTCFG) Jitter Mode */
#define SCIF_RCFASTCFG_JITMODE      (_U_(0x1) << SCIF_RCFASTCFG_JITMODE_Pos)
#define SCIF_RCFASTCFG_NBPERIODS_Pos 4            /**< \brief (SCIF_RCFASTCFG) Number of 32kHz Periods */
#define SCIF_RCFASTCFG_NBPERIODS_Msk (_U_(0x7) << SCIF_RCFASTCFG_NBPERIODS_Pos)
#define SCIF_RCFASTCFG_NBPERIODS(value) (SCIF_RCFASTCFG_NBPERIODS_Msk & ((value) << SCIF_RCFASTCFG_NBPERIODS_Pos))
#define SCIF_RCFASTCFG_FCD_Pos      7            /**< \brief (SCIF_RCFASTCFG) RCFAST Fuse Calibration Done */
#define SCIF_RCFASTCFG_FCD          (_U_(0x1) << SCIF_RCFASTCFG_FCD_Pos)
#define SCIF_RCFASTCFG_FRANGE_Pos   8            /**< \brief (SCIF_RCFASTCFG) Frequency Range */
#define SCIF_RCFASTCFG_FRANGE_Msk   (_U_(0x3) << SCIF_RCFASTCFG_FRANGE_Pos)
#define SCIF_RCFASTCFG_FRANGE(value) (SCIF_RCFASTCFG_FRANGE_Msk & ((value) << SCIF_RCFASTCFG_FRANGE_Pos))
#define SCIF_RCFASTCFG_LOCKMARGIN_Pos 12           /**< \brief (SCIF_RCFASTCFG) Accepted Count Error for Lock */
#define SCIF_RCFASTCFG_LOCKMARGIN_Msk (_U_(0xF) << SCIF_RCFASTCFG_LOCKMARGIN_Pos)
#define SCIF_RCFASTCFG_LOCKMARGIN(value) (SCIF_RCFASTCFG_LOCKMARGIN_Msk & ((value) << SCIF_RCFASTCFG_LOCKMARGIN_Pos))
#define SCIF_RCFASTCFG_CALIB_Pos    16           /**< \brief (SCIF_RCFASTCFG) Oscillator Calibration Value */
#define SCIF_RCFASTCFG_CALIB_Msk    (_U_(0x7F) << SCIF_RCFASTCFG_CALIB_Pos)
#define SCIF_RCFASTCFG_CALIB(value) (SCIF_RCFASTCFG_CALIB_Msk & ((value) << SCIF_RCFASTCFG_CALIB_Pos))
#define SCIF_RCFASTCFG_MASK         _U_(0x007FF3F7) /**< \brief (SCIF_RCFASTCFG) MASK Register */

/* -------- SCIF_RCFASTSR : (SCIF Offset: 0x04C) (R/W 32) 4/8/12 MHz RC Oscillator Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t CURTRIM:7;        /*!< bit:  0.. 6  Current Trim Value                 */
    uint32_t :9;               /*!< bit:  7..15  Reserved                           */
    uint32_t CNTERR:5;         /*!< bit: 16..20  Current Count Error                */
    uint32_t SIGN:1;           /*!< bit:     21  Sign of Current Count Error        */
    uint32_t :2;               /*!< bit: 22..23  Reserved                           */
    uint32_t LOCK:1;           /*!< bit:     24  Lock                               */
    uint32_t LOCKLOST:1;       /*!< bit:     25  Lock Lost                          */
    uint32_t :5;               /*!< bit: 26..30  Reserved                           */
    uint32_t UPDATED:1;        /*!< bit:     31  Current Trim Value Updated         */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SCIF_RCFASTSR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SCIF_RCFASTSR_OFFSET        0x04C        /**< \brief (SCIF_RCFASTSR offset) 4/8/12 MHz RC Oscillator Status Register */
#define SCIF_RCFASTSR_RESETVALUE    _U_(0x00000000); /**< \brief (SCIF_RCFASTSR reset_value) 4/8/12 MHz RC Oscillator Status Register */

#define SCIF_RCFASTSR_CURTRIM_Pos   0            /**< \brief (SCIF_RCFASTSR) Current Trim Value */
#define SCIF_RCFASTSR_CURTRIM_Msk   (_U_(0x7F) << SCIF_RCFASTSR_CURTRIM_Pos)
#define SCIF_RCFASTSR_CURTRIM(value) (SCIF_RCFASTSR_CURTRIM_Msk & ((value) << SCIF_RCFASTSR_CURTRIM_Pos))
#define SCIF_RCFASTSR_CNTERR_Pos    16           /**< \brief (SCIF_RCFASTSR) Current Count Error */
#define SCIF_RCFASTSR_CNTERR_Msk    (_U_(0x1F) << SCIF_RCFASTSR_CNTERR_Pos)
#define SCIF_RCFASTSR_CNTERR(value) (SCIF_RCFASTSR_CNTERR_Msk & ((value) << SCIF_RCFASTSR_CNTERR_Pos))
#define SCIF_RCFASTSR_SIGN_Pos      21           /**< \brief (SCIF_RCFASTSR) Sign of Current Count Error */
#define SCIF_RCFASTSR_SIGN          (_U_(0x1) << SCIF_RCFASTSR_SIGN_Pos)
#define SCIF_RCFASTSR_LOCK_Pos      24           /**< \brief (SCIF_RCFASTSR) Lock */
#define SCIF_RCFASTSR_LOCK          (_U_(0x1) << SCIF_RCFASTSR_LOCK_Pos)
#define SCIF_RCFASTSR_LOCKLOST_Pos  25           /**< \brief (SCIF_RCFASTSR) Lock Lost */
#define SCIF_RCFASTSR_LOCKLOST      (_U_(0x1) << SCIF_RCFASTSR_LOCKLOST_Pos)
#define SCIF_RCFASTSR_UPDATED_Pos   31           /**< \brief (SCIF_RCFASTSR) Current Trim Value Updated */
#define SCIF_RCFASTSR_UPDATED       (_U_(0x1) << SCIF_RCFASTSR_UPDATED_Pos)
#define SCIF_RCFASTSR_MASK          _U_(0x833F007F) /**< \brief (SCIF_RCFASTSR) MASK Register */

/* -------- SCIF_RC80MCR : (SCIF Offset: 0x050) (R/W 32) 80 MHz RC Oscillator Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t EN:1;             /*!< bit:      0  Enable                             */
    uint32_t :6;               /*!< bit:  1.. 6  Reserved                           */
    uint32_t FCD:1;            /*!< bit:      7  Flash Calibration Done             */
    uint32_t :8;               /*!< bit:  8..15  Reserved                           */
    uint32_t CALIB:2;          /*!< bit: 16..17  Calibration Value                  */
    uint32_t :14;              /*!< bit: 18..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SCIF_RC80MCR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SCIF_RC80MCR_OFFSET         0x050        /**< \brief (SCIF_RC80MCR offset) 80 MHz RC Oscillator Register */
#define SCIF_RC80MCR_RESETVALUE     _U_(0x00000000); /**< \brief (SCIF_RC80MCR reset_value) 80 MHz RC Oscillator Register */

#define SCIF_RC80MCR_EN_Pos         0            /**< \brief (SCIF_RC80MCR) Enable */
#define SCIF_RC80MCR_EN             (_U_(0x1) << SCIF_RC80MCR_EN_Pos)
#define SCIF_RC80MCR_FCD_Pos        7            /**< \brief (SCIF_RC80MCR) Flash Calibration Done */
#define SCIF_RC80MCR_FCD            (_U_(0x1) << SCIF_RC80MCR_FCD_Pos)
#define SCIF_RC80MCR_CALIB_Pos      16           /**< \brief (SCIF_RC80MCR) Calibration Value */
#define SCIF_RC80MCR_CALIB_Msk      (_U_(0x3) << SCIF_RC80MCR_CALIB_Pos)
#define SCIF_RC80MCR_CALIB(value)   (SCIF_RC80MCR_CALIB_Msk & ((value) << SCIF_RC80MCR_CALIB_Pos))
#define SCIF_RC80MCR_MASK           _U_(0x00030081) /**< \brief (SCIF_RC80MCR) MASK Register */

/* -------- SCIF_HRPCR : (SCIF Offset: 0x064) (R/W 32) High Resolution Prescaler Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t HRPEN:1;          /*!< bit:      0  High Resolution Prescaler Enable   */
    uint32_t CKSEL:3;          /*!< bit:  1.. 3  Clock Input Selection              */
    uint32_t :4;               /*!< bit:  4.. 7  Reserved                           */
    uint32_t HRCOUNT:24;       /*!< bit:  8..31  High Resolution Counter            */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SCIF_HRPCR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SCIF_HRPCR_OFFSET           0x064        /**< \brief (SCIF_HRPCR offset) High Resolution Prescaler Control Register */

#define SCIF_HRPCR_HRPEN_Pos        0            /**< \brief (SCIF_HRPCR) High Resolution Prescaler Enable */
#define SCIF_HRPCR_HRPEN            (_U_(0x1) << SCIF_HRPCR_HRPEN_Pos)
#define SCIF_HRPCR_CKSEL_Pos        1            /**< \brief (SCIF_HRPCR) Clock Input Selection */
#define SCIF_HRPCR_CKSEL_Msk        (_U_(0x7) << SCIF_HRPCR_CKSEL_Pos)
#define SCIF_HRPCR_CKSEL(value)     (SCIF_HRPCR_CKSEL_Msk & ((value) << SCIF_HRPCR_CKSEL_Pos))
#define SCIF_HRPCR_HRCOUNT_Pos      8            /**< \brief (SCIF_HRPCR) High Resolution Counter */
#define SCIF_HRPCR_HRCOUNT_Msk      (_U_(0xFFFFFF) << SCIF_HRPCR_HRCOUNT_Pos)
#define SCIF_HRPCR_HRCOUNT(value)   (SCIF_HRPCR_HRCOUNT_Msk & ((value) << SCIF_HRPCR_HRCOUNT_Pos))
#define SCIF_HRPCR_MASK             _U_(0xFFFFFF0F) /**< \brief (SCIF_HRPCR) MASK Register */

/* -------- SCIF_FPCR : (SCIF Offset: 0x068) (R/W 32) Fractional Prescaler Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t FPEN:1;           /*!< bit:      0  High Resolution Prescaler Enable   */
    uint32_t CKSEL:3;          /*!< bit:  1.. 3  Clock Input Selection              */
    uint32_t :28;              /*!< bit:  4..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SCIF_FPCR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SCIF_FPCR_OFFSET            0x068        /**< \brief (SCIF_FPCR offset) Fractional Prescaler Control Register */

#define SCIF_FPCR_FPEN_Pos          0            /**< \brief (SCIF_FPCR) High Resolution Prescaler Enable */
#define SCIF_FPCR_FPEN              (_U_(0x1) << SCIF_FPCR_FPEN_Pos)
#define SCIF_FPCR_CKSEL_Pos         1            /**< \brief (SCIF_FPCR) Clock Input Selection */
#define SCIF_FPCR_CKSEL_Msk         (_U_(0x7) << SCIF_FPCR_CKSEL_Pos)
#define SCIF_FPCR_CKSEL(value)      (SCIF_FPCR_CKSEL_Msk & ((value) << SCIF_FPCR_CKSEL_Pos))
#define SCIF_FPCR_MASK              _U_(0x0000000F) /**< \brief (SCIF_FPCR) MASK Register */

/* -------- SCIF_FPMUL : (SCIF Offset: 0x06C) (R/W 32) Fractional Prescaler Multiplier Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t FPMUL:16;         /*!< bit:  0..15  Fractional Prescaler Multiplication Factor */
    uint32_t :16;              /*!< bit: 16..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SCIF_FPMUL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SCIF_FPMUL_OFFSET           0x06C        /**< \brief (SCIF_FPMUL offset) Fractional Prescaler Multiplier Register */

#define SCIF_FPMUL_FPMUL_Pos        0            /**< \brief (SCIF_FPMUL) Fractional Prescaler Multiplication Factor */
#define SCIF_FPMUL_FPMUL_Msk        (_U_(0xFFFF) << SCIF_FPMUL_FPMUL_Pos)
#define SCIF_FPMUL_FPMUL(value)     (SCIF_FPMUL_FPMUL_Msk & ((value) << SCIF_FPMUL_FPMUL_Pos))
#define SCIF_FPMUL_MASK             _U_(0x0000FFFF) /**< \brief (SCIF_FPMUL) MASK Register */

/* -------- SCIF_FPDIV : (SCIF Offset: 0x070) (R/W 32) Fractional Prescaler DIVIDER Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t FPDIV:16;         /*!< bit:  0..15  Fractional Prescaler Division Factor */
    uint32_t :16;              /*!< bit: 16..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SCIF_FPDIV_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SCIF_FPDIV_OFFSET           0x070        /**< \brief (SCIF_FPDIV offset) Fractional Prescaler DIVIDER Register */

#define SCIF_FPDIV_FPDIV_Pos        0            /**< \brief (SCIF_FPDIV) Fractional Prescaler Division Factor */
#define SCIF_FPDIV_FPDIV_Msk        (_U_(0xFFFF) << SCIF_FPDIV_FPDIV_Pos)
#define SCIF_FPDIV_FPDIV(value)     (SCIF_FPDIV_FPDIV_Msk & ((value) << SCIF_FPDIV_FPDIV_Pos))
#define SCIF_FPDIV_MASK             _U_(0x0000FFFF) /**< \brief (SCIF_FPDIV) MASK Register */

/* -------- SCIF_GCCTRL : (SCIF Offset: 0x074) (R/W 32) gcctrl Generic Clock Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t CEN:1;            /*!< bit:      0  Clock Enable                       */
    uint32_t DIVEN:1;          /*!< bit:      1  Divide Enable                      */
    uint32_t :6;               /*!< bit:  2.. 7  Reserved                           */
    uint32_t OSCSEL:5;         /*!< bit:  8..12  Clock Select                       */
    uint32_t :3;               /*!< bit: 13..15  Reserved                           */
    uint32_t DIV:16;           /*!< bit: 16..31  Division Factor                    */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SCIF_GCCTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SCIF_GCCTRL_OFFSET          0x074        /**< \brief (SCIF_GCCTRL offset) Generic Clock Control */
#define SCIF_GCCTRL_RESETVALUE      _U_(0x00000000); /**< \brief (SCIF_GCCTRL reset_value) Generic Clock Control */

#define SCIF_GCCTRL_CEN_Pos         0            /**< \brief (SCIF_GCCTRL) Clock Enable */
#define SCIF_GCCTRL_CEN             (_U_(0x1) << SCIF_GCCTRL_CEN_Pos)
#define SCIF_GCCTRL_DIVEN_Pos       1            /**< \brief (SCIF_GCCTRL) Divide Enable */
#define SCIF_GCCTRL_DIVEN           (_U_(0x1) << SCIF_GCCTRL_DIVEN_Pos)
#define SCIF_GCCTRL_OSCSEL_Pos      8            /**< \brief (SCIF_GCCTRL) Clock Select */
#define SCIF_GCCTRL_OSCSEL_Msk      (_U_(0x1F) << SCIF_GCCTRL_OSCSEL_Pos)
#define SCIF_GCCTRL_OSCSEL(value)   (SCIF_GCCTRL_OSCSEL_Msk & ((value) << SCIF_GCCTRL_OSCSEL_Pos))
#define SCIF_GCCTRL_DIV_Pos         16           /**< \brief (SCIF_GCCTRL) Division Factor */
#define SCIF_GCCTRL_DIV_Msk         (_U_(0xFFFF) << SCIF_GCCTRL_DIV_Pos)
#define SCIF_GCCTRL_DIV(value)      (SCIF_GCCTRL_DIV_Msk & ((value) << SCIF_GCCTRL_DIV_Pos))
#define SCIF_GCCTRL_MASK            _U_(0xFFFF1F03) /**< \brief (SCIF_GCCTRL) MASK Register */

/* -------- SCIF_RCFASTVERSION : (SCIF Offset: 0x3D8) (R/  32) 4/8/12 MHz RC Oscillator Version Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t VERSION:12;       /*!< bit:  0..11  Version number                     */
    uint32_t :4;               /*!< bit: 12..15  Reserved                           */
    uint32_t VARIANT:4;        /*!< bit: 16..19  Variant number                     */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SCIF_RCFASTVERSION_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SCIF_RCFASTVERSION_OFFSET   0x3D8        /**< \brief (SCIF_RCFASTVERSION offset) 4/8/12 MHz RC Oscillator Version Register */

#define SCIF_RCFASTVERSION_VERSION_Pos 0            /**< \brief (SCIF_RCFASTVERSION) Version number */
#define SCIF_RCFASTVERSION_VERSION_Msk (_U_(0xFFF) << SCIF_RCFASTVERSION_VERSION_Pos)
#define SCIF_RCFASTVERSION_VERSION(value) (SCIF_RCFASTVERSION_VERSION_Msk & ((value) << SCIF_RCFASTVERSION_VERSION_Pos))
#define SCIF_RCFASTVERSION_VARIANT_Pos 16           /**< \brief (SCIF_RCFASTVERSION) Variant number */
#define SCIF_RCFASTVERSION_VARIANT_Msk (_U_(0xF) << SCIF_RCFASTVERSION_VARIANT_Pos)
#define SCIF_RCFASTVERSION_VARIANT(value) (SCIF_RCFASTVERSION_VARIANT_Msk & ((value) << SCIF_RCFASTVERSION_VARIANT_Pos))
#define SCIF_RCFASTVERSION_MASK     _U_(0x000F0FFF) /**< \brief (SCIF_RCFASTVERSION) MASK Register */

/* -------- SCIF_GCLKPRESCVERSION : (SCIF Offset: 0x3DC) (R/  32) Generic Clock Prescaler Version Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t VERSION:12;       /*!< bit:  0..11  Version number                     */
    uint32_t :4;               /*!< bit: 12..15  Reserved                           */
    uint32_t VARIANT:4;        /*!< bit: 16..19  Variant number                     */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SCIF_GCLKPRESCVERSION_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SCIF_GCLKPRESCVERSION_OFFSET 0x3DC        /**< \brief (SCIF_GCLKPRESCVERSION offset) Generic Clock Prescaler Version Register */

#define SCIF_GCLKPRESCVERSION_VERSION_Pos 0            /**< \brief (SCIF_GCLKPRESCVERSION) Version number */
#define SCIF_GCLKPRESCVERSION_VERSION_Msk (_U_(0xFFF) << SCIF_GCLKPRESCVERSION_VERSION_Pos)
#define SCIF_GCLKPRESCVERSION_VERSION(value) (SCIF_GCLKPRESCVERSION_VERSION_Msk & ((value) << SCIF_GCLKPRESCVERSION_VERSION_Pos))
#define SCIF_GCLKPRESCVERSION_VARIANT_Pos 16           /**< \brief (SCIF_GCLKPRESCVERSION) Variant number */
#define SCIF_GCLKPRESCVERSION_VARIANT_Msk (_U_(0xF) << SCIF_GCLKPRESCVERSION_VARIANT_Pos)
#define SCIF_GCLKPRESCVERSION_VARIANT(value) (SCIF_GCLKPRESCVERSION_VARIANT_Msk & ((value) << SCIF_GCLKPRESCVERSION_VARIANT_Pos))
#define SCIF_GCLKPRESCVERSION_MASK  _U_(0x000F0FFF) /**< \brief (SCIF_GCLKPRESCVERSION) MASK Register */

/* -------- SCIF_PLLIFAVERSION : (SCIF Offset: 0x3E0) (R/  32) PLL Version Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t VERSION:12;       /*!< bit:  0..11  Version number                     */
    uint32_t :4;               /*!< bit: 12..15  Reserved                           */
    uint32_t VARIANT:4;        /*!< bit: 16..19  Variant nubmer                     */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SCIF_PLLIFAVERSION_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SCIF_PLLIFAVERSION_OFFSET   0x3E0        /**< \brief (SCIF_PLLIFAVERSION offset) PLL Version Register */

#define SCIF_PLLIFAVERSION_VERSION_Pos 0            /**< \brief (SCIF_PLLIFAVERSION) Version number */
#define SCIF_PLLIFAVERSION_VERSION_Msk (_U_(0xFFF) << SCIF_PLLIFAVERSION_VERSION_Pos)
#define SCIF_PLLIFAVERSION_VERSION(value) (SCIF_PLLIFAVERSION_VERSION_Msk & ((value) << SCIF_PLLIFAVERSION_VERSION_Pos))
#define SCIF_PLLIFAVERSION_VARIANT_Pos 16           /**< \brief (SCIF_PLLIFAVERSION) Variant nubmer */
#define SCIF_PLLIFAVERSION_VARIANT_Msk (_U_(0xF) << SCIF_PLLIFAVERSION_VARIANT_Pos)
#define SCIF_PLLIFAVERSION_VARIANT(value) (SCIF_PLLIFAVERSION_VARIANT_Msk & ((value) << SCIF_PLLIFAVERSION_VARIANT_Pos))
#define SCIF_PLLIFAVERSION_MASK     _U_(0x000F0FFF) /**< \brief (SCIF_PLLIFAVERSION) MASK Register */

/* -------- SCIF_OSCIFAVERSION : (SCIF Offset: 0x3E4) (R/  32) Oscillator 0 Version Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t VERSION:12;       /*!< bit:  0..11  Version number                     */
    uint32_t :4;               /*!< bit: 12..15  Reserved                           */
    uint32_t VARIANT:4;        /*!< bit: 16..19  Variant nubmer                     */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SCIF_OSCIFAVERSION_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SCIF_OSCIFAVERSION_OFFSET   0x3E4        /**< \brief (SCIF_OSCIFAVERSION offset) Oscillator 0 Version Register */

#define SCIF_OSCIFAVERSION_VERSION_Pos 0            /**< \brief (SCIF_OSCIFAVERSION) Version number */
#define SCIF_OSCIFAVERSION_VERSION_Msk (_U_(0xFFF) << SCIF_OSCIFAVERSION_VERSION_Pos)
#define SCIF_OSCIFAVERSION_VERSION(value) (SCIF_OSCIFAVERSION_VERSION_Msk & ((value) << SCIF_OSCIFAVERSION_VERSION_Pos))
#define SCIF_OSCIFAVERSION_VARIANT_Pos 16           /**< \brief (SCIF_OSCIFAVERSION) Variant nubmer */
#define SCIF_OSCIFAVERSION_VARIANT_Msk (_U_(0xF) << SCIF_OSCIFAVERSION_VARIANT_Pos)
#define SCIF_OSCIFAVERSION_VARIANT(value) (SCIF_OSCIFAVERSION_VARIANT_Msk & ((value) << SCIF_OSCIFAVERSION_VARIANT_Pos))
#define SCIF_OSCIFAVERSION_MASK     _U_(0x000F0FFF) /**< \brief (SCIF_OSCIFAVERSION) MASK Register */

/* -------- SCIF_DFLLIFBVERSION : (SCIF Offset: 0x3E8) (R/  32) DFLL Version Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t VERSION:12;       /*!< bit:  0..11  Version number                     */
    uint32_t :4;               /*!< bit: 12..15  Reserved                           */
    uint32_t VARIANT:4;        /*!< bit: 16..19  Variant number                     */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SCIF_DFLLIFBVERSION_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SCIF_DFLLIFBVERSION_OFFSET  0x3E8        /**< \brief (SCIF_DFLLIFBVERSION offset) DFLL Version Register */

#define SCIF_DFLLIFBVERSION_VERSION_Pos 0            /**< \brief (SCIF_DFLLIFBVERSION) Version number */
#define SCIF_DFLLIFBVERSION_VERSION_Msk (_U_(0xFFF) << SCIF_DFLLIFBVERSION_VERSION_Pos)
#define SCIF_DFLLIFBVERSION_VERSION(value) (SCIF_DFLLIFBVERSION_VERSION_Msk & ((value) << SCIF_DFLLIFBVERSION_VERSION_Pos))
#define SCIF_DFLLIFBVERSION_VARIANT_Pos 16           /**< \brief (SCIF_DFLLIFBVERSION) Variant number */
#define SCIF_DFLLIFBVERSION_VARIANT_Msk (_U_(0xF) << SCIF_DFLLIFBVERSION_VARIANT_Pos)
#define SCIF_DFLLIFBVERSION_VARIANT(value) (SCIF_DFLLIFBVERSION_VARIANT_Msk & ((value) << SCIF_DFLLIFBVERSION_VARIANT_Pos))
#define SCIF_DFLLIFBVERSION_MASK    _U_(0x000F0FFF) /**< \brief (SCIF_DFLLIFBVERSION) MASK Register */

/* -------- SCIF_RCOSCIFAVERSION : (SCIF Offset: 0x3EC) (R/  32) System RC Oscillator Version Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t VERSION:12;       /*!< bit:  0..11  Version number                     */
    uint32_t :4;               /*!< bit: 12..15  Reserved                           */
    uint32_t VARIANT:4;        /*!< bit: 16..19  Variant number                     */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SCIF_RCOSCIFAVERSION_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SCIF_RCOSCIFAVERSION_OFFSET 0x3EC        /**< \brief (SCIF_RCOSCIFAVERSION offset) System RC Oscillator Version Register */

#define SCIF_RCOSCIFAVERSION_VERSION_Pos 0            /**< \brief (SCIF_RCOSCIFAVERSION) Version number */
#define SCIF_RCOSCIFAVERSION_VERSION_Msk (_U_(0xFFF) << SCIF_RCOSCIFAVERSION_VERSION_Pos)
#define SCIF_RCOSCIFAVERSION_VERSION(value) (SCIF_RCOSCIFAVERSION_VERSION_Msk & ((value) << SCIF_RCOSCIFAVERSION_VERSION_Pos))
#define SCIF_RCOSCIFAVERSION_VARIANT_Pos 16           /**< \brief (SCIF_RCOSCIFAVERSION) Variant number */
#define SCIF_RCOSCIFAVERSION_VARIANT_Msk (_U_(0xF) << SCIF_RCOSCIFAVERSION_VARIANT_Pos)
#define SCIF_RCOSCIFAVERSION_VARIANT(value) (SCIF_RCOSCIFAVERSION_VARIANT_Msk & ((value) << SCIF_RCOSCIFAVERSION_VARIANT_Pos))
#define SCIF_RCOSCIFAVERSION_MASK   _U_(0x000F0FFF) /**< \brief (SCIF_RCOSCIFAVERSION) MASK Register */

/* -------- SCIF_FLOVERSION : (SCIF Offset: 0x3F0) (R/  32) Frequency Locked Oscillator Version Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t VERSION:12;       /*!< bit:  0..11  Version number                     */
    uint32_t :4;               /*!< bit: 12..15  Reserved                           */
    uint32_t VARIANT:4;        /*!< bit: 16..19  Variant number                     */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SCIF_FLOVERSION_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SCIF_FLOVERSION_OFFSET      0x3F0        /**< \brief (SCIF_FLOVERSION offset) Frequency Locked Oscillator Version Register */

#define SCIF_FLOVERSION_VERSION_Pos 0            /**< \brief (SCIF_FLOVERSION) Version number */
#define SCIF_FLOVERSION_VERSION_Msk (_U_(0xFFF) << SCIF_FLOVERSION_VERSION_Pos)
#define SCIF_FLOVERSION_VERSION(value) (SCIF_FLOVERSION_VERSION_Msk & ((value) << SCIF_FLOVERSION_VERSION_Pos))
#define SCIF_FLOVERSION_VARIANT_Pos 16           /**< \brief (SCIF_FLOVERSION) Variant number */
#define SCIF_FLOVERSION_VARIANT_Msk (_U_(0xF) << SCIF_FLOVERSION_VARIANT_Pos)
#define SCIF_FLOVERSION_VARIANT(value) (SCIF_FLOVERSION_VARIANT_Msk & ((value) << SCIF_FLOVERSION_VARIANT_Pos))
#define SCIF_FLOVERSION_MASK        _U_(0x000F0FFF) /**< \brief (SCIF_FLOVERSION) MASK Register */

/* -------- SCIF_RC80MVERSION : (SCIF Offset: 0x3F4) (R/  32) 80MHz RC Oscillator Version Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t VERSION:12;       /*!< bit:  0..11  Version number                     */
    uint32_t :4;               /*!< bit: 12..15  Reserved                           */
    uint32_t VARIANT:4;        /*!< bit: 16..19  Variant number                     */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SCIF_RC80MVERSION_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SCIF_RC80MVERSION_OFFSET    0x3F4        /**< \brief (SCIF_RC80MVERSION offset) 80MHz RC Oscillator Version Register */

#define SCIF_RC80MVERSION_VERSION_Pos 0            /**< \brief (SCIF_RC80MVERSION) Version number */
#define SCIF_RC80MVERSION_VERSION_Msk (_U_(0xFFF) << SCIF_RC80MVERSION_VERSION_Pos)
#define SCIF_RC80MVERSION_VERSION(value) (SCIF_RC80MVERSION_VERSION_Msk & ((value) << SCIF_RC80MVERSION_VERSION_Pos))
#define SCIF_RC80MVERSION_VARIANT_Pos 16           /**< \brief (SCIF_RC80MVERSION) Variant number */
#define SCIF_RC80MVERSION_VARIANT_Msk (_U_(0xF) << SCIF_RC80MVERSION_VARIANT_Pos)
#define SCIF_RC80MVERSION_VARIANT(value) (SCIF_RC80MVERSION_VARIANT_Msk & ((value) << SCIF_RC80MVERSION_VARIANT_Pos))
#define SCIF_RC80MVERSION_MASK      _U_(0x000F0FFF) /**< \brief (SCIF_RC80MVERSION) MASK Register */

/* -------- SCIF_GCLKIFVERSION : (SCIF Offset: 0x3F8) (R/  32) Generic Clock Version Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t VERSION:12;       /*!< bit:  0..11  Version number                     */
    uint32_t :4;               /*!< bit: 12..15  Reserved                           */
    uint32_t VARIANT:4;        /*!< bit: 16..19  Variant number                     */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SCIF_GCLKIFVERSION_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SCIF_GCLKIFVERSION_OFFSET   0x3F8        /**< \brief (SCIF_GCLKIFVERSION offset) Generic Clock Version Register */

#define SCIF_GCLKIFVERSION_VERSION_Pos 0            /**< \brief (SCIF_GCLKIFVERSION) Version number */
#define SCIF_GCLKIFVERSION_VERSION_Msk (_U_(0xFFF) << SCIF_GCLKIFVERSION_VERSION_Pos)
#define SCIF_GCLKIFVERSION_VERSION(value) (SCIF_GCLKIFVERSION_VERSION_Msk & ((value) << SCIF_GCLKIFVERSION_VERSION_Pos))
#define SCIF_GCLKIFVERSION_VARIANT_Pos 16           /**< \brief (SCIF_GCLKIFVERSION) Variant number */
#define SCIF_GCLKIFVERSION_VARIANT_Msk (_U_(0xF) << SCIF_GCLKIFVERSION_VARIANT_Pos)
#define SCIF_GCLKIFVERSION_VARIANT(value) (SCIF_GCLKIFVERSION_VARIANT_Msk & ((value) << SCIF_GCLKIFVERSION_VARIANT_Pos))
#define SCIF_GCLKIFVERSION_MASK     _U_(0x000F0FFF) /**< \brief (SCIF_GCLKIFVERSION) MASK Register */

/* -------- SCIF_VERSION : (SCIF Offset: 0x3FC) (R/  32) SCIF Version Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t VERSION:12;       /*!< bit:  0..11  Version number                     */
    uint32_t :4;               /*!< bit: 12..15  Reserved                           */
    uint32_t VARIANT:4;        /*!< bit: 16..19  Variant number                     */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SCIF_VERSION_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SCIF_VERSION_OFFSET         0x3FC        /**< \brief (SCIF_VERSION offset) SCIF Version Register */
#define SCIF_VERSION_RESETVALUE     _U_(0x00000130); /**< \brief (SCIF_VERSION reset_value) SCIF Version Register */

#define SCIF_VERSION_VERSION_Pos    0            /**< \brief (SCIF_VERSION) Version number */
#define SCIF_VERSION_VERSION_Msk    (_U_(0xFFF) << SCIF_VERSION_VERSION_Pos)
#define SCIF_VERSION_VERSION(value) (SCIF_VERSION_VERSION_Msk & ((value) << SCIF_VERSION_VERSION_Pos))
#define SCIF_VERSION_VARIANT_Pos    16           /**< \brief (SCIF_VERSION) Variant number */
#define SCIF_VERSION_VARIANT_Msk    (_U_(0xF) << SCIF_VERSION_VARIANT_Pos)
#define SCIF_VERSION_VARIANT(value) (SCIF_VERSION_VARIANT_Msk & ((value) << SCIF_VERSION_VARIANT_Pos))
#define SCIF_VERSION_MASK           _U_(0x000F0FFF) /**< \brief (SCIF_VERSION) MASK Register */

/** \brief ScifGcctrl hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {
  __IO uint32_t   GCCTRL;      /**< \brief Offset: 0x000 (R/W 32) Generic Clock Control */
} ScifGcctrl;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/** \brief ScifPll hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {
  __IO uint32_t   PLL;         /**< \brief Offset: 0x000 (R/W 32) PLL0 Control Register */
} ScifPll;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/** \brief SCIF hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {
  __O  uint32_t IER;              /**< \brief Offset: 0x000 ( /W 32) Interrupt Enable Register */
  __O  uint32_t IDR;              /**< \brief Offset: 0x004 ( /W 32) Interrupt Disable Register */
  __I  uint32_t IMR;              /**< \brief Offset: 0x008 (R/  32) Interrupt Mask Register */
  __I  uint32_t ISR;              /**< \brief Offset: 0x00C (R/  32) Interrupt Status Register */
  __O  uint32_t ICR;              /**< \brief Offset: 0x010 ( /W 32) Interrupt Clear Register */
  __I  uint32_t PCLKSR;           /**< \brief Offset: 0x014 (R/  32) Power and Clocks Status Register */
  __O  uint32_t UNLOCK;           /**< \brief Offset: 0x018 ( /W 32) Unlock Register */
  __IO uint32_t CSCR;             /**< \brief Offset: 0x01C (R/W 32) Chip Specific Configuration Register */
  __IO uint32_t OSCCTRL0;         /**< \brief Offset: 0x020 (R/W 32) Oscillator Control Register */
       uint32_t PLL[1];           /**< \brief Offset: 0x024 ScifPll groups */
  __IO uint32_t DFLL0CONF;        /**< \brief Offset: 0x028 (R/W 32) DFLL0 Config Register */
  __IO uint32_t DFLL0VAL;         /**< \brief Offset: 0x02C (R/W 32) DFLL Value Register */
  __IO uint32_t DFLL0MUL;         /**< \brief Offset: 0x030 (R/W 32) DFLL0 Multiplier Register */
  __IO uint32_t DFLL0STEP;        /**< \brief Offset: 0x034 (R/W 32) DFLL0 Step Register */
  __IO uint32_t DFLL0SSG;         /**< \brief Offset: 0x038 (R/W 32) DFLL0 Spread Spectrum Generator Control Register */
  __I  uint32_t DFLL0RATIO;       /**< \brief Offset: 0x03C (R/  32) DFLL0 Ratio Registe */
  __O  uint32_t DFLL0SYNC;        /**< \brief Offset: 0x040 ( /W 32) DFLL0 Synchronization Register */
  __IO uint32_t RCCR;             /**< \brief Offset: 0x044 (R/W 32) System RC Oscillator Calibration Register */
  __IO uint32_t RCFASTCFG;        /**< \brief Offset: 0x048 (R/W 32) 4/8/12 MHz RC Oscillator Configuration Register */
  __IO uint32_t RCFASTSR;         /**< \brief Offset: 0x04C (R/W 32) 4/8/12 MHz RC Oscillator Status Register */
  __IO uint32_t RC80MCR;          /**< \brief Offset: 0x050 (R/W 32) 80 MHz RC Oscillator Register */
       RoReg8   Reserved1[0x10];
  __IO uint32_t HRPCR;            /**< \brief Offset: 0x064 (R/W 32) High Resolution Prescaler Control Register */
  __IO uint32_t FPCR;             /**< \brief Offset: 0x068 (R/W 32) Fractional Prescaler Control Register */
  __IO uint32_t FPMUL;            /**< \brief Offset: 0x06C (R/W 32) Fractional Prescaler Multiplier Register */
  __IO uint32_t FPDIV;            /**< \brief Offset: 0x070 (R/W 32) Fractional Prescaler DIVIDER Register */
       uint32_t GCCTRL[12];       /**< \brief Offset: 0x074 Generic Clock Control */
       RoReg8   Reserved2[0x334];
  __I  uint32_t RCFASTVERSION;    /**< \brief Offset: 0x3D8 (R/  32) 4/8/12 MHz RC Oscillator Version Register */
  __I  uint32_t GCLKPRESCVERSION; /**< \brief Offset: 0x3DC (R/  32) Generic Clock Prescaler Version Register */
  __I  uint32_t PLLIFAVERSION;    /**< \brief Offset: 0x3E0 (R/  32) PLL Version Register */
  __I  uint32_t OSCIFAVERSION;    /**< \brief Offset: 0x3E4 (R/  32) Oscillator 0 Version Register */
  __I  uint32_t DFLLIFBVERSION;   /**< \brief Offset: 0x3E8 (R/  32) DFLL Version Register */
  __I  uint32_t RCOSCIFAVERSION;  /**< \brief Offset: 0x3EC (R/  32) System RC Oscillator Version Register */
  __I  uint32_t FLOVERSION;       /**< \brief Offset: 0x3F0 (R/  32) Frequency Locked Oscillator Version Register */
  __I  uint32_t RC80MVERSION;     /**< \brief Offset: 0x3F4 (R/  32) 80MHz RC Oscillator Version Register */
  __I  uint32_t GCLKIFVERSION;    /**< \brief Offset: 0x3F8 (R/  32) Generic Clock Version Register */
  __I  uint32_t VERSION;          /**< \brief Offset: 0x3FC (R/  32) SCIF Version Register */
} Scif;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAM4L_SCIF_COMPONENT_ */
