/**
 * \file
 *
 * \brief Component description for FLASHCALW
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

#ifndef _SAM4L_FLASHCALW_COMPONENT_
#define _SAM4L_FLASHCALW_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR FLASHCALW */
/* ========================================================================== */
/** \addtogroup SAM4L_FLASHCALW Flash Controller */
/*@{*/

#define FLASHCALW_I8322
#define REV_FLASHCALW               0x110

/* -------- FLASHCALW_FCR : (FLASHCALW Offset: 0x00) (R/W 32) Flash Controller Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t FRDY:1;           /*!< bit:      0  Flash Ready Interrupt Enable       */
    uint32_t :1;               /*!< bit:      1  Reserved                           */
    uint32_t LOCKE:1;          /*!< bit:      2  Lock Error Interrupt Enable        */
    uint32_t PROGE:1;          /*!< bit:      3  Programming Error Interrupt Enable */
    uint32_t :2;               /*!< bit:  4.. 5  Reserved                           */
    uint32_t FWS:1;            /*!< bit:      6  Flash Wait State                   */
    uint32_t WS1OPT:1;         /*!< bit:      7  Wait State 1 Optimization          */
    uint32_t :24;              /*!< bit:  8..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} FLASHCALW_FCR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLASHCALW_FCR_OFFSET        0x00         /**< \brief (FLASHCALW_FCR offset) Flash Controller Control Register */
#define FLASHCALW_FCR_RESETVALUE    _U_(0x00000000); /**< \brief (FLASHCALW_FCR reset_value) Flash Controller Control Register */

#define FLASHCALW_FCR_FRDY_Pos      0            /**< \brief (FLASHCALW_FCR) Flash Ready Interrupt Enable */
#define FLASHCALW_FCR_FRDY          (_U_(0x1) << FLASHCALW_FCR_FRDY_Pos)
#define   FLASHCALW_FCR_FRDY_0_Val        _U_(0x0)   /**< \brief (FLASHCALW_FCR) Flash Ready does not generate an interrupt */
#define   FLASHCALW_FCR_FRDY_1_Val        _U_(0x1)   /**< \brief (FLASHCALW_FCR) Flash Ready generates an interrupt */
#define FLASHCALW_FCR_FRDY_0        (FLASHCALW_FCR_FRDY_0_Val      << FLASHCALW_FCR_FRDY_Pos)
#define FLASHCALW_FCR_FRDY_1        (FLASHCALW_FCR_FRDY_1_Val      << FLASHCALW_FCR_FRDY_Pos)
#define FLASHCALW_FCR_LOCKE_Pos     2            /**< \brief (FLASHCALW_FCR) Lock Error Interrupt Enable */
#define FLASHCALW_FCR_LOCKE         (_U_(0x1) << FLASHCALW_FCR_LOCKE_Pos)
#define   FLASHCALW_FCR_LOCKE_0_Val       _U_(0x0)   /**< \brief (FLASHCALW_FCR) Lock Error does not generate an interrupt */
#define   FLASHCALW_FCR_LOCKE_1_Val       _U_(0x1)   /**< \brief (FLASHCALW_FCR) Lock Error generates an interrupt */
#define FLASHCALW_FCR_LOCKE_0       (FLASHCALW_FCR_LOCKE_0_Val     << FLASHCALW_FCR_LOCKE_Pos)
#define FLASHCALW_FCR_LOCKE_1       (FLASHCALW_FCR_LOCKE_1_Val     << FLASHCALW_FCR_LOCKE_Pos)
#define FLASHCALW_FCR_PROGE_Pos     3            /**< \brief (FLASHCALW_FCR) Programming Error Interrupt Enable */
#define FLASHCALW_FCR_PROGE         (_U_(0x1) << FLASHCALW_FCR_PROGE_Pos)
#define   FLASHCALW_FCR_PROGE_0_Val       _U_(0x0)   /**< \brief (FLASHCALW_FCR) Programming Error does not generate an interrupt */
#define   FLASHCALW_FCR_PROGE_1_Val       _U_(0x1)   /**< \brief (FLASHCALW_FCR) Programming Error generates an interrupt */
#define FLASHCALW_FCR_PROGE_0       (FLASHCALW_FCR_PROGE_0_Val     << FLASHCALW_FCR_PROGE_Pos)
#define FLASHCALW_FCR_PROGE_1       (FLASHCALW_FCR_PROGE_1_Val     << FLASHCALW_FCR_PROGE_Pos)
#define FLASHCALW_FCR_FWS_Pos       6            /**< \brief (FLASHCALW_FCR) Flash Wait State */
#define FLASHCALW_FCR_FWS           (_U_(0x1) << FLASHCALW_FCR_FWS_Pos)
#define   FLASHCALW_FCR_FWS_0_Val         _U_(0x0)   /**< \brief (FLASHCALW_FCR) The flash is read with 0 wait states */
#define   FLASHCALW_FCR_FWS_1_Val         _U_(0x1)   /**< \brief (FLASHCALW_FCR) The flash is read with 1 wait states */
#define FLASHCALW_FCR_FWS_0         (FLASHCALW_FCR_FWS_0_Val       << FLASHCALW_FCR_FWS_Pos)
#define FLASHCALW_FCR_FWS_1         (FLASHCALW_FCR_FWS_1_Val       << FLASHCALW_FCR_FWS_Pos)
#define FLASHCALW_FCR_WS1OPT_Pos    7            /**< \brief (FLASHCALW_FCR) Wait State 1 Optimization */
#define FLASHCALW_FCR_WS1OPT        (_U_(0x1) << FLASHCALW_FCR_WS1OPT_Pos)
#define FLASHCALW_FCR_MASK          _U_(0x000000CD) /**< \brief (FLASHCALW_FCR) MASK Register */

/* -------- FLASHCALW_FCMD : (FLASHCALW Offset: 0x04) (R/W 32) Flash Controller Command Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t CMD:6;            /*!< bit:  0.. 5  Command                            */
    uint32_t :2;               /*!< bit:  6.. 7  Reserved                           */
    uint32_t PAGEN:16;         /*!< bit:  8..23  Page number                        */
    uint32_t KEY:8;            /*!< bit: 24..31  Write protection key               */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} FLASHCALW_FCMD_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLASHCALW_FCMD_OFFSET       0x04         /**< \brief (FLASHCALW_FCMD offset) Flash Controller Command Register */
#define FLASHCALW_FCMD_RESETVALUE   _U_(0x00000000); /**< \brief (FLASHCALW_FCMD reset_value) Flash Controller Command Register */

#define FLASHCALW_FCMD_CMD_Pos      0            /**< \brief (FLASHCALW_FCMD) Command */
#define FLASHCALW_FCMD_CMD_Msk      (_U_(0x3F) << FLASHCALW_FCMD_CMD_Pos)
#define FLASHCALW_FCMD_CMD(value)   (FLASHCALW_FCMD_CMD_Msk & ((value) << FLASHCALW_FCMD_CMD_Pos))
#define   FLASHCALW_FCMD_CMD_NOP_Val      _U_(0x0)   /**< \brief (FLASHCALW_FCMD) No Operation */
#define   FLASHCALW_FCMD_CMD_WP_Val       _U_(0x1)   /**< \brief (FLASHCALW_FCMD) Write Page */
#define   FLASHCALW_FCMD_CMD_EP_Val       _U_(0x2)   /**< \brief (FLASHCALW_FCMD) Erase Page */
#define   FLASHCALW_FCMD_CMD_CPB_Val      _U_(0x3)   /**< \brief (FLASHCALW_FCMD) Clear Page Buffer */
#define   FLASHCALW_FCMD_CMD_LP_Val       _U_(0x4)   /**< \brief (FLASHCALW_FCMD) Lock Region containing page */
#define   FLASHCALW_FCMD_CMD_UP_Val       _U_(0x5)   /**< \brief (FLASHCALW_FCMD) Unlock Region containing page */
#define   FLASHCALW_FCMD_CMD_EA_Val       _U_(0x6)   /**< \brief (FLASHCALW_FCMD) Erase All, including secuity and fuse bits */
#define   FLASHCALW_FCMD_CMD_WGPB_Val     _U_(0x7)   /**< \brief (FLASHCALW_FCMD) Write General-Purpose fuse Bit */
#define   FLASHCALW_FCMD_CMD_EGPB_Val     _U_(0x8)   /**< \brief (FLASHCALW_FCMD) Erase General-Purpose fuse Bit */
#define   FLASHCALW_FCMD_CMD_SSB_Val      _U_(0x9)   /**< \brief (FLASHCALW_FCMD) Set Security Bit */
#define   FLASHCALW_FCMD_CMD_PGPFB_Val    _U_(0xA)   /**< \brief (FLASHCALW_FCMD) Program GPFuse Byte */
#define   FLASHCALW_FCMD_CMD_EAGPF_Val    _U_(0xB)   /**< \brief (FLASHCALW_FCMD) Erase All GP Fuses */
#define   FLASHCALW_FCMD_CMD_QPR_Val      _U_(0xC)   /**< \brief (FLASHCALW_FCMD) Quick Page Read */
#define   FLASHCALW_FCMD_CMD_WUP_Val      _U_(0xD)   /**< \brief (FLASHCALW_FCMD) Write User Page */
#define   FLASHCALW_FCMD_CMD_EUP_Val      _U_(0xE)   /**< \brief (FLASHCALW_FCMD) Erase User Page */
#define   FLASHCALW_FCMD_CMD_QPRUP_Val    _U_(0xF)   /**< \brief (FLASHCALW_FCMD) Quick Page Read User Page */
#define   FLASHCALW_FCMD_CMD_HSEN_Val     _U_(0x10)   /**< \brief (FLASHCALW_FCMD) High Speed Mode Enable */
#define   FLASHCALW_FCMD_CMD_HSDIS_Val    _U_(0x11)   /**< \brief (FLASHCALW_FCMD) High Speed Mode Disable */
#define FLASHCALW_FCMD_CMD_NOP      (FLASHCALW_FCMD_CMD_NOP_Val    << FLASHCALW_FCMD_CMD_Pos)
#define FLASHCALW_FCMD_CMD_WP       (FLASHCALW_FCMD_CMD_WP_Val     << FLASHCALW_FCMD_CMD_Pos)
#define FLASHCALW_FCMD_CMD_EP       (FLASHCALW_FCMD_CMD_EP_Val     << FLASHCALW_FCMD_CMD_Pos)
#define FLASHCALW_FCMD_CMD_CPB      (FLASHCALW_FCMD_CMD_CPB_Val    << FLASHCALW_FCMD_CMD_Pos)
#define FLASHCALW_FCMD_CMD_LP       (FLASHCALW_FCMD_CMD_LP_Val     << FLASHCALW_FCMD_CMD_Pos)
#define FLASHCALW_FCMD_CMD_UP       (FLASHCALW_FCMD_CMD_UP_Val     << FLASHCALW_FCMD_CMD_Pos)
#define FLASHCALW_FCMD_CMD_EA       (FLASHCALW_FCMD_CMD_EA_Val     << FLASHCALW_FCMD_CMD_Pos)
#define FLASHCALW_FCMD_CMD_WGPB     (FLASHCALW_FCMD_CMD_WGPB_Val   << FLASHCALW_FCMD_CMD_Pos)
#define FLASHCALW_FCMD_CMD_EGPB     (FLASHCALW_FCMD_CMD_EGPB_Val   << FLASHCALW_FCMD_CMD_Pos)
#define FLASHCALW_FCMD_CMD_SSB      (FLASHCALW_FCMD_CMD_SSB_Val    << FLASHCALW_FCMD_CMD_Pos)
#define FLASHCALW_FCMD_CMD_PGPFB    (FLASHCALW_FCMD_CMD_PGPFB_Val  << FLASHCALW_FCMD_CMD_Pos)
#define FLASHCALW_FCMD_CMD_EAGPF    (FLASHCALW_FCMD_CMD_EAGPF_Val  << FLASHCALW_FCMD_CMD_Pos)
#define FLASHCALW_FCMD_CMD_QPR      (FLASHCALW_FCMD_CMD_QPR_Val    << FLASHCALW_FCMD_CMD_Pos)
#define FLASHCALW_FCMD_CMD_WUP      (FLASHCALW_FCMD_CMD_WUP_Val    << FLASHCALW_FCMD_CMD_Pos)
#define FLASHCALW_FCMD_CMD_EUP      (FLASHCALW_FCMD_CMD_EUP_Val    << FLASHCALW_FCMD_CMD_Pos)
#define FLASHCALW_FCMD_CMD_QPRUP    (FLASHCALW_FCMD_CMD_QPRUP_Val  << FLASHCALW_FCMD_CMD_Pos)
#define FLASHCALW_FCMD_CMD_HSEN     (FLASHCALW_FCMD_CMD_HSEN_Val   << FLASHCALW_FCMD_CMD_Pos)
#define FLASHCALW_FCMD_CMD_HSDIS    (FLASHCALW_FCMD_CMD_HSDIS_Val  << FLASHCALW_FCMD_CMD_Pos)
#define FLASHCALW_FCMD_PAGEN_Pos    8            /**< \brief (FLASHCALW_FCMD) Page number */
#define FLASHCALW_FCMD_PAGEN_Msk    (_U_(0xFFFF) << FLASHCALW_FCMD_PAGEN_Pos)
#define FLASHCALW_FCMD_PAGEN(value) (FLASHCALW_FCMD_PAGEN_Msk & ((value) << FLASHCALW_FCMD_PAGEN_Pos))
#define FLASHCALW_FCMD_KEY_Pos      24           /**< \brief (FLASHCALW_FCMD) Write protection key */
#define FLASHCALW_FCMD_KEY_Msk      (_U_(0xFF) << FLASHCALW_FCMD_KEY_Pos)
#define FLASHCALW_FCMD_KEY(value)   (FLASHCALW_FCMD_KEY_Msk & ((value) << FLASHCALW_FCMD_KEY_Pos))
#define   FLASHCALW_FCMD_KEY_KEY_Val      _U_(0xA5)   /**< \brief (FLASHCALW_FCMD)  */
#define FLASHCALW_FCMD_KEY_KEY      (FLASHCALW_FCMD_KEY_KEY_Val    << FLASHCALW_FCMD_KEY_Pos)
#define FLASHCALW_FCMD_MASK         _U_(0xFFFFFF3F) /**< \brief (FLASHCALW_FCMD) MASK Register */

/* -------- FLASHCALW_FSR : (FLASHCALW Offset: 0x08) (R/W 32) Flash Controller Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t FRDY:1;           /*!< bit:      0  Flash Ready Status                 */
    uint32_t :1;               /*!< bit:      1  Reserved                           */
    uint32_t LOCKE:1;          /*!< bit:      2  Lock Error Status                  */
    uint32_t PROGE:1;          /*!< bit:      3  Programming Error Status           */
    uint32_t SECURITY:1;       /*!< bit:      4  Security Bit Status                */
    uint32_t QPRR:1;           /*!< bit:      5  Quick Page Read Result             */
    uint32_t HSMODE:1;         /*!< bit:      6  High Speed Mode                    */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t ECCERR:2;         /*!< bit:  8.. 9  ECC Error Status                   */
    uint32_t :6;               /*!< bit: 10..15  Reserved                           */
    uint32_t LOCK0:1;          /*!< bit:     16  Lock Region 0 Lock Status          */
    uint32_t LOCK1:1;          /*!< bit:     17  Lock Region 1 Lock Status          */
    uint32_t LOCK2:1;          /*!< bit:     18  Lock Region 2 Lock Status          */
    uint32_t LOCK3:1;          /*!< bit:     19  Lock Region 3 Lock Status          */
    uint32_t LOCK4:1;          /*!< bit:     20  Lock Region 4 Lock Status          */
    uint32_t LOCK5:1;          /*!< bit:     21  Lock Region 5 Lock Status          */
    uint32_t LOCK6:1;          /*!< bit:     22  Lock Region 6 Lock Status          */
    uint32_t LOCK7:1;          /*!< bit:     23  Lock Region 7 Lock Status          */
    uint32_t LOCK8:1;          /*!< bit:     24  Lock Region 8 Lock Status          */
    uint32_t LOCK9:1;          /*!< bit:     25  Lock Region 9 Lock Status          */
    uint32_t LOCK10:1;         /*!< bit:     26  Lock Region 10 Lock Status         */
    uint32_t LOCK11:1;         /*!< bit:     27  Lock Region 11 Lock Status         */
    uint32_t LOCK12:1;         /*!< bit:     28  Lock Region 12 Lock Status         */
    uint32_t LOCK13:1;         /*!< bit:     29  Lock Region 13 Lock Status         */
    uint32_t LOCK14:1;         /*!< bit:     30  Lock Region 14 Lock Status         */
    uint32_t LOCK15:1;         /*!< bit:     31  Lock Region 15 Lock Status         */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} FLASHCALW_FSR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLASHCALW_FSR_OFFSET        0x08         /**< \brief (FLASHCALW_FSR offset) Flash Controller Status Register */
#define FLASHCALW_FSR_RESETVALUE    _U_(0x00000000); /**< \brief (FLASHCALW_FSR reset_value) Flash Controller Status Register */

#define FLASHCALW_FSR_FRDY_Pos      0            /**< \brief (FLASHCALW_FSR) Flash Ready Status */
#define FLASHCALW_FSR_FRDY          (_U_(0x1) << FLASHCALW_FSR_FRDY_Pos)
#define FLASHCALW_FSR_LOCKE_Pos     2            /**< \brief (FLASHCALW_FSR) Lock Error Status */
#define FLASHCALW_FSR_LOCKE         (_U_(0x1) << FLASHCALW_FSR_LOCKE_Pos)
#define FLASHCALW_FSR_PROGE_Pos     3            /**< \brief (FLASHCALW_FSR) Programming Error Status */
#define FLASHCALW_FSR_PROGE         (_U_(0x1) << FLASHCALW_FSR_PROGE_Pos)
#define FLASHCALW_FSR_SECURITY_Pos  4            /**< \brief (FLASHCALW_FSR) Security Bit Status */
#define FLASHCALW_FSR_SECURITY      (_U_(0x1) << FLASHCALW_FSR_SECURITY_Pos)
#define FLASHCALW_FSR_QPRR_Pos      5            /**< \brief (FLASHCALW_FSR) Quick Page Read Result */
#define FLASHCALW_FSR_QPRR          (_U_(0x1) << FLASHCALW_FSR_QPRR_Pos)
#define FLASHCALW_FSR_HSMODE_Pos    6            /**< \brief (FLASHCALW_FSR) High Speed Mode */
#define FLASHCALW_FSR_HSMODE        (_U_(0x1) << FLASHCALW_FSR_HSMODE_Pos)
#define FLASHCALW_FSR_ECCERR_Pos    8            /**< \brief (FLASHCALW_FSR) ECC Error Status */
#define FLASHCALW_FSR_ECCERR_Msk    (_U_(0x3) << FLASHCALW_FSR_ECCERR_Pos)
#define FLASHCALW_FSR_ECCERR(value) (FLASHCALW_FSR_ECCERR_Msk & ((value) << FLASHCALW_FSR_ECCERR_Pos))
#define   FLASHCALW_FSR_ECCERR_NOERROR_Val _U_(0x0)   /**< \brief (FLASHCALW_FSR) no error */
#define   FLASHCALW_FSR_ECCERR_ONEECCERR_Val _U_(0x1)   /**< \brief (FLASHCALW_FSR) one ECC error detected */
#define   FLASHCALW_FSR_ECCERR_TWOECCERR_Val _U_(0x2)   /**< \brief (FLASHCALW_FSR) two ECC errors detected */
#define FLASHCALW_FSR_ECCERR_NOERROR (FLASHCALW_FSR_ECCERR_NOERROR_Val << FLASHCALW_FSR_ECCERR_Pos)
#define FLASHCALW_FSR_ECCERR_ONEECCERR (FLASHCALW_FSR_ECCERR_ONEECCERR_Val << FLASHCALW_FSR_ECCERR_Pos)
#define FLASHCALW_FSR_ECCERR_TWOECCERR (FLASHCALW_FSR_ECCERR_TWOECCERR_Val << FLASHCALW_FSR_ECCERR_Pos)
#define FLASHCALW_FSR_LOCK0_Pos     16           /**< \brief (FLASHCALW_FSR) Lock Region 0 Lock Status */
#define FLASHCALW_FSR_LOCK0         (_U_(0x1) << FLASHCALW_FSR_LOCK0_Pos)
#define FLASHCALW_FSR_LOCK1_Pos     17           /**< \brief (FLASHCALW_FSR) Lock Region 1 Lock Status */
#define FLASHCALW_FSR_LOCK1         (_U_(0x1) << FLASHCALW_FSR_LOCK1_Pos)
#define FLASHCALW_FSR_LOCK2_Pos     18           /**< \brief (FLASHCALW_FSR) Lock Region 2 Lock Status */
#define FLASHCALW_FSR_LOCK2         (_U_(0x1) << FLASHCALW_FSR_LOCK2_Pos)
#define FLASHCALW_FSR_LOCK3_Pos     19           /**< \brief (FLASHCALW_FSR) Lock Region 3 Lock Status */
#define FLASHCALW_FSR_LOCK3         (_U_(0x1) << FLASHCALW_FSR_LOCK3_Pos)
#define FLASHCALW_FSR_LOCK4_Pos     20           /**< \brief (FLASHCALW_FSR) Lock Region 4 Lock Status */
#define FLASHCALW_FSR_LOCK4         (_U_(0x1) << FLASHCALW_FSR_LOCK4_Pos)
#define FLASHCALW_FSR_LOCK5_Pos     21           /**< \brief (FLASHCALW_FSR) Lock Region 5 Lock Status */
#define FLASHCALW_FSR_LOCK5         (_U_(0x1) << FLASHCALW_FSR_LOCK5_Pos)
#define FLASHCALW_FSR_LOCK6_Pos     22           /**< \brief (FLASHCALW_FSR) Lock Region 6 Lock Status */
#define FLASHCALW_FSR_LOCK6         (_U_(0x1) << FLASHCALW_FSR_LOCK6_Pos)
#define FLASHCALW_FSR_LOCK7_Pos     23           /**< \brief (FLASHCALW_FSR) Lock Region 7 Lock Status */
#define FLASHCALW_FSR_LOCK7         (_U_(0x1) << FLASHCALW_FSR_LOCK7_Pos)
#define FLASHCALW_FSR_LOCK8_Pos     24           /**< \brief (FLASHCALW_FSR) Lock Region 8 Lock Status */
#define FLASHCALW_FSR_LOCK8         (_U_(0x1) << FLASHCALW_FSR_LOCK8_Pos)
#define FLASHCALW_FSR_LOCK9_Pos     25           /**< \brief (FLASHCALW_FSR) Lock Region 9 Lock Status */
#define FLASHCALW_FSR_LOCK9         (_U_(0x1) << FLASHCALW_FSR_LOCK9_Pos)
#define FLASHCALW_FSR_LOCK10_Pos    26           /**< \brief (FLASHCALW_FSR) Lock Region 10 Lock Status */
#define FLASHCALW_FSR_LOCK10        (_U_(0x1) << FLASHCALW_FSR_LOCK10_Pos)
#define FLASHCALW_FSR_LOCK11_Pos    27           /**< \brief (FLASHCALW_FSR) Lock Region 11 Lock Status */
#define FLASHCALW_FSR_LOCK11        (_U_(0x1) << FLASHCALW_FSR_LOCK11_Pos)
#define FLASHCALW_FSR_LOCK12_Pos    28           /**< \brief (FLASHCALW_FSR) Lock Region 12 Lock Status */
#define FLASHCALW_FSR_LOCK12        (_U_(0x1) << FLASHCALW_FSR_LOCK12_Pos)
#define FLASHCALW_FSR_LOCK13_Pos    29           /**< \brief (FLASHCALW_FSR) Lock Region 13 Lock Status */
#define FLASHCALW_FSR_LOCK13        (_U_(0x1) << FLASHCALW_FSR_LOCK13_Pos)
#define FLASHCALW_FSR_LOCK14_Pos    30           /**< \brief (FLASHCALW_FSR) Lock Region 14 Lock Status */
#define FLASHCALW_FSR_LOCK14        (_U_(0x1) << FLASHCALW_FSR_LOCK14_Pos)
#define FLASHCALW_FSR_LOCK15_Pos    31           /**< \brief (FLASHCALW_FSR) Lock Region 15 Lock Status */
#define FLASHCALW_FSR_LOCK15        (_U_(0x1) << FLASHCALW_FSR_LOCK15_Pos)
#define FLASHCALW_FSR_MASK          _U_(0xFFFF037D) /**< \brief (FLASHCALW_FSR) MASK Register */

/* -------- FLASHCALW_FPR : (FLASHCALW Offset: 0x0C) (R/  32) Flash Controller Parameter Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t FSZ:4;            /*!< bit:  0.. 3  Flash Size                         */
    uint32_t :4;               /*!< bit:  4.. 7  Reserved                           */
    uint32_t PSZ:3;            /*!< bit:  8..10  Page Size                          */
    uint32_t :21;              /*!< bit: 11..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} FLASHCALW_FPR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLASHCALW_FPR_OFFSET        0x0C         /**< \brief (FLASHCALW_FPR offset) Flash Controller Parameter Register */

#define FLASHCALW_FPR_FSZ_Pos       0            /**< \brief (FLASHCALW_FPR) Flash Size */
#define FLASHCALW_FPR_FSZ_Msk       (_U_(0xF) << FLASHCALW_FPR_FSZ_Pos)
#define FLASHCALW_FPR_FSZ(value)    (FLASHCALW_FPR_FSZ_Msk & ((value) << FLASHCALW_FPR_FSZ_Pos))
#define FLASHCALW_FPR_PSZ_Pos       8            /**< \brief (FLASHCALW_FPR) Page Size */
#define FLASHCALW_FPR_PSZ_Msk       (_U_(0x7) << FLASHCALW_FPR_PSZ_Pos)
#define FLASHCALW_FPR_PSZ(value)    (FLASHCALW_FPR_PSZ_Msk & ((value) << FLASHCALW_FPR_PSZ_Pos))
#define FLASHCALW_FPR_MASK          _U_(0x0000070F) /**< \brief (FLASHCALW_FPR) MASK Register */

/* -------- FLASHCALW_VERSION : (FLASHCALW Offset: 0x10) (R/  32) Flash Controller Version Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t VERSION:12;       /*!< bit:  0..11  Version Number                     */
    uint32_t :4;               /*!< bit: 12..15  Reserved                           */
    uint32_t VARIANT:4;        /*!< bit: 16..19  Variant Number                     */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} FLASHCALW_VERSION_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLASHCALW_VERSION_OFFSET    0x10         /**< \brief (FLASHCALW_VERSION offset) Flash Controller Version Register */
#define FLASHCALW_VERSION_RESETVALUE _U_(0x00000110); /**< \brief (FLASHCALW_VERSION reset_value) Flash Controller Version Register */

#define FLASHCALW_VERSION_VERSION_Pos 0            /**< \brief (FLASHCALW_VERSION) Version Number */
#define FLASHCALW_VERSION_VERSION_Msk (_U_(0xFFF) << FLASHCALW_VERSION_VERSION_Pos)
#define FLASHCALW_VERSION_VERSION(value) (FLASHCALW_VERSION_VERSION_Msk & ((value) << FLASHCALW_VERSION_VERSION_Pos))
#define FLASHCALW_VERSION_VARIANT_Pos 16           /**< \brief (FLASHCALW_VERSION) Variant Number */
#define FLASHCALW_VERSION_VARIANT_Msk (_U_(0xF) << FLASHCALW_VERSION_VARIANT_Pos)
#define FLASHCALW_VERSION_VARIANT(value) (FLASHCALW_VERSION_VARIANT_Msk & ((value) << FLASHCALW_VERSION_VARIANT_Pos))
#define FLASHCALW_VERSION_MASK      _U_(0x000F0FFF) /**< \brief (FLASHCALW_VERSION) MASK Register */

/* -------- FLASHCALW_FGPFRHI : (FLASHCALW Offset: 0x14) (R/W 32) Flash Controller General Purpose Fuse Register High -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t GPF32:1;          /*!< bit:      0  General Purpose Fuse 32            */
    uint32_t GPF33:1;          /*!< bit:      1  General Purpose Fuse 33            */
    uint32_t GPF34:1;          /*!< bit:      2  General Purpose Fuse 34            */
    uint32_t GPF35:1;          /*!< bit:      3  General Purpose Fuse 35            */
    uint32_t GPF36:1;          /*!< bit:      4  General Purpose Fuse 36            */
    uint32_t GPF37:1;          /*!< bit:      5  General Purpose Fuse 37            */
    uint32_t GPF38:1;          /*!< bit:      6  General Purpose Fuse 38            */
    uint32_t GPF39:1;          /*!< bit:      7  General Purpose Fuse 39            */
    uint32_t GPF40:1;          /*!< bit:      8  General Purpose Fuse 40            */
    uint32_t GPF41:1;          /*!< bit:      9  General Purpose Fuse 41            */
    uint32_t GPF42:1;          /*!< bit:     10  General Purpose Fuse 42            */
    uint32_t GPF43:1;          /*!< bit:     11  General Purpose Fuse 43            */
    uint32_t GPF44:1;          /*!< bit:     12  General Purpose Fuse 44            */
    uint32_t GPF45:1;          /*!< bit:     13  General Purpose Fuse 45            */
    uint32_t GPF46:1;          /*!< bit:     14  General Purpose Fuse 46            */
    uint32_t GPF47:1;          /*!< bit:     15  General Purpose Fuse 47            */
    uint32_t GPF48:1;          /*!< bit:     16  General Purpose Fuse 48            */
    uint32_t GPF49:1;          /*!< bit:     17  General Purpose Fuse 49            */
    uint32_t GPF50:1;          /*!< bit:     18  General Purpose Fuse 50            */
    uint32_t GPF51:1;          /*!< bit:     19  General Purpose Fuse 51            */
    uint32_t GPF52:1;          /*!< bit:     20  General Purpose Fuse 52            */
    uint32_t GPF53:1;          /*!< bit:     21  General Purpose Fuse 53            */
    uint32_t GPF54:1;          /*!< bit:     22  General Purpose Fuse 54            */
    uint32_t GPF55:1;          /*!< bit:     23  General Purpose Fuse 55            */
    uint32_t GPF56:1;          /*!< bit:     24  General Purpose Fuse 56            */
    uint32_t GPF57:1;          /*!< bit:     25  General Purpose Fuse 57            */
    uint32_t GPF58:1;          /*!< bit:     26  General Purpose Fuse 58            */
    uint32_t GPF59:1;          /*!< bit:     27  General Purpose Fuse 59            */
    uint32_t GPF60:1;          /*!< bit:     28  General Purpose Fuse 60            */
    uint32_t GPF61:1;          /*!< bit:     29  General Purpose Fuse 61            */
    uint32_t GPF62:1;          /*!< bit:     30  General Purpose Fuse 62            */
    uint32_t GPF63:1;          /*!< bit:     31  General Purpose Fuse 63            */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} FLASHCALW_FGPFRHI_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLASHCALW_FGPFRHI_OFFSET    0x14         /**< \brief (FLASHCALW_FGPFRHI offset) Flash Controller General Purpose Fuse Register High */

#define FLASHCALW_FGPFRHI_GPF32_Pos 0            /**< \brief (FLASHCALW_FGPFRHI) General Purpose Fuse 32 */
#define FLASHCALW_FGPFRHI_GPF32     (_U_(0x1) << FLASHCALW_FGPFRHI_GPF32_Pos)
#define FLASHCALW_FGPFRHI_GPF33_Pos 1            /**< \brief (FLASHCALW_FGPFRHI) General Purpose Fuse 33 */
#define FLASHCALW_FGPFRHI_GPF33     (_U_(0x1) << FLASHCALW_FGPFRHI_GPF33_Pos)
#define FLASHCALW_FGPFRHI_GPF34_Pos 2            /**< \brief (FLASHCALW_FGPFRHI) General Purpose Fuse 34 */
#define FLASHCALW_FGPFRHI_GPF34     (_U_(0x1) << FLASHCALW_FGPFRHI_GPF34_Pos)
#define FLASHCALW_FGPFRHI_GPF35_Pos 3            /**< \brief (FLASHCALW_FGPFRHI) General Purpose Fuse 35 */
#define FLASHCALW_FGPFRHI_GPF35     (_U_(0x1) << FLASHCALW_FGPFRHI_GPF35_Pos)
#define FLASHCALW_FGPFRHI_GPF36_Pos 4            /**< \brief (FLASHCALW_FGPFRHI) General Purpose Fuse 36 */
#define FLASHCALW_FGPFRHI_GPF36     (_U_(0x1) << FLASHCALW_FGPFRHI_GPF36_Pos)
#define FLASHCALW_FGPFRHI_GPF37_Pos 5            /**< \brief (FLASHCALW_FGPFRHI) General Purpose Fuse 37 */
#define FLASHCALW_FGPFRHI_GPF37     (_U_(0x1) << FLASHCALW_FGPFRHI_GPF37_Pos)
#define FLASHCALW_FGPFRHI_GPF38_Pos 6            /**< \brief (FLASHCALW_FGPFRHI) General Purpose Fuse 38 */
#define FLASHCALW_FGPFRHI_GPF38     (_U_(0x1) << FLASHCALW_FGPFRHI_GPF38_Pos)
#define FLASHCALW_FGPFRHI_GPF39_Pos 7            /**< \brief (FLASHCALW_FGPFRHI) General Purpose Fuse 39 */
#define FLASHCALW_FGPFRHI_GPF39     (_U_(0x1) << FLASHCALW_FGPFRHI_GPF39_Pos)
#define FLASHCALW_FGPFRHI_GPF40_Pos 8            /**< \brief (FLASHCALW_FGPFRHI) General Purpose Fuse 40 */
#define FLASHCALW_FGPFRHI_GPF40     (_U_(0x1) << FLASHCALW_FGPFRHI_GPF40_Pos)
#define FLASHCALW_FGPFRHI_GPF41_Pos 9            /**< \brief (FLASHCALW_FGPFRHI) General Purpose Fuse 41 */
#define FLASHCALW_FGPFRHI_GPF41     (_U_(0x1) << FLASHCALW_FGPFRHI_GPF41_Pos)
#define FLASHCALW_FGPFRHI_GPF42_Pos 10           /**< \brief (FLASHCALW_FGPFRHI) General Purpose Fuse 42 */
#define FLASHCALW_FGPFRHI_GPF42     (_U_(0x1) << FLASHCALW_FGPFRHI_GPF42_Pos)
#define FLASHCALW_FGPFRHI_GPF43_Pos 11           /**< \brief (FLASHCALW_FGPFRHI) General Purpose Fuse 43 */
#define FLASHCALW_FGPFRHI_GPF43     (_U_(0x1) << FLASHCALW_FGPFRHI_GPF43_Pos)
#define FLASHCALW_FGPFRHI_GPF44_Pos 12           /**< \brief (FLASHCALW_FGPFRHI) General Purpose Fuse 44 */
#define FLASHCALW_FGPFRHI_GPF44     (_U_(0x1) << FLASHCALW_FGPFRHI_GPF44_Pos)
#define FLASHCALW_FGPFRHI_GPF45_Pos 13           /**< \brief (FLASHCALW_FGPFRHI) General Purpose Fuse 45 */
#define FLASHCALW_FGPFRHI_GPF45     (_U_(0x1) << FLASHCALW_FGPFRHI_GPF45_Pos)
#define FLASHCALW_FGPFRHI_GPF46_Pos 14           /**< \brief (FLASHCALW_FGPFRHI) General Purpose Fuse 46 */
#define FLASHCALW_FGPFRHI_GPF46     (_U_(0x1) << FLASHCALW_FGPFRHI_GPF46_Pos)
#define FLASHCALW_FGPFRHI_GPF47_Pos 15           /**< \brief (FLASHCALW_FGPFRHI) General Purpose Fuse 47 */
#define FLASHCALW_FGPFRHI_GPF47     (_U_(0x1) << FLASHCALW_FGPFRHI_GPF47_Pos)
#define FLASHCALW_FGPFRHI_GPF48_Pos 16           /**< \brief (FLASHCALW_FGPFRHI) General Purpose Fuse 48 */
#define FLASHCALW_FGPFRHI_GPF48     (_U_(0x1) << FLASHCALW_FGPFRHI_GPF48_Pos)
#define FLASHCALW_FGPFRHI_GPF49_Pos 17           /**< \brief (FLASHCALW_FGPFRHI) General Purpose Fuse 49 */
#define FLASHCALW_FGPFRHI_GPF49     (_U_(0x1) << FLASHCALW_FGPFRHI_GPF49_Pos)
#define FLASHCALW_FGPFRHI_GPF50_Pos 18           /**< \brief (FLASHCALW_FGPFRHI) General Purpose Fuse 50 */
#define FLASHCALW_FGPFRHI_GPF50     (_U_(0x1) << FLASHCALW_FGPFRHI_GPF50_Pos)
#define FLASHCALW_FGPFRHI_GPF51_Pos 19           /**< \brief (FLASHCALW_FGPFRHI) General Purpose Fuse 51 */
#define FLASHCALW_FGPFRHI_GPF51     (_U_(0x1) << FLASHCALW_FGPFRHI_GPF51_Pos)
#define FLASHCALW_FGPFRHI_GPF52_Pos 20           /**< \brief (FLASHCALW_FGPFRHI) General Purpose Fuse 52 */
#define FLASHCALW_FGPFRHI_GPF52     (_U_(0x1) << FLASHCALW_FGPFRHI_GPF52_Pos)
#define FLASHCALW_FGPFRHI_GPF53_Pos 21           /**< \brief (FLASHCALW_FGPFRHI) General Purpose Fuse 53 */
#define FLASHCALW_FGPFRHI_GPF53     (_U_(0x1) << FLASHCALW_FGPFRHI_GPF53_Pos)
#define FLASHCALW_FGPFRHI_GPF54_Pos 22           /**< \brief (FLASHCALW_FGPFRHI) General Purpose Fuse 54 */
#define FLASHCALW_FGPFRHI_GPF54     (_U_(0x1) << FLASHCALW_FGPFRHI_GPF54_Pos)
#define FLASHCALW_FGPFRHI_GPF55_Pos 23           /**< \brief (FLASHCALW_FGPFRHI) General Purpose Fuse 55 */
#define FLASHCALW_FGPFRHI_GPF55     (_U_(0x1) << FLASHCALW_FGPFRHI_GPF55_Pos)
#define FLASHCALW_FGPFRHI_GPF56_Pos 24           /**< \brief (FLASHCALW_FGPFRHI) General Purpose Fuse 56 */
#define FLASHCALW_FGPFRHI_GPF56     (_U_(0x1) << FLASHCALW_FGPFRHI_GPF56_Pos)
#define FLASHCALW_FGPFRHI_GPF57_Pos 25           /**< \brief (FLASHCALW_FGPFRHI) General Purpose Fuse 57 */
#define FLASHCALW_FGPFRHI_GPF57     (_U_(0x1) << FLASHCALW_FGPFRHI_GPF57_Pos)
#define FLASHCALW_FGPFRHI_GPF58_Pos 26           /**< \brief (FLASHCALW_FGPFRHI) General Purpose Fuse 58 */
#define FLASHCALW_FGPFRHI_GPF58     (_U_(0x1) << FLASHCALW_FGPFRHI_GPF58_Pos)
#define FLASHCALW_FGPFRHI_GPF59_Pos 27           /**< \brief (FLASHCALW_FGPFRHI) General Purpose Fuse 59 */
#define FLASHCALW_FGPFRHI_GPF59     (_U_(0x1) << FLASHCALW_FGPFRHI_GPF59_Pos)
#define FLASHCALW_FGPFRHI_GPF60_Pos 28           /**< \brief (FLASHCALW_FGPFRHI) General Purpose Fuse 60 */
#define FLASHCALW_FGPFRHI_GPF60     (_U_(0x1) << FLASHCALW_FGPFRHI_GPF60_Pos)
#define FLASHCALW_FGPFRHI_GPF61_Pos 29           /**< \brief (FLASHCALW_FGPFRHI) General Purpose Fuse 61 */
#define FLASHCALW_FGPFRHI_GPF61     (_U_(0x1) << FLASHCALW_FGPFRHI_GPF61_Pos)
#define FLASHCALW_FGPFRHI_GPF62_Pos 30           /**< \brief (FLASHCALW_FGPFRHI) General Purpose Fuse 62 */
#define FLASHCALW_FGPFRHI_GPF62     (_U_(0x1) << FLASHCALW_FGPFRHI_GPF62_Pos)
#define FLASHCALW_FGPFRHI_GPF63_Pos 31           /**< \brief (FLASHCALW_FGPFRHI) General Purpose Fuse 63 */
#define FLASHCALW_FGPFRHI_GPF63     (_U_(0x1) << FLASHCALW_FGPFRHI_GPF63_Pos)
#define FLASHCALW_FGPFRHI_MASK      _U_(0xFFFFFFFF) /**< \brief (FLASHCALW_FGPFRHI) MASK Register */

/* -------- FLASHCALW_FGPFRLO : (FLASHCALW Offset: 0x18) (R/W 32) Flash Controller General Purpose Fuse Register Low -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t LOCK0:1;          /*!< bit:      0  Lock Bit 0                         */
    uint32_t LOCK1:1;          /*!< bit:      1  Lock Bit 1                         */
    uint32_t LOCK2:1;          /*!< bit:      2  Lock Bit 2                         */
    uint32_t LOCK3:1;          /*!< bit:      3  Lock Bit 3                         */
    uint32_t LOCK4:1;          /*!< bit:      4  Lock Bit 4                         */
    uint32_t LOCK5:1;          /*!< bit:      5  Lock Bit 5                         */
    uint32_t LOCK6:1;          /*!< bit:      6  Lock Bit 6                         */
    uint32_t LOCK7:1;          /*!< bit:      7  Lock Bit 7                         */
    uint32_t LOCK8:1;          /*!< bit:      8  Lock Bit 8                         */
    uint32_t LOCK9:1;          /*!< bit:      9  Lock Bit 9                         */
    uint32_t LOCK10:1;         /*!< bit:     10  Lock Bit 10                        */
    uint32_t LOCK11:1;         /*!< bit:     11  Lock Bit 11                        */
    uint32_t LOCK12:1;         /*!< bit:     12  Lock Bit 12                        */
    uint32_t LOCK13:1;         /*!< bit:     13  Lock Bit 13                        */
    uint32_t LOCK14:1;         /*!< bit:     14  Lock Bit 14                        */
    uint32_t LOCK15:1;         /*!< bit:     15  Lock Bit 15                        */
    uint32_t GPF16:1;          /*!< bit:     16  General Purpose Fuse 16            */
    uint32_t GPF17:1;          /*!< bit:     17  General Purpose Fuse 17            */
    uint32_t GPF18:1;          /*!< bit:     18  General Purpose Fuse 18            */
    uint32_t GPF19:1;          /*!< bit:     19  General Purpose Fuse 19            */
    uint32_t GPF20:1;          /*!< bit:     20  General Purpose Fuse 20            */
    uint32_t GPF21:1;          /*!< bit:     21  General Purpose Fuse 21            */
    uint32_t GPF22:1;          /*!< bit:     22  General Purpose Fuse 22            */
    uint32_t GPF23:1;          /*!< bit:     23  General Purpose Fuse 23            */
    uint32_t GPF24:1;          /*!< bit:     24  General Purpose Fuse 24            */
    uint32_t GPF25:1;          /*!< bit:     25  General Purpose Fuse 25            */
    uint32_t GPF26:1;          /*!< bit:     26  General Purpose Fuse 26            */
    uint32_t GPF27:1;          /*!< bit:     27  General Purpose Fuse 27            */
    uint32_t GPF28:1;          /*!< bit:     28  General Purpose Fuse 28            */
    uint32_t GPF29:1;          /*!< bit:     29  General Purpose Fuse 29            */
    uint32_t GPF30:1;          /*!< bit:     30  General Purpose Fuse 30            */
    uint32_t GPF31:1;          /*!< bit:     31  General Purpose Fuse 31            */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} FLASHCALW_FGPFRLO_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FLASHCALW_FGPFRLO_OFFSET    0x18         /**< \brief (FLASHCALW_FGPFRLO offset) Flash Controller General Purpose Fuse Register Low */

#define FLASHCALW_FGPFRLO_LOCK0_Pos 0            /**< \brief (FLASHCALW_FGPFRLO) Lock Bit 0 */
#define FLASHCALW_FGPFRLO_LOCK0     (_U_(0x1) << FLASHCALW_FGPFRLO_LOCK0_Pos)
#define FLASHCALW_FGPFRLO_LOCK1_Pos 1            /**< \brief (FLASHCALW_FGPFRLO) Lock Bit 1 */
#define FLASHCALW_FGPFRLO_LOCK1     (_U_(0x1) << FLASHCALW_FGPFRLO_LOCK1_Pos)
#define FLASHCALW_FGPFRLO_LOCK2_Pos 2            /**< \brief (FLASHCALW_FGPFRLO) Lock Bit 2 */
#define FLASHCALW_FGPFRLO_LOCK2     (_U_(0x1) << FLASHCALW_FGPFRLO_LOCK2_Pos)
#define FLASHCALW_FGPFRLO_LOCK3_Pos 3            /**< \brief (FLASHCALW_FGPFRLO) Lock Bit 3 */
#define FLASHCALW_FGPFRLO_LOCK3     (_U_(0x1) << FLASHCALW_FGPFRLO_LOCK3_Pos)
#define FLASHCALW_FGPFRLO_LOCK4_Pos 4            /**< \brief (FLASHCALW_FGPFRLO) Lock Bit 4 */
#define FLASHCALW_FGPFRLO_LOCK4     (_U_(0x1) << FLASHCALW_FGPFRLO_LOCK4_Pos)
#define FLASHCALW_FGPFRLO_LOCK5_Pos 5            /**< \brief (FLASHCALW_FGPFRLO) Lock Bit 5 */
#define FLASHCALW_FGPFRLO_LOCK5     (_U_(0x1) << FLASHCALW_FGPFRLO_LOCK5_Pos)
#define FLASHCALW_FGPFRLO_LOCK6_Pos 6            /**< \brief (FLASHCALW_FGPFRLO) Lock Bit 6 */
#define FLASHCALW_FGPFRLO_LOCK6     (_U_(0x1) << FLASHCALW_FGPFRLO_LOCK6_Pos)
#define FLASHCALW_FGPFRLO_LOCK7_Pos 7            /**< \brief (FLASHCALW_FGPFRLO) Lock Bit 7 */
#define FLASHCALW_FGPFRLO_LOCK7     (_U_(0x1) << FLASHCALW_FGPFRLO_LOCK7_Pos)
#define FLASHCALW_FGPFRLO_LOCK8_Pos 8            /**< \brief (FLASHCALW_FGPFRLO) Lock Bit 8 */
#define FLASHCALW_FGPFRLO_LOCK8     (_U_(0x1) << FLASHCALW_FGPFRLO_LOCK8_Pos)
#define FLASHCALW_FGPFRLO_LOCK9_Pos 9            /**< \brief (FLASHCALW_FGPFRLO) Lock Bit 9 */
#define FLASHCALW_FGPFRLO_LOCK9     (_U_(0x1) << FLASHCALW_FGPFRLO_LOCK9_Pos)
#define FLASHCALW_FGPFRLO_LOCK10_Pos 10           /**< \brief (FLASHCALW_FGPFRLO) Lock Bit 10 */
#define FLASHCALW_FGPFRLO_LOCK10    (_U_(0x1) << FLASHCALW_FGPFRLO_LOCK10_Pos)
#define FLASHCALW_FGPFRLO_LOCK11_Pos 11           /**< \brief (FLASHCALW_FGPFRLO) Lock Bit 11 */
#define FLASHCALW_FGPFRLO_LOCK11    (_U_(0x1) << FLASHCALW_FGPFRLO_LOCK11_Pos)
#define FLASHCALW_FGPFRLO_LOCK12_Pos 12           /**< \brief (FLASHCALW_FGPFRLO) Lock Bit 12 */
#define FLASHCALW_FGPFRLO_LOCK12    (_U_(0x1) << FLASHCALW_FGPFRLO_LOCK12_Pos)
#define FLASHCALW_FGPFRLO_LOCK13_Pos 13           /**< \brief (FLASHCALW_FGPFRLO) Lock Bit 13 */
#define FLASHCALW_FGPFRLO_LOCK13    (_U_(0x1) << FLASHCALW_FGPFRLO_LOCK13_Pos)
#define FLASHCALW_FGPFRLO_LOCK14_Pos 14           /**< \brief (FLASHCALW_FGPFRLO) Lock Bit 14 */
#define FLASHCALW_FGPFRLO_LOCK14    (_U_(0x1) << FLASHCALW_FGPFRLO_LOCK14_Pos)
#define FLASHCALW_FGPFRLO_LOCK15_Pos 15           /**< \brief (FLASHCALW_FGPFRLO) Lock Bit 15 */
#define FLASHCALW_FGPFRLO_LOCK15    (_U_(0x1) << FLASHCALW_FGPFRLO_LOCK15_Pos)
#define FLASHCALW_FGPFRLO_GPF16_Pos 16           /**< \brief (FLASHCALW_FGPFRLO) General Purpose Fuse 16 */
#define FLASHCALW_FGPFRLO_GPF16     (_U_(0x1) << FLASHCALW_FGPFRLO_GPF16_Pos)
#define FLASHCALW_FGPFRLO_GPF17_Pos 17           /**< \brief (FLASHCALW_FGPFRLO) General Purpose Fuse 17 */
#define FLASHCALW_FGPFRLO_GPF17     (_U_(0x1) << FLASHCALW_FGPFRLO_GPF17_Pos)
#define FLASHCALW_FGPFRLO_GPF18_Pos 18           /**< \brief (FLASHCALW_FGPFRLO) General Purpose Fuse 18 */
#define FLASHCALW_FGPFRLO_GPF18     (_U_(0x1) << FLASHCALW_FGPFRLO_GPF18_Pos)
#define FLASHCALW_FGPFRLO_GPF19_Pos 19           /**< \brief (FLASHCALW_FGPFRLO) General Purpose Fuse 19 */
#define FLASHCALW_FGPFRLO_GPF19     (_U_(0x1) << FLASHCALW_FGPFRLO_GPF19_Pos)
#define FLASHCALW_FGPFRLO_GPF20_Pos 20           /**< \brief (FLASHCALW_FGPFRLO) General Purpose Fuse 20 */
#define FLASHCALW_FGPFRLO_GPF20     (_U_(0x1) << FLASHCALW_FGPFRLO_GPF20_Pos)
#define FLASHCALW_FGPFRLO_GPF21_Pos 21           /**< \brief (FLASHCALW_FGPFRLO) General Purpose Fuse 21 */
#define FLASHCALW_FGPFRLO_GPF21     (_U_(0x1) << FLASHCALW_FGPFRLO_GPF21_Pos)
#define FLASHCALW_FGPFRLO_GPF22_Pos 22           /**< \brief (FLASHCALW_FGPFRLO) General Purpose Fuse 22 */
#define FLASHCALW_FGPFRLO_GPF22     (_U_(0x1) << FLASHCALW_FGPFRLO_GPF22_Pos)
#define FLASHCALW_FGPFRLO_GPF23_Pos 23           /**< \brief (FLASHCALW_FGPFRLO) General Purpose Fuse 23 */
#define FLASHCALW_FGPFRLO_GPF23     (_U_(0x1) << FLASHCALW_FGPFRLO_GPF23_Pos)
#define FLASHCALW_FGPFRLO_GPF24_Pos 24           /**< \brief (FLASHCALW_FGPFRLO) General Purpose Fuse 24 */
#define FLASHCALW_FGPFRLO_GPF24     (_U_(0x1) << FLASHCALW_FGPFRLO_GPF24_Pos)
#define FLASHCALW_FGPFRLO_GPF25_Pos 25           /**< \brief (FLASHCALW_FGPFRLO) General Purpose Fuse 25 */
#define FLASHCALW_FGPFRLO_GPF25     (_U_(0x1) << FLASHCALW_FGPFRLO_GPF25_Pos)
#define FLASHCALW_FGPFRLO_GPF26_Pos 26           /**< \brief (FLASHCALW_FGPFRLO) General Purpose Fuse 26 */
#define FLASHCALW_FGPFRLO_GPF26     (_U_(0x1) << FLASHCALW_FGPFRLO_GPF26_Pos)
#define FLASHCALW_FGPFRLO_GPF27_Pos 27           /**< \brief (FLASHCALW_FGPFRLO) General Purpose Fuse 27 */
#define FLASHCALW_FGPFRLO_GPF27     (_U_(0x1) << FLASHCALW_FGPFRLO_GPF27_Pos)
#define FLASHCALW_FGPFRLO_GPF28_Pos 28           /**< \brief (FLASHCALW_FGPFRLO) General Purpose Fuse 28 */
#define FLASHCALW_FGPFRLO_GPF28     (_U_(0x1) << FLASHCALW_FGPFRLO_GPF28_Pos)
#define FLASHCALW_FGPFRLO_GPF29_Pos 29           /**< \brief (FLASHCALW_FGPFRLO) General Purpose Fuse 29 */
#define FLASHCALW_FGPFRLO_GPF29     (_U_(0x1) << FLASHCALW_FGPFRLO_GPF29_Pos)
#define FLASHCALW_FGPFRLO_GPF30_Pos 30           /**< \brief (FLASHCALW_FGPFRLO) General Purpose Fuse 30 */
#define FLASHCALW_FGPFRLO_GPF30     (_U_(0x1) << FLASHCALW_FGPFRLO_GPF30_Pos)
#define FLASHCALW_FGPFRLO_GPF31_Pos 31           /**< \brief (FLASHCALW_FGPFRLO) General Purpose Fuse 31 */
#define FLASHCALW_FGPFRLO_GPF31     (_U_(0x1) << FLASHCALW_FGPFRLO_GPF31_Pos)
#define FLASHCALW_FGPFRLO_MASK      _U_(0xFFFFFFFF) /**< \brief (FLASHCALW_FGPFRLO) MASK Register */

/** \brief FLASHCALW APB hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {
  __IO uint32_t FCR;         /**< \brief Offset: 0x00 (R/W 32) Flash Controller Control Register */
  __IO uint32_t FCMD;        /**< \brief Offset: 0x04 (R/W 32) Flash Controller Command Register */
  __IO uint32_t FSR;         /**< \brief Offset: 0x08 (R/W 32) Flash Controller Status Register */
  __I  uint32_t FPR;         /**< \brief Offset: 0x0C (R/  32) Flash Controller Parameter Register */
  __I  uint32_t VERSION;     /**< \brief Offset: 0x10 (R/  32) Flash Controller Version Register */
  __IO uint32_t FGPFRHI;     /**< \brief Offset: 0x14 (R/W 32) Flash Controller General Purpose Fuse Register High */
  __IO uint32_t FGPFRLO;     /**< \brief Offset: 0x18 (R/W 32) Flash Controller General Purpose Fuse Register Low */
} Flashcalw;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SECTION_FLASHCALW_FROW

#define SECTION_FLASHCALW_USER

/*@}*/

/* ************************************************************************** */
/**  SOFTWARE PERIPHERAL API DEFINITION FOR NON-VOLATILE FUSES */
/* ************************************************************************** */
/** \addtogroup fuses_api Peripheral Software API */
/*@{*/


#define FUSES_BOD18ACTION_ADDR      HFLASHC_USER
#define FUSES_BOD18ACTION_Pos       18           /**< \brief (HFLASHC_USER) BOD18 Action */
#define FUSES_BOD18ACTION_Msk       (_U_(0x3) << FUSES_BOD18ACTION_Pos)
#define FUSES_BOD18ACTION(value)    (FUSES_BOD18ACTION_Msk & ((value) << FUSES_BOD18ACTION_Pos))

#define FUSES_BOD18EN_ADDR          HFLASHC_USER
#define FUSES_BOD18EN_Pos           17           /**< \brief (HFLASHC_USER) BOD18 Enable */
#define FUSES_BOD18EN_Msk           (_U_(0x1) << FUSES_BOD18EN_Pos)

#define FUSES_BOD18HYST_ADDR        HFLASHC_USER
#define FUSES_BOD18HYST_Pos         20           /**< \brief (HFLASHC_USER) BOD18 Hysteresis */
#define FUSES_BOD18HYST_Msk         (_U_(0x1) << FUSES_BOD18HYST_Pos)

#define FUSES_BOD18LV_ADDR          HFLASHC_USER
#define FUSES_BOD18LV_Pos           11           /**< \brief (HFLASHC_USER) BOD18 Level */
#define FUSES_BOD18LV_Msk           (_U_(0x3F) << FUSES_BOD18LV_Pos)
#define FUSES_BOD18LV(value)        (FUSES_BOD18LV_Msk & ((value) << FUSES_BOD18LV_Pos))

#define FUSES_BOD33ACTION_ADDR      HFLASHC_USER
#define FUSES_BOD33ACTION_Pos       8            /**< \brief (HFLASHC_USER) BOD33 Action */
#define FUSES_BOD33ACTION_Msk       (_U_(0x3) << FUSES_BOD33ACTION_Pos)
#define FUSES_BOD33ACTION(value)    (FUSES_BOD33ACTION_Msk & ((value) << FUSES_BOD33ACTION_Pos))

#define FUSES_BOD33EN_ADDR          HFLASHC_USER
#define FUSES_BOD33EN_Pos           7            /**< \brief (HFLASHC_USER) BOD33 Enable */
#define FUSES_BOD33EN_Msk           (_U_(0x1) << FUSES_BOD33EN_Pos)

#define FUSES_BOD33LEVEL_ADDR       HFLASHC_USER
#define FUSES_BOD33LEVEL_Pos        1            /**< \brief (HFLASHC_USER) BOD33 Level */
#define FUSES_BOD33LEVEL_Msk        (_U_(0x3F) << FUSES_BOD33LEVEL_Pos)
#define FUSES_BOD33LEVEL(value)     (FUSES_BOD33LEVEL_Msk & ((value) << FUSES_BOD33LEVEL_Pos))

#define FUSES_BOD33_HYST_ADDR       HFLASHC_USER
#define FUSES_BOD33_HYST_Pos        10           /**< \brief (HFLASHC_USER) BOD33 Hysteresis */
#define FUSES_BOD33_HYST_Msk        (_U_(0x1) << FUSES_BOD33_HYST_Pos)

#define WDT_FUSES_WDTAUTO_ADDR      HFLASHC_USER
#define WDT_FUSES_WDTAUTO_Pos       0            /**< \brief (HFLASHC_USER) Watchdog Enabled at Reset */
#define WDT_FUSES_WDTAUTO_Msk       (_U_(0x1) << WDT_FUSES_WDTAUTO_Pos)

/*@}*/

#endif /* _SAM4L_FLASHCALW_COMPONENT_ */
