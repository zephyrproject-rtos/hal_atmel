/**
 * \file
 *
 * \brief Component description for EIC
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

#ifndef _SAM4L_EIC_COMPONENT_
#define _SAM4L_EIC_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR EIC */
/* ========================================================================== */
/** \addtogroup SAM4L_EIC External Interrupt Controller */
/*@{*/

#define EIC_I7529
#define REV_EIC                     0x302

/* -------- EIC_IER : (EIC Offset: 0x000) ( /W 32) Interrupt Enable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t NMI:1;            /*!< bit:      0  External Non Maskable CPU interrupt */
    uint32_t INT1:1;           /*!< bit:      1  External Interrupt 1               */
    uint32_t INT2:1;           /*!< bit:      2  External Interrupt 2               */
    uint32_t INT3:1;           /*!< bit:      3  External Interrupt 3               */
    uint32_t INT4:1;           /*!< bit:      4  External Interrupt 4               */
    uint32_t INT5:1;           /*!< bit:      5  External Interrupt 5               */
    uint32_t INT6:1;           /*!< bit:      6  External Interrupt 6               */
    uint32_t INT7:1;           /*!< bit:      7  External Interrupt 7               */
    uint32_t INT8:1;           /*!< bit:      8  External Interrupt 8               */
    uint32_t INT9:1;           /*!< bit:      9  External Interrupt 9               */
    uint32_t INT10:1;          /*!< bit:     10  External Interrupt 10              */
    uint32_t INT11:1;          /*!< bit:     11  External Interrupt 11              */
    uint32_t INT12:1;          /*!< bit:     12  External Interrupt 12              */
    uint32_t INT13:1;          /*!< bit:     13  External Interrupt 13              */
    uint32_t INT14:1;          /*!< bit:     14  External Interrupt 14              */
    uint32_t INT15:1;          /*!< bit:     15  External Interrupt 15              */
    uint32_t :16;              /*!< bit: 16..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} EIC_IER_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EIC_IER_OFFSET              0x000        /**< \brief (EIC_IER offset) Interrupt Enable Register */
#define EIC_IER_RESETVALUE          _U_(0x00000000); /**< \brief (EIC_IER reset_value) Interrupt Enable Register */

#define EIC_IER_NMI_Pos             0            /**< \brief (EIC_IER) External Non Maskable CPU interrupt */
#define EIC_IER_NMI                 (_U_(0x1) << EIC_IER_NMI_Pos)
#define EIC_IER_INT1_Pos            1            /**< \brief (EIC_IER) External Interrupt 1 */
#define EIC_IER_INT1                (_U_(0x1) << EIC_IER_INT1_Pos)
#define   EIC_IER_INT1_0_Val              _U_(0x0)   /**< \brief (EIC_IER) No effect */
#define   EIC_IER_INT1_1_Val              _U_(0x1)   /**< \brief (EIC_IER) Enable Interrupt. */
#define EIC_IER_INT1_0              (EIC_IER_INT1_0_Val            << EIC_IER_INT1_Pos)
#define EIC_IER_INT1_1              (EIC_IER_INT1_1_Val            << EIC_IER_INT1_Pos)
#define EIC_IER_INT2_Pos            2            /**< \brief (EIC_IER) External Interrupt 2 */
#define EIC_IER_INT2                (_U_(0x1) << EIC_IER_INT2_Pos)
#define   EIC_IER_INT2_0_Val              _U_(0x0)   /**< \brief (EIC_IER) No effect */
#define   EIC_IER_INT2_1_Val              _U_(0x1)   /**< \brief (EIC_IER) Enable Interrupt. */
#define EIC_IER_INT2_0              (EIC_IER_INT2_0_Val            << EIC_IER_INT2_Pos)
#define EIC_IER_INT2_1              (EIC_IER_INT2_1_Val            << EIC_IER_INT2_Pos)
#define EIC_IER_INT3_Pos            3            /**< \brief (EIC_IER) External Interrupt 3 */
#define EIC_IER_INT3                (_U_(0x1) << EIC_IER_INT3_Pos)
#define   EIC_IER_INT3_0_Val              _U_(0x0)   /**< \brief (EIC_IER) No effect */
#define   EIC_IER_INT3_1_Val              _U_(0x1)   /**< \brief (EIC_IER) Enable Interrupt. */
#define EIC_IER_INT3_0              (EIC_IER_INT3_0_Val            << EIC_IER_INT3_Pos)
#define EIC_IER_INT3_1              (EIC_IER_INT3_1_Val            << EIC_IER_INT3_Pos)
#define EIC_IER_INT4_Pos            4            /**< \brief (EIC_IER) External Interrupt 4 */
#define EIC_IER_INT4                (_U_(0x1) << EIC_IER_INT4_Pos)
#define   EIC_IER_INT4_0_Val              _U_(0x0)   /**< \brief (EIC_IER) No effect */
#define   EIC_IER_INT4_1_Val              _U_(0x1)   /**< \brief (EIC_IER) Enable Interrupt. */
#define EIC_IER_INT4_0              (EIC_IER_INT4_0_Val            << EIC_IER_INT4_Pos)
#define EIC_IER_INT4_1              (EIC_IER_INT4_1_Val            << EIC_IER_INT4_Pos)
#define EIC_IER_INT5_Pos            5            /**< \brief (EIC_IER) External Interrupt 5 */
#define EIC_IER_INT5                (_U_(0x1) << EIC_IER_INT5_Pos)
#define EIC_IER_INT6_Pos            6            /**< \brief (EIC_IER) External Interrupt 6 */
#define EIC_IER_INT6                (_U_(0x1) << EIC_IER_INT6_Pos)
#define EIC_IER_INT7_Pos            7            /**< \brief (EIC_IER) External Interrupt 7 */
#define EIC_IER_INT7                (_U_(0x1) << EIC_IER_INT7_Pos)
#define EIC_IER_INT8_Pos            8            /**< \brief (EIC_IER) External Interrupt 8 */
#define EIC_IER_INT8                (_U_(0x1) << EIC_IER_INT8_Pos)
#define EIC_IER_INT9_Pos            9            /**< \brief (EIC_IER) External Interrupt 9 */
#define EIC_IER_INT9                (_U_(0x1) << EIC_IER_INT9_Pos)
#define EIC_IER_INT10_Pos           10           /**< \brief (EIC_IER) External Interrupt 10 */
#define EIC_IER_INT10               (_U_(0x1) << EIC_IER_INT10_Pos)
#define EIC_IER_INT11_Pos           11           /**< \brief (EIC_IER) External Interrupt 11 */
#define EIC_IER_INT11               (_U_(0x1) << EIC_IER_INT11_Pos)
#define EIC_IER_INT12_Pos           12           /**< \brief (EIC_IER) External Interrupt 12 */
#define EIC_IER_INT12               (_U_(0x1) << EIC_IER_INT12_Pos)
#define EIC_IER_INT13_Pos           13           /**< \brief (EIC_IER) External Interrupt 13 */
#define EIC_IER_INT13               (_U_(0x1) << EIC_IER_INT13_Pos)
#define EIC_IER_INT14_Pos           14           /**< \brief (EIC_IER) External Interrupt 14 */
#define EIC_IER_INT14               (_U_(0x1) << EIC_IER_INT14_Pos)
#define EIC_IER_INT15_Pos           15           /**< \brief (EIC_IER) External Interrupt 15 */
#define EIC_IER_INT15               (_U_(0x1) << EIC_IER_INT15_Pos)
#define EIC_IER_MASK                _U_(0x0000FFFF) /**< \brief (EIC_IER) MASK Register */

/* -------- EIC_IDR : (EIC Offset: 0x004) ( /W 32) Interrupt Disable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t NMI:1;            /*!< bit:      0  External Non Maskable CPU interrupt */
    uint32_t INT1:1;           /*!< bit:      1  External Interrupt 1               */
    uint32_t INT2:1;           /*!< bit:      2  External Interrupt 2               */
    uint32_t INT3:1;           /*!< bit:      3  External Interrupt 3               */
    uint32_t INT4:1;           /*!< bit:      4  External Interrupt 4               */
    uint32_t INT5:1;           /*!< bit:      5  External Interrupt 5               */
    uint32_t INT6:1;           /*!< bit:      6  External Interrupt 6               */
    uint32_t INT7:1;           /*!< bit:      7  External Interrupt 7               */
    uint32_t INT8:1;           /*!< bit:      8  External Interrupt 8               */
    uint32_t INT9:1;           /*!< bit:      9  External Interrupt 9               */
    uint32_t INT10:1;          /*!< bit:     10  External Interrupt 10              */
    uint32_t INT11:1;          /*!< bit:     11  External Interrupt 11              */
    uint32_t INT12:1;          /*!< bit:     12  External Interrupt 12              */
    uint32_t INT13:1;          /*!< bit:     13  External Interrupt 13              */
    uint32_t INT14:1;          /*!< bit:     14  External Interrupt 14              */
    uint32_t INT15:1;          /*!< bit:     15  External Interrupt 15              */
    uint32_t :16;              /*!< bit: 16..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} EIC_IDR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EIC_IDR_OFFSET              0x004        /**< \brief (EIC_IDR offset) Interrupt Disable Register */
#define EIC_IDR_RESETVALUE          _U_(0x00000000); /**< \brief (EIC_IDR reset_value) Interrupt Disable Register */

#define EIC_IDR_NMI_Pos             0            /**< \brief (EIC_IDR) External Non Maskable CPU interrupt */
#define EIC_IDR_NMI                 (_U_(0x1) << EIC_IDR_NMI_Pos)
#define EIC_IDR_INT1_Pos            1            /**< \brief (EIC_IDR) External Interrupt 1 */
#define EIC_IDR_INT1                (_U_(0x1) << EIC_IDR_INT1_Pos)
#define   EIC_IDR_INT1_0_Val              _U_(0x0)   /**< \brief (EIC_IDR) No effect */
#define   EIC_IDR_INT1_1_Val              _U_(0x1)   /**< \brief (EIC_IDR) Disable Interrupt. */
#define EIC_IDR_INT1_0              (EIC_IDR_INT1_0_Val            << EIC_IDR_INT1_Pos)
#define EIC_IDR_INT1_1              (EIC_IDR_INT1_1_Val            << EIC_IDR_INT1_Pos)
#define EIC_IDR_INT2_Pos            2            /**< \brief (EIC_IDR) External Interrupt 2 */
#define EIC_IDR_INT2                (_U_(0x1) << EIC_IDR_INT2_Pos)
#define   EIC_IDR_INT2_0_Val              _U_(0x0)   /**< \brief (EIC_IDR) No effect */
#define   EIC_IDR_INT2_1_Val              _U_(0x1)   /**< \brief (EIC_IDR) Disable Interrupt. */
#define EIC_IDR_INT2_0              (EIC_IDR_INT2_0_Val            << EIC_IDR_INT2_Pos)
#define EIC_IDR_INT2_1              (EIC_IDR_INT2_1_Val            << EIC_IDR_INT2_Pos)
#define EIC_IDR_INT3_Pos            3            /**< \brief (EIC_IDR) External Interrupt 3 */
#define EIC_IDR_INT3                (_U_(0x1) << EIC_IDR_INT3_Pos)
#define   EIC_IDR_INT3_0_Val              _U_(0x0)   /**< \brief (EIC_IDR) No effect */
#define   EIC_IDR_INT3_1_Val              _U_(0x1)   /**< \brief (EIC_IDR) Disable Interrupt. */
#define EIC_IDR_INT3_0              (EIC_IDR_INT3_0_Val            << EIC_IDR_INT3_Pos)
#define EIC_IDR_INT3_1              (EIC_IDR_INT3_1_Val            << EIC_IDR_INT3_Pos)
#define EIC_IDR_INT4_Pos            4            /**< \brief (EIC_IDR) External Interrupt 4 */
#define EIC_IDR_INT4                (_U_(0x1) << EIC_IDR_INT4_Pos)
#define   EIC_IDR_INT4_0_Val              _U_(0x0)   /**< \brief (EIC_IDR) No effect */
#define   EIC_IDR_INT4_1_Val              _U_(0x1)   /**< \brief (EIC_IDR) Disable Interrupt. */
#define EIC_IDR_INT4_0              (EIC_IDR_INT4_0_Val            << EIC_IDR_INT4_Pos)
#define EIC_IDR_INT4_1              (EIC_IDR_INT4_1_Val            << EIC_IDR_INT4_Pos)
#define EIC_IDR_INT5_Pos            5            /**< \brief (EIC_IDR) External Interrupt 5 */
#define EIC_IDR_INT5                (_U_(0x1) << EIC_IDR_INT5_Pos)
#define EIC_IDR_INT6_Pos            6            /**< \brief (EIC_IDR) External Interrupt 6 */
#define EIC_IDR_INT6                (_U_(0x1) << EIC_IDR_INT6_Pos)
#define EIC_IDR_INT7_Pos            7            /**< \brief (EIC_IDR) External Interrupt 7 */
#define EIC_IDR_INT7                (_U_(0x1) << EIC_IDR_INT7_Pos)
#define EIC_IDR_INT8_Pos            8            /**< \brief (EIC_IDR) External Interrupt 8 */
#define EIC_IDR_INT8                (_U_(0x1) << EIC_IDR_INT8_Pos)
#define EIC_IDR_INT9_Pos            9            /**< \brief (EIC_IDR) External Interrupt 9 */
#define EIC_IDR_INT9                (_U_(0x1) << EIC_IDR_INT9_Pos)
#define EIC_IDR_INT10_Pos           10           /**< \brief (EIC_IDR) External Interrupt 10 */
#define EIC_IDR_INT10               (_U_(0x1) << EIC_IDR_INT10_Pos)
#define EIC_IDR_INT11_Pos           11           /**< \brief (EIC_IDR) External Interrupt 11 */
#define EIC_IDR_INT11               (_U_(0x1) << EIC_IDR_INT11_Pos)
#define EIC_IDR_INT12_Pos           12           /**< \brief (EIC_IDR) External Interrupt 12 */
#define EIC_IDR_INT12               (_U_(0x1) << EIC_IDR_INT12_Pos)
#define EIC_IDR_INT13_Pos           13           /**< \brief (EIC_IDR) External Interrupt 13 */
#define EIC_IDR_INT13               (_U_(0x1) << EIC_IDR_INT13_Pos)
#define EIC_IDR_INT14_Pos           14           /**< \brief (EIC_IDR) External Interrupt 14 */
#define EIC_IDR_INT14               (_U_(0x1) << EIC_IDR_INT14_Pos)
#define EIC_IDR_INT15_Pos           15           /**< \brief (EIC_IDR) External Interrupt 15 */
#define EIC_IDR_INT15               (_U_(0x1) << EIC_IDR_INT15_Pos)
#define EIC_IDR_MASK                _U_(0x0000FFFF) /**< \brief (EIC_IDR) MASK Register */

/* -------- EIC_IMR : (EIC Offset: 0x008) (R/  32) Interrupt Mask Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t NMI:1;            /*!< bit:      0  External Non Maskable CPU interrupt */
    uint32_t INT1:1;           /*!< bit:      1  External Interrupt 1               */
    uint32_t INT2:1;           /*!< bit:      2  External Interrupt 2               */
    uint32_t INT3:1;           /*!< bit:      3  External Interrupt 3               */
    uint32_t INT4:1;           /*!< bit:      4  External Interrupt 4               */
    uint32_t INT5:1;           /*!< bit:      5  External Interrupt 5               */
    uint32_t INT6:1;           /*!< bit:      6  External Interrupt 6               */
    uint32_t INT7:1;           /*!< bit:      7  External Interrupt 7               */
    uint32_t INT8:1;           /*!< bit:      8  External Interrupt 8               */
    uint32_t INT9:1;           /*!< bit:      9  External Interrupt 9               */
    uint32_t INT10:1;          /*!< bit:     10  External Interrupt 10              */
    uint32_t INT11:1;          /*!< bit:     11  External Interrupt 11              */
    uint32_t INT12:1;          /*!< bit:     12  External Interrupt 12              */
    uint32_t INT13:1;          /*!< bit:     13  External Interrupt 13              */
    uint32_t INT14:1;          /*!< bit:     14  External Interrupt 14              */
    uint32_t INT15:1;          /*!< bit:     15  External Interrupt 15              */
    uint32_t :16;              /*!< bit: 16..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} EIC_IMR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EIC_IMR_OFFSET              0x008        /**< \brief (EIC_IMR offset) Interrupt Mask Register */
#define EIC_IMR_RESETVALUE          _U_(0x00000000); /**< \brief (EIC_IMR reset_value) Interrupt Mask Register */

#define EIC_IMR_NMI_Pos             0            /**< \brief (EIC_IMR) External Non Maskable CPU interrupt */
#define EIC_IMR_NMI                 (_U_(0x1) << EIC_IMR_NMI_Pos)
#define EIC_IMR_INT1_Pos            1            /**< \brief (EIC_IMR) External Interrupt 1 */
#define EIC_IMR_INT1                (_U_(0x1) << EIC_IMR_INT1_Pos)
#define   EIC_IMR_INT1_0_Val              _U_(0x0)   /**< \brief (EIC_IMR) Interrupt is disabled */
#define   EIC_IMR_INT1_1_Val              _U_(0x1)   /**< \brief (EIC_IMR) Interrupt is enabled. */
#define EIC_IMR_INT1_0              (EIC_IMR_INT1_0_Val            << EIC_IMR_INT1_Pos)
#define EIC_IMR_INT1_1              (EIC_IMR_INT1_1_Val            << EIC_IMR_INT1_Pos)
#define EIC_IMR_INT2_Pos            2            /**< \brief (EIC_IMR) External Interrupt 2 */
#define EIC_IMR_INT2                (_U_(0x1) << EIC_IMR_INT2_Pos)
#define   EIC_IMR_INT2_0_Val              _U_(0x0)   /**< \brief (EIC_IMR) Interrupt is disabled */
#define   EIC_IMR_INT2_1_Val              _U_(0x1)   /**< \brief (EIC_IMR) Interrupt is enabled. */
#define EIC_IMR_INT2_0              (EIC_IMR_INT2_0_Val            << EIC_IMR_INT2_Pos)
#define EIC_IMR_INT2_1              (EIC_IMR_INT2_1_Val            << EIC_IMR_INT2_Pos)
#define EIC_IMR_INT3_Pos            3            /**< \brief (EIC_IMR) External Interrupt 3 */
#define EIC_IMR_INT3                (_U_(0x1) << EIC_IMR_INT3_Pos)
#define   EIC_IMR_INT3_0_Val              _U_(0x0)   /**< \brief (EIC_IMR) Interrupt is disabled */
#define   EIC_IMR_INT3_1_Val              _U_(0x1)   /**< \brief (EIC_IMR) Interrupt is enabled. */
#define EIC_IMR_INT3_0              (EIC_IMR_INT3_0_Val            << EIC_IMR_INT3_Pos)
#define EIC_IMR_INT3_1              (EIC_IMR_INT3_1_Val            << EIC_IMR_INT3_Pos)
#define EIC_IMR_INT4_Pos            4            /**< \brief (EIC_IMR) External Interrupt 4 */
#define EIC_IMR_INT4                (_U_(0x1) << EIC_IMR_INT4_Pos)
#define   EIC_IMR_INT4_0_Val              _U_(0x0)   /**< \brief (EIC_IMR) Interrupt is disabled */
#define   EIC_IMR_INT4_1_Val              _U_(0x1)   /**< \brief (EIC_IMR) Interrupt is enabled. */
#define EIC_IMR_INT4_0              (EIC_IMR_INT4_0_Val            << EIC_IMR_INT4_Pos)
#define EIC_IMR_INT4_1              (EIC_IMR_INT4_1_Val            << EIC_IMR_INT4_Pos)
#define EIC_IMR_INT5_Pos            5            /**< \brief (EIC_IMR) External Interrupt 5 */
#define EIC_IMR_INT5                (_U_(0x1) << EIC_IMR_INT5_Pos)
#define EIC_IMR_INT6_Pos            6            /**< \brief (EIC_IMR) External Interrupt 6 */
#define EIC_IMR_INT6                (_U_(0x1) << EIC_IMR_INT6_Pos)
#define EIC_IMR_INT7_Pos            7            /**< \brief (EIC_IMR) External Interrupt 7 */
#define EIC_IMR_INT7                (_U_(0x1) << EIC_IMR_INT7_Pos)
#define EIC_IMR_INT8_Pos            8            /**< \brief (EIC_IMR) External Interrupt 8 */
#define EIC_IMR_INT8                (_U_(0x1) << EIC_IMR_INT8_Pos)
#define EIC_IMR_INT9_Pos            9            /**< \brief (EIC_IMR) External Interrupt 9 */
#define EIC_IMR_INT9                (_U_(0x1) << EIC_IMR_INT9_Pos)
#define EIC_IMR_INT10_Pos           10           /**< \brief (EIC_IMR) External Interrupt 10 */
#define EIC_IMR_INT10               (_U_(0x1) << EIC_IMR_INT10_Pos)
#define EIC_IMR_INT11_Pos           11           /**< \brief (EIC_IMR) External Interrupt 11 */
#define EIC_IMR_INT11               (_U_(0x1) << EIC_IMR_INT11_Pos)
#define EIC_IMR_INT12_Pos           12           /**< \brief (EIC_IMR) External Interrupt 12 */
#define EIC_IMR_INT12               (_U_(0x1) << EIC_IMR_INT12_Pos)
#define EIC_IMR_INT13_Pos           13           /**< \brief (EIC_IMR) External Interrupt 13 */
#define EIC_IMR_INT13               (_U_(0x1) << EIC_IMR_INT13_Pos)
#define EIC_IMR_INT14_Pos           14           /**< \brief (EIC_IMR) External Interrupt 14 */
#define EIC_IMR_INT14               (_U_(0x1) << EIC_IMR_INT14_Pos)
#define EIC_IMR_INT15_Pos           15           /**< \brief (EIC_IMR) External Interrupt 15 */
#define EIC_IMR_INT15               (_U_(0x1) << EIC_IMR_INT15_Pos)
#define EIC_IMR_MASK                _U_(0x0000FFFF) /**< \brief (EIC_IMR) MASK Register */

/* -------- EIC_ISR : (EIC Offset: 0x00C) (R/  32) Interrupt Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t NMI:1;            /*!< bit:      0  External Non Maskable CPU interrupt */
    uint32_t INT1:1;           /*!< bit:      1  External Interrupt 1               */
    uint32_t INT2:1;           /*!< bit:      2  External Interrupt 2               */
    uint32_t INT3:1;           /*!< bit:      3  External Interrupt 3               */
    uint32_t INT4:1;           /*!< bit:      4  External Interrupt 4               */
    uint32_t INT5:1;           /*!< bit:      5  External Interrupt 5               */
    uint32_t INT6:1;           /*!< bit:      6  External Interrupt 6               */
    uint32_t INT7:1;           /*!< bit:      7  External Interrupt 7               */
    uint32_t INT8:1;           /*!< bit:      8  External Interrupt 8               */
    uint32_t INT9:1;           /*!< bit:      9  External Interrupt 9               */
    uint32_t INT10:1;          /*!< bit:     10  External Interrupt 10              */
    uint32_t INT11:1;          /*!< bit:     11  External Interrupt 11              */
    uint32_t INT12:1;          /*!< bit:     12  External Interrupt 12              */
    uint32_t INT13:1;          /*!< bit:     13  External Interrupt 13              */
    uint32_t INT14:1;          /*!< bit:     14  External Interrupt 14              */
    uint32_t INT15:1;          /*!< bit:     15  External Interrupt 15              */
    uint32_t :16;              /*!< bit: 16..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} EIC_ISR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EIC_ISR_OFFSET              0x00C        /**< \brief (EIC_ISR offset) Interrupt Status Register */
#define EIC_ISR_RESETVALUE          _U_(0x00000000); /**< \brief (EIC_ISR reset_value) Interrupt Status Register */

#define EIC_ISR_NMI_Pos             0            /**< \brief (EIC_ISR) External Non Maskable CPU interrupt */
#define EIC_ISR_NMI                 (_U_(0x1) << EIC_ISR_NMI_Pos)
#define EIC_ISR_INT1_Pos            1            /**< \brief (EIC_ISR) External Interrupt 1 */
#define EIC_ISR_INT1                (_U_(0x1) << EIC_ISR_INT1_Pos)
#define   EIC_ISR_INT1_0_Val              _U_(0x0)   /**< \brief (EIC_ISR) An interrupt event has not occurred */
#define   EIC_ISR_INT1_1_Val              _U_(0x1)   /**< \brief (EIC_ISR) An interrupt event has occurred. */
#define EIC_ISR_INT1_0              (EIC_ISR_INT1_0_Val            << EIC_ISR_INT1_Pos)
#define EIC_ISR_INT1_1              (EIC_ISR_INT1_1_Val            << EIC_ISR_INT1_Pos)
#define EIC_ISR_INT2_Pos            2            /**< \brief (EIC_ISR) External Interrupt 2 */
#define EIC_ISR_INT2                (_U_(0x1) << EIC_ISR_INT2_Pos)
#define   EIC_ISR_INT2_0_Val              _U_(0x0)   /**< \brief (EIC_ISR) An interrupt event has not occurred */
#define   EIC_ISR_INT2_1_Val              _U_(0x1)   /**< \brief (EIC_ISR) An interrupt event has occurred. */
#define EIC_ISR_INT2_0              (EIC_ISR_INT2_0_Val            << EIC_ISR_INT2_Pos)
#define EIC_ISR_INT2_1              (EIC_ISR_INT2_1_Val            << EIC_ISR_INT2_Pos)
#define EIC_ISR_INT3_Pos            3            /**< \brief (EIC_ISR) External Interrupt 3 */
#define EIC_ISR_INT3                (_U_(0x1) << EIC_ISR_INT3_Pos)
#define   EIC_ISR_INT3_0_Val              _U_(0x0)   /**< \brief (EIC_ISR) An interrupt event has not occurred */
#define   EIC_ISR_INT3_1_Val              _U_(0x1)   /**< \brief (EIC_ISR) An interrupt event has occurred. */
#define EIC_ISR_INT3_0              (EIC_ISR_INT3_0_Val            << EIC_ISR_INT3_Pos)
#define EIC_ISR_INT3_1              (EIC_ISR_INT3_1_Val            << EIC_ISR_INT3_Pos)
#define EIC_ISR_INT4_Pos            4            /**< \brief (EIC_ISR) External Interrupt 4 */
#define EIC_ISR_INT4                (_U_(0x1) << EIC_ISR_INT4_Pos)
#define   EIC_ISR_INT4_0_Val              _U_(0x0)   /**< \brief (EIC_ISR) An interrupt event has not occurred */
#define   EIC_ISR_INT4_1_Val              _U_(0x1)   /**< \brief (EIC_ISR) An interrupt event has occurred. */
#define EIC_ISR_INT4_0              (EIC_ISR_INT4_0_Val            << EIC_ISR_INT4_Pos)
#define EIC_ISR_INT4_1              (EIC_ISR_INT4_1_Val            << EIC_ISR_INT4_Pos)
#define EIC_ISR_INT5_Pos            5            /**< \brief (EIC_ISR) External Interrupt 5 */
#define EIC_ISR_INT5                (_U_(0x1) << EIC_ISR_INT5_Pos)
#define EIC_ISR_INT6_Pos            6            /**< \brief (EIC_ISR) External Interrupt 6 */
#define EIC_ISR_INT6                (_U_(0x1) << EIC_ISR_INT6_Pos)
#define EIC_ISR_INT7_Pos            7            /**< \brief (EIC_ISR) External Interrupt 7 */
#define EIC_ISR_INT7                (_U_(0x1) << EIC_ISR_INT7_Pos)
#define EIC_ISR_INT8_Pos            8            /**< \brief (EIC_ISR) External Interrupt 8 */
#define EIC_ISR_INT8                (_U_(0x1) << EIC_ISR_INT8_Pos)
#define EIC_ISR_INT9_Pos            9            /**< \brief (EIC_ISR) External Interrupt 9 */
#define EIC_ISR_INT9                (_U_(0x1) << EIC_ISR_INT9_Pos)
#define EIC_ISR_INT10_Pos           10           /**< \brief (EIC_ISR) External Interrupt 10 */
#define EIC_ISR_INT10               (_U_(0x1) << EIC_ISR_INT10_Pos)
#define EIC_ISR_INT11_Pos           11           /**< \brief (EIC_ISR) External Interrupt 11 */
#define EIC_ISR_INT11               (_U_(0x1) << EIC_ISR_INT11_Pos)
#define EIC_ISR_INT12_Pos           12           /**< \brief (EIC_ISR) External Interrupt 12 */
#define EIC_ISR_INT12               (_U_(0x1) << EIC_ISR_INT12_Pos)
#define EIC_ISR_INT13_Pos           13           /**< \brief (EIC_ISR) External Interrupt 13 */
#define EIC_ISR_INT13               (_U_(0x1) << EIC_ISR_INT13_Pos)
#define EIC_ISR_INT14_Pos           14           /**< \brief (EIC_ISR) External Interrupt 14 */
#define EIC_ISR_INT14               (_U_(0x1) << EIC_ISR_INT14_Pos)
#define EIC_ISR_INT15_Pos           15           /**< \brief (EIC_ISR) External Interrupt 15 */
#define EIC_ISR_INT15               (_U_(0x1) << EIC_ISR_INT15_Pos)
#define EIC_ISR_MASK                _U_(0x0000FFFF) /**< \brief (EIC_ISR) MASK Register */

/* -------- EIC_ICR : (EIC Offset: 0x010) ( /W 32) Interrupt Clear Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t NMI:1;            /*!< bit:      0  External Non Maskable CPU interrupt */
    uint32_t INT1:1;           /*!< bit:      1  External Interrupt 1               */
    uint32_t INT2:1;           /*!< bit:      2  External Interrupt 2               */
    uint32_t INT3:1;           /*!< bit:      3  External Interrupt 3               */
    uint32_t INT4:1;           /*!< bit:      4  External Interrupt 4               */
    uint32_t INT5:1;           /*!< bit:      5  External Interrupt 5               */
    uint32_t INT6:1;           /*!< bit:      6  External Interrupt 6               */
    uint32_t INT7:1;           /*!< bit:      7  External Interrupt 7               */
    uint32_t INT8:1;           /*!< bit:      8  External Interrupt 8               */
    uint32_t INT9:1;           /*!< bit:      9  External Interrupt 9               */
    uint32_t INT10:1;          /*!< bit:     10  External Interrupt 10              */
    uint32_t INT11:1;          /*!< bit:     11  External Interrupt 11              */
    uint32_t INT12:1;          /*!< bit:     12  External Interrupt 12              */
    uint32_t INT13:1;          /*!< bit:     13  External Interrupt 13              */
    uint32_t INT14:1;          /*!< bit:     14  External Interrupt 14              */
    uint32_t INT15:1;          /*!< bit:     15  External Interrupt 15              */
    uint32_t :16;              /*!< bit: 16..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} EIC_ICR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EIC_ICR_OFFSET              0x010        /**< \brief (EIC_ICR offset) Interrupt Clear Register */
#define EIC_ICR_RESETVALUE          _U_(0x00000000); /**< \brief (EIC_ICR reset_value) Interrupt Clear Register */

#define EIC_ICR_NMI_Pos             0            /**< \brief (EIC_ICR) External Non Maskable CPU interrupt */
#define EIC_ICR_NMI                 (_U_(0x1) << EIC_ICR_NMI_Pos)
#define EIC_ICR_INT1_Pos            1            /**< \brief (EIC_ICR) External Interrupt 1 */
#define EIC_ICR_INT1                (_U_(0x1) << EIC_ICR_INT1_Pos)
#define   EIC_ICR_INT1_0_Val              _U_(0x0)   /**< \brief (EIC_ICR) No effect */
#define   EIC_ICR_INT1_1_Val              _U_(0x1)   /**< \brief (EIC_ICR) Clear Interrupt. */
#define EIC_ICR_INT1_0              (EIC_ICR_INT1_0_Val            << EIC_ICR_INT1_Pos)
#define EIC_ICR_INT1_1              (EIC_ICR_INT1_1_Val            << EIC_ICR_INT1_Pos)
#define EIC_ICR_INT2_Pos            2            /**< \brief (EIC_ICR) External Interrupt 2 */
#define EIC_ICR_INT2                (_U_(0x1) << EIC_ICR_INT2_Pos)
#define   EIC_ICR_INT2_0_Val              _U_(0x0)   /**< \brief (EIC_ICR) No effect */
#define   EIC_ICR_INT2_1_Val              _U_(0x1)   /**< \brief (EIC_ICR) Clear Interrupt. */
#define EIC_ICR_INT2_0              (EIC_ICR_INT2_0_Val            << EIC_ICR_INT2_Pos)
#define EIC_ICR_INT2_1              (EIC_ICR_INT2_1_Val            << EIC_ICR_INT2_Pos)
#define EIC_ICR_INT3_Pos            3            /**< \brief (EIC_ICR) External Interrupt 3 */
#define EIC_ICR_INT3                (_U_(0x1) << EIC_ICR_INT3_Pos)
#define   EIC_ICR_INT3_0_Val              _U_(0x0)   /**< \brief (EIC_ICR) No effect */
#define   EIC_ICR_INT3_1_Val              _U_(0x1)   /**< \brief (EIC_ICR) Clear Interrupt. */
#define EIC_ICR_INT3_0              (EIC_ICR_INT3_0_Val            << EIC_ICR_INT3_Pos)
#define EIC_ICR_INT3_1              (EIC_ICR_INT3_1_Val            << EIC_ICR_INT3_Pos)
#define EIC_ICR_INT4_Pos            4            /**< \brief (EIC_ICR) External Interrupt 4 */
#define EIC_ICR_INT4                (_U_(0x1) << EIC_ICR_INT4_Pos)
#define   EIC_ICR_INT4_0_Val              _U_(0x0)   /**< \brief (EIC_ICR) No effect */
#define   EIC_ICR_INT4_1_Val              _U_(0x1)   /**< \brief (EIC_ICR) Clear Interrupt. */
#define EIC_ICR_INT4_0              (EIC_ICR_INT4_0_Val            << EIC_ICR_INT4_Pos)
#define EIC_ICR_INT4_1              (EIC_ICR_INT4_1_Val            << EIC_ICR_INT4_Pos)
#define EIC_ICR_INT5_Pos            5            /**< \brief (EIC_ICR) External Interrupt 5 */
#define EIC_ICR_INT5                (_U_(0x1) << EIC_ICR_INT5_Pos)
#define EIC_ICR_INT6_Pos            6            /**< \brief (EIC_ICR) External Interrupt 6 */
#define EIC_ICR_INT6                (_U_(0x1) << EIC_ICR_INT6_Pos)
#define EIC_ICR_INT7_Pos            7            /**< \brief (EIC_ICR) External Interrupt 7 */
#define EIC_ICR_INT7                (_U_(0x1) << EIC_ICR_INT7_Pos)
#define EIC_ICR_INT8_Pos            8            /**< \brief (EIC_ICR) External Interrupt 8 */
#define EIC_ICR_INT8                (_U_(0x1) << EIC_ICR_INT8_Pos)
#define EIC_ICR_INT9_Pos            9            /**< \brief (EIC_ICR) External Interrupt 9 */
#define EIC_ICR_INT9                (_U_(0x1) << EIC_ICR_INT9_Pos)
#define EIC_ICR_INT10_Pos           10           /**< \brief (EIC_ICR) External Interrupt 10 */
#define EIC_ICR_INT10               (_U_(0x1) << EIC_ICR_INT10_Pos)
#define EIC_ICR_INT11_Pos           11           /**< \brief (EIC_ICR) External Interrupt 11 */
#define EIC_ICR_INT11               (_U_(0x1) << EIC_ICR_INT11_Pos)
#define EIC_ICR_INT12_Pos           12           /**< \brief (EIC_ICR) External Interrupt 12 */
#define EIC_ICR_INT12               (_U_(0x1) << EIC_ICR_INT12_Pos)
#define EIC_ICR_INT13_Pos           13           /**< \brief (EIC_ICR) External Interrupt 13 */
#define EIC_ICR_INT13               (_U_(0x1) << EIC_ICR_INT13_Pos)
#define EIC_ICR_INT14_Pos           14           /**< \brief (EIC_ICR) External Interrupt 14 */
#define EIC_ICR_INT14               (_U_(0x1) << EIC_ICR_INT14_Pos)
#define EIC_ICR_INT15_Pos           15           /**< \brief (EIC_ICR) External Interrupt 15 */
#define EIC_ICR_INT15               (_U_(0x1) << EIC_ICR_INT15_Pos)
#define EIC_ICR_MASK                _U_(0x0000FFFF) /**< \brief (EIC_ICR) MASK Register */

/* -------- EIC_MODE : (EIC Offset: 0x014) (R/W 32) Mode Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t NMI:1;            /*!< bit:      0  External Non Maskable CPU interrupt */
    uint32_t INT1:1;           /*!< bit:      1  External Interrupt 1               */
    uint32_t INT2:1;           /*!< bit:      2  External Interrupt 2               */
    uint32_t INT3:1;           /*!< bit:      3  External Interrupt 3               */
    uint32_t INT4:1;           /*!< bit:      4  External Interrupt 4               */
    uint32_t INT5:1;           /*!< bit:      5  External Interrupt 5               */
    uint32_t INT6:1;           /*!< bit:      6  External Interrupt 6               */
    uint32_t INT7:1;           /*!< bit:      7  External Interrupt 7               */
    uint32_t INT8:1;           /*!< bit:      8  External Interrupt 8               */
    uint32_t INT9:1;           /*!< bit:      9  External Interrupt 9               */
    uint32_t INT10:1;          /*!< bit:     10  External Interrupt 10              */
    uint32_t INT11:1;          /*!< bit:     11  External Interrupt 11              */
    uint32_t INT12:1;          /*!< bit:     12  External Interrupt 12              */
    uint32_t INT13:1;          /*!< bit:     13  External Interrupt 13              */
    uint32_t INT14:1;          /*!< bit:     14  External Interrupt 14              */
    uint32_t INT15:1;          /*!< bit:     15  External Interrupt 15              */
    uint32_t :16;              /*!< bit: 16..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} EIC_MODE_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EIC_MODE_OFFSET             0x014        /**< \brief (EIC_MODE offset) Mode Register */
#define EIC_MODE_RESETVALUE         _U_(0x00000000); /**< \brief (EIC_MODE reset_value) Mode Register */

#define EIC_MODE_NMI_Pos            0            /**< \brief (EIC_MODE) External Non Maskable CPU interrupt */
#define EIC_MODE_NMI                (_U_(0x1) << EIC_MODE_NMI_Pos)
#define EIC_MODE_INT1_Pos           1            /**< \brief (EIC_MODE) External Interrupt 1 */
#define EIC_MODE_INT1               (_U_(0x1) << EIC_MODE_INT1_Pos)
#define   EIC_MODE_INT1_0_Val             _U_(0x0)   /**< \brief (EIC_MODE) Edge triggered interrupt */
#define   EIC_MODE_INT1_1_Val             _U_(0x1)   /**< \brief (EIC_MODE) Level triggered interrupt */
#define EIC_MODE_INT1_0             (EIC_MODE_INT1_0_Val           << EIC_MODE_INT1_Pos)
#define EIC_MODE_INT1_1             (EIC_MODE_INT1_1_Val           << EIC_MODE_INT1_Pos)
#define EIC_MODE_INT2_Pos           2            /**< \brief (EIC_MODE) External Interrupt 2 */
#define EIC_MODE_INT2               (_U_(0x1) << EIC_MODE_INT2_Pos)
#define   EIC_MODE_INT2_0_Val             _U_(0x0)   /**< \brief (EIC_MODE) Edge triggered interrupt */
#define   EIC_MODE_INT2_1_Val             _U_(0x1)   /**< \brief (EIC_MODE) Level triggered interrupt */
#define EIC_MODE_INT2_0             (EIC_MODE_INT2_0_Val           << EIC_MODE_INT2_Pos)
#define EIC_MODE_INT2_1             (EIC_MODE_INT2_1_Val           << EIC_MODE_INT2_Pos)
#define EIC_MODE_INT3_Pos           3            /**< \brief (EIC_MODE) External Interrupt 3 */
#define EIC_MODE_INT3               (_U_(0x1) << EIC_MODE_INT3_Pos)
#define   EIC_MODE_INT3_0_Val             _U_(0x0)   /**< \brief (EIC_MODE) Edge triggered interrupt */
#define   EIC_MODE_INT3_1_Val             _U_(0x1)   /**< \brief (EIC_MODE) Level triggered interrupt */
#define EIC_MODE_INT3_0             (EIC_MODE_INT3_0_Val           << EIC_MODE_INT3_Pos)
#define EIC_MODE_INT3_1             (EIC_MODE_INT3_1_Val           << EIC_MODE_INT3_Pos)
#define EIC_MODE_INT4_Pos           4            /**< \brief (EIC_MODE) External Interrupt 4 */
#define EIC_MODE_INT4               (_U_(0x1) << EIC_MODE_INT4_Pos)
#define   EIC_MODE_INT4_0_Val             _U_(0x0)   /**< \brief (EIC_MODE) Edge triggered interrupt */
#define   EIC_MODE_INT4_1_Val             _U_(0x1)   /**< \brief (EIC_MODE) Level triggered interrupt */
#define EIC_MODE_INT4_0             (EIC_MODE_INT4_0_Val           << EIC_MODE_INT4_Pos)
#define EIC_MODE_INT4_1             (EIC_MODE_INT4_1_Val           << EIC_MODE_INT4_Pos)
#define EIC_MODE_INT5_Pos           5            /**< \brief (EIC_MODE) External Interrupt 5 */
#define EIC_MODE_INT5               (_U_(0x1) << EIC_MODE_INT5_Pos)
#define EIC_MODE_INT6_Pos           6            /**< \brief (EIC_MODE) External Interrupt 6 */
#define EIC_MODE_INT6               (_U_(0x1) << EIC_MODE_INT6_Pos)
#define EIC_MODE_INT7_Pos           7            /**< \brief (EIC_MODE) External Interrupt 7 */
#define EIC_MODE_INT7               (_U_(0x1) << EIC_MODE_INT7_Pos)
#define EIC_MODE_INT8_Pos           8            /**< \brief (EIC_MODE) External Interrupt 8 */
#define EIC_MODE_INT8               (_U_(0x1) << EIC_MODE_INT8_Pos)
#define EIC_MODE_INT9_Pos           9            /**< \brief (EIC_MODE) External Interrupt 9 */
#define EIC_MODE_INT9               (_U_(0x1) << EIC_MODE_INT9_Pos)
#define EIC_MODE_INT10_Pos          10           /**< \brief (EIC_MODE) External Interrupt 10 */
#define EIC_MODE_INT10              (_U_(0x1) << EIC_MODE_INT10_Pos)
#define EIC_MODE_INT11_Pos          11           /**< \brief (EIC_MODE) External Interrupt 11 */
#define EIC_MODE_INT11              (_U_(0x1) << EIC_MODE_INT11_Pos)
#define EIC_MODE_INT12_Pos          12           /**< \brief (EIC_MODE) External Interrupt 12 */
#define EIC_MODE_INT12              (_U_(0x1) << EIC_MODE_INT12_Pos)
#define EIC_MODE_INT13_Pos          13           /**< \brief (EIC_MODE) External Interrupt 13 */
#define EIC_MODE_INT13              (_U_(0x1) << EIC_MODE_INT13_Pos)
#define EIC_MODE_INT14_Pos          14           /**< \brief (EIC_MODE) External Interrupt 14 */
#define EIC_MODE_INT14              (_U_(0x1) << EIC_MODE_INT14_Pos)
#define EIC_MODE_INT15_Pos          15           /**< \brief (EIC_MODE) External Interrupt 15 */
#define EIC_MODE_INT15              (_U_(0x1) << EIC_MODE_INT15_Pos)
#define EIC_MODE_MASK               _U_(0x0000FFFF) /**< \brief (EIC_MODE) MASK Register */

/* -------- EIC_EDGE : (EIC Offset: 0x018) (R/W 32) Edge Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t NMI:1;            /*!< bit:      0  External Non Maskable CPU interrupt */
    uint32_t INT1:1;           /*!< bit:      1  External Interrupt 1               */
    uint32_t INT2:1;           /*!< bit:      2  External Interrupt 2               */
    uint32_t INT3:1;           /*!< bit:      3  External Interrupt 3               */
    uint32_t INT4:1;           /*!< bit:      4  External Interrupt 4               */
    uint32_t INT5:1;           /*!< bit:      5  External Interrupt 5               */
    uint32_t INT6:1;           /*!< bit:      6  External Interrupt 6               */
    uint32_t INT7:1;           /*!< bit:      7  External Interrupt 7               */
    uint32_t INT8:1;           /*!< bit:      8  External Interrupt 8               */
    uint32_t INT9:1;           /*!< bit:      9  External Interrupt 9               */
    uint32_t INT10:1;          /*!< bit:     10  External Interrupt 10              */
    uint32_t INT11:1;          /*!< bit:     11  External Interrupt 11              */
    uint32_t INT12:1;          /*!< bit:     12  External Interrupt 12              */
    uint32_t INT13:1;          /*!< bit:     13  External Interrupt 13              */
    uint32_t INT14:1;          /*!< bit:     14  External Interrupt 14              */
    uint32_t INT15:1;          /*!< bit:     15  External Interrupt 15              */
    uint32_t :16;              /*!< bit: 16..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} EIC_EDGE_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EIC_EDGE_OFFSET             0x018        /**< \brief (EIC_EDGE offset) Edge Register */
#define EIC_EDGE_RESETVALUE         _U_(0x00000000); /**< \brief (EIC_EDGE reset_value) Edge Register */

#define EIC_EDGE_NMI_Pos            0            /**< \brief (EIC_EDGE) External Non Maskable CPU interrupt */
#define EIC_EDGE_NMI                (_U_(0x1) << EIC_EDGE_NMI_Pos)
#define EIC_EDGE_INT1_Pos           1            /**< \brief (EIC_EDGE) External Interrupt 1 */
#define EIC_EDGE_INT1               (_U_(0x1) << EIC_EDGE_INT1_Pos)
#define   EIC_EDGE_INT1_0_Val             _U_(0x0)   /**< \brief (EIC_EDGE) Triggers on falling edge */
#define   EIC_EDGE_INT1_1_Val             _U_(0x1)   /**< \brief (EIC_EDGE) Triggers on rising edge. */
#define EIC_EDGE_INT1_0             (EIC_EDGE_INT1_0_Val           << EIC_EDGE_INT1_Pos)
#define EIC_EDGE_INT1_1             (EIC_EDGE_INT1_1_Val           << EIC_EDGE_INT1_Pos)
#define EIC_EDGE_INT2_Pos           2            /**< \brief (EIC_EDGE) External Interrupt 2 */
#define EIC_EDGE_INT2               (_U_(0x1) << EIC_EDGE_INT2_Pos)
#define   EIC_EDGE_INT2_0_Val             _U_(0x0)   /**< \brief (EIC_EDGE) Triggers on falling edge */
#define   EIC_EDGE_INT2_1_Val             _U_(0x1)   /**< \brief (EIC_EDGE) Triggers on rising edge. */
#define EIC_EDGE_INT2_0             (EIC_EDGE_INT2_0_Val           << EIC_EDGE_INT2_Pos)
#define EIC_EDGE_INT2_1             (EIC_EDGE_INT2_1_Val           << EIC_EDGE_INT2_Pos)
#define EIC_EDGE_INT3_Pos           3            /**< \brief (EIC_EDGE) External Interrupt 3 */
#define EIC_EDGE_INT3               (_U_(0x1) << EIC_EDGE_INT3_Pos)
#define   EIC_EDGE_INT3_0_Val             _U_(0x0)   /**< \brief (EIC_EDGE) Triggers on falling edge */
#define   EIC_EDGE_INT3_1_Val             _U_(0x1)   /**< \brief (EIC_EDGE) Triggers on rising edge. */
#define EIC_EDGE_INT3_0             (EIC_EDGE_INT3_0_Val           << EIC_EDGE_INT3_Pos)
#define EIC_EDGE_INT3_1             (EIC_EDGE_INT3_1_Val           << EIC_EDGE_INT3_Pos)
#define EIC_EDGE_INT4_Pos           4            /**< \brief (EIC_EDGE) External Interrupt 4 */
#define EIC_EDGE_INT4               (_U_(0x1) << EIC_EDGE_INT4_Pos)
#define   EIC_EDGE_INT4_0_Val             _U_(0x0)   /**< \brief (EIC_EDGE) Triggers on falling edge */
#define   EIC_EDGE_INT4_1_Val             _U_(0x1)   /**< \brief (EIC_EDGE) Triggers on rising edge. */
#define EIC_EDGE_INT4_0             (EIC_EDGE_INT4_0_Val           << EIC_EDGE_INT4_Pos)
#define EIC_EDGE_INT4_1             (EIC_EDGE_INT4_1_Val           << EIC_EDGE_INT4_Pos)
#define EIC_EDGE_INT5_Pos           5            /**< \brief (EIC_EDGE) External Interrupt 5 */
#define EIC_EDGE_INT5               (_U_(0x1) << EIC_EDGE_INT5_Pos)
#define EIC_EDGE_INT6_Pos           6            /**< \brief (EIC_EDGE) External Interrupt 6 */
#define EIC_EDGE_INT6               (_U_(0x1) << EIC_EDGE_INT6_Pos)
#define EIC_EDGE_INT7_Pos           7            /**< \brief (EIC_EDGE) External Interrupt 7 */
#define EIC_EDGE_INT7               (_U_(0x1) << EIC_EDGE_INT7_Pos)
#define EIC_EDGE_INT8_Pos           8            /**< \brief (EIC_EDGE) External Interrupt 8 */
#define EIC_EDGE_INT8               (_U_(0x1) << EIC_EDGE_INT8_Pos)
#define EIC_EDGE_INT9_Pos           9            /**< \brief (EIC_EDGE) External Interrupt 9 */
#define EIC_EDGE_INT9               (_U_(0x1) << EIC_EDGE_INT9_Pos)
#define EIC_EDGE_INT10_Pos          10           /**< \brief (EIC_EDGE) External Interrupt 10 */
#define EIC_EDGE_INT10              (_U_(0x1) << EIC_EDGE_INT10_Pos)
#define EIC_EDGE_INT11_Pos          11           /**< \brief (EIC_EDGE) External Interrupt 11 */
#define EIC_EDGE_INT11              (_U_(0x1) << EIC_EDGE_INT11_Pos)
#define EIC_EDGE_INT12_Pos          12           /**< \brief (EIC_EDGE) External Interrupt 12 */
#define EIC_EDGE_INT12              (_U_(0x1) << EIC_EDGE_INT12_Pos)
#define EIC_EDGE_INT13_Pos          13           /**< \brief (EIC_EDGE) External Interrupt 13 */
#define EIC_EDGE_INT13              (_U_(0x1) << EIC_EDGE_INT13_Pos)
#define EIC_EDGE_INT14_Pos          14           /**< \brief (EIC_EDGE) External Interrupt 14 */
#define EIC_EDGE_INT14              (_U_(0x1) << EIC_EDGE_INT14_Pos)
#define EIC_EDGE_INT15_Pos          15           /**< \brief (EIC_EDGE) External Interrupt 15 */
#define EIC_EDGE_INT15              (_U_(0x1) << EIC_EDGE_INT15_Pos)
#define EIC_EDGE_MASK               _U_(0x0000FFFF) /**< \brief (EIC_EDGE) MASK Register */

/* -------- EIC_LEVEL : (EIC Offset: 0x01C) (R/W 32) Level Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t NMI:1;            /*!< bit:      0  External Non Maskable CPU interrupt */
    uint32_t INT1:1;           /*!< bit:      1  External Interrupt 1               */
    uint32_t INT2:1;           /*!< bit:      2  External Interrupt 2               */
    uint32_t INT3:1;           /*!< bit:      3  External Interrupt 3               */
    uint32_t INT4:1;           /*!< bit:      4  External Interrupt 4               */
    uint32_t INT5:1;           /*!< bit:      5  External Interrupt 5               */
    uint32_t INT6:1;           /*!< bit:      6  External Interrupt 6               */
    uint32_t INT7:1;           /*!< bit:      7  External Interrupt 7               */
    uint32_t INT8:1;           /*!< bit:      8  External Interrupt 8               */
    uint32_t INT9:1;           /*!< bit:      9  External Interrupt 9               */
    uint32_t INT10:1;          /*!< bit:     10  External Interrupt 10              */
    uint32_t INT11:1;          /*!< bit:     11  External Interrupt 11              */
    uint32_t INT12:1;          /*!< bit:     12  External Interrupt 12              */
    uint32_t INT13:1;          /*!< bit:     13  External Interrupt 13              */
    uint32_t INT14:1;          /*!< bit:     14  External Interrupt 14              */
    uint32_t INT15:1;          /*!< bit:     15  External Interrupt 15              */
    uint32_t :16;              /*!< bit: 16..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} EIC_LEVEL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EIC_LEVEL_OFFSET            0x01C        /**< \brief (EIC_LEVEL offset) Level Register */
#define EIC_LEVEL_RESETVALUE        _U_(0x00000000); /**< \brief (EIC_LEVEL reset_value) Level Register */

#define EIC_LEVEL_NMI_Pos           0            /**< \brief (EIC_LEVEL) External Non Maskable CPU interrupt */
#define EIC_LEVEL_NMI               (_U_(0x1) << EIC_LEVEL_NMI_Pos)
#define EIC_LEVEL_INT1_Pos          1            /**< \brief (EIC_LEVEL) External Interrupt 1 */
#define EIC_LEVEL_INT1              (_U_(0x1) << EIC_LEVEL_INT1_Pos)
#define EIC_LEVEL_INT2_Pos          2            /**< \brief (EIC_LEVEL) External Interrupt 2 */
#define EIC_LEVEL_INT2              (_U_(0x1) << EIC_LEVEL_INT2_Pos)
#define EIC_LEVEL_INT3_Pos          3            /**< \brief (EIC_LEVEL) External Interrupt 3 */
#define EIC_LEVEL_INT3              (_U_(0x1) << EIC_LEVEL_INT3_Pos)
#define EIC_LEVEL_INT4_Pos          4            /**< \brief (EIC_LEVEL) External Interrupt 4 */
#define EIC_LEVEL_INT4              (_U_(0x1) << EIC_LEVEL_INT4_Pos)
#define EIC_LEVEL_INT5_Pos          5            /**< \brief (EIC_LEVEL) External Interrupt 5 */
#define EIC_LEVEL_INT5              (_U_(0x1) << EIC_LEVEL_INT5_Pos)
#define EIC_LEVEL_INT6_Pos          6            /**< \brief (EIC_LEVEL) External Interrupt 6 */
#define EIC_LEVEL_INT6              (_U_(0x1) << EIC_LEVEL_INT6_Pos)
#define EIC_LEVEL_INT7_Pos          7            /**< \brief (EIC_LEVEL) External Interrupt 7 */
#define EIC_LEVEL_INT7              (_U_(0x1) << EIC_LEVEL_INT7_Pos)
#define EIC_LEVEL_INT8_Pos          8            /**< \brief (EIC_LEVEL) External Interrupt 8 */
#define EIC_LEVEL_INT8              (_U_(0x1) << EIC_LEVEL_INT8_Pos)
#define EIC_LEVEL_INT9_Pos          9            /**< \brief (EIC_LEVEL) External Interrupt 9 */
#define EIC_LEVEL_INT9              (_U_(0x1) << EIC_LEVEL_INT9_Pos)
#define EIC_LEVEL_INT10_Pos         10           /**< \brief (EIC_LEVEL) External Interrupt 10 */
#define EIC_LEVEL_INT10             (_U_(0x1) << EIC_LEVEL_INT10_Pos)
#define EIC_LEVEL_INT11_Pos         11           /**< \brief (EIC_LEVEL) External Interrupt 11 */
#define EIC_LEVEL_INT11             (_U_(0x1) << EIC_LEVEL_INT11_Pos)
#define EIC_LEVEL_INT12_Pos         12           /**< \brief (EIC_LEVEL) External Interrupt 12 */
#define EIC_LEVEL_INT12             (_U_(0x1) << EIC_LEVEL_INT12_Pos)
#define EIC_LEVEL_INT13_Pos         13           /**< \brief (EIC_LEVEL) External Interrupt 13 */
#define EIC_LEVEL_INT13             (_U_(0x1) << EIC_LEVEL_INT13_Pos)
#define EIC_LEVEL_INT14_Pos         14           /**< \brief (EIC_LEVEL) External Interrupt 14 */
#define EIC_LEVEL_INT14             (_U_(0x1) << EIC_LEVEL_INT14_Pos)
#define EIC_LEVEL_INT15_Pos         15           /**< \brief (EIC_LEVEL) External Interrupt 15 */
#define EIC_LEVEL_INT15             (_U_(0x1) << EIC_LEVEL_INT15_Pos)
#define EIC_LEVEL_MASK              _U_(0x0000FFFF) /**< \brief (EIC_LEVEL) MASK Register */

/* -------- EIC_FILTER : (EIC Offset: 0x020) (R/W 32) Filter Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t NMI:1;            /*!< bit:      0  External Non Maskable CPU interrupt */
    uint32_t INT1:1;           /*!< bit:      1  External Interrupt 1               */
    uint32_t INT2:1;           /*!< bit:      2  External Interrupt 2               */
    uint32_t INT3:1;           /*!< bit:      3  External Interrupt 3               */
    uint32_t INT4:1;           /*!< bit:      4  External Interrupt 4               */
    uint32_t INT5:1;           /*!< bit:      5  External Interrupt 5               */
    uint32_t INT6:1;           /*!< bit:      6  External Interrupt 6               */
    uint32_t INT7:1;           /*!< bit:      7  External Interrupt 7               */
    uint32_t INT8:1;           /*!< bit:      8  External Interrupt 8               */
    uint32_t INT9:1;           /*!< bit:      9  External Interrupt 9               */
    uint32_t INT10:1;          /*!< bit:     10  External Interrupt 10              */
    uint32_t INT11:1;          /*!< bit:     11  External Interrupt 11              */
    uint32_t INT12:1;          /*!< bit:     12  External Interrupt 12              */
    uint32_t INT13:1;          /*!< bit:     13  External Interrupt 13              */
    uint32_t INT14:1;          /*!< bit:     14  External Interrupt 14              */
    uint32_t INT15:1;          /*!< bit:     15  External Interrupt 15              */
    uint32_t :16;              /*!< bit: 16..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} EIC_FILTER_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EIC_FILTER_OFFSET           0x020        /**< \brief (EIC_FILTER offset) Filter Register */
#define EIC_FILTER_RESETVALUE       _U_(0x00000000); /**< \brief (EIC_FILTER reset_value) Filter Register */

#define EIC_FILTER_NMI_Pos          0            /**< \brief (EIC_FILTER) External Non Maskable CPU interrupt */
#define EIC_FILTER_NMI              (_U_(0x1) << EIC_FILTER_NMI_Pos)
#define EIC_FILTER_INT1_Pos         1            /**< \brief (EIC_FILTER) External Interrupt 1 */
#define EIC_FILTER_INT1             (_U_(0x1) << EIC_FILTER_INT1_Pos)
#define EIC_FILTER_INT2_Pos         2            /**< \brief (EIC_FILTER) External Interrupt 2 */
#define EIC_FILTER_INT2             (_U_(0x1) << EIC_FILTER_INT2_Pos)
#define EIC_FILTER_INT3_Pos         3            /**< \brief (EIC_FILTER) External Interrupt 3 */
#define EIC_FILTER_INT3             (_U_(0x1) << EIC_FILTER_INT3_Pos)
#define EIC_FILTER_INT4_Pos         4            /**< \brief (EIC_FILTER) External Interrupt 4 */
#define EIC_FILTER_INT4             (_U_(0x1) << EIC_FILTER_INT4_Pos)
#define EIC_FILTER_INT5_Pos         5            /**< \brief (EIC_FILTER) External Interrupt 5 */
#define EIC_FILTER_INT5             (_U_(0x1) << EIC_FILTER_INT5_Pos)
#define EIC_FILTER_INT6_Pos         6            /**< \brief (EIC_FILTER) External Interrupt 6 */
#define EIC_FILTER_INT6             (_U_(0x1) << EIC_FILTER_INT6_Pos)
#define EIC_FILTER_INT7_Pos         7            /**< \brief (EIC_FILTER) External Interrupt 7 */
#define EIC_FILTER_INT7             (_U_(0x1) << EIC_FILTER_INT7_Pos)
#define EIC_FILTER_INT8_Pos         8            /**< \brief (EIC_FILTER) External Interrupt 8 */
#define EIC_FILTER_INT8             (_U_(0x1) << EIC_FILTER_INT8_Pos)
#define EIC_FILTER_INT9_Pos         9            /**< \brief (EIC_FILTER) External Interrupt 9 */
#define EIC_FILTER_INT9             (_U_(0x1) << EIC_FILTER_INT9_Pos)
#define EIC_FILTER_INT10_Pos        10           /**< \brief (EIC_FILTER) External Interrupt 10 */
#define EIC_FILTER_INT10            (_U_(0x1) << EIC_FILTER_INT10_Pos)
#define EIC_FILTER_INT11_Pos        11           /**< \brief (EIC_FILTER) External Interrupt 11 */
#define EIC_FILTER_INT11            (_U_(0x1) << EIC_FILTER_INT11_Pos)
#define EIC_FILTER_INT12_Pos        12           /**< \brief (EIC_FILTER) External Interrupt 12 */
#define EIC_FILTER_INT12            (_U_(0x1) << EIC_FILTER_INT12_Pos)
#define EIC_FILTER_INT13_Pos        13           /**< \brief (EIC_FILTER) External Interrupt 13 */
#define EIC_FILTER_INT13            (_U_(0x1) << EIC_FILTER_INT13_Pos)
#define EIC_FILTER_INT14_Pos        14           /**< \brief (EIC_FILTER) External Interrupt 14 */
#define EIC_FILTER_INT14            (_U_(0x1) << EIC_FILTER_INT14_Pos)
#define EIC_FILTER_INT15_Pos        15           /**< \brief (EIC_FILTER) External Interrupt 15 */
#define EIC_FILTER_INT15            (_U_(0x1) << EIC_FILTER_INT15_Pos)
#define EIC_FILTER_MASK             _U_(0x0000FFFF) /**< \brief (EIC_FILTER) MASK Register */

/* -------- EIC_ASYNC : (EIC Offset: 0x028) (R/W 32) Asynchronous Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t NMI:1;            /*!< bit:      0  External Non Maskable CPU interrupt */
    uint32_t INT1:1;           /*!< bit:      1  External Interrupt 1               */
    uint32_t INT2:1;           /*!< bit:      2  External Interrupt 2               */
    uint32_t INT3:1;           /*!< bit:      3  External Interrupt 3               */
    uint32_t INT4:1;           /*!< bit:      4  External Interrupt 4               */
    uint32_t INT5:1;           /*!< bit:      5  External Interrupt 5               */
    uint32_t INT6:1;           /*!< bit:      6  External Interrupt 6               */
    uint32_t INT7:1;           /*!< bit:      7  External Interrupt 7               */
    uint32_t INT8:1;           /*!< bit:      8  External Interrupt 8               */
    uint32_t INT9:1;           /*!< bit:      9  External Interrupt 9               */
    uint32_t INT10:1;          /*!< bit:     10  External Interrupt 10              */
    uint32_t INT11:1;          /*!< bit:     11  External Interrupt 11              */
    uint32_t INT12:1;          /*!< bit:     12  External Interrupt 12              */
    uint32_t INT13:1;          /*!< bit:     13  External Interrupt 13              */
    uint32_t INT14:1;          /*!< bit:     14  External Interrupt 14              */
    uint32_t INT15:1;          /*!< bit:     15  External Interrupt 15              */
    uint32_t :16;              /*!< bit: 16..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} EIC_ASYNC_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EIC_ASYNC_OFFSET            0x028        /**< \brief (EIC_ASYNC offset) Asynchronous Register */
#define EIC_ASYNC_RESETVALUE        _U_(0x00000000); /**< \brief (EIC_ASYNC reset_value) Asynchronous Register */

#define EIC_ASYNC_NMI_Pos           0            /**< \brief (EIC_ASYNC) External Non Maskable CPU interrupt */
#define EIC_ASYNC_NMI               (_U_(0x1) << EIC_ASYNC_NMI_Pos)
#define EIC_ASYNC_INT1_Pos          1            /**< \brief (EIC_ASYNC) External Interrupt 1 */
#define EIC_ASYNC_INT1              (_U_(0x1) << EIC_ASYNC_INT1_Pos)
#define EIC_ASYNC_INT2_Pos          2            /**< \brief (EIC_ASYNC) External Interrupt 2 */
#define EIC_ASYNC_INT2              (_U_(0x1) << EIC_ASYNC_INT2_Pos)
#define EIC_ASYNC_INT3_Pos          3            /**< \brief (EIC_ASYNC) External Interrupt 3 */
#define EIC_ASYNC_INT3              (_U_(0x1) << EIC_ASYNC_INT3_Pos)
#define EIC_ASYNC_INT4_Pos          4            /**< \brief (EIC_ASYNC) External Interrupt 4 */
#define EIC_ASYNC_INT4              (_U_(0x1) << EIC_ASYNC_INT4_Pos)
#define EIC_ASYNC_INT5_Pos          5            /**< \brief (EIC_ASYNC) External Interrupt 5 */
#define EIC_ASYNC_INT5              (_U_(0x1) << EIC_ASYNC_INT5_Pos)
#define EIC_ASYNC_INT6_Pos          6            /**< \brief (EIC_ASYNC) External Interrupt 6 */
#define EIC_ASYNC_INT6              (_U_(0x1) << EIC_ASYNC_INT6_Pos)
#define EIC_ASYNC_INT7_Pos          7            /**< \brief (EIC_ASYNC) External Interrupt 7 */
#define EIC_ASYNC_INT7              (_U_(0x1) << EIC_ASYNC_INT7_Pos)
#define EIC_ASYNC_INT8_Pos          8            /**< \brief (EIC_ASYNC) External Interrupt 8 */
#define EIC_ASYNC_INT8              (_U_(0x1) << EIC_ASYNC_INT8_Pos)
#define EIC_ASYNC_INT9_Pos          9            /**< \brief (EIC_ASYNC) External Interrupt 9 */
#define EIC_ASYNC_INT9              (_U_(0x1) << EIC_ASYNC_INT9_Pos)
#define EIC_ASYNC_INT10_Pos         10           /**< \brief (EIC_ASYNC) External Interrupt 10 */
#define EIC_ASYNC_INT10             (_U_(0x1) << EIC_ASYNC_INT10_Pos)
#define EIC_ASYNC_INT11_Pos         11           /**< \brief (EIC_ASYNC) External Interrupt 11 */
#define EIC_ASYNC_INT11             (_U_(0x1) << EIC_ASYNC_INT11_Pos)
#define EIC_ASYNC_INT12_Pos         12           /**< \brief (EIC_ASYNC) External Interrupt 12 */
#define EIC_ASYNC_INT12             (_U_(0x1) << EIC_ASYNC_INT12_Pos)
#define EIC_ASYNC_INT13_Pos         13           /**< \brief (EIC_ASYNC) External Interrupt 13 */
#define EIC_ASYNC_INT13             (_U_(0x1) << EIC_ASYNC_INT13_Pos)
#define EIC_ASYNC_INT14_Pos         14           /**< \brief (EIC_ASYNC) External Interrupt 14 */
#define EIC_ASYNC_INT14             (_U_(0x1) << EIC_ASYNC_INT14_Pos)
#define EIC_ASYNC_INT15_Pos         15           /**< \brief (EIC_ASYNC) External Interrupt 15 */
#define EIC_ASYNC_INT15             (_U_(0x1) << EIC_ASYNC_INT15_Pos)
#define EIC_ASYNC_MASK              _U_(0x0000FFFF) /**< \brief (EIC_ASYNC) MASK Register */

/* -------- EIC_EN : (EIC Offset: 0x030) ( /W 32) Enable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t NMI:1;            /*!< bit:      0  External Non Maskable CPU interrupt */
    uint32_t INT1:1;           /*!< bit:      1  External Interrupt 1               */
    uint32_t INT2:1;           /*!< bit:      2  External Interrupt 2               */
    uint32_t INT3:1;           /*!< bit:      3  External Interrupt 3               */
    uint32_t INT4:1;           /*!< bit:      4  External Interrupt 4               */
    uint32_t INT5:1;           /*!< bit:      5  External Interrupt 5               */
    uint32_t INT6:1;           /*!< bit:      6  External Interrupt 6               */
    uint32_t INT7:1;           /*!< bit:      7  External Interrupt 7               */
    uint32_t INT8:1;           /*!< bit:      8  External Interrupt 8               */
    uint32_t INT9:1;           /*!< bit:      9  External Interrupt 9               */
    uint32_t INT10:1;          /*!< bit:     10  External Interrupt 10              */
    uint32_t INT11:1;          /*!< bit:     11  External Interrupt 11              */
    uint32_t INT12:1;          /*!< bit:     12  External Interrupt 12              */
    uint32_t INT13:1;          /*!< bit:     13  External Interrupt 13              */
    uint32_t INT14:1;          /*!< bit:     14  External Interrupt 14              */
    uint32_t INT15:1;          /*!< bit:     15  External Interrupt 15              */
    uint32_t :16;              /*!< bit: 16..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} EIC_EN_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EIC_EN_OFFSET               0x030        /**< \brief (EIC_EN offset) Enable Register */
#define EIC_EN_RESETVALUE           _U_(0x00000000); /**< \brief (EIC_EN reset_value) Enable Register */

#define EIC_EN_NMI_Pos              0            /**< \brief (EIC_EN) External Non Maskable CPU interrupt */
#define EIC_EN_NMI                  (_U_(0x1) << EIC_EN_NMI_Pos)
#define EIC_EN_INT1_Pos             1            /**< \brief (EIC_EN) External Interrupt 1 */
#define EIC_EN_INT1                 (_U_(0x1) << EIC_EN_INT1_Pos)
#define EIC_EN_INT2_Pos             2            /**< \brief (EIC_EN) External Interrupt 2 */
#define EIC_EN_INT2                 (_U_(0x1) << EIC_EN_INT2_Pos)
#define EIC_EN_INT3_Pos             3            /**< \brief (EIC_EN) External Interrupt 3 */
#define EIC_EN_INT3                 (_U_(0x1) << EIC_EN_INT3_Pos)
#define EIC_EN_INT4_Pos             4            /**< \brief (EIC_EN) External Interrupt 4 */
#define EIC_EN_INT4                 (_U_(0x1) << EIC_EN_INT4_Pos)
#define EIC_EN_INT5_Pos             5            /**< \brief (EIC_EN) External Interrupt 5 */
#define EIC_EN_INT5                 (_U_(0x1) << EIC_EN_INT5_Pos)
#define EIC_EN_INT6_Pos             6            /**< \brief (EIC_EN) External Interrupt 6 */
#define EIC_EN_INT6                 (_U_(0x1) << EIC_EN_INT6_Pos)
#define EIC_EN_INT7_Pos             7            /**< \brief (EIC_EN) External Interrupt 7 */
#define EIC_EN_INT7                 (_U_(0x1) << EIC_EN_INT7_Pos)
#define EIC_EN_INT8_Pos             8            /**< \brief (EIC_EN) External Interrupt 8 */
#define EIC_EN_INT8                 (_U_(0x1) << EIC_EN_INT8_Pos)
#define EIC_EN_INT9_Pos             9            /**< \brief (EIC_EN) External Interrupt 9 */
#define EIC_EN_INT9                 (_U_(0x1) << EIC_EN_INT9_Pos)
#define EIC_EN_INT10_Pos            10           /**< \brief (EIC_EN) External Interrupt 10 */
#define EIC_EN_INT10                (_U_(0x1) << EIC_EN_INT10_Pos)
#define EIC_EN_INT11_Pos            11           /**< \brief (EIC_EN) External Interrupt 11 */
#define EIC_EN_INT11                (_U_(0x1) << EIC_EN_INT11_Pos)
#define EIC_EN_INT12_Pos            12           /**< \brief (EIC_EN) External Interrupt 12 */
#define EIC_EN_INT12                (_U_(0x1) << EIC_EN_INT12_Pos)
#define EIC_EN_INT13_Pos            13           /**< \brief (EIC_EN) External Interrupt 13 */
#define EIC_EN_INT13                (_U_(0x1) << EIC_EN_INT13_Pos)
#define EIC_EN_INT14_Pos            14           /**< \brief (EIC_EN) External Interrupt 14 */
#define EIC_EN_INT14                (_U_(0x1) << EIC_EN_INT14_Pos)
#define EIC_EN_INT15_Pos            15           /**< \brief (EIC_EN) External Interrupt 15 */
#define EIC_EN_INT15                (_U_(0x1) << EIC_EN_INT15_Pos)
#define EIC_EN_MASK                 _U_(0x0000FFFF) /**< \brief (EIC_EN) MASK Register */

/* -------- EIC_DIS : (EIC Offset: 0x034) ( /W 32) Disable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t NMI:1;            /*!< bit:      0  External Non Maskable CPU interrupt */
    uint32_t INT1:1;           /*!< bit:      1  External Interrupt 1               */
    uint32_t INT2:1;           /*!< bit:      2  External Interrupt 2               */
    uint32_t INT3:1;           /*!< bit:      3  External Interrupt 3               */
    uint32_t INT4:1;           /*!< bit:      4  External Interrupt 4               */
    uint32_t INT5:1;           /*!< bit:      5  External Interrupt 5               */
    uint32_t INT6:1;           /*!< bit:      6  External Interrupt 6               */
    uint32_t INT7:1;           /*!< bit:      7  External Interrupt 7               */
    uint32_t INT8:1;           /*!< bit:      8  External Interrupt 8               */
    uint32_t INT9:1;           /*!< bit:      9  External Interrupt 9               */
    uint32_t INT10:1;          /*!< bit:     10  External Interrupt 10              */
    uint32_t INT11:1;          /*!< bit:     11  External Interrupt 11              */
    uint32_t INT12:1;          /*!< bit:     12  External Interrupt 12              */
    uint32_t INT13:1;          /*!< bit:     13  External Interrupt 13              */
    uint32_t INT14:1;          /*!< bit:     14  External Interrupt 14              */
    uint32_t INT15:1;          /*!< bit:     15  External Interrupt 15              */
    uint32_t :16;              /*!< bit: 16..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} EIC_DIS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EIC_DIS_OFFSET              0x034        /**< \brief (EIC_DIS offset) Disable Register */
#define EIC_DIS_RESETVALUE          _U_(0x00000000); /**< \brief (EIC_DIS reset_value) Disable Register */

#define EIC_DIS_NMI_Pos             0            /**< \brief (EIC_DIS) External Non Maskable CPU interrupt */
#define EIC_DIS_NMI                 (_U_(0x1) << EIC_DIS_NMI_Pos)
#define EIC_DIS_INT1_Pos            1            /**< \brief (EIC_DIS) External Interrupt 1 */
#define EIC_DIS_INT1                (_U_(0x1) << EIC_DIS_INT1_Pos)
#define EIC_DIS_INT2_Pos            2            /**< \brief (EIC_DIS) External Interrupt 2 */
#define EIC_DIS_INT2                (_U_(0x1) << EIC_DIS_INT2_Pos)
#define EIC_DIS_INT3_Pos            3            /**< \brief (EIC_DIS) External Interrupt 3 */
#define EIC_DIS_INT3                (_U_(0x1) << EIC_DIS_INT3_Pos)
#define EIC_DIS_INT4_Pos            4            /**< \brief (EIC_DIS) External Interrupt 4 */
#define EIC_DIS_INT4                (_U_(0x1) << EIC_DIS_INT4_Pos)
#define EIC_DIS_INT5_Pos            5            /**< \brief (EIC_DIS) External Interrupt 5 */
#define EIC_DIS_INT5                (_U_(0x1) << EIC_DIS_INT5_Pos)
#define EIC_DIS_INT6_Pos            6            /**< \brief (EIC_DIS) External Interrupt 6 */
#define EIC_DIS_INT6                (_U_(0x1) << EIC_DIS_INT6_Pos)
#define EIC_DIS_INT7_Pos            7            /**< \brief (EIC_DIS) External Interrupt 7 */
#define EIC_DIS_INT7                (_U_(0x1) << EIC_DIS_INT7_Pos)
#define EIC_DIS_INT8_Pos            8            /**< \brief (EIC_DIS) External Interrupt 8 */
#define EIC_DIS_INT8                (_U_(0x1) << EIC_DIS_INT8_Pos)
#define EIC_DIS_INT9_Pos            9            /**< \brief (EIC_DIS) External Interrupt 9 */
#define EIC_DIS_INT9                (_U_(0x1) << EIC_DIS_INT9_Pos)
#define EIC_DIS_INT10_Pos           10           /**< \brief (EIC_DIS) External Interrupt 10 */
#define EIC_DIS_INT10               (_U_(0x1) << EIC_DIS_INT10_Pos)
#define EIC_DIS_INT11_Pos           11           /**< \brief (EIC_DIS) External Interrupt 11 */
#define EIC_DIS_INT11               (_U_(0x1) << EIC_DIS_INT11_Pos)
#define EIC_DIS_INT12_Pos           12           /**< \brief (EIC_DIS) External Interrupt 12 */
#define EIC_DIS_INT12               (_U_(0x1) << EIC_DIS_INT12_Pos)
#define EIC_DIS_INT13_Pos           13           /**< \brief (EIC_DIS) External Interrupt 13 */
#define EIC_DIS_INT13               (_U_(0x1) << EIC_DIS_INT13_Pos)
#define EIC_DIS_INT14_Pos           14           /**< \brief (EIC_DIS) External Interrupt 14 */
#define EIC_DIS_INT14               (_U_(0x1) << EIC_DIS_INT14_Pos)
#define EIC_DIS_INT15_Pos           15           /**< \brief (EIC_DIS) External Interrupt 15 */
#define EIC_DIS_INT15               (_U_(0x1) << EIC_DIS_INT15_Pos)
#define EIC_DIS_MASK                _U_(0x0000FFFF) /**< \brief (EIC_DIS) MASK Register */

/* -------- EIC_CTRL : (EIC Offset: 0x038) (R/  32) Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t NMI:1;            /*!< bit:      0  External Non Maskable CPU interrupt */
    uint32_t INT1:1;           /*!< bit:      1  External Interrupt 1               */
    uint32_t INT2:1;           /*!< bit:      2  External Interrupt 2               */
    uint32_t INT3:1;           /*!< bit:      3  External Interrupt 3               */
    uint32_t INT4:1;           /*!< bit:      4  External Interrupt 4               */
    uint32_t INT5:1;           /*!< bit:      5  External Interrupt 5               */
    uint32_t INT6:1;           /*!< bit:      6  External Interrupt 6               */
    uint32_t INT7:1;           /*!< bit:      7  External Interrupt 7               */
    uint32_t INT8:1;           /*!< bit:      8  External Interrupt 8               */
    uint32_t INT9:1;           /*!< bit:      9  External Interrupt 9               */
    uint32_t INT10:1;          /*!< bit:     10  External Interrupt 10              */
    uint32_t INT11:1;          /*!< bit:     11  External Interrupt 11              */
    uint32_t INT12:1;          /*!< bit:     12  External Interrupt 12              */
    uint32_t INT13:1;          /*!< bit:     13  External Interrupt 13              */
    uint32_t INT14:1;          /*!< bit:     14  External Interrupt 14              */
    uint32_t INT15:1;          /*!< bit:     15  External Interrupt 15              */
    uint32_t :16;              /*!< bit: 16..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} EIC_CTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EIC_CTRL_OFFSET             0x038        /**< \brief (EIC_CTRL offset) Control Register */
#define EIC_CTRL_RESETVALUE         _U_(0x00000000); /**< \brief (EIC_CTRL reset_value) Control Register */

#define EIC_CTRL_NMI_Pos            0            /**< \brief (EIC_CTRL) External Non Maskable CPU interrupt */
#define EIC_CTRL_NMI                (_U_(0x1) << EIC_CTRL_NMI_Pos)
#define EIC_CTRL_INT1_Pos           1            /**< \brief (EIC_CTRL) External Interrupt 1 */
#define EIC_CTRL_INT1               (_U_(0x1) << EIC_CTRL_INT1_Pos)
#define EIC_CTRL_INT2_Pos           2            /**< \brief (EIC_CTRL) External Interrupt 2 */
#define EIC_CTRL_INT2               (_U_(0x1) << EIC_CTRL_INT2_Pos)
#define EIC_CTRL_INT3_Pos           3            /**< \brief (EIC_CTRL) External Interrupt 3 */
#define EIC_CTRL_INT3               (_U_(0x1) << EIC_CTRL_INT3_Pos)
#define EIC_CTRL_INT4_Pos           4            /**< \brief (EIC_CTRL) External Interrupt 4 */
#define EIC_CTRL_INT4               (_U_(0x1) << EIC_CTRL_INT4_Pos)
#define EIC_CTRL_INT5_Pos           5            /**< \brief (EIC_CTRL) External Interrupt 5 */
#define EIC_CTRL_INT5               (_U_(0x1) << EIC_CTRL_INT5_Pos)
#define EIC_CTRL_INT6_Pos           6            /**< \brief (EIC_CTRL) External Interrupt 6 */
#define EIC_CTRL_INT6               (_U_(0x1) << EIC_CTRL_INT6_Pos)
#define EIC_CTRL_INT7_Pos           7            /**< \brief (EIC_CTRL) External Interrupt 7 */
#define EIC_CTRL_INT7               (_U_(0x1) << EIC_CTRL_INT7_Pos)
#define EIC_CTRL_INT8_Pos           8            /**< \brief (EIC_CTRL) External Interrupt 8 */
#define EIC_CTRL_INT8               (_U_(0x1) << EIC_CTRL_INT8_Pos)
#define EIC_CTRL_INT9_Pos           9            /**< \brief (EIC_CTRL) External Interrupt 9 */
#define EIC_CTRL_INT9               (_U_(0x1) << EIC_CTRL_INT9_Pos)
#define EIC_CTRL_INT10_Pos          10           /**< \brief (EIC_CTRL) External Interrupt 10 */
#define EIC_CTRL_INT10              (_U_(0x1) << EIC_CTRL_INT10_Pos)
#define EIC_CTRL_INT11_Pos          11           /**< \brief (EIC_CTRL) External Interrupt 11 */
#define EIC_CTRL_INT11              (_U_(0x1) << EIC_CTRL_INT11_Pos)
#define EIC_CTRL_INT12_Pos          12           /**< \brief (EIC_CTRL) External Interrupt 12 */
#define EIC_CTRL_INT12              (_U_(0x1) << EIC_CTRL_INT12_Pos)
#define EIC_CTRL_INT13_Pos          13           /**< \brief (EIC_CTRL) External Interrupt 13 */
#define EIC_CTRL_INT13              (_U_(0x1) << EIC_CTRL_INT13_Pos)
#define EIC_CTRL_INT14_Pos          14           /**< \brief (EIC_CTRL) External Interrupt 14 */
#define EIC_CTRL_INT14              (_U_(0x1) << EIC_CTRL_INT14_Pos)
#define EIC_CTRL_INT15_Pos          15           /**< \brief (EIC_CTRL) External Interrupt 15 */
#define EIC_CTRL_INT15              (_U_(0x1) << EIC_CTRL_INT15_Pos)
#define EIC_CTRL_MASK               _U_(0x0000FFFF) /**< \brief (EIC_CTRL) MASK Register */

/* -------- EIC_VERSION : (EIC Offset: 0x3FC) (R/  32) Version Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t VERSION:12;       /*!< bit:  0..11  Version bits                       */
    uint32_t :20;              /*!< bit: 12..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} EIC_VERSION_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EIC_VERSION_OFFSET          0x3FC        /**< \brief (EIC_VERSION offset) Version Register */
#define EIC_VERSION_RESETVALUE      _U_(0x00000302); /**< \brief (EIC_VERSION reset_value) Version Register */

#define EIC_VERSION_VERSION_Pos     0            /**< \brief (EIC_VERSION) Version bits */
#define EIC_VERSION_VERSION_Msk     (_U_(0xFFF) << EIC_VERSION_VERSION_Pos)
#define EIC_VERSION_VERSION(value)  (EIC_VERSION_VERSION_Msk & ((value) << EIC_VERSION_VERSION_Pos))
#define EIC_VERSION_MASK            _U_(0x00000FFF) /**< \brief (EIC_VERSION) MASK Register */

/** \brief EIC hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {
  __O  uint32_t IER;         /**< \brief Offset: 0x000 ( /W 32) Interrupt Enable Register */
  __O  uint32_t IDR;         /**< \brief Offset: 0x004 ( /W 32) Interrupt Disable Register */
  __I  uint32_t IMR;         /**< \brief Offset: 0x008 (R/  32) Interrupt Mask Register */
  __I  uint32_t ISR;         /**< \brief Offset: 0x00C (R/  32) Interrupt Status Register */
  __O  uint32_t ICR;         /**< \brief Offset: 0x010 ( /W 32) Interrupt Clear Register */
  __IO uint32_t MODE;        /**< \brief Offset: 0x014 (R/W 32) Mode Register */
  __IO uint32_t EDGE;        /**< \brief Offset: 0x018 (R/W 32) Edge Register */
  __IO uint32_t LEVEL;       /**< \brief Offset: 0x01C (R/W 32) Level Register */
  __IO uint32_t FILTER;      /**< \brief Offset: 0x020 (R/W 32) Filter Register */
       RoReg8   Reserved1[0x4];
  __IO uint32_t ASYNC;       /**< \brief Offset: 0x028 (R/W 32) Asynchronous Register */
       RoReg8   Reserved2[0x4];
  __O  uint32_t EN;          /**< \brief Offset: 0x030 ( /W 32) Enable Register */
  __O  uint32_t DIS;         /**< \brief Offset: 0x034 ( /W 32) Disable Register */
  __I  uint32_t CTRL;        /**< \brief Offset: 0x038 (R/  32) Control Register */
       RoReg8   Reserved3[0x3C0];
  __I  uint32_t VERSION;     /**< \brief Offset: 0x3FC (R/  32) Version Register */
} Eic;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAM4L_EIC_COMPONENT_ */
