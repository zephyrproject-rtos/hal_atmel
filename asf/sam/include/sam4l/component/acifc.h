/**
 * \file
 *
 * \brief Component description for ACIFC
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

#ifndef _SAM4L_ACIFC_COMPONENT_
#define _SAM4L_ACIFC_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR ACIFC */
/* ========================================================================== */
/** \addtogroup SAM4L_ACIFC Analog Comparator Interface */
/*@{*/

#define ACIFC_I7564
#define REV_ACIFC                   0x101

/* -------- ACIFC_CTRL : (ACIFC Offset: 0x00) (R/W 32) Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t EN:1;             /*!< bit:      0  ACIFC Enable                       */
    uint32_t EVENTEN:1;        /*!< bit:      1  Peripheral Event Trigger Enable    */
    uint32_t :2;               /*!< bit:  2.. 3  Reserved                           */
    uint32_t USTART:1;         /*!< bit:      4  User Start Single Comparison       */
    uint32_t ESTART:1;         /*!< bit:      5  Peripheral Event Start Single Comparison */
    uint32_t :1;               /*!< bit:      6  Reserved                           */
    uint32_t ACTEST:1;         /*!< bit:      7  Analog Comparator Test Mode        */
    uint32_t :24;              /*!< bit:  8..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} ACIFC_CTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ACIFC_CTRL_OFFSET           0x00         /**< \brief (ACIFC_CTRL offset) Control Register */
#define ACIFC_CTRL_RESETVALUE       _U_(0x00000000); /**< \brief (ACIFC_CTRL reset_value) Control Register */

#define ACIFC_CTRL_EN_Pos           0            /**< \brief (ACIFC_CTRL) ACIFC Enable */
#define ACIFC_CTRL_EN               (_U_(0x1) << ACIFC_CTRL_EN_Pos)
#define ACIFC_CTRL_EVENTEN_Pos      1            /**< \brief (ACIFC_CTRL) Peripheral Event Trigger Enable */
#define ACIFC_CTRL_EVENTEN          (_U_(0x1) << ACIFC_CTRL_EVENTEN_Pos)
#define ACIFC_CTRL_USTART_Pos       4            /**< \brief (ACIFC_CTRL) User Start Single Comparison */
#define ACIFC_CTRL_USTART           (_U_(0x1) << ACIFC_CTRL_USTART_Pos)
#define ACIFC_CTRL_ESTART_Pos       5            /**< \brief (ACIFC_CTRL) Peripheral Event Start Single Comparison */
#define ACIFC_CTRL_ESTART           (_U_(0x1) << ACIFC_CTRL_ESTART_Pos)
#define ACIFC_CTRL_ACTEST_Pos       7            /**< \brief (ACIFC_CTRL) Analog Comparator Test Mode */
#define ACIFC_CTRL_ACTEST           (_U_(0x1) << ACIFC_CTRL_ACTEST_Pos)
#define ACIFC_CTRL_MASK             _U_(0x000000B3) /**< \brief (ACIFC_CTRL) MASK Register */

/* -------- ACIFC_SR : (ACIFC Offset: 0x04) (R/  32) Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t ACCS0:1;          /*!< bit:      0  AC0 Current Comparison Status      */
    uint32_t ACRDY0:1;         /*!< bit:      1  AC0 Ready                          */
    uint32_t ACCS1:1;          /*!< bit:      2  AC1 Current Comparison Status      */
    uint32_t ACRDY1:1;         /*!< bit:      3  AC1 Ready                          */
    uint32_t ACCS2:1;          /*!< bit:      4  AC2 Current Comparison Status      */
    uint32_t ACRDY2:1;         /*!< bit:      5  AC2 Ready                          */
    uint32_t ACCS3:1;          /*!< bit:      6  AC3 Current Comparison Status      */
    uint32_t ACRDY3:1;         /*!< bit:      7  AC3 Ready                          */
    uint32_t ACCS4:1;          /*!< bit:      8  AC4 Current Comparison Status      */
    uint32_t ACRDY4:1;         /*!< bit:      9  AC4 Ready                          */
    uint32_t ACCS5:1;          /*!< bit:     10  AC5 Current Comparison Status      */
    uint32_t ACRDY5:1;         /*!< bit:     11  AC5 Ready                          */
    uint32_t ACCS6:1;          /*!< bit:     12  AC6 Current Comparison Status      */
    uint32_t ACRDY6:1;         /*!< bit:     13  AC6 Ready                          */
    uint32_t ACCS7:1;          /*!< bit:     14  AC7 Current Comparison Status      */
    uint32_t ACRDY7:1;         /*!< bit:     15  AC7 Ready                          */
    uint32_t :8;               /*!< bit: 16..23  Reserved                           */
    uint32_t WFCS0:1;          /*!< bit:     24  Window0 Mode Current Status        */
    uint32_t WFCS1:1;          /*!< bit:     25  Window1 Mode Current Status        */
    uint32_t WFCS2:1;          /*!< bit:     26  Window2 Mode Current Status        */
    uint32_t WFCS3:1;          /*!< bit:     27  Window3 Mode Current Status        */
    uint32_t :4;               /*!< bit: 28..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} ACIFC_SR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ACIFC_SR_OFFSET             0x04         /**< \brief (ACIFC_SR offset) Status Register */
#define ACIFC_SR_RESETVALUE         _U_(0x00000000); /**< \brief (ACIFC_SR reset_value) Status Register */

#define ACIFC_SR_ACCS0_Pos          0            /**< \brief (ACIFC_SR) AC0 Current Comparison Status */
#define ACIFC_SR_ACCS0              (_U_(0x1) << ACIFC_SR_ACCS0_Pos)
#define ACIFC_SR_ACRDY0_Pos         1            /**< \brief (ACIFC_SR) AC0 Ready */
#define ACIFC_SR_ACRDY0             (_U_(0x1) << ACIFC_SR_ACRDY0_Pos)
#define ACIFC_SR_ACCS1_Pos          2            /**< \brief (ACIFC_SR) AC1 Current Comparison Status */
#define ACIFC_SR_ACCS1              (_U_(0x1) << ACIFC_SR_ACCS1_Pos)
#define ACIFC_SR_ACRDY1_Pos         3            /**< \brief (ACIFC_SR) AC1 Ready */
#define ACIFC_SR_ACRDY1             (_U_(0x1) << ACIFC_SR_ACRDY1_Pos)
#define ACIFC_SR_ACCS2_Pos          4            /**< \brief (ACIFC_SR) AC2 Current Comparison Status */
#define ACIFC_SR_ACCS2              (_U_(0x1) << ACIFC_SR_ACCS2_Pos)
#define ACIFC_SR_ACRDY2_Pos         5            /**< \brief (ACIFC_SR) AC2 Ready */
#define ACIFC_SR_ACRDY2             (_U_(0x1) << ACIFC_SR_ACRDY2_Pos)
#define ACIFC_SR_ACCS3_Pos          6            /**< \brief (ACIFC_SR) AC3 Current Comparison Status */
#define ACIFC_SR_ACCS3              (_U_(0x1) << ACIFC_SR_ACCS3_Pos)
#define ACIFC_SR_ACRDY3_Pos         7            /**< \brief (ACIFC_SR) AC3 Ready */
#define ACIFC_SR_ACRDY3             (_U_(0x1) << ACIFC_SR_ACRDY3_Pos)
#define ACIFC_SR_ACCS4_Pos          8            /**< \brief (ACIFC_SR) AC4 Current Comparison Status */
#define ACIFC_SR_ACCS4              (_U_(0x1) << ACIFC_SR_ACCS4_Pos)
#define ACIFC_SR_ACRDY4_Pos         9            /**< \brief (ACIFC_SR) AC4 Ready */
#define ACIFC_SR_ACRDY4             (_U_(0x1) << ACIFC_SR_ACRDY4_Pos)
#define ACIFC_SR_ACCS5_Pos          10           /**< \brief (ACIFC_SR) AC5 Current Comparison Status */
#define ACIFC_SR_ACCS5              (_U_(0x1) << ACIFC_SR_ACCS5_Pos)
#define ACIFC_SR_ACRDY5_Pos         11           /**< \brief (ACIFC_SR) AC5 Ready */
#define ACIFC_SR_ACRDY5             (_U_(0x1) << ACIFC_SR_ACRDY5_Pos)
#define ACIFC_SR_ACCS6_Pos          12           /**< \brief (ACIFC_SR) AC6 Current Comparison Status */
#define ACIFC_SR_ACCS6              (_U_(0x1) << ACIFC_SR_ACCS6_Pos)
#define ACIFC_SR_ACRDY6_Pos         13           /**< \brief (ACIFC_SR) AC6 Ready */
#define ACIFC_SR_ACRDY6             (_U_(0x1) << ACIFC_SR_ACRDY6_Pos)
#define ACIFC_SR_ACCS7_Pos          14           /**< \brief (ACIFC_SR) AC7 Current Comparison Status */
#define ACIFC_SR_ACCS7              (_U_(0x1) << ACIFC_SR_ACCS7_Pos)
#define ACIFC_SR_ACRDY7_Pos         15           /**< \brief (ACIFC_SR) AC7 Ready */
#define ACIFC_SR_ACRDY7             (_U_(0x1) << ACIFC_SR_ACRDY7_Pos)
#define ACIFC_SR_WFCS0_Pos          24           /**< \brief (ACIFC_SR) Window0 Mode Current Status */
#define ACIFC_SR_WFCS0              (_U_(0x1) << ACIFC_SR_WFCS0_Pos)
#define ACIFC_SR_WFCS1_Pos          25           /**< \brief (ACIFC_SR) Window1 Mode Current Status */
#define ACIFC_SR_WFCS1              (_U_(0x1) << ACIFC_SR_WFCS1_Pos)
#define ACIFC_SR_WFCS2_Pos          26           /**< \brief (ACIFC_SR) Window2 Mode Current Status */
#define ACIFC_SR_WFCS2              (_U_(0x1) << ACIFC_SR_WFCS2_Pos)
#define ACIFC_SR_WFCS3_Pos          27           /**< \brief (ACIFC_SR) Window3 Mode Current Status */
#define ACIFC_SR_WFCS3              (_U_(0x1) << ACIFC_SR_WFCS3_Pos)
#define ACIFC_SR_MASK               _U_(0x0F00FFFF) /**< \brief (ACIFC_SR) MASK Register */

/* -------- ACIFC_IER : (ACIFC Offset: 0x10) ( /W 32) Interrupt Enable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t ACINT0:1;         /*!< bit:      0  AC0 Interrupt Enable               */
    uint32_t SUTINT0:1;        /*!< bit:      1  AC0 Startup Time Interrupt Enable  */
    uint32_t ACINT1:1;         /*!< bit:      2  AC1 Interrupt Enable               */
    uint32_t SUTINT1:1;        /*!< bit:      3  AC1 Startup Time Interrupt Enable  */
    uint32_t ACINT2:1;         /*!< bit:      4  AC2 Interrupt Enable               */
    uint32_t SUTINT2:1;        /*!< bit:      5  AC2 Startup Time Interrupt Enable  */
    uint32_t ACINT3:1;         /*!< bit:      6  AC3 Interrupt Enable               */
    uint32_t SUTINT3:1;        /*!< bit:      7  AC3 Startup Time Interrupt Enable  */
    uint32_t ACINT4:1;         /*!< bit:      8  AC4 Interrupt Enable               */
    uint32_t SUTINT4:1;        /*!< bit:      9  AC4 Startup Time Interrupt Enable  */
    uint32_t ACINT5:1;         /*!< bit:     10  AC5 Interrupt Enable               */
    uint32_t SUTINT5:1;        /*!< bit:     11  AC5 Startup Time Interrupt Enable  */
    uint32_t ACINT6:1;         /*!< bit:     12  AC6 Interrupt Enable               */
    uint32_t SUTINT6:1;        /*!< bit:     13  AC6 Startup Time Interrupt Enable  */
    uint32_t ACINT7:1;         /*!< bit:     14  AC7 Interrupt Enable               */
    uint32_t SUTINT7:1;        /*!< bit:     15  AC7 Startup Time Interrupt Enable  */
    uint32_t :8;               /*!< bit: 16..23  Reserved                           */
    uint32_t WFINT0:1;         /*!< bit:     24  Window0 Mode Interrupt Enable      */
    uint32_t WFINT1:1;         /*!< bit:     25  Window1 Mode Interrupt Enable      */
    uint32_t WFINT2:1;         /*!< bit:     26  Window2 Mode Interrupt Enable      */
    uint32_t WFINT3:1;         /*!< bit:     27  Window3 Mode Interrupt Enable      */
    uint32_t :4;               /*!< bit: 28..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} ACIFC_IER_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ACIFC_IER_OFFSET            0x10         /**< \brief (ACIFC_IER offset) Interrupt Enable Register */
#define ACIFC_IER_RESETVALUE        _U_(0x00000000); /**< \brief (ACIFC_IER reset_value) Interrupt Enable Register */

#define ACIFC_IER_ACINT0_Pos        0            /**< \brief (ACIFC_IER) AC0 Interrupt Enable */
#define ACIFC_IER_ACINT0            (_U_(0x1) << ACIFC_IER_ACINT0_Pos)
#define ACIFC_IER_SUTINT0_Pos       1            /**< \brief (ACIFC_IER) AC0 Startup Time Interrupt Enable */
#define ACIFC_IER_SUTINT0           (_U_(0x1) << ACIFC_IER_SUTINT0_Pos)
#define ACIFC_IER_ACINT1_Pos        2            /**< \brief (ACIFC_IER) AC1 Interrupt Enable */
#define ACIFC_IER_ACINT1            (_U_(0x1) << ACIFC_IER_ACINT1_Pos)
#define ACIFC_IER_SUTINT1_Pos       3            /**< \brief (ACIFC_IER) AC1 Startup Time Interrupt Enable */
#define ACIFC_IER_SUTINT1           (_U_(0x1) << ACIFC_IER_SUTINT1_Pos)
#define ACIFC_IER_ACINT2_Pos        4            /**< \brief (ACIFC_IER) AC2 Interrupt Enable */
#define ACIFC_IER_ACINT2            (_U_(0x1) << ACIFC_IER_ACINT2_Pos)
#define ACIFC_IER_SUTINT2_Pos       5            /**< \brief (ACIFC_IER) AC2 Startup Time Interrupt Enable */
#define ACIFC_IER_SUTINT2           (_U_(0x1) << ACIFC_IER_SUTINT2_Pos)
#define ACIFC_IER_ACINT3_Pos        6            /**< \brief (ACIFC_IER) AC3 Interrupt Enable */
#define ACIFC_IER_ACINT3            (_U_(0x1) << ACIFC_IER_ACINT3_Pos)
#define ACIFC_IER_SUTINT3_Pos       7            /**< \brief (ACIFC_IER) AC3 Startup Time Interrupt Enable */
#define ACIFC_IER_SUTINT3           (_U_(0x1) << ACIFC_IER_SUTINT3_Pos)
#define ACIFC_IER_ACINT4_Pos        8            /**< \brief (ACIFC_IER) AC4 Interrupt Enable */
#define ACIFC_IER_ACINT4            (_U_(0x1) << ACIFC_IER_ACINT4_Pos)
#define ACIFC_IER_SUTINT4_Pos       9            /**< \brief (ACIFC_IER) AC4 Startup Time Interrupt Enable */
#define ACIFC_IER_SUTINT4           (_U_(0x1) << ACIFC_IER_SUTINT4_Pos)
#define ACIFC_IER_ACINT5_Pos        10           /**< \brief (ACIFC_IER) AC5 Interrupt Enable */
#define ACIFC_IER_ACINT5            (_U_(0x1) << ACIFC_IER_ACINT5_Pos)
#define ACIFC_IER_SUTINT5_Pos       11           /**< \brief (ACIFC_IER) AC5 Startup Time Interrupt Enable */
#define ACIFC_IER_SUTINT5           (_U_(0x1) << ACIFC_IER_SUTINT5_Pos)
#define ACIFC_IER_ACINT6_Pos        12           /**< \brief (ACIFC_IER) AC6 Interrupt Enable */
#define ACIFC_IER_ACINT6            (_U_(0x1) << ACIFC_IER_ACINT6_Pos)
#define ACIFC_IER_SUTINT6_Pos       13           /**< \brief (ACIFC_IER) AC6 Startup Time Interrupt Enable */
#define ACIFC_IER_SUTINT6           (_U_(0x1) << ACIFC_IER_SUTINT6_Pos)
#define ACIFC_IER_ACINT7_Pos        14           /**< \brief (ACIFC_IER) AC7 Interrupt Enable */
#define ACIFC_IER_ACINT7            (_U_(0x1) << ACIFC_IER_ACINT7_Pos)
#define ACIFC_IER_SUTINT7_Pos       15           /**< \brief (ACIFC_IER) AC7 Startup Time Interrupt Enable */
#define ACIFC_IER_SUTINT7           (_U_(0x1) << ACIFC_IER_SUTINT7_Pos)
#define ACIFC_IER_WFINT0_Pos        24           /**< \brief (ACIFC_IER) Window0 Mode Interrupt Enable */
#define ACIFC_IER_WFINT0            (_U_(0x1) << ACIFC_IER_WFINT0_Pos)
#define ACIFC_IER_WFINT1_Pos        25           /**< \brief (ACIFC_IER) Window1 Mode Interrupt Enable */
#define ACIFC_IER_WFINT1            (_U_(0x1) << ACIFC_IER_WFINT1_Pos)
#define ACIFC_IER_WFINT2_Pos        26           /**< \brief (ACIFC_IER) Window2 Mode Interrupt Enable */
#define ACIFC_IER_WFINT2            (_U_(0x1) << ACIFC_IER_WFINT2_Pos)
#define ACIFC_IER_WFINT3_Pos        27           /**< \brief (ACIFC_IER) Window3 Mode Interrupt Enable */
#define ACIFC_IER_WFINT3            (_U_(0x1) << ACIFC_IER_WFINT3_Pos)
#define ACIFC_IER_MASK              _U_(0x0F00FFFF) /**< \brief (ACIFC_IER) MASK Register */

/* -------- ACIFC_IDR : (ACIFC Offset: 0x14) ( /W 32) Interrupt Disable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t ACINT0:1;         /*!< bit:      0  AC0 Interrupt Disable              */
    uint32_t SUTINT0:1;        /*!< bit:      1  AC0 Startup Time Interrupt Disable */
    uint32_t ACINT1:1;         /*!< bit:      2  AC1 Interrupt Disable              */
    uint32_t SUTINT1:1;        /*!< bit:      3  AC1 Startup Time Interrupt Disable */
    uint32_t ACINT2:1;         /*!< bit:      4  AC2 Interrupt Disable              */
    uint32_t SUTINT2:1;        /*!< bit:      5  AC2 Startup Time Interrupt Disable */
    uint32_t ACINT3:1;         /*!< bit:      6  AC3 Interrupt Disable              */
    uint32_t SUTINT3:1;        /*!< bit:      7  AC3 Startup Time Interrupt Disable */
    uint32_t ACINT4:1;         /*!< bit:      8  AC4 Interrupt Disable              */
    uint32_t SUTINT4:1;        /*!< bit:      9  AC4 Startup Time Interrupt Disable */
    uint32_t ACINT5:1;         /*!< bit:     10  AC5 Interrupt Disable              */
    uint32_t SUTINT5:1;        /*!< bit:     11  AC5 Startup Time Interrupt Disable */
    uint32_t ACINT6:1;         /*!< bit:     12  AC6 Interrupt Disable              */
    uint32_t SUTINT6:1;        /*!< bit:     13  AC6 Startup Time Interrupt Disable */
    uint32_t ACINT7:1;         /*!< bit:     14  AC7 Interrupt Disable              */
    uint32_t SUTINT7:1;        /*!< bit:     15  AC7 Startup Time Interrupt Disable */
    uint32_t :8;               /*!< bit: 16..23  Reserved                           */
    uint32_t WFINT0:1;         /*!< bit:     24  Window0 Mode Interrupt Disable     */
    uint32_t WFINT1:1;         /*!< bit:     25  Window1 Mode Interrupt Disable     */
    uint32_t WFINT2:1;         /*!< bit:     26  Window2 Mode Interrupt Disable     */
    uint32_t WFINT3:1;         /*!< bit:     27  Window3 Mode Interrupt Disable     */
    uint32_t :4;               /*!< bit: 28..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} ACIFC_IDR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ACIFC_IDR_OFFSET            0x14         /**< \brief (ACIFC_IDR offset) Interrupt Disable Register */
#define ACIFC_IDR_RESETVALUE        _U_(0x00000000); /**< \brief (ACIFC_IDR reset_value) Interrupt Disable Register */

#define ACIFC_IDR_ACINT0_Pos        0            /**< \brief (ACIFC_IDR) AC0 Interrupt Disable */
#define ACIFC_IDR_ACINT0            (_U_(0x1) << ACIFC_IDR_ACINT0_Pos)
#define ACIFC_IDR_SUTINT0_Pos       1            /**< \brief (ACIFC_IDR) AC0 Startup Time Interrupt Disable */
#define ACIFC_IDR_SUTINT0           (_U_(0x1) << ACIFC_IDR_SUTINT0_Pos)
#define ACIFC_IDR_ACINT1_Pos        2            /**< \brief (ACIFC_IDR) AC1 Interrupt Disable */
#define ACIFC_IDR_ACINT1            (_U_(0x1) << ACIFC_IDR_ACINT1_Pos)
#define ACIFC_IDR_SUTINT1_Pos       3            /**< \brief (ACIFC_IDR) AC1 Startup Time Interrupt Disable */
#define ACIFC_IDR_SUTINT1           (_U_(0x1) << ACIFC_IDR_SUTINT1_Pos)
#define ACIFC_IDR_ACINT2_Pos        4            /**< \brief (ACIFC_IDR) AC2 Interrupt Disable */
#define ACIFC_IDR_ACINT2            (_U_(0x1) << ACIFC_IDR_ACINT2_Pos)
#define ACIFC_IDR_SUTINT2_Pos       5            /**< \brief (ACIFC_IDR) AC2 Startup Time Interrupt Disable */
#define ACIFC_IDR_SUTINT2           (_U_(0x1) << ACIFC_IDR_SUTINT2_Pos)
#define ACIFC_IDR_ACINT3_Pos        6            /**< \brief (ACIFC_IDR) AC3 Interrupt Disable */
#define ACIFC_IDR_ACINT3            (_U_(0x1) << ACIFC_IDR_ACINT3_Pos)
#define ACIFC_IDR_SUTINT3_Pos       7            /**< \brief (ACIFC_IDR) AC3 Startup Time Interrupt Disable */
#define ACIFC_IDR_SUTINT3           (_U_(0x1) << ACIFC_IDR_SUTINT3_Pos)
#define ACIFC_IDR_ACINT4_Pos        8            /**< \brief (ACIFC_IDR) AC4 Interrupt Disable */
#define ACIFC_IDR_ACINT4            (_U_(0x1) << ACIFC_IDR_ACINT4_Pos)
#define ACIFC_IDR_SUTINT4_Pos       9            /**< \brief (ACIFC_IDR) AC4 Startup Time Interrupt Disable */
#define ACIFC_IDR_SUTINT4           (_U_(0x1) << ACIFC_IDR_SUTINT4_Pos)
#define ACIFC_IDR_ACINT5_Pos        10           /**< \brief (ACIFC_IDR) AC5 Interrupt Disable */
#define ACIFC_IDR_ACINT5            (_U_(0x1) << ACIFC_IDR_ACINT5_Pos)
#define ACIFC_IDR_SUTINT5_Pos       11           /**< \brief (ACIFC_IDR) AC5 Startup Time Interrupt Disable */
#define ACIFC_IDR_SUTINT5           (_U_(0x1) << ACIFC_IDR_SUTINT5_Pos)
#define ACIFC_IDR_ACINT6_Pos        12           /**< \brief (ACIFC_IDR) AC6 Interrupt Disable */
#define ACIFC_IDR_ACINT6            (_U_(0x1) << ACIFC_IDR_ACINT6_Pos)
#define ACIFC_IDR_SUTINT6_Pos       13           /**< \brief (ACIFC_IDR) AC6 Startup Time Interrupt Disable */
#define ACIFC_IDR_SUTINT6           (_U_(0x1) << ACIFC_IDR_SUTINT6_Pos)
#define ACIFC_IDR_ACINT7_Pos        14           /**< \brief (ACIFC_IDR) AC7 Interrupt Disable */
#define ACIFC_IDR_ACINT7            (_U_(0x1) << ACIFC_IDR_ACINT7_Pos)
#define ACIFC_IDR_SUTINT7_Pos       15           /**< \brief (ACIFC_IDR) AC7 Startup Time Interrupt Disable */
#define ACIFC_IDR_SUTINT7           (_U_(0x1) << ACIFC_IDR_SUTINT7_Pos)
#define ACIFC_IDR_WFINT0_Pos        24           /**< \brief (ACIFC_IDR) Window0 Mode Interrupt Disable */
#define ACIFC_IDR_WFINT0            (_U_(0x1) << ACIFC_IDR_WFINT0_Pos)
#define ACIFC_IDR_WFINT1_Pos        25           /**< \brief (ACIFC_IDR) Window1 Mode Interrupt Disable */
#define ACIFC_IDR_WFINT1            (_U_(0x1) << ACIFC_IDR_WFINT1_Pos)
#define ACIFC_IDR_WFINT2_Pos        26           /**< \brief (ACIFC_IDR) Window2 Mode Interrupt Disable */
#define ACIFC_IDR_WFINT2            (_U_(0x1) << ACIFC_IDR_WFINT2_Pos)
#define ACIFC_IDR_WFINT3_Pos        27           /**< \brief (ACIFC_IDR) Window3 Mode Interrupt Disable */
#define ACIFC_IDR_WFINT3            (_U_(0x1) << ACIFC_IDR_WFINT3_Pos)
#define ACIFC_IDR_MASK              _U_(0x0F00FFFF) /**< \brief (ACIFC_IDR) MASK Register */

/* -------- ACIFC_IMR : (ACIFC Offset: 0x18) (R/  32) Interrupt Mask Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t ACINT0:1;         /*!< bit:      0  AC0 Interrupt Mask                 */
    uint32_t SUTINT0:1;        /*!< bit:      1  AC0 Startup Time Interrupt Mask    */
    uint32_t ACINT1:1;         /*!< bit:      2  AC1 Interrupt Mask                 */
    uint32_t SUTINT1:1;        /*!< bit:      3  AC1 Startup Time Interrupt Mask    */
    uint32_t ACINT2:1;         /*!< bit:      4  AC2 Interrupt Mask                 */
    uint32_t SUTINT2:1;        /*!< bit:      5  AC2 Startup Time Interrupt Mask    */
    uint32_t ACINT3:1;         /*!< bit:      6  AC3 Interrupt Mask                 */
    uint32_t SUTINT3:1;        /*!< bit:      7  AC3 Startup Time Interrupt Mask    */
    uint32_t ACINT4:1;         /*!< bit:      8  AC4 Interrupt Mask                 */
    uint32_t SUTINT4:1;        /*!< bit:      9  AC4 Startup Time Interrupt Mask    */
    uint32_t ACINT5:1;         /*!< bit:     10  AC5 Interrupt Mask                 */
    uint32_t SUTINT5:1;        /*!< bit:     11  AC5 Startup Time Interrupt Mask    */
    uint32_t ACINT6:1;         /*!< bit:     12  AC6 Interrupt Mask                 */
    uint32_t SUTINT6:1;        /*!< bit:     13  AC6 Startup Time Interrupt Mask    */
    uint32_t ACINT7:1;         /*!< bit:     14  AC7 Interrupt Mask                 */
    uint32_t SUTINT7:1;        /*!< bit:     15  AC7 Startup Time Interrupt Mask    */
    uint32_t :8;               /*!< bit: 16..23  Reserved                           */
    uint32_t WFINT0:1;         /*!< bit:     24  Window0 Mode Interrupt Mask        */
    uint32_t WFINT1:1;         /*!< bit:     25  Window1 Mode Interrupt Mask        */
    uint32_t WFINT2:1;         /*!< bit:     26  Window2 Mode Interrupt Mask        */
    uint32_t WFINT3:1;         /*!< bit:     27  Window3 Mode Interrupt Mask        */
    uint32_t :4;               /*!< bit: 28..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} ACIFC_IMR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ACIFC_IMR_OFFSET            0x18         /**< \brief (ACIFC_IMR offset) Interrupt Mask Register */
#define ACIFC_IMR_RESETVALUE        _U_(0x00000000); /**< \brief (ACIFC_IMR reset_value) Interrupt Mask Register */

#define ACIFC_IMR_ACINT0_Pos        0            /**< \brief (ACIFC_IMR) AC0 Interrupt Mask */
#define ACIFC_IMR_ACINT0            (_U_(0x1) << ACIFC_IMR_ACINT0_Pos)
#define ACIFC_IMR_SUTINT0_Pos       1            /**< \brief (ACIFC_IMR) AC0 Startup Time Interrupt Mask */
#define ACIFC_IMR_SUTINT0           (_U_(0x1) << ACIFC_IMR_SUTINT0_Pos)
#define ACIFC_IMR_ACINT1_Pos        2            /**< \brief (ACIFC_IMR) AC1 Interrupt Mask */
#define ACIFC_IMR_ACINT1            (_U_(0x1) << ACIFC_IMR_ACINT1_Pos)
#define ACIFC_IMR_SUTINT1_Pos       3            /**< \brief (ACIFC_IMR) AC1 Startup Time Interrupt Mask */
#define ACIFC_IMR_SUTINT1           (_U_(0x1) << ACIFC_IMR_SUTINT1_Pos)
#define ACIFC_IMR_ACINT2_Pos        4            /**< \brief (ACIFC_IMR) AC2 Interrupt Mask */
#define ACIFC_IMR_ACINT2            (_U_(0x1) << ACIFC_IMR_ACINT2_Pos)
#define ACIFC_IMR_SUTINT2_Pos       5            /**< \brief (ACIFC_IMR) AC2 Startup Time Interrupt Mask */
#define ACIFC_IMR_SUTINT2           (_U_(0x1) << ACIFC_IMR_SUTINT2_Pos)
#define ACIFC_IMR_ACINT3_Pos        6            /**< \brief (ACIFC_IMR) AC3 Interrupt Mask */
#define ACIFC_IMR_ACINT3            (_U_(0x1) << ACIFC_IMR_ACINT3_Pos)
#define ACIFC_IMR_SUTINT3_Pos       7            /**< \brief (ACIFC_IMR) AC3 Startup Time Interrupt Mask */
#define ACIFC_IMR_SUTINT3           (_U_(0x1) << ACIFC_IMR_SUTINT3_Pos)
#define ACIFC_IMR_ACINT4_Pos        8            /**< \brief (ACIFC_IMR) AC4 Interrupt Mask */
#define ACIFC_IMR_ACINT4            (_U_(0x1) << ACIFC_IMR_ACINT4_Pos)
#define ACIFC_IMR_SUTINT4_Pos       9            /**< \brief (ACIFC_IMR) AC4 Startup Time Interrupt Mask */
#define ACIFC_IMR_SUTINT4           (_U_(0x1) << ACIFC_IMR_SUTINT4_Pos)
#define ACIFC_IMR_ACINT5_Pos        10           /**< \brief (ACIFC_IMR) AC5 Interrupt Mask */
#define ACIFC_IMR_ACINT5            (_U_(0x1) << ACIFC_IMR_ACINT5_Pos)
#define ACIFC_IMR_SUTINT5_Pos       11           /**< \brief (ACIFC_IMR) AC5 Startup Time Interrupt Mask */
#define ACIFC_IMR_SUTINT5           (_U_(0x1) << ACIFC_IMR_SUTINT5_Pos)
#define ACIFC_IMR_ACINT6_Pos        12           /**< \brief (ACIFC_IMR) AC6 Interrupt Mask */
#define ACIFC_IMR_ACINT6            (_U_(0x1) << ACIFC_IMR_ACINT6_Pos)
#define ACIFC_IMR_SUTINT6_Pos       13           /**< \brief (ACIFC_IMR) AC6 Startup Time Interrupt Mask */
#define ACIFC_IMR_SUTINT6           (_U_(0x1) << ACIFC_IMR_SUTINT6_Pos)
#define ACIFC_IMR_ACINT7_Pos        14           /**< \brief (ACIFC_IMR) AC7 Interrupt Mask */
#define ACIFC_IMR_ACINT7            (_U_(0x1) << ACIFC_IMR_ACINT7_Pos)
#define ACIFC_IMR_SUTINT7_Pos       15           /**< \brief (ACIFC_IMR) AC7 Startup Time Interrupt Mask */
#define ACIFC_IMR_SUTINT7           (_U_(0x1) << ACIFC_IMR_SUTINT7_Pos)
#define ACIFC_IMR_WFINT0_Pos        24           /**< \brief (ACIFC_IMR) Window0 Mode Interrupt Mask */
#define ACIFC_IMR_WFINT0            (_U_(0x1) << ACIFC_IMR_WFINT0_Pos)
#define ACIFC_IMR_WFINT1_Pos        25           /**< \brief (ACIFC_IMR) Window1 Mode Interrupt Mask */
#define ACIFC_IMR_WFINT1            (_U_(0x1) << ACIFC_IMR_WFINT1_Pos)
#define ACIFC_IMR_WFINT2_Pos        26           /**< \brief (ACIFC_IMR) Window2 Mode Interrupt Mask */
#define ACIFC_IMR_WFINT2            (_U_(0x1) << ACIFC_IMR_WFINT2_Pos)
#define ACIFC_IMR_WFINT3_Pos        27           /**< \brief (ACIFC_IMR) Window3 Mode Interrupt Mask */
#define ACIFC_IMR_WFINT3            (_U_(0x1) << ACIFC_IMR_WFINT3_Pos)
#define ACIFC_IMR_MASK              _U_(0x0F00FFFF) /**< \brief (ACIFC_IMR) MASK Register */

/* -------- ACIFC_ISR : (ACIFC Offset: 0x1C) (R/  32) Interrupt Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t ACINT0:1;         /*!< bit:      0  AC0 Interrupt Status               */
    uint32_t SUTINT0:1;        /*!< bit:      1  AC0 Startup Time Interrupt Status  */
    uint32_t ACINT1:1;         /*!< bit:      2  AC1 Interrupt Status               */
    uint32_t SUTINT1:1;        /*!< bit:      3  AC1 Startup Time Interrupt Status  */
    uint32_t ACINT2:1;         /*!< bit:      4  AC2 Interrupt Status               */
    uint32_t SUTINT2:1;        /*!< bit:      5  AC2 Startup Time Interrupt Status  */
    uint32_t ACINT3:1;         /*!< bit:      6  AC3 Interrupt Status               */
    uint32_t SUTINT3:1;        /*!< bit:      7  AC3 Startup Time Interrupt Status  */
    uint32_t ACINT4:1;         /*!< bit:      8  AC4 Interrupt Status               */
    uint32_t SUTINT4:1;        /*!< bit:      9  AC4 Startup Time Interrupt Status  */
    uint32_t ACINT5:1;         /*!< bit:     10  AC5 Interrupt Status               */
    uint32_t SUTINT5:1;        /*!< bit:     11  AC5 Startup Time Interrupt Status  */
    uint32_t ACINT6:1;         /*!< bit:     12  AC6 Interrupt Status               */
    uint32_t SUTINT6:1;        /*!< bit:     13  AC6 Startup Time Interrupt Status  */
    uint32_t ACINT7:1;         /*!< bit:     14  AC7 Interrupt Status               */
    uint32_t SUTINT7:1;        /*!< bit:     15  AC7 Startup Time Interrupt Status  */
    uint32_t :8;               /*!< bit: 16..23  Reserved                           */
    uint32_t WFINT0:1;         /*!< bit:     24  Window0 Mode Interrupt Status      */
    uint32_t WFINT1:1;         /*!< bit:     25  Window1 Mode Interrupt Status      */
    uint32_t WFINT2:1;         /*!< bit:     26  Window2 Mode Interrupt Status      */
    uint32_t WFINT3:1;         /*!< bit:     27  Window3 Mode Interrupt Status      */
    uint32_t :4;               /*!< bit: 28..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} ACIFC_ISR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ACIFC_ISR_OFFSET            0x1C         /**< \brief (ACIFC_ISR offset) Interrupt Status Register */
#define ACIFC_ISR_RESETVALUE        _U_(0x00000000); /**< \brief (ACIFC_ISR reset_value) Interrupt Status Register */

#define ACIFC_ISR_ACINT0_Pos        0            /**< \brief (ACIFC_ISR) AC0 Interrupt Status */
#define ACIFC_ISR_ACINT0            (_U_(0x1) << ACIFC_ISR_ACINT0_Pos)
#define ACIFC_ISR_SUTINT0_Pos       1            /**< \brief (ACIFC_ISR) AC0 Startup Time Interrupt Status */
#define ACIFC_ISR_SUTINT0           (_U_(0x1) << ACIFC_ISR_SUTINT0_Pos)
#define ACIFC_ISR_ACINT1_Pos        2            /**< \brief (ACIFC_ISR) AC1 Interrupt Status */
#define ACIFC_ISR_ACINT1            (_U_(0x1) << ACIFC_ISR_ACINT1_Pos)
#define ACIFC_ISR_SUTINT1_Pos       3            /**< \brief (ACIFC_ISR) AC1 Startup Time Interrupt Status */
#define ACIFC_ISR_SUTINT1           (_U_(0x1) << ACIFC_ISR_SUTINT1_Pos)
#define ACIFC_ISR_ACINT2_Pos        4            /**< \brief (ACIFC_ISR) AC2 Interrupt Status */
#define ACIFC_ISR_ACINT2            (_U_(0x1) << ACIFC_ISR_ACINT2_Pos)
#define ACIFC_ISR_SUTINT2_Pos       5            /**< \brief (ACIFC_ISR) AC2 Startup Time Interrupt Status */
#define ACIFC_ISR_SUTINT2           (_U_(0x1) << ACIFC_ISR_SUTINT2_Pos)
#define ACIFC_ISR_ACINT3_Pos        6            /**< \brief (ACIFC_ISR) AC3 Interrupt Status */
#define ACIFC_ISR_ACINT3            (_U_(0x1) << ACIFC_ISR_ACINT3_Pos)
#define ACIFC_ISR_SUTINT3_Pos       7            /**< \brief (ACIFC_ISR) AC3 Startup Time Interrupt Status */
#define ACIFC_ISR_SUTINT3           (_U_(0x1) << ACIFC_ISR_SUTINT3_Pos)
#define ACIFC_ISR_ACINT4_Pos        8            /**< \brief (ACIFC_ISR) AC4 Interrupt Status */
#define ACIFC_ISR_ACINT4            (_U_(0x1) << ACIFC_ISR_ACINT4_Pos)
#define ACIFC_ISR_SUTINT4_Pos       9            /**< \brief (ACIFC_ISR) AC4 Startup Time Interrupt Status */
#define ACIFC_ISR_SUTINT4           (_U_(0x1) << ACIFC_ISR_SUTINT4_Pos)
#define ACIFC_ISR_ACINT5_Pos        10           /**< \brief (ACIFC_ISR) AC5 Interrupt Status */
#define ACIFC_ISR_ACINT5            (_U_(0x1) << ACIFC_ISR_ACINT5_Pos)
#define ACIFC_ISR_SUTINT5_Pos       11           /**< \brief (ACIFC_ISR) AC5 Startup Time Interrupt Status */
#define ACIFC_ISR_SUTINT5           (_U_(0x1) << ACIFC_ISR_SUTINT5_Pos)
#define ACIFC_ISR_ACINT6_Pos        12           /**< \brief (ACIFC_ISR) AC6 Interrupt Status */
#define ACIFC_ISR_ACINT6            (_U_(0x1) << ACIFC_ISR_ACINT6_Pos)
#define ACIFC_ISR_SUTINT6_Pos       13           /**< \brief (ACIFC_ISR) AC6 Startup Time Interrupt Status */
#define ACIFC_ISR_SUTINT6           (_U_(0x1) << ACIFC_ISR_SUTINT6_Pos)
#define ACIFC_ISR_ACINT7_Pos        14           /**< \brief (ACIFC_ISR) AC7 Interrupt Status */
#define ACIFC_ISR_ACINT7            (_U_(0x1) << ACIFC_ISR_ACINT7_Pos)
#define ACIFC_ISR_SUTINT7_Pos       15           /**< \brief (ACIFC_ISR) AC7 Startup Time Interrupt Status */
#define ACIFC_ISR_SUTINT7           (_U_(0x1) << ACIFC_ISR_SUTINT7_Pos)
#define ACIFC_ISR_WFINT0_Pos        24           /**< \brief (ACIFC_ISR) Window0 Mode Interrupt Status */
#define ACIFC_ISR_WFINT0            (_U_(0x1) << ACIFC_ISR_WFINT0_Pos)
#define ACIFC_ISR_WFINT1_Pos        25           /**< \brief (ACIFC_ISR) Window1 Mode Interrupt Status */
#define ACIFC_ISR_WFINT1            (_U_(0x1) << ACIFC_ISR_WFINT1_Pos)
#define ACIFC_ISR_WFINT2_Pos        26           /**< \brief (ACIFC_ISR) Window2 Mode Interrupt Status */
#define ACIFC_ISR_WFINT2            (_U_(0x1) << ACIFC_ISR_WFINT2_Pos)
#define ACIFC_ISR_WFINT3_Pos        27           /**< \brief (ACIFC_ISR) Window3 Mode Interrupt Status */
#define ACIFC_ISR_WFINT3            (_U_(0x1) << ACIFC_ISR_WFINT3_Pos)
#define ACIFC_ISR_MASK              _U_(0x0F00FFFF) /**< \brief (ACIFC_ISR) MASK Register */

/* -------- ACIFC_ICR : (ACIFC Offset: 0x20) ( /W 32) Interrupt Status Clear Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t ACINT0:1;         /*!< bit:      0  AC0 Interrupt Status Clear         */
    uint32_t SUTINT0:1;        /*!< bit:      1  AC0 Startup Time Interrupt Status Clear */
    uint32_t ACINT1:1;         /*!< bit:      2  AC1 Interrupt Status Clear         */
    uint32_t SUTINT1:1;        /*!< bit:      3  AC1 Startup Time Interrupt Status Clear */
    uint32_t ACINT2:1;         /*!< bit:      4  AC2 Interrupt Status Clear         */
    uint32_t SUTINT2:1;        /*!< bit:      5  AC2 Startup Time Interrupt Status Clear */
    uint32_t ACINT3:1;         /*!< bit:      6  AC3 Interrupt Status Clear         */
    uint32_t SUTINT3:1;        /*!< bit:      7  AC3 Startup Time Interrupt Status Clear */
    uint32_t ACINT4:1;         /*!< bit:      8  AC4 Interrupt Status Clear         */
    uint32_t SUTINT4:1;        /*!< bit:      9  AC4 Startup Time Interrupt Status Clear */
    uint32_t ACINT5:1;         /*!< bit:     10  AC5 Interrupt Status Clear         */
    uint32_t SUTINT5:1;        /*!< bit:     11  AC5 Startup Time Interrupt Status Clear */
    uint32_t ACINT6:1;         /*!< bit:     12  AC6 Interrupt Status Clear         */
    uint32_t SUTINT6:1;        /*!< bit:     13  AC6 Startup Time Interrupt Status Clear */
    uint32_t ACINT7:1;         /*!< bit:     14  AC7 Interrupt Status Clear         */
    uint32_t SUTINT7:1;        /*!< bit:     15  AC7 Startup Time Interrupt Status Clear */
    uint32_t :8;               /*!< bit: 16..23  Reserved                           */
    uint32_t WFINT0:1;         /*!< bit:     24  Window0 Mode Interrupt Status Clear */
    uint32_t WFINT1:1;         /*!< bit:     25  Window1 Mode Interrupt Status Clear */
    uint32_t WFINT2:1;         /*!< bit:     26  Window2 Mode Interrupt Status Clear */
    uint32_t WFINT3:1;         /*!< bit:     27  Window3 Mode Interrupt Status Clear */
    uint32_t :4;               /*!< bit: 28..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} ACIFC_ICR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ACIFC_ICR_OFFSET            0x20         /**< \brief (ACIFC_ICR offset) Interrupt Status Clear Register */
#define ACIFC_ICR_RESETVALUE        _U_(0x00000000); /**< \brief (ACIFC_ICR reset_value) Interrupt Status Clear Register */

#define ACIFC_ICR_ACINT0_Pos        0            /**< \brief (ACIFC_ICR) AC0 Interrupt Status Clear */
#define ACIFC_ICR_ACINT0            (_U_(0x1) << ACIFC_ICR_ACINT0_Pos)
#define ACIFC_ICR_SUTINT0_Pos       1            /**< \brief (ACIFC_ICR) AC0 Startup Time Interrupt Status Clear */
#define ACIFC_ICR_SUTINT0           (_U_(0x1) << ACIFC_ICR_SUTINT0_Pos)
#define ACIFC_ICR_ACINT1_Pos        2            /**< \brief (ACIFC_ICR) AC1 Interrupt Status Clear */
#define ACIFC_ICR_ACINT1            (_U_(0x1) << ACIFC_ICR_ACINT1_Pos)
#define ACIFC_ICR_SUTINT1_Pos       3            /**< \brief (ACIFC_ICR) AC1 Startup Time Interrupt Status Clear */
#define ACIFC_ICR_SUTINT1           (_U_(0x1) << ACIFC_ICR_SUTINT1_Pos)
#define ACIFC_ICR_ACINT2_Pos        4            /**< \brief (ACIFC_ICR) AC2 Interrupt Status Clear */
#define ACIFC_ICR_ACINT2            (_U_(0x1) << ACIFC_ICR_ACINT2_Pos)
#define ACIFC_ICR_SUTINT2_Pos       5            /**< \brief (ACIFC_ICR) AC2 Startup Time Interrupt Status Clear */
#define ACIFC_ICR_SUTINT2           (_U_(0x1) << ACIFC_ICR_SUTINT2_Pos)
#define ACIFC_ICR_ACINT3_Pos        6            /**< \brief (ACIFC_ICR) AC3 Interrupt Status Clear */
#define ACIFC_ICR_ACINT3            (_U_(0x1) << ACIFC_ICR_ACINT3_Pos)
#define ACIFC_ICR_SUTINT3_Pos       7            /**< \brief (ACIFC_ICR) AC3 Startup Time Interrupt Status Clear */
#define ACIFC_ICR_SUTINT3           (_U_(0x1) << ACIFC_ICR_SUTINT3_Pos)
#define ACIFC_ICR_ACINT4_Pos        8            /**< \brief (ACIFC_ICR) AC4 Interrupt Status Clear */
#define ACIFC_ICR_ACINT4            (_U_(0x1) << ACIFC_ICR_ACINT4_Pos)
#define ACIFC_ICR_SUTINT4_Pos       9            /**< \brief (ACIFC_ICR) AC4 Startup Time Interrupt Status Clear */
#define ACIFC_ICR_SUTINT4           (_U_(0x1) << ACIFC_ICR_SUTINT4_Pos)
#define ACIFC_ICR_ACINT5_Pos        10           /**< \brief (ACIFC_ICR) AC5 Interrupt Status Clear */
#define ACIFC_ICR_ACINT5            (_U_(0x1) << ACIFC_ICR_ACINT5_Pos)
#define ACIFC_ICR_SUTINT5_Pos       11           /**< \brief (ACIFC_ICR) AC5 Startup Time Interrupt Status Clear */
#define ACIFC_ICR_SUTINT5           (_U_(0x1) << ACIFC_ICR_SUTINT5_Pos)
#define ACIFC_ICR_ACINT6_Pos        12           /**< \brief (ACIFC_ICR) AC6 Interrupt Status Clear */
#define ACIFC_ICR_ACINT6            (_U_(0x1) << ACIFC_ICR_ACINT6_Pos)
#define ACIFC_ICR_SUTINT6_Pos       13           /**< \brief (ACIFC_ICR) AC6 Startup Time Interrupt Status Clear */
#define ACIFC_ICR_SUTINT6           (_U_(0x1) << ACIFC_ICR_SUTINT6_Pos)
#define ACIFC_ICR_ACINT7_Pos        14           /**< \brief (ACIFC_ICR) AC7 Interrupt Status Clear */
#define ACIFC_ICR_ACINT7            (_U_(0x1) << ACIFC_ICR_ACINT7_Pos)
#define ACIFC_ICR_SUTINT7_Pos       15           /**< \brief (ACIFC_ICR) AC7 Startup Time Interrupt Status Clear */
#define ACIFC_ICR_SUTINT7           (_U_(0x1) << ACIFC_ICR_SUTINT7_Pos)
#define ACIFC_ICR_WFINT0_Pos        24           /**< \brief (ACIFC_ICR) Window0 Mode Interrupt Status Clear */
#define ACIFC_ICR_WFINT0            (_U_(0x1) << ACIFC_ICR_WFINT0_Pos)
#define ACIFC_ICR_WFINT1_Pos        25           /**< \brief (ACIFC_ICR) Window1 Mode Interrupt Status Clear */
#define ACIFC_ICR_WFINT1            (_U_(0x1) << ACIFC_ICR_WFINT1_Pos)
#define ACIFC_ICR_WFINT2_Pos        26           /**< \brief (ACIFC_ICR) Window2 Mode Interrupt Status Clear */
#define ACIFC_ICR_WFINT2            (_U_(0x1) << ACIFC_ICR_WFINT2_Pos)
#define ACIFC_ICR_WFINT3_Pos        27           /**< \brief (ACIFC_ICR) Window3 Mode Interrupt Status Clear */
#define ACIFC_ICR_WFINT3            (_U_(0x1) << ACIFC_ICR_WFINT3_Pos)
#define ACIFC_ICR_MASK              _U_(0x0F00FFFF) /**< \brief (ACIFC_ICR) MASK Register */

/* -------- ACIFC_TR : (ACIFC Offset: 0x24) (R/W 32) Test Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t ACTEST0:1;        /*!< bit:      0  AC0 Output Override Value          */
    uint32_t ACTEST1:1;        /*!< bit:      1  AC1 Output Override Value          */
    uint32_t ACTEST2:1;        /*!< bit:      2  AC2 Output Override Value          */
    uint32_t ACTEST3:1;        /*!< bit:      3  AC3 Output Override Value          */
    uint32_t ACTEST4:1;        /*!< bit:      4  AC4 Output Override Value          */
    uint32_t ACTEST5:1;        /*!< bit:      5  AC5 Output Override Value          */
    uint32_t ACTEST6:1;        /*!< bit:      6  AC6 Output Override Value          */
    uint32_t ACTEST7:1;        /*!< bit:      7  AC7 Output Override Value          */
    uint32_t :24;              /*!< bit:  8..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} ACIFC_TR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ACIFC_TR_OFFSET             0x24         /**< \brief (ACIFC_TR offset) Test Register */
#define ACIFC_TR_RESETVALUE         _U_(0x00000000); /**< \brief (ACIFC_TR reset_value) Test Register */

#define ACIFC_TR_ACTEST0_Pos        0            /**< \brief (ACIFC_TR) AC0 Output Override Value */
#define ACIFC_TR_ACTEST0            (_U_(0x1) << ACIFC_TR_ACTEST0_Pos)
#define ACIFC_TR_ACTEST1_Pos        1            /**< \brief (ACIFC_TR) AC1 Output Override Value */
#define ACIFC_TR_ACTEST1            (_U_(0x1) << ACIFC_TR_ACTEST1_Pos)
#define ACIFC_TR_ACTEST2_Pos        2            /**< \brief (ACIFC_TR) AC2 Output Override Value */
#define ACIFC_TR_ACTEST2            (_U_(0x1) << ACIFC_TR_ACTEST2_Pos)
#define ACIFC_TR_ACTEST3_Pos        3            /**< \brief (ACIFC_TR) AC3 Output Override Value */
#define ACIFC_TR_ACTEST3            (_U_(0x1) << ACIFC_TR_ACTEST3_Pos)
#define ACIFC_TR_ACTEST4_Pos        4            /**< \brief (ACIFC_TR) AC4 Output Override Value */
#define ACIFC_TR_ACTEST4            (_U_(0x1) << ACIFC_TR_ACTEST4_Pos)
#define ACIFC_TR_ACTEST5_Pos        5            /**< \brief (ACIFC_TR) AC5 Output Override Value */
#define ACIFC_TR_ACTEST5            (_U_(0x1) << ACIFC_TR_ACTEST5_Pos)
#define ACIFC_TR_ACTEST6_Pos        6            /**< \brief (ACIFC_TR) AC6 Output Override Value */
#define ACIFC_TR_ACTEST6            (_U_(0x1) << ACIFC_TR_ACTEST6_Pos)
#define ACIFC_TR_ACTEST7_Pos        7            /**< \brief (ACIFC_TR) AC7 Output Override Value */
#define ACIFC_TR_ACTEST7            (_U_(0x1) << ACIFC_TR_ACTEST7_Pos)
#define ACIFC_TR_MASK               _U_(0x000000FF) /**< \brief (ACIFC_TR) MASK Register */

/* -------- ACIFC_PARAMETER : (ACIFC Offset: 0x30) (R/  32) Parameter Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t ACIMPL0:1;        /*!< bit:      0  Analog Comparator 0 Implemented    */
    uint32_t ACIMPL1:1;        /*!< bit:      1  Analog Comparator 1 Implemented    */
    uint32_t ACIMPL2:1;        /*!< bit:      2  Analog Comparator 2 Implemented    */
    uint32_t ACIMPL3:1;        /*!< bit:      3  Analog Comparator 3 Implemented    */
    uint32_t ACIMPL4:1;        /*!< bit:      4  Analog Comparator 4 Implemented    */
    uint32_t ACIMPL5:1;        /*!< bit:      5  Analog Comparator 5 Implemented    */
    uint32_t ACIMPL6:1;        /*!< bit:      6  Analog Comparator 6 Implemented    */
    uint32_t ACIMPL7:1;        /*!< bit:      7  Analog Comparator 7 Implemented    */
    uint32_t :8;               /*!< bit:  8..15  Reserved                           */
    uint32_t WIMPL0:1;         /*!< bit:     16  Window0 Mode  Implemented          */
    uint32_t WIMPL1:1;         /*!< bit:     17  Window1 Mode  Implemented          */
    uint32_t WIMPL2:1;         /*!< bit:     18  Window2 Mode  Implemented          */
    uint32_t WIMPL3:1;         /*!< bit:     19  Window3 Mode  Implemented          */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} ACIFC_PARAMETER_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ACIFC_PARAMETER_OFFSET      0x30         /**< \brief (ACIFC_PARAMETER offset) Parameter Register */

#define ACIFC_PARAMETER_ACIMPL0_Pos 0            /**< \brief (ACIFC_PARAMETER) Analog Comparator 0 Implemented */
#define ACIFC_PARAMETER_ACIMPL0     (_U_(0x1) << ACIFC_PARAMETER_ACIMPL0_Pos)
#define ACIFC_PARAMETER_ACIMPL1_Pos 1            /**< \brief (ACIFC_PARAMETER) Analog Comparator 1 Implemented */
#define ACIFC_PARAMETER_ACIMPL1     (_U_(0x1) << ACIFC_PARAMETER_ACIMPL1_Pos)
#define ACIFC_PARAMETER_ACIMPL2_Pos 2            /**< \brief (ACIFC_PARAMETER) Analog Comparator 2 Implemented */
#define ACIFC_PARAMETER_ACIMPL2     (_U_(0x1) << ACIFC_PARAMETER_ACIMPL2_Pos)
#define ACIFC_PARAMETER_ACIMPL3_Pos 3            /**< \brief (ACIFC_PARAMETER) Analog Comparator 3 Implemented */
#define ACIFC_PARAMETER_ACIMPL3     (_U_(0x1) << ACIFC_PARAMETER_ACIMPL3_Pos)
#define ACIFC_PARAMETER_ACIMPL4_Pos 4            /**< \brief (ACIFC_PARAMETER) Analog Comparator 4 Implemented */
#define ACIFC_PARAMETER_ACIMPL4     (_U_(0x1) << ACIFC_PARAMETER_ACIMPL4_Pos)
#define ACIFC_PARAMETER_ACIMPL5_Pos 5            /**< \brief (ACIFC_PARAMETER) Analog Comparator 5 Implemented */
#define ACIFC_PARAMETER_ACIMPL5     (_U_(0x1) << ACIFC_PARAMETER_ACIMPL5_Pos)
#define ACIFC_PARAMETER_ACIMPL6_Pos 6            /**< \brief (ACIFC_PARAMETER) Analog Comparator 6 Implemented */
#define ACIFC_PARAMETER_ACIMPL6     (_U_(0x1) << ACIFC_PARAMETER_ACIMPL6_Pos)
#define ACIFC_PARAMETER_ACIMPL7_Pos 7            /**< \brief (ACIFC_PARAMETER) Analog Comparator 7 Implemented */
#define ACIFC_PARAMETER_ACIMPL7     (_U_(0x1) << ACIFC_PARAMETER_ACIMPL7_Pos)
#define ACIFC_PARAMETER_WIMPL0_Pos  16           /**< \brief (ACIFC_PARAMETER) Window0 Mode  Implemented */
#define ACIFC_PARAMETER_WIMPL0      (_U_(0x1) << ACIFC_PARAMETER_WIMPL0_Pos)
#define ACIFC_PARAMETER_WIMPL1_Pos  17           /**< \brief (ACIFC_PARAMETER) Window1 Mode  Implemented */
#define ACIFC_PARAMETER_WIMPL1      (_U_(0x1) << ACIFC_PARAMETER_WIMPL1_Pos)
#define ACIFC_PARAMETER_WIMPL2_Pos  18           /**< \brief (ACIFC_PARAMETER) Window2 Mode  Implemented */
#define ACIFC_PARAMETER_WIMPL2      (_U_(0x1) << ACIFC_PARAMETER_WIMPL2_Pos)
#define ACIFC_PARAMETER_WIMPL3_Pos  19           /**< \brief (ACIFC_PARAMETER) Window3 Mode  Implemented */
#define ACIFC_PARAMETER_WIMPL3      (_U_(0x1) << ACIFC_PARAMETER_WIMPL3_Pos)
#define ACIFC_PARAMETER_MASK        _U_(0x000F00FF) /**< \brief (ACIFC_PARAMETER) MASK Register */

/* -------- ACIFC_VERSION : (ACIFC Offset: 0x34) (R/  32) Version Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t VERSION:12;       /*!< bit:  0..11  Version Number                     */
    uint32_t :4;               /*!< bit: 12..15  Reserved                           */
    uint32_t VARIANT:4;        /*!< bit: 16..19  Variant Number                     */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} ACIFC_VERSION_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ACIFC_VERSION_OFFSET        0x34         /**< \brief (ACIFC_VERSION offset) Version Register */
#define ACIFC_VERSION_RESETVALUE    _U_(0x00000101); /**< \brief (ACIFC_VERSION reset_value) Version Register */

#define ACIFC_VERSION_VERSION_Pos   0            /**< \brief (ACIFC_VERSION) Version Number */
#define ACIFC_VERSION_VERSION_Msk   (_U_(0xFFF) << ACIFC_VERSION_VERSION_Pos)
#define ACIFC_VERSION_VERSION(value) (ACIFC_VERSION_VERSION_Msk & ((value) << ACIFC_VERSION_VERSION_Pos))
#define ACIFC_VERSION_VARIANT_Pos   16           /**< \brief (ACIFC_VERSION) Variant Number */
#define ACIFC_VERSION_VARIANT_Msk   (_U_(0xF) << ACIFC_VERSION_VARIANT_Pos)
#define ACIFC_VERSION_VARIANT(value) (ACIFC_VERSION_VARIANT_Msk & ((value) << ACIFC_VERSION_VARIANT_Pos))
#define ACIFC_VERSION_MASK          _U_(0x000F0FFF) /**< \brief (ACIFC_VERSION) MASK Register */

/* -------- ACIFC_CONFW : (ACIFC Offset: 0x80) (R/W 32) CONFW Window configuration Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t WIS:3;            /*!< bit:  0.. 2  Window Mode Interrupt Settings     */
    uint32_t :5;               /*!< bit:  3.. 7  Reserved                           */
    uint32_t WEVSRC:3;         /*!< bit:  8..10  Peripheral Event Sourse Selection for Window Mode */
    uint32_t WEVEN:1;          /*!< bit:     11  Window Peripheral Event Enable     */
    uint32_t :4;               /*!< bit: 12..15  Reserved                           */
    uint32_t WFEN:1;           /*!< bit:     16  Window Mode Enable                 */
    uint32_t :15;              /*!< bit: 17..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} ACIFC_CONFW_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ACIFC_CONFW_OFFSET          0x80         /**< \brief (ACIFC_CONFW offset) Window configuration Register */
#define ACIFC_CONFW_RESETVALUE      _U_(0x00000000); /**< \brief (ACIFC_CONFW reset_value) Window configuration Register */

#define ACIFC_CONFW_WIS_Pos         0            /**< \brief (ACIFC_CONFW) Window Mode Interrupt Settings */
#define ACIFC_CONFW_WIS_Msk         (_U_(0x7) << ACIFC_CONFW_WIS_Pos)
#define ACIFC_CONFW_WIS(value)      (ACIFC_CONFW_WIS_Msk & ((value) << ACIFC_CONFW_WIS_Pos))
#define ACIFC_CONFW_WEVSRC_Pos      8            /**< \brief (ACIFC_CONFW) Peripheral Event Sourse Selection for Window Mode */
#define ACIFC_CONFW_WEVSRC_Msk      (_U_(0x7) << ACIFC_CONFW_WEVSRC_Pos)
#define ACIFC_CONFW_WEVSRC(value)   (ACIFC_CONFW_WEVSRC_Msk & ((value) << ACIFC_CONFW_WEVSRC_Pos))
#define ACIFC_CONFW_WEVEN_Pos       11           /**< \brief (ACIFC_CONFW) Window Peripheral Event Enable */
#define ACIFC_CONFW_WEVEN           (_U_(0x1) << ACIFC_CONFW_WEVEN_Pos)
#define ACIFC_CONFW_WFEN_Pos        16           /**< \brief (ACIFC_CONFW) Window Mode Enable */
#define ACIFC_CONFW_WFEN            (_U_(0x1) << ACIFC_CONFW_WFEN_Pos)
#define ACIFC_CONFW_MASK            _U_(0x00010F07) /**< \brief (ACIFC_CONFW) MASK Register */

/* -------- ACIFC_CONF : (ACIFC Offset: 0xD0) (R/W 32) CONF AC Configuration Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t IS:2;             /*!< bit:  0.. 1  Interupt Settings                  */
    uint32_t :2;               /*!< bit:  2.. 3  Reserved                           */
    uint32_t MODE:2;           /*!< bit:  4.. 5  Analog Comparator Mode             */
    uint32_t :2;               /*!< bit:  6.. 7  Reserved                           */
    uint32_t INSELN:2;         /*!< bit:  8.. 9  Negative Input Select              */
    uint32_t :6;               /*!< bit: 10..15  Reserved                           */
    uint32_t EVENN:1;          /*!< bit:     16  Peripheral Event Enable Negative   */
    uint32_t EVENP:1;          /*!< bit:     17  Peripheral Event Enable Positive   */
    uint32_t :6;               /*!< bit: 18..23  Reserved                           */
    uint32_t HYS:2;            /*!< bit: 24..25  Hysteresis Voltage Value           */
    uint32_t FAST:1;           /*!< bit:     26  Fast Mode Enable                   */
    uint32_t ALWAYSON:1;       /*!< bit:     27  Always On                          */
    uint32_t :4;               /*!< bit: 28..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} ACIFC_CONF_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ACIFC_CONF_OFFSET           0xD0         /**< \brief (ACIFC_CONF offset) AC Configuration Register */
#define ACIFC_CONF_RESETVALUE       _U_(0x00000000); /**< \brief (ACIFC_CONF reset_value) AC Configuration Register */

#define ACIFC_CONF_IS_Pos           0            /**< \brief (ACIFC_CONF) Interupt Settings */
#define ACIFC_CONF_IS_Msk           (_U_(0x3) << ACIFC_CONF_IS_Pos)
#define ACIFC_CONF_IS(value)        (ACIFC_CONF_IS_Msk & ((value) << ACIFC_CONF_IS_Pos))
#define ACIFC_CONF_MODE_Pos         4            /**< \brief (ACIFC_CONF) Analog Comparator Mode */
#define ACIFC_CONF_MODE_Msk         (_U_(0x3) << ACIFC_CONF_MODE_Pos)
#define ACIFC_CONF_MODE(value)      (ACIFC_CONF_MODE_Msk & ((value) << ACIFC_CONF_MODE_Pos))
#define ACIFC_CONF_INSELN_Pos       8            /**< \brief (ACIFC_CONF) Negative Input Select */
#define ACIFC_CONF_INSELN_Msk       (_U_(0x3) << ACIFC_CONF_INSELN_Pos)
#define ACIFC_CONF_INSELN(value)    (ACIFC_CONF_INSELN_Msk & ((value) << ACIFC_CONF_INSELN_Pos))
#define ACIFC_CONF_EVENN_Pos        16           /**< \brief (ACIFC_CONF) Peripheral Event Enable Negative */
#define ACIFC_CONF_EVENN            (_U_(0x1) << ACIFC_CONF_EVENN_Pos)
#define ACIFC_CONF_EVENP_Pos        17           /**< \brief (ACIFC_CONF) Peripheral Event Enable Positive */
#define ACIFC_CONF_EVENP            (_U_(0x1) << ACIFC_CONF_EVENP_Pos)
#define ACIFC_CONF_HYS_Pos          24           /**< \brief (ACIFC_CONF) Hysteresis Voltage Value */
#define ACIFC_CONF_HYS_Msk          (_U_(0x3) << ACIFC_CONF_HYS_Pos)
#define ACIFC_CONF_HYS(value)       (ACIFC_CONF_HYS_Msk & ((value) << ACIFC_CONF_HYS_Pos))
#define ACIFC_CONF_FAST_Pos         26           /**< \brief (ACIFC_CONF) Fast Mode Enable */
#define ACIFC_CONF_FAST             (_U_(0x1) << ACIFC_CONF_FAST_Pos)
#define ACIFC_CONF_ALWAYSON_Pos     27           /**< \brief (ACIFC_CONF) Always On */
#define ACIFC_CONF_ALWAYSON         (_U_(0x1) << ACIFC_CONF_ALWAYSON_Pos)
#define ACIFC_CONF_MASK             _U_(0x0F030333) /**< \brief (ACIFC_CONF) MASK Register */

/** \brief AcifcConf hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
 struct {
  __IO ACIFC_CONF_Type           CONF;        /**< \brief Offset: 0x00 (R/W 32) AC Configuration Register */
 } bf;
 struct {
  RwReg   ACIFC_CONF;         /**< \brief (ACIFC Offset: 0x00) AC Configuration Register */
 } reg;
} AcifcConf;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/** \brief AcifcConfw hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
 struct {
  __IO ACIFC_CONFW_Type          CONFW;       /**< \brief Offset: 0x00 (R/W 32) Window configuration Register */
 } bf;
 struct {
  RwReg   ACIFC_CONFW;        /**< \brief (ACIFC Offset: 0x00) Window configuration Register */
 } reg;
} AcifcConfw;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/** \brief ACIFC hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {
  __IO uint32_t CTRL;        /**< \brief Offset: 0x00 (R/W 32) Control Register */
  __I  uint32_t SR;          /**< \brief Offset: 0x04 (R/  32) Status Register */
       RoReg8   Reserved1[0x8];
  __O  uint32_t IER;         /**< \brief Offset: 0x10 ( /W 32) Interrupt Enable Register */
  __O  uint32_t IDR;         /**< \brief Offset: 0x14 ( /W 32) Interrupt Disable Register */
  __I  uint32_t IMR;         /**< \brief Offset: 0x18 (R/  32) Interrupt Mask Register */
  __I  uint32_t ISR;         /**< \brief Offset: 0x1C (R/  32) Interrupt Status Register */
  __O  uint32_t ICR;         /**< \brief Offset: 0x20 ( /W 32) Interrupt Status Clear Register */
  __IO uint32_t TR;          /**< \brief Offset: 0x24 (R/W 32) Test Register */
       RoReg8   Reserved2[0x8];
  __I  uint32_t PARAMETER;   /**< \brief Offset: 0x30 (R/  32) Parameter Register */
  __I  uint32_t VERSION;     /**< \brief Offset: 0x34 (R/  32) Version Register */
       RoReg8   Reserved3[0x48];
  __IO uint32_t Confw[4];    /**< \brief Offset: 0x80 AcifcConfw groups */
       RoReg8   Reserved4[0x40];
  __IO uint32_t Conf[8];     /**< \brief Offset: 0xD0 AcifcConf groups */
} Acifc;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAM4L_ACIFC_COMPONENT_ */
