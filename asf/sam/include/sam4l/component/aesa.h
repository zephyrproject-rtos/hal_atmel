/**
 * \file
 *
 * \brief Component description for AESA
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

#ifndef _SAM4L_AESA_COMPONENT_
#define _SAM4L_AESA_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR AESA */
/* ========================================================================== */
/** \addtogroup SAM4L_AESA Advanced Encryption Standard */
/*@{*/

#define AESA_I7558
#define REV_AESA                    0x102

/* -------- AESA_CTRL : (AESA Offset: 0x00) (R/W 32) Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t ENABLE:1;         /*!< bit:      0  Enable Module                      */
    uint32_t DKEYGEN:1;        /*!< bit:      1  Decryption Key Generate            */
    uint32_t NEWMSG:1;         /*!< bit:      2  New Message                        */
    uint32_t :5;               /*!< bit:  3.. 7  Reserved                           */
    uint32_t SWRST:1;          /*!< bit:      8  Software Reset                     */
    uint32_t :23;              /*!< bit:  9..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} AESA_CTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AESA_CTRL_OFFSET            0x00         /**< \brief (AESA_CTRL offset) Control Register */
#define AESA_CTRL_RESETVALUE        _U_(0x00000000); /**< \brief (AESA_CTRL reset_value) Control Register */

#define AESA_CTRL_ENABLE_Pos        0            /**< \brief (AESA_CTRL) Enable Module */
#define AESA_CTRL_ENABLE            (_U_(0x1) << AESA_CTRL_ENABLE_Pos)
#define AESA_CTRL_DKEYGEN_Pos       1            /**< \brief (AESA_CTRL) Decryption Key Generate */
#define AESA_CTRL_DKEYGEN           (_U_(0x1) << AESA_CTRL_DKEYGEN_Pos)
#define AESA_CTRL_NEWMSG_Pos        2            /**< \brief (AESA_CTRL) New Message */
#define AESA_CTRL_NEWMSG            (_U_(0x1) << AESA_CTRL_NEWMSG_Pos)
#define AESA_CTRL_SWRST_Pos         8            /**< \brief (AESA_CTRL) Software Reset */
#define AESA_CTRL_SWRST             (_U_(0x1) << AESA_CTRL_SWRST_Pos)
#define AESA_CTRL_MASK              _U_(0x00000107) /**< \brief (AESA_CTRL) MASK Register */

/* -------- AESA_MODE : (AESA Offset: 0x04) (R/W 32) Mode Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t ENCRYPT:1;        /*!< bit:      0  Encryption                         */
    uint32_t KEYSIZE:2;        /*!< bit:  1.. 2  Key Size                           */
    uint32_t DMA:1;            /*!< bit:      3  DMA Mode                           */
    uint32_t OPMODE:3;         /*!< bit:  4.. 6  Confidentiality Mode of Operation  */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t CFBS:3;           /*!< bit:  8..10  Cipher Feedback Data Segment Size  */
    uint32_t :5;               /*!< bit: 11..15  Reserved                           */
    uint32_t CTYPE:4;          /*!< bit: 16..19  Countermeasure Type                */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} AESA_MODE_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AESA_MODE_OFFSET            0x04         /**< \brief (AESA_MODE offset) Mode Register */
#define AESA_MODE_RESETVALUE        _U_(0x000F0000); /**< \brief (AESA_MODE reset_value) Mode Register */

#define AESA_MODE_ENCRYPT_Pos       0            /**< \brief (AESA_MODE) Encryption */
#define AESA_MODE_ENCRYPT           (_U_(0x1) << AESA_MODE_ENCRYPT_Pos)
#define AESA_MODE_KEYSIZE_Pos       1            /**< \brief (AESA_MODE) Key Size */
#define AESA_MODE_KEYSIZE_Msk       (_U_(0x3) << AESA_MODE_KEYSIZE_Pos)
#define AESA_MODE_KEYSIZE(value)    (AESA_MODE_KEYSIZE_Msk & ((value) << AESA_MODE_KEYSIZE_Pos))
#define AESA_MODE_DMA_Pos           3            /**< \brief (AESA_MODE) DMA Mode */
#define AESA_MODE_DMA               (_U_(0x1) << AESA_MODE_DMA_Pos)
#define AESA_MODE_OPMODE_Pos        4            /**< \brief (AESA_MODE) Confidentiality Mode of Operation */
#define AESA_MODE_OPMODE_Msk        (_U_(0x7) << AESA_MODE_OPMODE_Pos)
#define AESA_MODE_OPMODE(value)     (AESA_MODE_OPMODE_Msk & ((value) << AESA_MODE_OPMODE_Pos))
#define AESA_MODE_CFBS_Pos          8            /**< \brief (AESA_MODE) Cipher Feedback Data Segment Size */
#define AESA_MODE_CFBS_Msk          (_U_(0x7) << AESA_MODE_CFBS_Pos)
#define AESA_MODE_CFBS(value)       (AESA_MODE_CFBS_Msk & ((value) << AESA_MODE_CFBS_Pos))
#define AESA_MODE_CTYPE_Pos         16           /**< \brief (AESA_MODE) Countermeasure Type */
#define AESA_MODE_CTYPE_Msk         (_U_(0xF) << AESA_MODE_CTYPE_Pos)
#define AESA_MODE_CTYPE(value)      (AESA_MODE_CTYPE_Msk & ((value) << AESA_MODE_CTYPE_Pos))
#define AESA_MODE_MASK              _U_(0x000F077F) /**< \brief (AESA_MODE) MASK Register */

/* -------- AESA_DATABUFPTR : (AESA Offset: 0x08) (R/W 32) Data Buffer Pointer Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t IDATAW:2;         /*!< bit:  0.. 1  Input Data Word                    */
    uint32_t :2;               /*!< bit:  2.. 3  Reserved                           */
    uint32_t ODATAW:2;         /*!< bit:  4.. 5  Output Data Word                   */
    uint32_t :26;              /*!< bit:  6..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} AESA_DATABUFPTR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AESA_DATABUFPTR_OFFSET      0x08         /**< \brief (AESA_DATABUFPTR offset) Data Buffer Pointer Register */
#define AESA_DATABUFPTR_RESETVALUE  _U_(0x00000000); /**< \brief (AESA_DATABUFPTR reset_value) Data Buffer Pointer Register */

#define AESA_DATABUFPTR_IDATAW_Pos  0            /**< \brief (AESA_DATABUFPTR) Input Data Word */
#define AESA_DATABUFPTR_IDATAW_Msk  (_U_(0x3) << AESA_DATABUFPTR_IDATAW_Pos)
#define AESA_DATABUFPTR_IDATAW(value) (AESA_DATABUFPTR_IDATAW_Msk & ((value) << AESA_DATABUFPTR_IDATAW_Pos))
#define AESA_DATABUFPTR_ODATAW_Pos  4            /**< \brief (AESA_DATABUFPTR) Output Data Word */
#define AESA_DATABUFPTR_ODATAW_Msk  (_U_(0x3) << AESA_DATABUFPTR_ODATAW_Pos)
#define AESA_DATABUFPTR_ODATAW(value) (AESA_DATABUFPTR_ODATAW_Msk & ((value) << AESA_DATABUFPTR_ODATAW_Pos))
#define AESA_DATABUFPTR_MASK        _U_(0x00000033) /**< \brief (AESA_DATABUFPTR) MASK Register */

/* -------- AESA_SR : (AESA Offset: 0x0C) (R/  32) Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t ODATARDY:1;       /*!< bit:      0  Output Data Ready                  */
    uint32_t :15;              /*!< bit:  1..15  Reserved                           */
    uint32_t IBUFRDY:1;        /*!< bit:     16  Input Buffer Ready                 */
    uint32_t :15;              /*!< bit: 17..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} AESA_SR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AESA_SR_OFFSET              0x0C         /**< \brief (AESA_SR offset) Status Register */
#define AESA_SR_RESETVALUE          _U_(0x00010000); /**< \brief (AESA_SR reset_value) Status Register */

#define AESA_SR_ODATARDY_Pos        0            /**< \brief (AESA_SR) Output Data Ready */
#define AESA_SR_ODATARDY            (_U_(0x1) << AESA_SR_ODATARDY_Pos)
#define AESA_SR_IBUFRDY_Pos         16           /**< \brief (AESA_SR) Input Buffer Ready */
#define AESA_SR_IBUFRDY             (_U_(0x1) << AESA_SR_IBUFRDY_Pos)
#define AESA_SR_MASK                _U_(0x00010001) /**< \brief (AESA_SR) MASK Register */

/* -------- AESA_IER : (AESA Offset: 0x10) ( /W 32) Interrupt Enable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t ODATARDY:1;       /*!< bit:      0  Output Data Ready Interrupt Enable */
    uint32_t :15;              /*!< bit:  1..15  Reserved                           */
    uint32_t IBUFRDY:1;        /*!< bit:     16  Input Buffer Ready Interrupt Enable */
    uint32_t :15;              /*!< bit: 17..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} AESA_IER_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AESA_IER_OFFSET             0x10         /**< \brief (AESA_IER offset) Interrupt Enable Register */
#define AESA_IER_RESETVALUE         _U_(0x00000000); /**< \brief (AESA_IER reset_value) Interrupt Enable Register */

#define AESA_IER_ODATARDY_Pos       0            /**< \brief (AESA_IER) Output Data Ready Interrupt Enable */
#define AESA_IER_ODATARDY           (_U_(0x1) << AESA_IER_ODATARDY_Pos)
#define AESA_IER_IBUFRDY_Pos        16           /**< \brief (AESA_IER) Input Buffer Ready Interrupt Enable */
#define AESA_IER_IBUFRDY            (_U_(0x1) << AESA_IER_IBUFRDY_Pos)
#define AESA_IER_MASK               _U_(0x00010001) /**< \brief (AESA_IER) MASK Register */

/* -------- AESA_IDR : (AESA Offset: 0x14) ( /W 32) Interrupt Disable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t ODATARDY:1;       /*!< bit:      0  Output Data Ready Interrupt Disable */
    uint32_t :15;              /*!< bit:  1..15  Reserved                           */
    uint32_t IBUFRDY:1;        /*!< bit:     16  Input Buffer Ready Interrupt Disable */
    uint32_t :15;              /*!< bit: 17..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} AESA_IDR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AESA_IDR_OFFSET             0x14         /**< \brief (AESA_IDR offset) Interrupt Disable Register */
#define AESA_IDR_RESETVALUE         _U_(0x00000000); /**< \brief (AESA_IDR reset_value) Interrupt Disable Register */

#define AESA_IDR_ODATARDY_Pos       0            /**< \brief (AESA_IDR) Output Data Ready Interrupt Disable */
#define AESA_IDR_ODATARDY           (_U_(0x1) << AESA_IDR_ODATARDY_Pos)
#define AESA_IDR_IBUFRDY_Pos        16           /**< \brief (AESA_IDR) Input Buffer Ready Interrupt Disable */
#define AESA_IDR_IBUFRDY            (_U_(0x1) << AESA_IDR_IBUFRDY_Pos)
#define AESA_IDR_MASK               _U_(0x00010001) /**< \brief (AESA_IDR) MASK Register */

/* -------- AESA_IMR : (AESA Offset: 0x18) (R/  32) Interrupt Mask Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t ODATARDY:1;       /*!< bit:      0  Output Data Ready Interrupt Mask   */
    uint32_t :15;              /*!< bit:  1..15  Reserved                           */
    uint32_t IBUFRDY:1;        /*!< bit:     16  Input Buffer Ready Interrupt Mask  */
    uint32_t :15;              /*!< bit: 17..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} AESA_IMR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AESA_IMR_OFFSET             0x18         /**< \brief (AESA_IMR offset) Interrupt Mask Register */
#define AESA_IMR_RESETVALUE         _U_(0x00000000); /**< \brief (AESA_IMR reset_value) Interrupt Mask Register */

#define AESA_IMR_ODATARDY_Pos       0            /**< \brief (AESA_IMR) Output Data Ready Interrupt Mask */
#define AESA_IMR_ODATARDY           (_U_(0x1) << AESA_IMR_ODATARDY_Pos)
#define AESA_IMR_IBUFRDY_Pos        16           /**< \brief (AESA_IMR) Input Buffer Ready Interrupt Mask */
#define AESA_IMR_IBUFRDY            (_U_(0x1) << AESA_IMR_IBUFRDY_Pos)
#define AESA_IMR_MASK               _U_(0x00010001) /**< \brief (AESA_IMR) MASK Register */

/* -------- AESA_KEY : (AESA Offset: 0x20) ( /W 32) KEY Key Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t KEY0:32;          /*!< bit:  0..31  Key Word 0                         */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} AESA_KEY_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AESA_KEY_OFFSET             0x20         /**< \brief (AESA_KEY offset) Key Register */
#define AESA_KEY_RESETVALUE         _U_(0x00000000); /**< \brief (AESA_KEY reset_value) Key Register */

#define AESA_KEY_KEY0_Pos           0            /**< \brief (AESA_KEY) Key Word 0 */
#define AESA_KEY_KEY0_Msk           (_U_(0xFFFFFFFF) << AESA_KEY_KEY0_Pos)
#define AESA_KEY_KEY0(value)        (AESA_KEY_KEY0_Msk & ((value) << AESA_KEY_KEY0_Pos))
#define AESA_KEY_MASK               _U_(0xFFFFFFFF) /**< \brief (AESA_KEY) MASK Register */

/* -------- AESA_INITVECT : (AESA Offset: 0x40) ( /W 32) INITVECT Initialization Vector Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t INITVECT0:32;     /*!< bit:  0..31  Initialization Vector Word 0       */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} AESA_INITVECT_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AESA_INITVECT_OFFSET        0x40         /**< \brief (AESA_INITVECT offset) Initialization Vector Register */
#define AESA_INITVECT_RESETVALUE    _U_(0x00000000); /**< \brief (AESA_INITVECT reset_value) Initialization Vector Register */

#define AESA_INITVECT_INITVECT0_Pos 0            /**< \brief (AESA_INITVECT) Initialization Vector Word 0 */
#define AESA_INITVECT_INITVECT0_Msk (_U_(0xFFFFFFFF) << AESA_INITVECT_INITVECT0_Pos)
#define AESA_INITVECT_INITVECT0(value) (AESA_INITVECT_INITVECT0_Msk & ((value) << AESA_INITVECT_INITVECT0_Pos))
#define AESA_INITVECT_MASK          _U_(0xFFFFFFFF) /**< \brief (AESA_INITVECT) MASK Register */

/* -------- AESA_IDATA : (AESA Offset: 0x50) ( /W 32) Input Data Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t IDATA:32;         /*!< bit:  0..31  Input Data                         */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} AESA_IDATA_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AESA_IDATA_OFFSET           0x50         /**< \brief (AESA_IDATA offset) Input Data Register */
#define AESA_IDATA_RESETVALUE       _U_(0x00000000); /**< \brief (AESA_IDATA reset_value) Input Data Register */

#define AESA_IDATA_IDATA_Pos        0            /**< \brief (AESA_IDATA) Input Data */
#define AESA_IDATA_IDATA_Msk        (_U_(0xFFFFFFFF) << AESA_IDATA_IDATA_Pos)
#define AESA_IDATA_IDATA(value)     (AESA_IDATA_IDATA_Msk & ((value) << AESA_IDATA_IDATA_Pos))
#define AESA_IDATA_MASK             _U_(0xFFFFFFFF) /**< \brief (AESA_IDATA) MASK Register */

/* -------- AESA_ODATA : (AESA Offset: 0x60) (R/  32) Output Data Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t ODATA:32;         /*!< bit:  0..31  Output Data                        */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} AESA_ODATA_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AESA_ODATA_OFFSET           0x60         /**< \brief (AESA_ODATA offset) Output Data Register */
#define AESA_ODATA_RESETVALUE       _U_(0x00000000); /**< \brief (AESA_ODATA reset_value) Output Data Register */

#define AESA_ODATA_ODATA_Pos        0            /**< \brief (AESA_ODATA) Output Data */
#define AESA_ODATA_ODATA_Msk        (_U_(0xFFFFFFFF) << AESA_ODATA_ODATA_Pos)
#define AESA_ODATA_ODATA(value)     (AESA_ODATA_ODATA_Msk & ((value) << AESA_ODATA_ODATA_Pos))
#define AESA_ODATA_MASK             _U_(0xFFFFFFFF) /**< \brief (AESA_ODATA) MASK Register */

/* -------- AESA_DRNGSEED : (AESA Offset: 0x70) ( /W 32) DRNG Seed Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t SEED:32;          /*!< bit:  0..31  DRNG Seed                          */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} AESA_DRNGSEED_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AESA_DRNGSEED_OFFSET        0x70         /**< \brief (AESA_DRNGSEED offset) DRNG Seed Register */
#define AESA_DRNGSEED_RESETVALUE    _U_(0x00000000); /**< \brief (AESA_DRNGSEED reset_value) DRNG Seed Register */

#define AESA_DRNGSEED_SEED_Pos      0            /**< \brief (AESA_DRNGSEED) DRNG Seed */
#define AESA_DRNGSEED_SEED_Msk      (_U_(0xFFFFFFFF) << AESA_DRNGSEED_SEED_Pos)
#define AESA_DRNGSEED_SEED(value)   (AESA_DRNGSEED_SEED_Msk & ((value) << AESA_DRNGSEED_SEED_Pos))
#define AESA_DRNGSEED_MASK          _U_(0xFFFFFFFF) /**< \brief (AESA_DRNGSEED) MASK Register */

/* -------- AESA_PARAMETER : (AESA Offset: 0xF8) (R/  32) Parameter Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t KEYSIZE:2;        /*!< bit:  0.. 1  Maximum Key Size                   */
    uint32_t OPMODE:3;         /*!< bit:  2.. 4  Maximum Number of Confidentiality Modes of Operation */
    uint32_t :3;               /*!< bit:  5.. 7  Reserved                           */
    uint32_t CTRMEAS:1;        /*!< bit:      8  Countermeasures                    */
    uint32_t :23;              /*!< bit:  9..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} AESA_PARAMETER_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AESA_PARAMETER_OFFSET       0xF8         /**< \brief (AESA_PARAMETER offset) Parameter Register */
#define AESA_PARAMETER_RESETVALUE   _U_(0x00000112); /**< \brief (AESA_PARAMETER reset_value) Parameter Register */

#define AESA_PARAMETER_KEYSIZE_Pos  0            /**< \brief (AESA_PARAMETER) Maximum Key Size */
#define AESA_PARAMETER_KEYSIZE_Msk  (_U_(0x3) << AESA_PARAMETER_KEYSIZE_Pos)
#define AESA_PARAMETER_KEYSIZE(value) (AESA_PARAMETER_KEYSIZE_Msk & ((value) << AESA_PARAMETER_KEYSIZE_Pos))
#define AESA_PARAMETER_OPMODE_Pos   2            /**< \brief (AESA_PARAMETER) Maximum Number of Confidentiality Modes of Operation */
#define AESA_PARAMETER_OPMODE_Msk   (_U_(0x7) << AESA_PARAMETER_OPMODE_Pos)
#define AESA_PARAMETER_OPMODE(value) (AESA_PARAMETER_OPMODE_Msk & ((value) << AESA_PARAMETER_OPMODE_Pos))
#define AESA_PARAMETER_CTRMEAS_Pos  8            /**< \brief (AESA_PARAMETER) Countermeasures */
#define AESA_PARAMETER_CTRMEAS      (_U_(0x1) << AESA_PARAMETER_CTRMEAS_Pos)
#define AESA_PARAMETER_MASK         _U_(0x0000011F) /**< \brief (AESA_PARAMETER) MASK Register */

/* -------- AESA_VERSION : (AESA Offset: 0xFC) (R/  32) Version Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t VERSION:12;       /*!< bit:  0..11  Version Number                     */
    uint32_t :4;               /*!< bit: 12..15  Reserved                           */
    uint32_t VARIANT:4;        /*!< bit: 16..19  Variant Number                     */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} AESA_VERSION_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AESA_VERSION_OFFSET         0xFC         /**< \brief (AESA_VERSION offset) Version Register */
#define AESA_VERSION_RESETVALUE     _U_(0x00000102); /**< \brief (AESA_VERSION reset_value) Version Register */

#define AESA_VERSION_VERSION_Pos    0            /**< \brief (AESA_VERSION) Version Number */
#define AESA_VERSION_VERSION_Msk    (_U_(0xFFF) << AESA_VERSION_VERSION_Pos)
#define AESA_VERSION_VERSION(value) (AESA_VERSION_VERSION_Msk & ((value) << AESA_VERSION_VERSION_Pos))
#define AESA_VERSION_VARIANT_Pos    16           /**< \brief (AESA_VERSION) Variant Number */
#define AESA_VERSION_VARIANT_Msk    (_U_(0xF) << AESA_VERSION_VARIANT_Pos)
#define AESA_VERSION_VARIANT(value) (AESA_VERSION_VARIANT_Msk & ((value) << AESA_VERSION_VARIANT_Pos))
#define AESA_VERSION_MASK           _U_(0x000F0FFF) /**< \brief (AESA_VERSION) MASK Register */

/** \brief AesaInitvect hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
 struct {
  __O  AESA_INITVECT_Type        INITVECT;    /**< \brief Offset: 0x00 ( /W 32) Initialization Vector Register */
 } bf;
 struct {
  WoReg   AESA_INITVECT;      /**< \brief (AESA Offset: 0x00) Initialization Vector Register */
 } reg;
} AesaInitvect;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/** \brief AesaKey hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
 struct {
  __O  AESA_KEY_Type             KEY;         /**< \brief Offset: 0x00 ( /W 32) Key Register */
 } bf;
 struct {
  WoReg   AESA_KEY;           /**< \brief (AESA Offset: 0x00) Key Register */
 } reg;
} AesaKey;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/** \brief AESA hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {
  __IO uint32_t CTRL;        /**< \brief Offset: 0x00 (R/W 32) Control Register */
  __IO uint32_t MODE;        /**< \brief Offset: 0x04 (R/W 32) Mode Register */
  __IO uint32_t DATABUFPTR;  /**< \brief Offset: 0x08 (R/W 32) Data Buffer Pointer Register */
  __I  uint32_t SR;          /**< \brief Offset: 0x0C (R/  32) Status Register */
  __O  uint32_t IER;         /**< \brief Offset: 0x10 ( /W 32) Interrupt Enable Register */
  __O  uint32_t IDR;         /**< \brief Offset: 0x14 ( /W 32) Interrupt Disable Register */
  __I  uint32_t IMR;         /**< \brief Offset: 0x18 (R/  32) Interrupt Mask Register */
       RoReg8   Reserved1[0x4];
  __O  uint32_t Key[8];      /**< \brief Offset: 0x20 AesaKey groups */
  __O  uint32_t Initvect[4]; /**< \brief Offset: 0x40 AesaInitvect groups */
  __O  uint32_t IDATA;       /**< \brief Offset: 0x50 ( /W 32) Input Data Register */
       RoReg8   Reserved2[0xC];
  __I  uint32_t ODATA;       /**< \brief Offset: 0x60 (R/  32) Output Data Register */
       RoReg8   Reserved3[0xC];
  __O  uint32_t DRNGSEED;    /**< \brief Offset: 0x70 ( /W 32) DRNG Seed Register */
       RoReg8   Reserved4[0x84];
  __I  uint32_t PARAMETER;   /**< \brief Offset: 0xF8 (R/  32) Parameter Register */
  __I  uint32_t VERSION;     /**< \brief Offset: 0xFC (R/  32) Version Register */
} Aesa;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAM4L_AESA_COMPONENT_ */
