/**
 * \file
 *
 * \brief Component description for USBC
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

#ifndef _SAM4L_USBC_COMPONENT_
#define _SAM4L_USBC_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR USBC */
/* ========================================================================== */
/** \addtogroup SAM4L_USBC USB 2.0 Interface */
/*@{*/

#define USBC_I7553
#define REV_USBC                    0x310

/* -------- USBC_UDCON : (USBC Offset: 0x000) (R/W 32) Device General Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t UADD:7;           /*!< bit:  0.. 6  USB Address                        */
    uint32_t ADDEN:1;          /*!< bit:      7  Address Enable                     */
    uint32_t DETACH:1;         /*!< bit:      8  Detach                             */
    uint32_t RMWKUP:1;         /*!< bit:      9  Remote Wake-Up                     */
    uint32_t SPDCONF:2;        /*!< bit: 10..11  Speed configuration                */
    uint32_t LS:1;             /*!< bit:     12  Low Speed Mode Force               */
    uint32_t TSTJ:1;           /*!< bit:     13  Test mode J                        */
    uint32_t TSTK:1;           /*!< bit:     14  Test mode K                        */
    uint32_t TSTPCKT:1;        /*!< bit:     15  Test Packet mode                   */
    uint32_t OPMODE2:1;        /*!< bit:     16  Specific Operational mode          */
    uint32_t GNAK:1;           /*!< bit:     17  Global NAK                         */
    uint32_t :14;              /*!< bit: 18..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UDCON_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UDCON_OFFSET           0x000        /**< \brief (USBC_UDCON offset) Device General Control Register */
#define USBC_UDCON_RESETVALUE       _U_(0x00000100); /**< \brief (USBC_UDCON reset_value) Device General Control Register */

#define USBC_UDCON_UADD_Pos         0            /**< \brief (USBC_UDCON) USB Address */
#define USBC_UDCON_UADD_Msk         (_U_(0x7F) << USBC_UDCON_UADD_Pos)
#define USBC_UDCON_UADD(value)      (USBC_UDCON_UADD_Msk & ((value) << USBC_UDCON_UADD_Pos))
#define USBC_UDCON_ADDEN_Pos        7            /**< \brief (USBC_UDCON) Address Enable */
#define USBC_UDCON_ADDEN            (_U_(0x1) << USBC_UDCON_ADDEN_Pos)
#define USBC_UDCON_DETACH_Pos       8            /**< \brief (USBC_UDCON) Detach */
#define USBC_UDCON_DETACH           (_U_(0x1) << USBC_UDCON_DETACH_Pos)
#define USBC_UDCON_RMWKUP_Pos       9            /**< \brief (USBC_UDCON) Remote Wake-Up */
#define USBC_UDCON_RMWKUP           (_U_(0x1) << USBC_UDCON_RMWKUP_Pos)
#define USBC_UDCON_SPDCONF_Pos      10           /**< \brief (USBC_UDCON) Speed configuration */
#define USBC_UDCON_SPDCONF_Msk      (_U_(0x3) << USBC_UDCON_SPDCONF_Pos)
#define USBC_UDCON_SPDCONF(value)   (USBC_UDCON_SPDCONF_Msk & ((value) << USBC_UDCON_SPDCONF_Pos))
#define USBC_UDCON_LS_Pos           12           /**< \brief (USBC_UDCON) Low Speed Mode Force */
#define USBC_UDCON_LS               (_U_(0x1) << USBC_UDCON_LS_Pos)
#define USBC_UDCON_TSTJ_Pos         13           /**< \brief (USBC_UDCON) Test mode J */
#define USBC_UDCON_TSTJ             (_U_(0x1) << USBC_UDCON_TSTJ_Pos)
#define USBC_UDCON_TSTK_Pos         14           /**< \brief (USBC_UDCON) Test mode K */
#define USBC_UDCON_TSTK             (_U_(0x1) << USBC_UDCON_TSTK_Pos)
#define USBC_UDCON_TSTPCKT_Pos      15           /**< \brief (USBC_UDCON) Test Packet mode */
#define USBC_UDCON_TSTPCKT          (_U_(0x1) << USBC_UDCON_TSTPCKT_Pos)
#define USBC_UDCON_OPMODE2_Pos      16           /**< \brief (USBC_UDCON) Specific Operational mode */
#define USBC_UDCON_OPMODE2          (_U_(0x1) << USBC_UDCON_OPMODE2_Pos)
#define USBC_UDCON_GNAK_Pos         17           /**< \brief (USBC_UDCON) Global NAK */
#define USBC_UDCON_GNAK             (_U_(0x1) << USBC_UDCON_GNAK_Pos)
#define USBC_UDCON_MASK             _U_(0x0003FFFF) /**< \brief (USBC_UDCON) MASK Register */

/* -------- USBC_UDINT : (USBC Offset: 0x004) (R/  32) Device Global Interupt Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t SUSP:1;           /*!< bit:      0  Suspend Interrupt                  */
    uint32_t MSOF:1;           /*!< bit:      1  Micro Start of Frame Interrupt     */
    uint32_t SOF:1;            /*!< bit:      2  Start of Frame Interrupt           */
    uint32_t EORST:1;          /*!< bit:      3  End of Reset Interrupt             */
    uint32_t WAKEUP:1;         /*!< bit:      4  Wake-Up Interrupt                  */
    uint32_t EORSM:1;          /*!< bit:      5  End Of Resume Interrupt            */
    uint32_t UPRSM:1;          /*!< bit:      6  Upstream Resume Interrupt          */
    uint32_t :5;               /*!< bit:  7..11  Reserved                           */
    uint32_t EP0INT:1;         /*!< bit:     12  Endpoint 0 Interrupt               */
    uint32_t EP1INT:1;         /*!< bit:     13  Endpoint 1 Interrupt               */
    uint32_t EP2INT:1;         /*!< bit:     14  Endpoint 2 Interrupt               */
    uint32_t EP3INT:1;         /*!< bit:     15  Endpoint 3 Interrupt               */
    uint32_t EP4INT:1;         /*!< bit:     16  Endpoint 4 Interrupt               */
    uint32_t EP5INT:1;         /*!< bit:     17  Endpoint 5 Interrupt               */
    uint32_t EP6INT:1;         /*!< bit:     18  Endpoint 6 Interrupt               */
    uint32_t EP7INT:1;         /*!< bit:     19  Endpoint 7 Interrupt               */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UDINT_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UDINT_OFFSET           0x004        /**< \brief (USBC_UDINT offset) Device Global Interupt Register */
#define USBC_UDINT_RESETVALUE       _U_(0x00000000); /**< \brief (USBC_UDINT reset_value) Device Global Interupt Register */

#define USBC_UDINT_SUSP_Pos         0            /**< \brief (USBC_UDINT) Suspend Interrupt */
#define USBC_UDINT_SUSP             (_U_(0x1) << USBC_UDINT_SUSP_Pos)
#define USBC_UDINT_MSOF_Pos         1            /**< \brief (USBC_UDINT) Micro Start of Frame Interrupt */
#define USBC_UDINT_MSOF             (_U_(0x1) << USBC_UDINT_MSOF_Pos)
#define USBC_UDINT_SOF_Pos          2            /**< \brief (USBC_UDINT) Start of Frame Interrupt */
#define USBC_UDINT_SOF              (_U_(0x1) << USBC_UDINT_SOF_Pos)
#define USBC_UDINT_EORST_Pos        3            /**< \brief (USBC_UDINT) End of Reset Interrupt */
#define USBC_UDINT_EORST            (_U_(0x1) << USBC_UDINT_EORST_Pos)
#define USBC_UDINT_WAKEUP_Pos       4            /**< \brief (USBC_UDINT) Wake-Up Interrupt */
#define USBC_UDINT_WAKEUP           (_U_(0x1) << USBC_UDINT_WAKEUP_Pos)
#define USBC_UDINT_EORSM_Pos        5            /**< \brief (USBC_UDINT) End Of Resume Interrupt */
#define USBC_UDINT_EORSM            (_U_(0x1) << USBC_UDINT_EORSM_Pos)
#define USBC_UDINT_UPRSM_Pos        6            /**< \brief (USBC_UDINT) Upstream Resume Interrupt */
#define USBC_UDINT_UPRSM            (_U_(0x1) << USBC_UDINT_UPRSM_Pos)
#define USBC_UDINT_EP0INT_Pos       12           /**< \brief (USBC_UDINT) Endpoint 0 Interrupt */
#define USBC_UDINT_EP0INT           (_U_(0x1) << USBC_UDINT_EP0INT_Pos)
#define USBC_UDINT_EP1INT_Pos       13           /**< \brief (USBC_UDINT) Endpoint 1 Interrupt */
#define USBC_UDINT_EP1INT           (_U_(0x1) << USBC_UDINT_EP1INT_Pos)
#define USBC_UDINT_EP2INT_Pos       14           /**< \brief (USBC_UDINT) Endpoint 2 Interrupt */
#define USBC_UDINT_EP2INT           (_U_(0x1) << USBC_UDINT_EP2INT_Pos)
#define USBC_UDINT_EP3INT_Pos       15           /**< \brief (USBC_UDINT) Endpoint 3 Interrupt */
#define USBC_UDINT_EP3INT           (_U_(0x1) << USBC_UDINT_EP3INT_Pos)
#define USBC_UDINT_EP4INT_Pos       16           /**< \brief (USBC_UDINT) Endpoint 4 Interrupt */
#define USBC_UDINT_EP4INT           (_U_(0x1) << USBC_UDINT_EP4INT_Pos)
#define USBC_UDINT_EP5INT_Pos       17           /**< \brief (USBC_UDINT) Endpoint 5 Interrupt */
#define USBC_UDINT_EP5INT           (_U_(0x1) << USBC_UDINT_EP5INT_Pos)
#define USBC_UDINT_EP6INT_Pos       18           /**< \brief (USBC_UDINT) Endpoint 6 Interrupt */
#define USBC_UDINT_EP6INT           (_U_(0x1) << USBC_UDINT_EP6INT_Pos)
#define USBC_UDINT_EP7INT_Pos       19           /**< \brief (USBC_UDINT) Endpoint 7 Interrupt */
#define USBC_UDINT_EP7INT           (_U_(0x1) << USBC_UDINT_EP7INT_Pos)
#define USBC_UDINT_MASK             _U_(0x000FF07F) /**< \brief (USBC_UDINT) MASK Register */

/* -------- USBC_UDINTCLR : (USBC Offset: 0x008) ( /W 32) Device Global Interrupt Clear Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t SUSPC:1;          /*!< bit:      0  SUSP Interrupt Clear               */
    uint32_t MSOFC:1;          /*!< bit:      1  MSOF Interrupt Clear               */
    uint32_t SOFC:1;           /*!< bit:      2  SOF Interrupt Clear                */
    uint32_t EORSTC:1;         /*!< bit:      3  EORST Interrupt Clear              */
    uint32_t WAKEUPC:1;        /*!< bit:      4  WAKEUP Interrupt Clear             */
    uint32_t EORSMC:1;         /*!< bit:      5  EORSM Interrupt Clear              */
    uint32_t UPRSMC:1;         /*!< bit:      6  UPRSM Interrupt Clear              */
    uint32_t :25;              /*!< bit:  7..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UDINTCLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UDINTCLR_OFFSET        0x008        /**< \brief (USBC_UDINTCLR offset) Device Global Interrupt Clear Register */
#define USBC_UDINTCLR_RESETVALUE    _U_(0x00000000); /**< \brief (USBC_UDINTCLR reset_value) Device Global Interrupt Clear Register */

#define USBC_UDINTCLR_SUSPC_Pos     0            /**< \brief (USBC_UDINTCLR) SUSP Interrupt Clear */
#define USBC_UDINTCLR_SUSPC         (_U_(0x1) << USBC_UDINTCLR_SUSPC_Pos)
#define USBC_UDINTCLR_MSOFC_Pos     1            /**< \brief (USBC_UDINTCLR) MSOF Interrupt Clear */
#define USBC_UDINTCLR_MSOFC         (_U_(0x1) << USBC_UDINTCLR_MSOFC_Pos)
#define USBC_UDINTCLR_SOFC_Pos      2            /**< \brief (USBC_UDINTCLR) SOF Interrupt Clear */
#define USBC_UDINTCLR_SOFC          (_U_(0x1) << USBC_UDINTCLR_SOFC_Pos)
#define USBC_UDINTCLR_EORSTC_Pos    3            /**< \brief (USBC_UDINTCLR) EORST Interrupt Clear */
#define USBC_UDINTCLR_EORSTC        (_U_(0x1) << USBC_UDINTCLR_EORSTC_Pos)
#define USBC_UDINTCLR_WAKEUPC_Pos   4            /**< \brief (USBC_UDINTCLR) WAKEUP Interrupt Clear */
#define USBC_UDINTCLR_WAKEUPC       (_U_(0x1) << USBC_UDINTCLR_WAKEUPC_Pos)
#define USBC_UDINTCLR_EORSMC_Pos    5            /**< \brief (USBC_UDINTCLR) EORSM Interrupt Clear */
#define USBC_UDINTCLR_EORSMC        (_U_(0x1) << USBC_UDINTCLR_EORSMC_Pos)
#define USBC_UDINTCLR_UPRSMC_Pos    6            /**< \brief (USBC_UDINTCLR) UPRSM Interrupt Clear */
#define USBC_UDINTCLR_UPRSMC        (_U_(0x1) << USBC_UDINTCLR_UPRSMC_Pos)
#define USBC_UDINTCLR_MASK          _U_(0x0000007F) /**< \brief (USBC_UDINTCLR) MASK Register */

/* -------- USBC_UDINTSET : (USBC Offset: 0x00C) ( /W 32) Device Global Interrupt Set Regsiter -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t SUSPS:1;          /*!< bit:      0  SUSP Interrupt Set                 */
    uint32_t MSOFS:1;          /*!< bit:      1  MSOF Interrupt Set                 */
    uint32_t SOFS:1;           /*!< bit:      2  SOF Interrupt Set                  */
    uint32_t EORSTS:1;         /*!< bit:      3  EORST Interrupt Set                */
    uint32_t WAKEUPS:1;        /*!< bit:      4  WAKEUP Interrupt Set               */
    uint32_t EORSMS:1;         /*!< bit:      5  EORSM Interrupt Set                */
    uint32_t UPRSMS:1;         /*!< bit:      6  UPRSM Interrupt Set                */
    uint32_t :25;              /*!< bit:  7..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UDINTSET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UDINTSET_OFFSET        0x00C        /**< \brief (USBC_UDINTSET offset) Device Global Interrupt Set Regsiter */
#define USBC_UDINTSET_RESETVALUE    _U_(0x00000000); /**< \brief (USBC_UDINTSET reset_value) Device Global Interrupt Set Regsiter */

#define USBC_UDINTSET_SUSPS_Pos     0            /**< \brief (USBC_UDINTSET) SUSP Interrupt Set */
#define USBC_UDINTSET_SUSPS         (_U_(0x1) << USBC_UDINTSET_SUSPS_Pos)
#define USBC_UDINTSET_MSOFS_Pos     1            /**< \brief (USBC_UDINTSET) MSOF Interrupt Set */
#define USBC_UDINTSET_MSOFS         (_U_(0x1) << USBC_UDINTSET_MSOFS_Pos)
#define USBC_UDINTSET_SOFS_Pos      2            /**< \brief (USBC_UDINTSET) SOF Interrupt Set */
#define USBC_UDINTSET_SOFS          (_U_(0x1) << USBC_UDINTSET_SOFS_Pos)
#define USBC_UDINTSET_EORSTS_Pos    3            /**< \brief (USBC_UDINTSET) EORST Interrupt Set */
#define USBC_UDINTSET_EORSTS        (_U_(0x1) << USBC_UDINTSET_EORSTS_Pos)
#define USBC_UDINTSET_WAKEUPS_Pos   4            /**< \brief (USBC_UDINTSET) WAKEUP Interrupt Set */
#define USBC_UDINTSET_WAKEUPS       (_U_(0x1) << USBC_UDINTSET_WAKEUPS_Pos)
#define USBC_UDINTSET_EORSMS_Pos    5            /**< \brief (USBC_UDINTSET) EORSM Interrupt Set */
#define USBC_UDINTSET_EORSMS        (_U_(0x1) << USBC_UDINTSET_EORSMS_Pos)
#define USBC_UDINTSET_UPRSMS_Pos    6            /**< \brief (USBC_UDINTSET) UPRSM Interrupt Set */
#define USBC_UDINTSET_UPRSMS        (_U_(0x1) << USBC_UDINTSET_UPRSMS_Pos)
#define USBC_UDINTSET_MASK          _U_(0x0000007F) /**< \brief (USBC_UDINTSET) MASK Register */

/* -------- USBC_UDINTE : (USBC Offset: 0x010) (R/  32) Device Global Interrupt Enable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t SUSPE:1;          /*!< bit:      0  SUSP Interrupt Enable              */
    uint32_t MSOFE:1;          /*!< bit:      1  MSOF Interrupt Enable              */
    uint32_t SOFE:1;           /*!< bit:      2  SOF Interrupt Enable               */
    uint32_t EORSTE:1;         /*!< bit:      3  EORST Interrupt Enable             */
    uint32_t WAKEUPE:1;        /*!< bit:      4  WAKEUP Interrupt Enable            */
    uint32_t EORSME:1;         /*!< bit:      5  EORSM Interrupt Enable             */
    uint32_t UPRSME:1;         /*!< bit:      6  UPRSM Interrupt Enable             */
    uint32_t :5;               /*!< bit:  7..11  Reserved                           */
    uint32_t EP0INTE:1;        /*!< bit:     12  EP0INT Interrupt Enable            */
    uint32_t EP1INTE:1;        /*!< bit:     13  EP1INT Interrupt Enable            */
    uint32_t EP2INTE:1;        /*!< bit:     14  EP2INT Interrupt Enable            */
    uint32_t EP3INTE:1;        /*!< bit:     15  EP3INT Interrupt Enable            */
    uint32_t EP4INTE:1;        /*!< bit:     16  EP4INT Interrupt Enable            */
    uint32_t EP5INTE:1;        /*!< bit:     17  EP5INT Interrupt Enable            */
    uint32_t EP6INTE:1;        /*!< bit:     18  EP6INT Interrupt Enable            */
    uint32_t EP7INTE:1;        /*!< bit:     19  EP7INT Interrupt Enable            */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UDINTE_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UDINTE_OFFSET          0x010        /**< \brief (USBC_UDINTE offset) Device Global Interrupt Enable Register */
#define USBC_UDINTE_RESETVALUE      _U_(0x00000000); /**< \brief (USBC_UDINTE reset_value) Device Global Interrupt Enable Register */

#define USBC_UDINTE_SUSPE_Pos       0            /**< \brief (USBC_UDINTE) SUSP Interrupt Enable */
#define USBC_UDINTE_SUSPE           (_U_(0x1) << USBC_UDINTE_SUSPE_Pos)
#define USBC_UDINTE_MSOFE_Pos       1            /**< \brief (USBC_UDINTE) MSOF Interrupt Enable */
#define USBC_UDINTE_MSOFE           (_U_(0x1) << USBC_UDINTE_MSOFE_Pos)
#define USBC_UDINTE_SOFE_Pos        2            /**< \brief (USBC_UDINTE) SOF Interrupt Enable */
#define USBC_UDINTE_SOFE            (_U_(0x1) << USBC_UDINTE_SOFE_Pos)
#define USBC_UDINTE_EORSTE_Pos      3            /**< \brief (USBC_UDINTE) EORST Interrupt Enable */
#define USBC_UDINTE_EORSTE          (_U_(0x1) << USBC_UDINTE_EORSTE_Pos)
#define USBC_UDINTE_WAKEUPE_Pos     4            /**< \brief (USBC_UDINTE) WAKEUP Interrupt Enable */
#define USBC_UDINTE_WAKEUPE         (_U_(0x1) << USBC_UDINTE_WAKEUPE_Pos)
#define USBC_UDINTE_EORSME_Pos      5            /**< \brief (USBC_UDINTE) EORSM Interrupt Enable */
#define USBC_UDINTE_EORSME          (_U_(0x1) << USBC_UDINTE_EORSME_Pos)
#define USBC_UDINTE_UPRSME_Pos      6            /**< \brief (USBC_UDINTE) UPRSM Interrupt Enable */
#define USBC_UDINTE_UPRSME          (_U_(0x1) << USBC_UDINTE_UPRSME_Pos)
#define USBC_UDINTE_EP0INTE_Pos     12           /**< \brief (USBC_UDINTE) EP0INT Interrupt Enable */
#define USBC_UDINTE_EP0INTE         (_U_(0x1) << USBC_UDINTE_EP0INTE_Pos)
#define USBC_UDINTE_EP1INTE_Pos     13           /**< \brief (USBC_UDINTE) EP1INT Interrupt Enable */
#define USBC_UDINTE_EP1INTE         (_U_(0x1) << USBC_UDINTE_EP1INTE_Pos)
#define USBC_UDINTE_EP2INTE_Pos     14           /**< \brief (USBC_UDINTE) EP2INT Interrupt Enable */
#define USBC_UDINTE_EP2INTE         (_U_(0x1) << USBC_UDINTE_EP2INTE_Pos)
#define USBC_UDINTE_EP3INTE_Pos     15           /**< \brief (USBC_UDINTE) EP3INT Interrupt Enable */
#define USBC_UDINTE_EP3INTE         (_U_(0x1) << USBC_UDINTE_EP3INTE_Pos)
#define USBC_UDINTE_EP4INTE_Pos     16           /**< \brief (USBC_UDINTE) EP4INT Interrupt Enable */
#define USBC_UDINTE_EP4INTE         (_U_(0x1) << USBC_UDINTE_EP4INTE_Pos)
#define USBC_UDINTE_EP5INTE_Pos     17           /**< \brief (USBC_UDINTE) EP5INT Interrupt Enable */
#define USBC_UDINTE_EP5INTE         (_U_(0x1) << USBC_UDINTE_EP5INTE_Pos)
#define USBC_UDINTE_EP6INTE_Pos     18           /**< \brief (USBC_UDINTE) EP6INT Interrupt Enable */
#define USBC_UDINTE_EP6INTE         (_U_(0x1) << USBC_UDINTE_EP6INTE_Pos)
#define USBC_UDINTE_EP7INTE_Pos     19           /**< \brief (USBC_UDINTE) EP7INT Interrupt Enable */
#define USBC_UDINTE_EP7INTE         (_U_(0x1) << USBC_UDINTE_EP7INTE_Pos)
#define USBC_UDINTE_MASK            _U_(0x000FF07F) /**< \brief (USBC_UDINTE) MASK Register */

/* -------- USBC_UDINTECLR : (USBC Offset: 0x014) ( /W 32) Device Global Interrupt Enable Clear Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t SUSPEC:1;         /*!< bit:      0  SUSP Interrupt Enable Clear        */
    uint32_t MSOFEC:1;         /*!< bit:      1  MSOF Interrupt Enable Clear        */
    uint32_t SOFEC:1;          /*!< bit:      2  SOF Interrupt Enable Clear         */
    uint32_t EORSTEC:1;        /*!< bit:      3  EORST Interrupt Enable Clear       */
    uint32_t WAKEUPEC:1;       /*!< bit:      4  WAKEUP Interrupt Enable Clear      */
    uint32_t EORSMEC:1;        /*!< bit:      5  EORSM Interrupt Enable Clear       */
    uint32_t UPRSMEC:1;        /*!< bit:      6  UPRSM Interrupt Enable Clear       */
    uint32_t :5;               /*!< bit:  7..11  Reserved                           */
    uint32_t EP0INTEC:1;       /*!< bit:     12  EP0INT Interrupt Enable Clear      */
    uint32_t EP1INTEC:1;       /*!< bit:     13  EP1INT Interrupt Enable Clear      */
    uint32_t EP2INTEC:1;       /*!< bit:     14  EP2INT Interrupt Enable Clear      */
    uint32_t EP3INTEC:1;       /*!< bit:     15  EP3INT Interrupt Enable Clear      */
    uint32_t EP4INTEC:1;       /*!< bit:     16  EP4INT Interrupt Enable Clear      */
    uint32_t EP5INTEC:1;       /*!< bit:     17  EP5INT Interrupt Enable Clear      */
    uint32_t EP6INTEC:1;       /*!< bit:     18  EP6INT Interrupt Enable Clear      */
    uint32_t EP7INTEC:1;       /*!< bit:     19  EP7INT Interrupt Enable Clear      */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UDINTECLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UDINTECLR_OFFSET       0x014        /**< \brief (USBC_UDINTECLR offset) Device Global Interrupt Enable Clear Register */
#define USBC_UDINTECLR_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UDINTECLR reset_value) Device Global Interrupt Enable Clear Register */

#define USBC_UDINTECLR_SUSPEC_Pos   0            /**< \brief (USBC_UDINTECLR) SUSP Interrupt Enable Clear */
#define USBC_UDINTECLR_SUSPEC       (_U_(0x1) << USBC_UDINTECLR_SUSPEC_Pos)
#define USBC_UDINTECLR_MSOFEC_Pos   1            /**< \brief (USBC_UDINTECLR) MSOF Interrupt Enable Clear */
#define USBC_UDINTECLR_MSOFEC       (_U_(0x1) << USBC_UDINTECLR_MSOFEC_Pos)
#define USBC_UDINTECLR_SOFEC_Pos    2            /**< \brief (USBC_UDINTECLR) SOF Interrupt Enable Clear */
#define USBC_UDINTECLR_SOFEC        (_U_(0x1) << USBC_UDINTECLR_SOFEC_Pos)
#define USBC_UDINTECLR_EORSTEC_Pos  3            /**< \brief (USBC_UDINTECLR) EORST Interrupt Enable Clear */
#define USBC_UDINTECLR_EORSTEC      (_U_(0x1) << USBC_UDINTECLR_EORSTEC_Pos)
#define USBC_UDINTECLR_WAKEUPEC_Pos 4            /**< \brief (USBC_UDINTECLR) WAKEUP Interrupt Enable Clear */
#define USBC_UDINTECLR_WAKEUPEC     (_U_(0x1) << USBC_UDINTECLR_WAKEUPEC_Pos)
#define USBC_UDINTECLR_EORSMEC_Pos  5            /**< \brief (USBC_UDINTECLR) EORSM Interrupt Enable Clear */
#define USBC_UDINTECLR_EORSMEC      (_U_(0x1) << USBC_UDINTECLR_EORSMEC_Pos)
#define USBC_UDINTECLR_UPRSMEC_Pos  6            /**< \brief (USBC_UDINTECLR) UPRSM Interrupt Enable Clear */
#define USBC_UDINTECLR_UPRSMEC      (_U_(0x1) << USBC_UDINTECLR_UPRSMEC_Pos)
#define USBC_UDINTECLR_EP0INTEC_Pos 12           /**< \brief (USBC_UDINTECLR) EP0INT Interrupt Enable Clear */
#define USBC_UDINTECLR_EP0INTEC     (_U_(0x1) << USBC_UDINTECLR_EP0INTEC_Pos)
#define USBC_UDINTECLR_EP1INTEC_Pos 13           /**< \brief (USBC_UDINTECLR) EP1INT Interrupt Enable Clear */
#define USBC_UDINTECLR_EP1INTEC     (_U_(0x1) << USBC_UDINTECLR_EP1INTEC_Pos)
#define USBC_UDINTECLR_EP2INTEC_Pos 14           /**< \brief (USBC_UDINTECLR) EP2INT Interrupt Enable Clear */
#define USBC_UDINTECLR_EP2INTEC     (_U_(0x1) << USBC_UDINTECLR_EP2INTEC_Pos)
#define USBC_UDINTECLR_EP3INTEC_Pos 15           /**< \brief (USBC_UDINTECLR) EP3INT Interrupt Enable Clear */
#define USBC_UDINTECLR_EP3INTEC     (_U_(0x1) << USBC_UDINTECLR_EP3INTEC_Pos)
#define USBC_UDINTECLR_EP4INTEC_Pos 16           /**< \brief (USBC_UDINTECLR) EP4INT Interrupt Enable Clear */
#define USBC_UDINTECLR_EP4INTEC     (_U_(0x1) << USBC_UDINTECLR_EP4INTEC_Pos)
#define USBC_UDINTECLR_EP5INTEC_Pos 17           /**< \brief (USBC_UDINTECLR) EP5INT Interrupt Enable Clear */
#define USBC_UDINTECLR_EP5INTEC     (_U_(0x1) << USBC_UDINTECLR_EP5INTEC_Pos)
#define USBC_UDINTECLR_EP6INTEC_Pos 18           /**< \brief (USBC_UDINTECLR) EP6INT Interrupt Enable Clear */
#define USBC_UDINTECLR_EP6INTEC     (_U_(0x1) << USBC_UDINTECLR_EP6INTEC_Pos)
#define USBC_UDINTECLR_EP7INTEC_Pos 19           /**< \brief (USBC_UDINTECLR) EP7INT Interrupt Enable Clear */
#define USBC_UDINTECLR_EP7INTEC     (_U_(0x1) << USBC_UDINTECLR_EP7INTEC_Pos)
#define USBC_UDINTECLR_MASK         _U_(0x000FF07F) /**< \brief (USBC_UDINTECLR) MASK Register */

/* -------- USBC_UDINTESET : (USBC Offset: 0x018) ( /W 32) Device Global Interrupt Enable Set Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t SUSPES:1;         /*!< bit:      0  SUSP Interrupt Enable Set          */
    uint32_t MSOFES:1;         /*!< bit:      1  MSOF Interrupt Enable Set          */
    uint32_t SOFES:1;          /*!< bit:      2  SOF Interrupt Enable Set           */
    uint32_t EORSTES:1;        /*!< bit:      3  EORST Interrupt Enable Set         */
    uint32_t WAKEUPES:1;       /*!< bit:      4  WAKEUP Interrupt Enable Set        */
    uint32_t EORSMES:1;        /*!< bit:      5  EORSM Interrupt Enable Set         */
    uint32_t UPRSMES:1;        /*!< bit:      6  UPRSM Interrupt Enable Set         */
    uint32_t :5;               /*!< bit:  7..11  Reserved                           */
    uint32_t EP0INTES:1;       /*!< bit:     12  EP0INT Interrupt Enable Set        */
    uint32_t EP1INTES:1;       /*!< bit:     13  EP1INT Interrupt Enable Set        */
    uint32_t EP2INTES:1;       /*!< bit:     14  EP2INT Interrupt Enable Set        */
    uint32_t EP3INTES:1;       /*!< bit:     15  EP3INT Interrupt Enable Set        */
    uint32_t EP4INTES:1;       /*!< bit:     16  EP4INT Interrupt Enable Set        */
    uint32_t EP5INTES:1;       /*!< bit:     17  EP5INT Interrupt Enable Set        */
    uint32_t EP6INTES:1;       /*!< bit:     18  EP6INT Interrupt Enable Set        */
    uint32_t EP7INTES:1;       /*!< bit:     19  EP7INT Interrupt Enable Set        */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UDINTESET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UDINTESET_OFFSET       0x018        /**< \brief (USBC_UDINTESET offset) Device Global Interrupt Enable Set Register */
#define USBC_UDINTESET_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UDINTESET reset_value) Device Global Interrupt Enable Set Register */

#define USBC_UDINTESET_SUSPES_Pos   0            /**< \brief (USBC_UDINTESET) SUSP Interrupt Enable Set */
#define USBC_UDINTESET_SUSPES       (_U_(0x1) << USBC_UDINTESET_SUSPES_Pos)
#define USBC_UDINTESET_MSOFES_Pos   1            /**< \brief (USBC_UDINTESET) MSOF Interrupt Enable Set */
#define USBC_UDINTESET_MSOFES       (_U_(0x1) << USBC_UDINTESET_MSOFES_Pos)
#define USBC_UDINTESET_SOFES_Pos    2            /**< \brief (USBC_UDINTESET) SOF Interrupt Enable Set */
#define USBC_UDINTESET_SOFES        (_U_(0x1) << USBC_UDINTESET_SOFES_Pos)
#define USBC_UDINTESET_EORSTES_Pos  3            /**< \brief (USBC_UDINTESET) EORST Interrupt Enable Set */
#define USBC_UDINTESET_EORSTES      (_U_(0x1) << USBC_UDINTESET_EORSTES_Pos)
#define USBC_UDINTESET_WAKEUPES_Pos 4            /**< \brief (USBC_UDINTESET) WAKEUP Interrupt Enable Set */
#define USBC_UDINTESET_WAKEUPES     (_U_(0x1) << USBC_UDINTESET_WAKEUPES_Pos)
#define USBC_UDINTESET_EORSMES_Pos  5            /**< \brief (USBC_UDINTESET) EORSM Interrupt Enable Set */
#define USBC_UDINTESET_EORSMES      (_U_(0x1) << USBC_UDINTESET_EORSMES_Pos)
#define USBC_UDINTESET_UPRSMES_Pos  6            /**< \brief (USBC_UDINTESET) UPRSM Interrupt Enable Set */
#define USBC_UDINTESET_UPRSMES      (_U_(0x1) << USBC_UDINTESET_UPRSMES_Pos)
#define USBC_UDINTESET_EP0INTES_Pos 12           /**< \brief (USBC_UDINTESET) EP0INT Interrupt Enable Set */
#define USBC_UDINTESET_EP0INTES     (_U_(0x1) << USBC_UDINTESET_EP0INTES_Pos)
#define USBC_UDINTESET_EP1INTES_Pos 13           /**< \brief (USBC_UDINTESET) EP1INT Interrupt Enable Set */
#define USBC_UDINTESET_EP1INTES     (_U_(0x1) << USBC_UDINTESET_EP1INTES_Pos)
#define USBC_UDINTESET_EP2INTES_Pos 14           /**< \brief (USBC_UDINTESET) EP2INT Interrupt Enable Set */
#define USBC_UDINTESET_EP2INTES     (_U_(0x1) << USBC_UDINTESET_EP2INTES_Pos)
#define USBC_UDINTESET_EP3INTES_Pos 15           /**< \brief (USBC_UDINTESET) EP3INT Interrupt Enable Set */
#define USBC_UDINTESET_EP3INTES     (_U_(0x1) << USBC_UDINTESET_EP3INTES_Pos)
#define USBC_UDINTESET_EP4INTES_Pos 16           /**< \brief (USBC_UDINTESET) EP4INT Interrupt Enable Set */
#define USBC_UDINTESET_EP4INTES     (_U_(0x1) << USBC_UDINTESET_EP4INTES_Pos)
#define USBC_UDINTESET_EP5INTES_Pos 17           /**< \brief (USBC_UDINTESET) EP5INT Interrupt Enable Set */
#define USBC_UDINTESET_EP5INTES     (_U_(0x1) << USBC_UDINTESET_EP5INTES_Pos)
#define USBC_UDINTESET_EP6INTES_Pos 18           /**< \brief (USBC_UDINTESET) EP6INT Interrupt Enable Set */
#define USBC_UDINTESET_EP6INTES     (_U_(0x1) << USBC_UDINTESET_EP6INTES_Pos)
#define USBC_UDINTESET_EP7INTES_Pos 19           /**< \brief (USBC_UDINTESET) EP7INT Interrupt Enable Set */
#define USBC_UDINTESET_EP7INTES     (_U_(0x1) << USBC_UDINTESET_EP7INTES_Pos)
#define USBC_UDINTESET_MASK         _U_(0x000FF07F) /**< \brief (USBC_UDINTESET) MASK Register */

/* -------- USBC_UERST : (USBC Offset: 0x01C) (R/W 32) Endpoint Enable/Reset Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t EPEN0:1;          /*!< bit:      0  Endpoint0 Enable                   */
    uint32_t EPEN1:1;          /*!< bit:      1  Endpoint1 Enable                   */
    uint32_t EPEN2:1;          /*!< bit:      2  Endpoint2 Enable                   */
    uint32_t EPEN3:1;          /*!< bit:      3  Endpoint3 Enable                   */
    uint32_t EPEN4:1;          /*!< bit:      4  Endpoint4 Enable                   */
    uint32_t EPEN5:1;          /*!< bit:      5  Endpoint5 Enable                   */
    uint32_t EPEN6:1;          /*!< bit:      6  Endpoint6 Enable                   */
    uint32_t EPEN7:1;          /*!< bit:      7  Endpoint7 Enable                   */
    uint32_t :24;              /*!< bit:  8..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UERST_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UERST_OFFSET           0x01C        /**< \brief (USBC_UERST offset) Endpoint Enable/Reset Register */
#define USBC_UERST_RESETVALUE       _U_(0x00000000); /**< \brief (USBC_UERST reset_value) Endpoint Enable/Reset Register */

#define USBC_UERST_EPEN0_Pos        0            /**< \brief (USBC_UERST) Endpoint0 Enable */
#define USBC_UERST_EPEN0            (_U_(0x1) << USBC_UERST_EPEN0_Pos)
#define USBC_UERST_EPEN1_Pos        1            /**< \brief (USBC_UERST) Endpoint1 Enable */
#define USBC_UERST_EPEN1            (_U_(0x1) << USBC_UERST_EPEN1_Pos)
#define USBC_UERST_EPEN2_Pos        2            /**< \brief (USBC_UERST) Endpoint2 Enable */
#define USBC_UERST_EPEN2            (_U_(0x1) << USBC_UERST_EPEN2_Pos)
#define USBC_UERST_EPEN3_Pos        3            /**< \brief (USBC_UERST) Endpoint3 Enable */
#define USBC_UERST_EPEN3            (_U_(0x1) << USBC_UERST_EPEN3_Pos)
#define USBC_UERST_EPEN4_Pos        4            /**< \brief (USBC_UERST) Endpoint4 Enable */
#define USBC_UERST_EPEN4            (_U_(0x1) << USBC_UERST_EPEN4_Pos)
#define USBC_UERST_EPEN5_Pos        5            /**< \brief (USBC_UERST) Endpoint5 Enable */
#define USBC_UERST_EPEN5            (_U_(0x1) << USBC_UERST_EPEN5_Pos)
#define USBC_UERST_EPEN6_Pos        6            /**< \brief (USBC_UERST) Endpoint6 Enable */
#define USBC_UERST_EPEN6            (_U_(0x1) << USBC_UERST_EPEN6_Pos)
#define USBC_UERST_EPEN7_Pos        7            /**< \brief (USBC_UERST) Endpoint7 Enable */
#define USBC_UERST_EPEN7            (_U_(0x1) << USBC_UERST_EPEN7_Pos)
#define USBC_UERST_MASK             _U_(0x000000FF) /**< \brief (USBC_UERST) MASK Register */

/* -------- USBC_UDFNUM : (USBC Offset: 0x020) (R/  32) Device Frame Number Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t MFNUM:3;          /*!< bit:  0.. 2  Micro Frame Number                 */
    uint32_t FNUM:11;          /*!< bit:  3..13  Frame Number                       */
    uint32_t :1;               /*!< bit:     14  Reserved                           */
    uint32_t FNCERR:1;         /*!< bit:     15  Frame Number CRC Error             */
    uint32_t :16;              /*!< bit: 16..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UDFNUM_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UDFNUM_OFFSET          0x020        /**< \brief (USBC_UDFNUM offset) Device Frame Number Register */
#define USBC_UDFNUM_RESETVALUE      _U_(0x00000000); /**< \brief (USBC_UDFNUM reset_value) Device Frame Number Register */

#define USBC_UDFNUM_MFNUM_Pos       0            /**< \brief (USBC_UDFNUM) Micro Frame Number */
#define USBC_UDFNUM_MFNUM_Msk       (_U_(0x7) << USBC_UDFNUM_MFNUM_Pos)
#define USBC_UDFNUM_MFNUM(value)    (USBC_UDFNUM_MFNUM_Msk & ((value) << USBC_UDFNUM_MFNUM_Pos))
#define USBC_UDFNUM_FNUM_Pos        3            /**< \brief (USBC_UDFNUM) Frame Number */
#define USBC_UDFNUM_FNUM_Msk        (_U_(0x7FF) << USBC_UDFNUM_FNUM_Pos)
#define USBC_UDFNUM_FNUM(value)     (USBC_UDFNUM_FNUM_Msk & ((value) << USBC_UDFNUM_FNUM_Pos))
#define USBC_UDFNUM_FNCERR_Pos      15           /**< \brief (USBC_UDFNUM) Frame Number CRC Error */
#define USBC_UDFNUM_FNCERR          (_U_(0x1) << USBC_UDFNUM_FNCERR_Pos)
#define USBC_UDFNUM_MASK            _U_(0x0000BFFF) /**< \brief (USBC_UDFNUM) MASK Register */

/* -------- USBC_UECFG0 : (USBC Offset: 0x100) (R/W 32) Endpoint Configuration Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t :2;               /*!< bit:  0.. 1  Reserved                           */
    uint32_t EPBK:1;           /*!< bit:      2  Endpoint Bank                      */
    uint32_t :1;               /*!< bit:      3  Reserved                           */
    uint32_t EPSIZE:3;         /*!< bit:  4.. 6  Endpoint Size                      */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t EPDIR:1;          /*!< bit:      8  Endpoint Direction                 */
    uint32_t :2;               /*!< bit:  9..10  Reserved                           */
    uint32_t EPTYPE:2;         /*!< bit: 11..12  Endpoint Type                      */
    uint32_t :3;               /*!< bit: 13..15  Reserved                           */
    uint32_t REPNB:4;          /*!< bit: 16..19  Redirected Endpoint Number         */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UECFG0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UECFG0_OFFSET          0x100        /**< \brief (USBC_UECFG0 offset) Endpoint Configuration Register */
#define USBC_UECFG0_RESETVALUE      _U_(0x00000000); /**< \brief (USBC_UECFG0 reset_value) Endpoint Configuration Register */

#define USBC_UECFG0_EPBK_Pos        2            /**< \brief (USBC_UECFG0) Endpoint Bank */
#define USBC_UECFG0_EPBK            (_U_(0x1) << USBC_UECFG0_EPBK_Pos)
#define   USBC_UECFG0_EPBK_SINGLE_Val     _U_(0x0)   /**< \brief (USBC_UECFG0)  */
#define   USBC_UECFG0_EPBK_DOUBLE_Val     _U_(0x1)   /**< \brief (USBC_UECFG0)  */
#define USBC_UECFG0_EPBK_SINGLE     (USBC_UECFG0_EPBK_SINGLE_Val   << USBC_UECFG0_EPBK_Pos)
#define USBC_UECFG0_EPBK_DOUBLE     (USBC_UECFG0_EPBK_DOUBLE_Val   << USBC_UECFG0_EPBK_Pos)
#define USBC_UECFG0_EPSIZE_Pos      4            /**< \brief (USBC_UECFG0) Endpoint Size */
#define USBC_UECFG0_EPSIZE_Msk      (_U_(0x7) << USBC_UECFG0_EPSIZE_Pos)
#define USBC_UECFG0_EPSIZE(value)   (USBC_UECFG0_EPSIZE_Msk & ((value) << USBC_UECFG0_EPSIZE_Pos))
#define   USBC_UECFG0_EPSIZE_8_Val        _U_(0x0)   /**< \brief (USBC_UECFG0)  */
#define   USBC_UECFG0_EPSIZE_16_Val       _U_(0x1)   /**< \brief (USBC_UECFG0)  */
#define   USBC_UECFG0_EPSIZE_32_Val       _U_(0x2)   /**< \brief (USBC_UECFG0)  */
#define   USBC_UECFG0_EPSIZE_64_Val       _U_(0x3)   /**< \brief (USBC_UECFG0)  */
#define   USBC_UECFG0_EPSIZE_128_Val      _U_(0x4)   /**< \brief (USBC_UECFG0)  */
#define   USBC_UECFG0_EPSIZE_256_Val      _U_(0x5)   /**< \brief (USBC_UECFG0)  */
#define   USBC_UECFG0_EPSIZE_512_Val      _U_(0x6)   /**< \brief (USBC_UECFG0)  */
#define   USBC_UECFG0_EPSIZE_1024_Val     _U_(0x7)   /**< \brief (USBC_UECFG0)  */
#define USBC_UECFG0_EPSIZE_8        (USBC_UECFG0_EPSIZE_8_Val      << USBC_UECFG0_EPSIZE_Pos)
#define USBC_UECFG0_EPSIZE_16       (USBC_UECFG0_EPSIZE_16_Val     << USBC_UECFG0_EPSIZE_Pos)
#define USBC_UECFG0_EPSIZE_32       (USBC_UECFG0_EPSIZE_32_Val     << USBC_UECFG0_EPSIZE_Pos)
#define USBC_UECFG0_EPSIZE_64       (USBC_UECFG0_EPSIZE_64_Val     << USBC_UECFG0_EPSIZE_Pos)
#define USBC_UECFG0_EPSIZE_128      (USBC_UECFG0_EPSIZE_128_Val    << USBC_UECFG0_EPSIZE_Pos)
#define USBC_UECFG0_EPSIZE_256      (USBC_UECFG0_EPSIZE_256_Val    << USBC_UECFG0_EPSIZE_Pos)
#define USBC_UECFG0_EPSIZE_512      (USBC_UECFG0_EPSIZE_512_Val    << USBC_UECFG0_EPSIZE_Pos)
#define USBC_UECFG0_EPSIZE_1024     (USBC_UECFG0_EPSIZE_1024_Val   << USBC_UECFG0_EPSIZE_Pos)
#define USBC_UECFG0_EPDIR_Pos       8            /**< \brief (USBC_UECFG0) Endpoint Direction */
#define USBC_UECFG0_EPDIR           (_U_(0x1) << USBC_UECFG0_EPDIR_Pos)
#define   USBC_UECFG0_EPDIR_OUT_Val       _U_(0x0)   /**< \brief (USBC_UECFG0)  */
#define   USBC_UECFG0_EPDIR_IN_Val        _U_(0x1)   /**< \brief (USBC_UECFG0)  */
#define USBC_UECFG0_EPDIR_OUT       (USBC_UECFG0_EPDIR_OUT_Val     << USBC_UECFG0_EPDIR_Pos)
#define USBC_UECFG0_EPDIR_IN        (USBC_UECFG0_EPDIR_IN_Val      << USBC_UECFG0_EPDIR_Pos)
#define USBC_UECFG0_EPTYPE_Pos      11           /**< \brief (USBC_UECFG0) Endpoint Type */
#define USBC_UECFG0_EPTYPE_Msk      (_U_(0x3) << USBC_UECFG0_EPTYPE_Pos)
#define USBC_UECFG0_EPTYPE(value)   (USBC_UECFG0_EPTYPE_Msk & ((value) << USBC_UECFG0_EPTYPE_Pos))
#define   USBC_UECFG0_EPTYPE_CONTROL_Val  _U_(0x0)   /**< \brief (USBC_UECFG0)  */
#define   USBC_UECFG0_EPTYPE_ISOCHRONOUS_Val _U_(0x1)   /**< \brief (USBC_UECFG0)  */
#define   USBC_UECFG0_EPTYPE_BULK_Val     _U_(0x2)   /**< \brief (USBC_UECFG0)  */
#define   USBC_UECFG0_EPTYPE_INTERRUPT_Val _U_(0x3)   /**< \brief (USBC_UECFG0)  */
#define USBC_UECFG0_EPTYPE_CONTROL  (USBC_UECFG0_EPTYPE_CONTROL_Val << USBC_UECFG0_EPTYPE_Pos)
#define USBC_UECFG0_EPTYPE_ISOCHRONOUS (USBC_UECFG0_EPTYPE_ISOCHRONOUS_Val << USBC_UECFG0_EPTYPE_Pos)
#define USBC_UECFG0_EPTYPE_BULK     (USBC_UECFG0_EPTYPE_BULK_Val   << USBC_UECFG0_EPTYPE_Pos)
#define USBC_UECFG0_EPTYPE_INTERRUPT (USBC_UECFG0_EPTYPE_INTERRUPT_Val << USBC_UECFG0_EPTYPE_Pos)
#define USBC_UECFG0_REPNB_Pos       16           /**< \brief (USBC_UECFG0) Redirected Endpoint Number */
#define USBC_UECFG0_REPNB_Msk       (_U_(0xF) << USBC_UECFG0_REPNB_Pos)
#define USBC_UECFG0_REPNB(value)    (USBC_UECFG0_REPNB_Msk & ((value) << USBC_UECFG0_REPNB_Pos))
#define USBC_UECFG0_MASK            _U_(0x000F1974) /**< \brief (USBC_UECFG0) MASK Register */

/* -------- USBC_UECFG1 : (USBC Offset: 0x104) (R/W 32) Endpoint Configuration Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t :2;               /*!< bit:  0.. 1  Reserved                           */
    uint32_t EPBK:1;           /*!< bit:      2  Endpoint Bank                      */
    uint32_t :1;               /*!< bit:      3  Reserved                           */
    uint32_t EPSIZE:3;         /*!< bit:  4.. 6  Endpoint Size                      */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t EPDIR:1;          /*!< bit:      8  Endpoint Direction                 */
    uint32_t :2;               /*!< bit:  9..10  Reserved                           */
    uint32_t EPTYPE:2;         /*!< bit: 11..12  Endpoint Type                      */
    uint32_t :3;               /*!< bit: 13..15  Reserved                           */
    uint32_t REPNB:4;          /*!< bit: 16..19  Redirected Endpoint Number         */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UECFG1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UECFG1_OFFSET          0x104        /**< \brief (USBC_UECFG1 offset) Endpoint Configuration Register */
#define USBC_UECFG1_RESETVALUE      _U_(0x00000000); /**< \brief (USBC_UECFG1 reset_value) Endpoint Configuration Register */

#define USBC_UECFG1_EPBK_Pos        2            /**< \brief (USBC_UECFG1) Endpoint Bank */
#define USBC_UECFG1_EPBK            (_U_(0x1) << USBC_UECFG1_EPBK_Pos)
#define   USBC_UECFG1_EPBK_SINGLE_Val     _U_(0x0)   /**< \brief (USBC_UECFG1)  */
#define   USBC_UECFG1_EPBK_DOUBLE_Val     _U_(0x1)   /**< \brief (USBC_UECFG1)  */
#define USBC_UECFG1_EPBK_SINGLE     (USBC_UECFG1_EPBK_SINGLE_Val   << USBC_UECFG1_EPBK_Pos)
#define USBC_UECFG1_EPBK_DOUBLE     (USBC_UECFG1_EPBK_DOUBLE_Val   << USBC_UECFG1_EPBK_Pos)
#define USBC_UECFG1_EPSIZE_Pos      4            /**< \brief (USBC_UECFG1) Endpoint Size */
#define USBC_UECFG1_EPSIZE_Msk      (_U_(0x7) << USBC_UECFG1_EPSIZE_Pos)
#define USBC_UECFG1_EPSIZE(value)   (USBC_UECFG1_EPSIZE_Msk & ((value) << USBC_UECFG1_EPSIZE_Pos))
#define   USBC_UECFG1_EPSIZE_8_Val        _U_(0x0)   /**< \brief (USBC_UECFG1)  */
#define   USBC_UECFG1_EPSIZE_16_Val       _U_(0x1)   /**< \brief (USBC_UECFG1)  */
#define   USBC_UECFG1_EPSIZE_32_Val       _U_(0x2)   /**< \brief (USBC_UECFG1)  */
#define   USBC_UECFG1_EPSIZE_64_Val       _U_(0x3)   /**< \brief (USBC_UECFG1)  */
#define   USBC_UECFG1_EPSIZE_128_Val      _U_(0x4)   /**< \brief (USBC_UECFG1)  */
#define   USBC_UECFG1_EPSIZE_256_Val      _U_(0x5)   /**< \brief (USBC_UECFG1)  */
#define   USBC_UECFG1_EPSIZE_512_Val      _U_(0x6)   /**< \brief (USBC_UECFG1)  */
#define   USBC_UECFG1_EPSIZE_1024_Val     _U_(0x7)   /**< \brief (USBC_UECFG1)  */
#define USBC_UECFG1_EPSIZE_8        (USBC_UECFG1_EPSIZE_8_Val      << USBC_UECFG1_EPSIZE_Pos)
#define USBC_UECFG1_EPSIZE_16       (USBC_UECFG1_EPSIZE_16_Val     << USBC_UECFG1_EPSIZE_Pos)
#define USBC_UECFG1_EPSIZE_32       (USBC_UECFG1_EPSIZE_32_Val     << USBC_UECFG1_EPSIZE_Pos)
#define USBC_UECFG1_EPSIZE_64       (USBC_UECFG1_EPSIZE_64_Val     << USBC_UECFG1_EPSIZE_Pos)
#define USBC_UECFG1_EPSIZE_128      (USBC_UECFG1_EPSIZE_128_Val    << USBC_UECFG1_EPSIZE_Pos)
#define USBC_UECFG1_EPSIZE_256      (USBC_UECFG1_EPSIZE_256_Val    << USBC_UECFG1_EPSIZE_Pos)
#define USBC_UECFG1_EPSIZE_512      (USBC_UECFG1_EPSIZE_512_Val    << USBC_UECFG1_EPSIZE_Pos)
#define USBC_UECFG1_EPSIZE_1024     (USBC_UECFG1_EPSIZE_1024_Val   << USBC_UECFG1_EPSIZE_Pos)
#define USBC_UECFG1_EPDIR_Pos       8            /**< \brief (USBC_UECFG1) Endpoint Direction */
#define USBC_UECFG1_EPDIR           (_U_(0x1) << USBC_UECFG1_EPDIR_Pos)
#define   USBC_UECFG1_EPDIR_OUT_Val       _U_(0x0)   /**< \brief (USBC_UECFG1)  */
#define   USBC_UECFG1_EPDIR_IN_Val        _U_(0x1)   /**< \brief (USBC_UECFG1)  */
#define USBC_UECFG1_EPDIR_OUT       (USBC_UECFG1_EPDIR_OUT_Val     << USBC_UECFG1_EPDIR_Pos)
#define USBC_UECFG1_EPDIR_IN        (USBC_UECFG1_EPDIR_IN_Val      << USBC_UECFG1_EPDIR_Pos)
#define USBC_UECFG1_EPTYPE_Pos      11           /**< \brief (USBC_UECFG1) Endpoint Type */
#define USBC_UECFG1_EPTYPE_Msk      (_U_(0x3) << USBC_UECFG1_EPTYPE_Pos)
#define USBC_UECFG1_EPTYPE(value)   (USBC_UECFG1_EPTYPE_Msk & ((value) << USBC_UECFG1_EPTYPE_Pos))
#define   USBC_UECFG1_EPTYPE_CONTROL_Val  _U_(0x0)   /**< \brief (USBC_UECFG1)  */
#define   USBC_UECFG1_EPTYPE_ISOCHRONOUS_Val _U_(0x1)   /**< \brief (USBC_UECFG1)  */
#define   USBC_UECFG1_EPTYPE_BULK_Val     _U_(0x2)   /**< \brief (USBC_UECFG1)  */
#define   USBC_UECFG1_EPTYPE_INTERRUPT_Val _U_(0x3)   /**< \brief (USBC_UECFG1)  */
#define USBC_UECFG1_EPTYPE_CONTROL  (USBC_UECFG1_EPTYPE_CONTROL_Val << USBC_UECFG1_EPTYPE_Pos)
#define USBC_UECFG1_EPTYPE_ISOCHRONOUS (USBC_UECFG1_EPTYPE_ISOCHRONOUS_Val << USBC_UECFG1_EPTYPE_Pos)
#define USBC_UECFG1_EPTYPE_BULK     (USBC_UECFG1_EPTYPE_BULK_Val   << USBC_UECFG1_EPTYPE_Pos)
#define USBC_UECFG1_EPTYPE_INTERRUPT (USBC_UECFG1_EPTYPE_INTERRUPT_Val << USBC_UECFG1_EPTYPE_Pos)
#define USBC_UECFG1_REPNB_Pos       16           /**< \brief (USBC_UECFG1) Redirected Endpoint Number */
#define USBC_UECFG1_REPNB_Msk       (_U_(0xF) << USBC_UECFG1_REPNB_Pos)
#define USBC_UECFG1_REPNB(value)    (USBC_UECFG1_REPNB_Msk & ((value) << USBC_UECFG1_REPNB_Pos))
#define USBC_UECFG1_MASK            _U_(0x000F1974) /**< \brief (USBC_UECFG1) MASK Register */

/* -------- USBC_UECFG2 : (USBC Offset: 0x108) (R/W 32) Endpoint Configuration Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t :2;               /*!< bit:  0.. 1  Reserved                           */
    uint32_t EPBK:1;           /*!< bit:      2  Endpoint Bank                      */
    uint32_t :1;               /*!< bit:      3  Reserved                           */
    uint32_t EPSIZE:3;         /*!< bit:  4.. 6  Endpoint Size                      */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t EPDIR:1;          /*!< bit:      8  Endpoint Direction                 */
    uint32_t :2;               /*!< bit:  9..10  Reserved                           */
    uint32_t EPTYPE:2;         /*!< bit: 11..12  Endpoint Type                      */
    uint32_t :3;               /*!< bit: 13..15  Reserved                           */
    uint32_t REPNB:4;          /*!< bit: 16..19  Redirected Endpoint Number         */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UECFG2_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UECFG2_OFFSET          0x108        /**< \brief (USBC_UECFG2 offset) Endpoint Configuration Register */
#define USBC_UECFG2_RESETVALUE      _U_(0x00000000); /**< \brief (USBC_UECFG2 reset_value) Endpoint Configuration Register */

#define USBC_UECFG2_EPBK_Pos        2            /**< \brief (USBC_UECFG2) Endpoint Bank */
#define USBC_UECFG2_EPBK            (_U_(0x1) << USBC_UECFG2_EPBK_Pos)
#define   USBC_UECFG2_EPBK_SINGLE_Val     _U_(0x0)   /**< \brief (USBC_UECFG2)  */
#define   USBC_UECFG2_EPBK_DOUBLE_Val     _U_(0x1)   /**< \brief (USBC_UECFG2)  */
#define USBC_UECFG2_EPBK_SINGLE     (USBC_UECFG2_EPBK_SINGLE_Val   << USBC_UECFG2_EPBK_Pos)
#define USBC_UECFG2_EPBK_DOUBLE     (USBC_UECFG2_EPBK_DOUBLE_Val   << USBC_UECFG2_EPBK_Pos)
#define USBC_UECFG2_EPSIZE_Pos      4            /**< \brief (USBC_UECFG2) Endpoint Size */
#define USBC_UECFG2_EPSIZE_Msk      (_U_(0x7) << USBC_UECFG2_EPSIZE_Pos)
#define USBC_UECFG2_EPSIZE(value)   (USBC_UECFG2_EPSIZE_Msk & ((value) << USBC_UECFG2_EPSIZE_Pos))
#define   USBC_UECFG2_EPSIZE_8_Val        _U_(0x0)   /**< \brief (USBC_UECFG2)  */
#define   USBC_UECFG2_EPSIZE_16_Val       _U_(0x1)   /**< \brief (USBC_UECFG2)  */
#define   USBC_UECFG2_EPSIZE_32_Val       _U_(0x2)   /**< \brief (USBC_UECFG2)  */
#define   USBC_UECFG2_EPSIZE_64_Val       _U_(0x3)   /**< \brief (USBC_UECFG2)  */
#define   USBC_UECFG2_EPSIZE_128_Val      _U_(0x4)   /**< \brief (USBC_UECFG2)  */
#define   USBC_UECFG2_EPSIZE_256_Val      _U_(0x5)   /**< \brief (USBC_UECFG2)  */
#define   USBC_UECFG2_EPSIZE_512_Val      _U_(0x6)   /**< \brief (USBC_UECFG2)  */
#define   USBC_UECFG2_EPSIZE_1024_Val     _U_(0x7)   /**< \brief (USBC_UECFG2)  */
#define USBC_UECFG2_EPSIZE_8        (USBC_UECFG2_EPSIZE_8_Val      << USBC_UECFG2_EPSIZE_Pos)
#define USBC_UECFG2_EPSIZE_16       (USBC_UECFG2_EPSIZE_16_Val     << USBC_UECFG2_EPSIZE_Pos)
#define USBC_UECFG2_EPSIZE_32       (USBC_UECFG2_EPSIZE_32_Val     << USBC_UECFG2_EPSIZE_Pos)
#define USBC_UECFG2_EPSIZE_64       (USBC_UECFG2_EPSIZE_64_Val     << USBC_UECFG2_EPSIZE_Pos)
#define USBC_UECFG2_EPSIZE_128      (USBC_UECFG2_EPSIZE_128_Val    << USBC_UECFG2_EPSIZE_Pos)
#define USBC_UECFG2_EPSIZE_256      (USBC_UECFG2_EPSIZE_256_Val    << USBC_UECFG2_EPSIZE_Pos)
#define USBC_UECFG2_EPSIZE_512      (USBC_UECFG2_EPSIZE_512_Val    << USBC_UECFG2_EPSIZE_Pos)
#define USBC_UECFG2_EPSIZE_1024     (USBC_UECFG2_EPSIZE_1024_Val   << USBC_UECFG2_EPSIZE_Pos)
#define USBC_UECFG2_EPDIR_Pos       8            /**< \brief (USBC_UECFG2) Endpoint Direction */
#define USBC_UECFG2_EPDIR           (_U_(0x1) << USBC_UECFG2_EPDIR_Pos)
#define   USBC_UECFG2_EPDIR_OUT_Val       _U_(0x0)   /**< \brief (USBC_UECFG2)  */
#define   USBC_UECFG2_EPDIR_IN_Val        _U_(0x1)   /**< \brief (USBC_UECFG2)  */
#define USBC_UECFG2_EPDIR_OUT       (USBC_UECFG2_EPDIR_OUT_Val     << USBC_UECFG2_EPDIR_Pos)
#define USBC_UECFG2_EPDIR_IN        (USBC_UECFG2_EPDIR_IN_Val      << USBC_UECFG2_EPDIR_Pos)
#define USBC_UECFG2_EPTYPE_Pos      11           /**< \brief (USBC_UECFG2) Endpoint Type */
#define USBC_UECFG2_EPTYPE_Msk      (_U_(0x3) << USBC_UECFG2_EPTYPE_Pos)
#define USBC_UECFG2_EPTYPE(value)   (USBC_UECFG2_EPTYPE_Msk & ((value) << USBC_UECFG2_EPTYPE_Pos))
#define   USBC_UECFG2_EPTYPE_CONTROL_Val  _U_(0x0)   /**< \brief (USBC_UECFG2)  */
#define   USBC_UECFG2_EPTYPE_ISOCHRONOUS_Val _U_(0x1)   /**< \brief (USBC_UECFG2)  */
#define   USBC_UECFG2_EPTYPE_BULK_Val     _U_(0x2)   /**< \brief (USBC_UECFG2)  */
#define   USBC_UECFG2_EPTYPE_INTERRUPT_Val _U_(0x3)   /**< \brief (USBC_UECFG2)  */
#define USBC_UECFG2_EPTYPE_CONTROL  (USBC_UECFG2_EPTYPE_CONTROL_Val << USBC_UECFG2_EPTYPE_Pos)
#define USBC_UECFG2_EPTYPE_ISOCHRONOUS (USBC_UECFG2_EPTYPE_ISOCHRONOUS_Val << USBC_UECFG2_EPTYPE_Pos)
#define USBC_UECFG2_EPTYPE_BULK     (USBC_UECFG2_EPTYPE_BULK_Val   << USBC_UECFG2_EPTYPE_Pos)
#define USBC_UECFG2_EPTYPE_INTERRUPT (USBC_UECFG2_EPTYPE_INTERRUPT_Val << USBC_UECFG2_EPTYPE_Pos)
#define USBC_UECFG2_REPNB_Pos       16           /**< \brief (USBC_UECFG2) Redirected Endpoint Number */
#define USBC_UECFG2_REPNB_Msk       (_U_(0xF) << USBC_UECFG2_REPNB_Pos)
#define USBC_UECFG2_REPNB(value)    (USBC_UECFG2_REPNB_Msk & ((value) << USBC_UECFG2_REPNB_Pos))
#define USBC_UECFG2_MASK            _U_(0x000F1974) /**< \brief (USBC_UECFG2) MASK Register */

/* -------- USBC_UECFG3 : (USBC Offset: 0x10C) (R/W 32) Endpoint Configuration Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t :2;               /*!< bit:  0.. 1  Reserved                           */
    uint32_t EPBK:1;           /*!< bit:      2  Endpoint Bank                      */
    uint32_t :1;               /*!< bit:      3  Reserved                           */
    uint32_t EPSIZE:3;         /*!< bit:  4.. 6  Endpoint Size                      */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t EPDIR:1;          /*!< bit:      8  Endpoint Direction                 */
    uint32_t :2;               /*!< bit:  9..10  Reserved                           */
    uint32_t EPTYPE:2;         /*!< bit: 11..12  Endpoint Type                      */
    uint32_t :3;               /*!< bit: 13..15  Reserved                           */
    uint32_t REPNB:4;          /*!< bit: 16..19  Redirected Endpoint Number         */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UECFG3_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UECFG3_OFFSET          0x10C        /**< \brief (USBC_UECFG3 offset) Endpoint Configuration Register */
#define USBC_UECFG3_RESETVALUE      _U_(0x00000000); /**< \brief (USBC_UECFG3 reset_value) Endpoint Configuration Register */

#define USBC_UECFG3_EPBK_Pos        2            /**< \brief (USBC_UECFG3) Endpoint Bank */
#define USBC_UECFG3_EPBK            (_U_(0x1) << USBC_UECFG3_EPBK_Pos)
#define   USBC_UECFG3_EPBK_SINGLE_Val     _U_(0x0)   /**< \brief (USBC_UECFG3)  */
#define   USBC_UECFG3_EPBK_DOUBLE_Val     _U_(0x1)   /**< \brief (USBC_UECFG3)  */
#define USBC_UECFG3_EPBK_SINGLE     (USBC_UECFG3_EPBK_SINGLE_Val   << USBC_UECFG3_EPBK_Pos)
#define USBC_UECFG3_EPBK_DOUBLE     (USBC_UECFG3_EPBK_DOUBLE_Val   << USBC_UECFG3_EPBK_Pos)
#define USBC_UECFG3_EPSIZE_Pos      4            /**< \brief (USBC_UECFG3) Endpoint Size */
#define USBC_UECFG3_EPSIZE_Msk      (_U_(0x7) << USBC_UECFG3_EPSIZE_Pos)
#define USBC_UECFG3_EPSIZE(value)   (USBC_UECFG3_EPSIZE_Msk & ((value) << USBC_UECFG3_EPSIZE_Pos))
#define   USBC_UECFG3_EPSIZE_8_Val        _U_(0x0)   /**< \brief (USBC_UECFG3)  */
#define   USBC_UECFG3_EPSIZE_16_Val       _U_(0x1)   /**< \brief (USBC_UECFG3)  */
#define   USBC_UECFG3_EPSIZE_32_Val       _U_(0x2)   /**< \brief (USBC_UECFG3)  */
#define   USBC_UECFG3_EPSIZE_64_Val       _U_(0x3)   /**< \brief (USBC_UECFG3)  */
#define   USBC_UECFG3_EPSIZE_128_Val      _U_(0x4)   /**< \brief (USBC_UECFG3)  */
#define   USBC_UECFG3_EPSIZE_256_Val      _U_(0x5)   /**< \brief (USBC_UECFG3)  */
#define   USBC_UECFG3_EPSIZE_512_Val      _U_(0x6)   /**< \brief (USBC_UECFG3)  */
#define   USBC_UECFG3_EPSIZE_1024_Val     _U_(0x7)   /**< \brief (USBC_UECFG3)  */
#define USBC_UECFG3_EPSIZE_8        (USBC_UECFG3_EPSIZE_8_Val      << USBC_UECFG3_EPSIZE_Pos)
#define USBC_UECFG3_EPSIZE_16       (USBC_UECFG3_EPSIZE_16_Val     << USBC_UECFG3_EPSIZE_Pos)
#define USBC_UECFG3_EPSIZE_32       (USBC_UECFG3_EPSIZE_32_Val     << USBC_UECFG3_EPSIZE_Pos)
#define USBC_UECFG3_EPSIZE_64       (USBC_UECFG3_EPSIZE_64_Val     << USBC_UECFG3_EPSIZE_Pos)
#define USBC_UECFG3_EPSIZE_128      (USBC_UECFG3_EPSIZE_128_Val    << USBC_UECFG3_EPSIZE_Pos)
#define USBC_UECFG3_EPSIZE_256      (USBC_UECFG3_EPSIZE_256_Val    << USBC_UECFG3_EPSIZE_Pos)
#define USBC_UECFG3_EPSIZE_512      (USBC_UECFG3_EPSIZE_512_Val    << USBC_UECFG3_EPSIZE_Pos)
#define USBC_UECFG3_EPSIZE_1024     (USBC_UECFG3_EPSIZE_1024_Val   << USBC_UECFG3_EPSIZE_Pos)
#define USBC_UECFG3_EPDIR_Pos       8            /**< \brief (USBC_UECFG3) Endpoint Direction */
#define USBC_UECFG3_EPDIR           (_U_(0x1) << USBC_UECFG3_EPDIR_Pos)
#define   USBC_UECFG3_EPDIR_OUT_Val       _U_(0x0)   /**< \brief (USBC_UECFG3)  */
#define   USBC_UECFG3_EPDIR_IN_Val        _U_(0x1)   /**< \brief (USBC_UECFG3)  */
#define USBC_UECFG3_EPDIR_OUT       (USBC_UECFG3_EPDIR_OUT_Val     << USBC_UECFG3_EPDIR_Pos)
#define USBC_UECFG3_EPDIR_IN        (USBC_UECFG3_EPDIR_IN_Val      << USBC_UECFG3_EPDIR_Pos)
#define USBC_UECFG3_EPTYPE_Pos      11           /**< \brief (USBC_UECFG3) Endpoint Type */
#define USBC_UECFG3_EPTYPE_Msk      (_U_(0x3) << USBC_UECFG3_EPTYPE_Pos)
#define USBC_UECFG3_EPTYPE(value)   (USBC_UECFG3_EPTYPE_Msk & ((value) << USBC_UECFG3_EPTYPE_Pos))
#define   USBC_UECFG3_EPTYPE_CONTROL_Val  _U_(0x0)   /**< \brief (USBC_UECFG3)  */
#define   USBC_UECFG3_EPTYPE_ISOCHRONOUS_Val _U_(0x1)   /**< \brief (USBC_UECFG3)  */
#define   USBC_UECFG3_EPTYPE_BULK_Val     _U_(0x2)   /**< \brief (USBC_UECFG3)  */
#define   USBC_UECFG3_EPTYPE_INTERRUPT_Val _U_(0x3)   /**< \brief (USBC_UECFG3)  */
#define USBC_UECFG3_EPTYPE_CONTROL  (USBC_UECFG3_EPTYPE_CONTROL_Val << USBC_UECFG3_EPTYPE_Pos)
#define USBC_UECFG3_EPTYPE_ISOCHRONOUS (USBC_UECFG3_EPTYPE_ISOCHRONOUS_Val << USBC_UECFG3_EPTYPE_Pos)
#define USBC_UECFG3_EPTYPE_BULK     (USBC_UECFG3_EPTYPE_BULK_Val   << USBC_UECFG3_EPTYPE_Pos)
#define USBC_UECFG3_EPTYPE_INTERRUPT (USBC_UECFG3_EPTYPE_INTERRUPT_Val << USBC_UECFG3_EPTYPE_Pos)
#define USBC_UECFG3_REPNB_Pos       16           /**< \brief (USBC_UECFG3) Redirected Endpoint Number */
#define USBC_UECFG3_REPNB_Msk       (_U_(0xF) << USBC_UECFG3_REPNB_Pos)
#define USBC_UECFG3_REPNB(value)    (USBC_UECFG3_REPNB_Msk & ((value) << USBC_UECFG3_REPNB_Pos))
#define USBC_UECFG3_MASK            _U_(0x000F1974) /**< \brief (USBC_UECFG3) MASK Register */

/* -------- USBC_UECFG4 : (USBC Offset: 0x110) (R/W 32) Endpoint Configuration Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t :2;               /*!< bit:  0.. 1  Reserved                           */
    uint32_t EPBK:1;           /*!< bit:      2  Endpoint Bank                      */
    uint32_t :1;               /*!< bit:      3  Reserved                           */
    uint32_t EPSIZE:3;         /*!< bit:  4.. 6  Endpoint Size                      */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t EPDIR:1;          /*!< bit:      8  Endpoint Direction                 */
    uint32_t :2;               /*!< bit:  9..10  Reserved                           */
    uint32_t EPTYPE:2;         /*!< bit: 11..12  Endpoint Type                      */
    uint32_t :3;               /*!< bit: 13..15  Reserved                           */
    uint32_t REPNB:4;          /*!< bit: 16..19  Redirected Endpoint Number         */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UECFG4_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UECFG4_OFFSET          0x110        /**< \brief (USBC_UECFG4 offset) Endpoint Configuration Register */
#define USBC_UECFG4_RESETVALUE      _U_(0x00000000); /**< \brief (USBC_UECFG4 reset_value) Endpoint Configuration Register */

#define USBC_UECFG4_EPBK_Pos        2            /**< \brief (USBC_UECFG4) Endpoint Bank */
#define USBC_UECFG4_EPBK            (_U_(0x1) << USBC_UECFG4_EPBK_Pos)
#define   USBC_UECFG4_EPBK_SINGLE_Val     _U_(0x0)   /**< \brief (USBC_UECFG4)  */
#define   USBC_UECFG4_EPBK_DOUBLE_Val     _U_(0x1)   /**< \brief (USBC_UECFG4)  */
#define USBC_UECFG4_EPBK_SINGLE     (USBC_UECFG4_EPBK_SINGLE_Val   << USBC_UECFG4_EPBK_Pos)
#define USBC_UECFG4_EPBK_DOUBLE     (USBC_UECFG4_EPBK_DOUBLE_Val   << USBC_UECFG4_EPBK_Pos)
#define USBC_UECFG4_EPSIZE_Pos      4            /**< \brief (USBC_UECFG4) Endpoint Size */
#define USBC_UECFG4_EPSIZE_Msk      (_U_(0x7) << USBC_UECFG4_EPSIZE_Pos)
#define USBC_UECFG4_EPSIZE(value)   (USBC_UECFG4_EPSIZE_Msk & ((value) << USBC_UECFG4_EPSIZE_Pos))
#define   USBC_UECFG4_EPSIZE_8_Val        _U_(0x0)   /**< \brief (USBC_UECFG4)  */
#define   USBC_UECFG4_EPSIZE_16_Val       _U_(0x1)   /**< \brief (USBC_UECFG4)  */
#define   USBC_UECFG4_EPSIZE_32_Val       _U_(0x2)   /**< \brief (USBC_UECFG4)  */
#define   USBC_UECFG4_EPSIZE_64_Val       _U_(0x3)   /**< \brief (USBC_UECFG4)  */
#define   USBC_UECFG4_EPSIZE_128_Val      _U_(0x4)   /**< \brief (USBC_UECFG4)  */
#define   USBC_UECFG4_EPSIZE_256_Val      _U_(0x5)   /**< \brief (USBC_UECFG4)  */
#define   USBC_UECFG4_EPSIZE_512_Val      _U_(0x6)   /**< \brief (USBC_UECFG4)  */
#define   USBC_UECFG4_EPSIZE_1024_Val     _U_(0x7)   /**< \brief (USBC_UECFG4)  */
#define USBC_UECFG4_EPSIZE_8        (USBC_UECFG4_EPSIZE_8_Val      << USBC_UECFG4_EPSIZE_Pos)
#define USBC_UECFG4_EPSIZE_16       (USBC_UECFG4_EPSIZE_16_Val     << USBC_UECFG4_EPSIZE_Pos)
#define USBC_UECFG4_EPSIZE_32       (USBC_UECFG4_EPSIZE_32_Val     << USBC_UECFG4_EPSIZE_Pos)
#define USBC_UECFG4_EPSIZE_64       (USBC_UECFG4_EPSIZE_64_Val     << USBC_UECFG4_EPSIZE_Pos)
#define USBC_UECFG4_EPSIZE_128      (USBC_UECFG4_EPSIZE_128_Val    << USBC_UECFG4_EPSIZE_Pos)
#define USBC_UECFG4_EPSIZE_256      (USBC_UECFG4_EPSIZE_256_Val    << USBC_UECFG4_EPSIZE_Pos)
#define USBC_UECFG4_EPSIZE_512      (USBC_UECFG4_EPSIZE_512_Val    << USBC_UECFG4_EPSIZE_Pos)
#define USBC_UECFG4_EPSIZE_1024     (USBC_UECFG4_EPSIZE_1024_Val   << USBC_UECFG4_EPSIZE_Pos)
#define USBC_UECFG4_EPDIR_Pos       8            /**< \brief (USBC_UECFG4) Endpoint Direction */
#define USBC_UECFG4_EPDIR           (_U_(0x1) << USBC_UECFG4_EPDIR_Pos)
#define   USBC_UECFG4_EPDIR_OUT_Val       _U_(0x0)   /**< \brief (USBC_UECFG4)  */
#define   USBC_UECFG4_EPDIR_IN_Val        _U_(0x1)   /**< \brief (USBC_UECFG4)  */
#define USBC_UECFG4_EPDIR_OUT       (USBC_UECFG4_EPDIR_OUT_Val     << USBC_UECFG4_EPDIR_Pos)
#define USBC_UECFG4_EPDIR_IN        (USBC_UECFG4_EPDIR_IN_Val      << USBC_UECFG4_EPDIR_Pos)
#define USBC_UECFG4_EPTYPE_Pos      11           /**< \brief (USBC_UECFG4) Endpoint Type */
#define USBC_UECFG4_EPTYPE_Msk      (_U_(0x3) << USBC_UECFG4_EPTYPE_Pos)
#define USBC_UECFG4_EPTYPE(value)   (USBC_UECFG4_EPTYPE_Msk & ((value) << USBC_UECFG4_EPTYPE_Pos))
#define   USBC_UECFG4_EPTYPE_CONTROL_Val  _U_(0x0)   /**< \brief (USBC_UECFG4)  */
#define   USBC_UECFG4_EPTYPE_ISOCHRONOUS_Val _U_(0x1)   /**< \brief (USBC_UECFG4)  */
#define   USBC_UECFG4_EPTYPE_BULK_Val     _U_(0x2)   /**< \brief (USBC_UECFG4)  */
#define   USBC_UECFG4_EPTYPE_INTERRUPT_Val _U_(0x3)   /**< \brief (USBC_UECFG4)  */
#define USBC_UECFG4_EPTYPE_CONTROL  (USBC_UECFG4_EPTYPE_CONTROL_Val << USBC_UECFG4_EPTYPE_Pos)
#define USBC_UECFG4_EPTYPE_ISOCHRONOUS (USBC_UECFG4_EPTYPE_ISOCHRONOUS_Val << USBC_UECFG4_EPTYPE_Pos)
#define USBC_UECFG4_EPTYPE_BULK     (USBC_UECFG4_EPTYPE_BULK_Val   << USBC_UECFG4_EPTYPE_Pos)
#define USBC_UECFG4_EPTYPE_INTERRUPT (USBC_UECFG4_EPTYPE_INTERRUPT_Val << USBC_UECFG4_EPTYPE_Pos)
#define USBC_UECFG4_REPNB_Pos       16           /**< \brief (USBC_UECFG4) Redirected Endpoint Number */
#define USBC_UECFG4_REPNB_Msk       (_U_(0xF) << USBC_UECFG4_REPNB_Pos)
#define USBC_UECFG4_REPNB(value)    (USBC_UECFG4_REPNB_Msk & ((value) << USBC_UECFG4_REPNB_Pos))
#define USBC_UECFG4_MASK            _U_(0x000F1974) /**< \brief (USBC_UECFG4) MASK Register */

/* -------- USBC_UECFG5 : (USBC Offset: 0x114) (R/W 32) Endpoint Configuration Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t :2;               /*!< bit:  0.. 1  Reserved                           */
    uint32_t EPBK:1;           /*!< bit:      2  Endpoint Bank                      */
    uint32_t :1;               /*!< bit:      3  Reserved                           */
    uint32_t EPSIZE:3;         /*!< bit:  4.. 6  Endpoint Size                      */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t EPDIR:1;          /*!< bit:      8  Endpoint Direction                 */
    uint32_t :2;               /*!< bit:  9..10  Reserved                           */
    uint32_t EPTYPE:2;         /*!< bit: 11..12  Endpoint Type                      */
    uint32_t :3;               /*!< bit: 13..15  Reserved                           */
    uint32_t REPNB:4;          /*!< bit: 16..19  Redirected Endpoint Number         */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UECFG5_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UECFG5_OFFSET          0x114        /**< \brief (USBC_UECFG5 offset) Endpoint Configuration Register */
#define USBC_UECFG5_RESETVALUE      _U_(0x00000000); /**< \brief (USBC_UECFG5 reset_value) Endpoint Configuration Register */

#define USBC_UECFG5_EPBK_Pos        2            /**< \brief (USBC_UECFG5) Endpoint Bank */
#define USBC_UECFG5_EPBK            (_U_(0x1) << USBC_UECFG5_EPBK_Pos)
#define   USBC_UECFG5_EPBK_SINGLE_Val     _U_(0x0)   /**< \brief (USBC_UECFG5)  */
#define   USBC_UECFG5_EPBK_DOUBLE_Val     _U_(0x1)   /**< \brief (USBC_UECFG5)  */
#define USBC_UECFG5_EPBK_SINGLE     (USBC_UECFG5_EPBK_SINGLE_Val   << USBC_UECFG5_EPBK_Pos)
#define USBC_UECFG5_EPBK_DOUBLE     (USBC_UECFG5_EPBK_DOUBLE_Val   << USBC_UECFG5_EPBK_Pos)
#define USBC_UECFG5_EPSIZE_Pos      4            /**< \brief (USBC_UECFG5) Endpoint Size */
#define USBC_UECFG5_EPSIZE_Msk      (_U_(0x7) << USBC_UECFG5_EPSIZE_Pos)
#define USBC_UECFG5_EPSIZE(value)   (USBC_UECFG5_EPSIZE_Msk & ((value) << USBC_UECFG5_EPSIZE_Pos))
#define   USBC_UECFG5_EPSIZE_8_Val        _U_(0x0)   /**< \brief (USBC_UECFG5)  */
#define   USBC_UECFG5_EPSIZE_16_Val       _U_(0x1)   /**< \brief (USBC_UECFG5)  */
#define   USBC_UECFG5_EPSIZE_32_Val       _U_(0x2)   /**< \brief (USBC_UECFG5)  */
#define   USBC_UECFG5_EPSIZE_64_Val       _U_(0x3)   /**< \brief (USBC_UECFG5)  */
#define   USBC_UECFG5_EPSIZE_128_Val      _U_(0x4)   /**< \brief (USBC_UECFG5)  */
#define   USBC_UECFG5_EPSIZE_256_Val      _U_(0x5)   /**< \brief (USBC_UECFG5)  */
#define   USBC_UECFG5_EPSIZE_512_Val      _U_(0x6)   /**< \brief (USBC_UECFG5)  */
#define   USBC_UECFG5_EPSIZE_1024_Val     _U_(0x7)   /**< \brief (USBC_UECFG5)  */
#define USBC_UECFG5_EPSIZE_8        (USBC_UECFG5_EPSIZE_8_Val      << USBC_UECFG5_EPSIZE_Pos)
#define USBC_UECFG5_EPSIZE_16       (USBC_UECFG5_EPSIZE_16_Val     << USBC_UECFG5_EPSIZE_Pos)
#define USBC_UECFG5_EPSIZE_32       (USBC_UECFG5_EPSIZE_32_Val     << USBC_UECFG5_EPSIZE_Pos)
#define USBC_UECFG5_EPSIZE_64       (USBC_UECFG5_EPSIZE_64_Val     << USBC_UECFG5_EPSIZE_Pos)
#define USBC_UECFG5_EPSIZE_128      (USBC_UECFG5_EPSIZE_128_Val    << USBC_UECFG5_EPSIZE_Pos)
#define USBC_UECFG5_EPSIZE_256      (USBC_UECFG5_EPSIZE_256_Val    << USBC_UECFG5_EPSIZE_Pos)
#define USBC_UECFG5_EPSIZE_512      (USBC_UECFG5_EPSIZE_512_Val    << USBC_UECFG5_EPSIZE_Pos)
#define USBC_UECFG5_EPSIZE_1024     (USBC_UECFG5_EPSIZE_1024_Val   << USBC_UECFG5_EPSIZE_Pos)
#define USBC_UECFG5_EPDIR_Pos       8            /**< \brief (USBC_UECFG5) Endpoint Direction */
#define USBC_UECFG5_EPDIR           (_U_(0x1) << USBC_UECFG5_EPDIR_Pos)
#define   USBC_UECFG5_EPDIR_OUT_Val       _U_(0x0)   /**< \brief (USBC_UECFG5)  */
#define   USBC_UECFG5_EPDIR_IN_Val        _U_(0x1)   /**< \brief (USBC_UECFG5)  */
#define USBC_UECFG5_EPDIR_OUT       (USBC_UECFG5_EPDIR_OUT_Val     << USBC_UECFG5_EPDIR_Pos)
#define USBC_UECFG5_EPDIR_IN        (USBC_UECFG5_EPDIR_IN_Val      << USBC_UECFG5_EPDIR_Pos)
#define USBC_UECFG5_EPTYPE_Pos      11           /**< \brief (USBC_UECFG5) Endpoint Type */
#define USBC_UECFG5_EPTYPE_Msk      (_U_(0x3) << USBC_UECFG5_EPTYPE_Pos)
#define USBC_UECFG5_EPTYPE(value)   (USBC_UECFG5_EPTYPE_Msk & ((value) << USBC_UECFG5_EPTYPE_Pos))
#define   USBC_UECFG5_EPTYPE_CONTROL_Val  _U_(0x0)   /**< \brief (USBC_UECFG5)  */
#define   USBC_UECFG5_EPTYPE_ISOCHRONOUS_Val _U_(0x1)   /**< \brief (USBC_UECFG5)  */
#define   USBC_UECFG5_EPTYPE_BULK_Val     _U_(0x2)   /**< \brief (USBC_UECFG5)  */
#define   USBC_UECFG5_EPTYPE_INTERRUPT_Val _U_(0x3)   /**< \brief (USBC_UECFG5)  */
#define USBC_UECFG5_EPTYPE_CONTROL  (USBC_UECFG5_EPTYPE_CONTROL_Val << USBC_UECFG5_EPTYPE_Pos)
#define USBC_UECFG5_EPTYPE_ISOCHRONOUS (USBC_UECFG5_EPTYPE_ISOCHRONOUS_Val << USBC_UECFG5_EPTYPE_Pos)
#define USBC_UECFG5_EPTYPE_BULK     (USBC_UECFG5_EPTYPE_BULK_Val   << USBC_UECFG5_EPTYPE_Pos)
#define USBC_UECFG5_EPTYPE_INTERRUPT (USBC_UECFG5_EPTYPE_INTERRUPT_Val << USBC_UECFG5_EPTYPE_Pos)
#define USBC_UECFG5_REPNB_Pos       16           /**< \brief (USBC_UECFG5) Redirected Endpoint Number */
#define USBC_UECFG5_REPNB_Msk       (_U_(0xF) << USBC_UECFG5_REPNB_Pos)
#define USBC_UECFG5_REPNB(value)    (USBC_UECFG5_REPNB_Msk & ((value) << USBC_UECFG5_REPNB_Pos))
#define USBC_UECFG5_MASK            _U_(0x000F1974) /**< \brief (USBC_UECFG5) MASK Register */

/* -------- USBC_UECFG6 : (USBC Offset: 0x118) (R/W 32) Endpoint Configuration Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t :2;               /*!< bit:  0.. 1  Reserved                           */
    uint32_t EPBK:1;           /*!< bit:      2  Endpoint Bank                      */
    uint32_t :1;               /*!< bit:      3  Reserved                           */
    uint32_t EPSIZE:3;         /*!< bit:  4.. 6  Endpoint Size                      */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t EPDIR:1;          /*!< bit:      8  Endpoint Direction                 */
    uint32_t :2;               /*!< bit:  9..10  Reserved                           */
    uint32_t EPTYPE:2;         /*!< bit: 11..12  Endpoint Type                      */
    uint32_t :3;               /*!< bit: 13..15  Reserved                           */
    uint32_t REPNB:4;          /*!< bit: 16..19  Redirected Endpoint Number         */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UECFG6_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UECFG6_OFFSET          0x118        /**< \brief (USBC_UECFG6 offset) Endpoint Configuration Register */
#define USBC_UECFG6_RESETVALUE      _U_(0x00000000); /**< \brief (USBC_UECFG6 reset_value) Endpoint Configuration Register */

#define USBC_UECFG6_EPBK_Pos        2            /**< \brief (USBC_UECFG6) Endpoint Bank */
#define USBC_UECFG6_EPBK            (_U_(0x1) << USBC_UECFG6_EPBK_Pos)
#define   USBC_UECFG6_EPBK_SINGLE_Val     _U_(0x0)   /**< \brief (USBC_UECFG6)  */
#define   USBC_UECFG6_EPBK_DOUBLE_Val     _U_(0x1)   /**< \brief (USBC_UECFG6)  */
#define USBC_UECFG6_EPBK_SINGLE     (USBC_UECFG6_EPBK_SINGLE_Val   << USBC_UECFG6_EPBK_Pos)
#define USBC_UECFG6_EPBK_DOUBLE     (USBC_UECFG6_EPBK_DOUBLE_Val   << USBC_UECFG6_EPBK_Pos)
#define USBC_UECFG6_EPSIZE_Pos      4            /**< \brief (USBC_UECFG6) Endpoint Size */
#define USBC_UECFG6_EPSIZE_Msk      (_U_(0x7) << USBC_UECFG6_EPSIZE_Pos)
#define USBC_UECFG6_EPSIZE(value)   (USBC_UECFG6_EPSIZE_Msk & ((value) << USBC_UECFG6_EPSIZE_Pos))
#define   USBC_UECFG6_EPSIZE_8_Val        _U_(0x0)   /**< \brief (USBC_UECFG6)  */
#define   USBC_UECFG6_EPSIZE_16_Val       _U_(0x1)   /**< \brief (USBC_UECFG6)  */
#define   USBC_UECFG6_EPSIZE_32_Val       _U_(0x2)   /**< \brief (USBC_UECFG6)  */
#define   USBC_UECFG6_EPSIZE_64_Val       _U_(0x3)   /**< \brief (USBC_UECFG6)  */
#define   USBC_UECFG6_EPSIZE_128_Val      _U_(0x4)   /**< \brief (USBC_UECFG6)  */
#define   USBC_UECFG6_EPSIZE_256_Val      _U_(0x5)   /**< \brief (USBC_UECFG6)  */
#define   USBC_UECFG6_EPSIZE_512_Val      _U_(0x6)   /**< \brief (USBC_UECFG6)  */
#define   USBC_UECFG6_EPSIZE_1024_Val     _U_(0x7)   /**< \brief (USBC_UECFG6)  */
#define USBC_UECFG6_EPSIZE_8        (USBC_UECFG6_EPSIZE_8_Val      << USBC_UECFG6_EPSIZE_Pos)
#define USBC_UECFG6_EPSIZE_16       (USBC_UECFG6_EPSIZE_16_Val     << USBC_UECFG6_EPSIZE_Pos)
#define USBC_UECFG6_EPSIZE_32       (USBC_UECFG6_EPSIZE_32_Val     << USBC_UECFG6_EPSIZE_Pos)
#define USBC_UECFG6_EPSIZE_64       (USBC_UECFG6_EPSIZE_64_Val     << USBC_UECFG6_EPSIZE_Pos)
#define USBC_UECFG6_EPSIZE_128      (USBC_UECFG6_EPSIZE_128_Val    << USBC_UECFG6_EPSIZE_Pos)
#define USBC_UECFG6_EPSIZE_256      (USBC_UECFG6_EPSIZE_256_Val    << USBC_UECFG6_EPSIZE_Pos)
#define USBC_UECFG6_EPSIZE_512      (USBC_UECFG6_EPSIZE_512_Val    << USBC_UECFG6_EPSIZE_Pos)
#define USBC_UECFG6_EPSIZE_1024     (USBC_UECFG6_EPSIZE_1024_Val   << USBC_UECFG6_EPSIZE_Pos)
#define USBC_UECFG6_EPDIR_Pos       8            /**< \brief (USBC_UECFG6) Endpoint Direction */
#define USBC_UECFG6_EPDIR           (_U_(0x1) << USBC_UECFG6_EPDIR_Pos)
#define   USBC_UECFG6_EPDIR_OUT_Val       _U_(0x0)   /**< \brief (USBC_UECFG6)  */
#define   USBC_UECFG6_EPDIR_IN_Val        _U_(0x1)   /**< \brief (USBC_UECFG6)  */
#define USBC_UECFG6_EPDIR_OUT       (USBC_UECFG6_EPDIR_OUT_Val     << USBC_UECFG6_EPDIR_Pos)
#define USBC_UECFG6_EPDIR_IN        (USBC_UECFG6_EPDIR_IN_Val      << USBC_UECFG6_EPDIR_Pos)
#define USBC_UECFG6_EPTYPE_Pos      11           /**< \brief (USBC_UECFG6) Endpoint Type */
#define USBC_UECFG6_EPTYPE_Msk      (_U_(0x3) << USBC_UECFG6_EPTYPE_Pos)
#define USBC_UECFG6_EPTYPE(value)   (USBC_UECFG6_EPTYPE_Msk & ((value) << USBC_UECFG6_EPTYPE_Pos))
#define   USBC_UECFG6_EPTYPE_CONTROL_Val  _U_(0x0)   /**< \brief (USBC_UECFG6)  */
#define   USBC_UECFG6_EPTYPE_ISOCHRONOUS_Val _U_(0x1)   /**< \brief (USBC_UECFG6)  */
#define   USBC_UECFG6_EPTYPE_BULK_Val     _U_(0x2)   /**< \brief (USBC_UECFG6)  */
#define   USBC_UECFG6_EPTYPE_INTERRUPT_Val _U_(0x3)   /**< \brief (USBC_UECFG6)  */
#define USBC_UECFG6_EPTYPE_CONTROL  (USBC_UECFG6_EPTYPE_CONTROL_Val << USBC_UECFG6_EPTYPE_Pos)
#define USBC_UECFG6_EPTYPE_ISOCHRONOUS (USBC_UECFG6_EPTYPE_ISOCHRONOUS_Val << USBC_UECFG6_EPTYPE_Pos)
#define USBC_UECFG6_EPTYPE_BULK     (USBC_UECFG6_EPTYPE_BULK_Val   << USBC_UECFG6_EPTYPE_Pos)
#define USBC_UECFG6_EPTYPE_INTERRUPT (USBC_UECFG6_EPTYPE_INTERRUPT_Val << USBC_UECFG6_EPTYPE_Pos)
#define USBC_UECFG6_REPNB_Pos       16           /**< \brief (USBC_UECFG6) Redirected Endpoint Number */
#define USBC_UECFG6_REPNB_Msk       (_U_(0xF) << USBC_UECFG6_REPNB_Pos)
#define USBC_UECFG6_REPNB(value)    (USBC_UECFG6_REPNB_Msk & ((value) << USBC_UECFG6_REPNB_Pos))
#define USBC_UECFG6_MASK            _U_(0x000F1974) /**< \brief (USBC_UECFG6) MASK Register */

/* -------- USBC_UECFG7 : (USBC Offset: 0x11C) (R/W 32) Endpoint Configuration Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t :2;               /*!< bit:  0.. 1  Reserved                           */
    uint32_t EPBK:1;           /*!< bit:      2  Endpoint Bank                      */
    uint32_t :1;               /*!< bit:      3  Reserved                           */
    uint32_t EPSIZE:3;         /*!< bit:  4.. 6  Endpoint Size                      */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t EPDIR:1;          /*!< bit:      8  Endpoint Direction                 */
    uint32_t :2;               /*!< bit:  9..10  Reserved                           */
    uint32_t EPTYPE:2;         /*!< bit: 11..12  Endpoint Type                      */
    uint32_t :3;               /*!< bit: 13..15  Reserved                           */
    uint32_t REPNB:4;          /*!< bit: 16..19  Redirected Endpoint Number         */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UECFG7_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UECFG7_OFFSET          0x11C        /**< \brief (USBC_UECFG7 offset) Endpoint Configuration Register */
#define USBC_UECFG7_RESETVALUE      _U_(0x00000000); /**< \brief (USBC_UECFG7 reset_value) Endpoint Configuration Register */

#define USBC_UECFG7_EPBK_Pos        2            /**< \brief (USBC_UECFG7) Endpoint Bank */
#define USBC_UECFG7_EPBK            (_U_(0x1) << USBC_UECFG7_EPBK_Pos)
#define   USBC_UECFG7_EPBK_SINGLE_Val     _U_(0x0)   /**< \brief (USBC_UECFG7)  */
#define   USBC_UECFG7_EPBK_DOUBLE_Val     _U_(0x1)   /**< \brief (USBC_UECFG7)  */
#define USBC_UECFG7_EPBK_SINGLE     (USBC_UECFG7_EPBK_SINGLE_Val   << USBC_UECFG7_EPBK_Pos)
#define USBC_UECFG7_EPBK_DOUBLE     (USBC_UECFG7_EPBK_DOUBLE_Val   << USBC_UECFG7_EPBK_Pos)
#define USBC_UECFG7_EPSIZE_Pos      4            /**< \brief (USBC_UECFG7) Endpoint Size */
#define USBC_UECFG7_EPSIZE_Msk      (_U_(0x7) << USBC_UECFG7_EPSIZE_Pos)
#define USBC_UECFG7_EPSIZE(value)   (USBC_UECFG7_EPSIZE_Msk & ((value) << USBC_UECFG7_EPSIZE_Pos))
#define   USBC_UECFG7_EPSIZE_8_Val        _U_(0x0)   /**< \brief (USBC_UECFG7)  */
#define   USBC_UECFG7_EPSIZE_16_Val       _U_(0x1)   /**< \brief (USBC_UECFG7)  */
#define   USBC_UECFG7_EPSIZE_32_Val       _U_(0x2)   /**< \brief (USBC_UECFG7)  */
#define   USBC_UECFG7_EPSIZE_64_Val       _U_(0x3)   /**< \brief (USBC_UECFG7)  */
#define   USBC_UECFG7_EPSIZE_128_Val      _U_(0x4)   /**< \brief (USBC_UECFG7)  */
#define   USBC_UECFG7_EPSIZE_256_Val      _U_(0x5)   /**< \brief (USBC_UECFG7)  */
#define   USBC_UECFG7_EPSIZE_512_Val      _U_(0x6)   /**< \brief (USBC_UECFG7)  */
#define   USBC_UECFG7_EPSIZE_1024_Val     _U_(0x7)   /**< \brief (USBC_UECFG7)  */
#define USBC_UECFG7_EPSIZE_8        (USBC_UECFG7_EPSIZE_8_Val      << USBC_UECFG7_EPSIZE_Pos)
#define USBC_UECFG7_EPSIZE_16       (USBC_UECFG7_EPSIZE_16_Val     << USBC_UECFG7_EPSIZE_Pos)
#define USBC_UECFG7_EPSIZE_32       (USBC_UECFG7_EPSIZE_32_Val     << USBC_UECFG7_EPSIZE_Pos)
#define USBC_UECFG7_EPSIZE_64       (USBC_UECFG7_EPSIZE_64_Val     << USBC_UECFG7_EPSIZE_Pos)
#define USBC_UECFG7_EPSIZE_128      (USBC_UECFG7_EPSIZE_128_Val    << USBC_UECFG7_EPSIZE_Pos)
#define USBC_UECFG7_EPSIZE_256      (USBC_UECFG7_EPSIZE_256_Val    << USBC_UECFG7_EPSIZE_Pos)
#define USBC_UECFG7_EPSIZE_512      (USBC_UECFG7_EPSIZE_512_Val    << USBC_UECFG7_EPSIZE_Pos)
#define USBC_UECFG7_EPSIZE_1024     (USBC_UECFG7_EPSIZE_1024_Val   << USBC_UECFG7_EPSIZE_Pos)
#define USBC_UECFG7_EPDIR_Pos       8            /**< \brief (USBC_UECFG7) Endpoint Direction */
#define USBC_UECFG7_EPDIR           (_U_(0x1) << USBC_UECFG7_EPDIR_Pos)
#define   USBC_UECFG7_EPDIR_OUT_Val       _U_(0x0)   /**< \brief (USBC_UECFG7)  */
#define   USBC_UECFG7_EPDIR_IN_Val        _U_(0x1)   /**< \brief (USBC_UECFG7)  */
#define USBC_UECFG7_EPDIR_OUT       (USBC_UECFG7_EPDIR_OUT_Val     << USBC_UECFG7_EPDIR_Pos)
#define USBC_UECFG7_EPDIR_IN        (USBC_UECFG7_EPDIR_IN_Val      << USBC_UECFG7_EPDIR_Pos)
#define USBC_UECFG7_EPTYPE_Pos      11           /**< \brief (USBC_UECFG7) Endpoint Type */
#define USBC_UECFG7_EPTYPE_Msk      (_U_(0x3) << USBC_UECFG7_EPTYPE_Pos)
#define USBC_UECFG7_EPTYPE(value)   (USBC_UECFG7_EPTYPE_Msk & ((value) << USBC_UECFG7_EPTYPE_Pos))
#define   USBC_UECFG7_EPTYPE_CONTROL_Val  _U_(0x0)   /**< \brief (USBC_UECFG7)  */
#define   USBC_UECFG7_EPTYPE_ISOCHRONOUS_Val _U_(0x1)   /**< \brief (USBC_UECFG7)  */
#define   USBC_UECFG7_EPTYPE_BULK_Val     _U_(0x2)   /**< \brief (USBC_UECFG7)  */
#define   USBC_UECFG7_EPTYPE_INTERRUPT_Val _U_(0x3)   /**< \brief (USBC_UECFG7)  */
#define USBC_UECFG7_EPTYPE_CONTROL  (USBC_UECFG7_EPTYPE_CONTROL_Val << USBC_UECFG7_EPTYPE_Pos)
#define USBC_UECFG7_EPTYPE_ISOCHRONOUS (USBC_UECFG7_EPTYPE_ISOCHRONOUS_Val << USBC_UECFG7_EPTYPE_Pos)
#define USBC_UECFG7_EPTYPE_BULK     (USBC_UECFG7_EPTYPE_BULK_Val   << USBC_UECFG7_EPTYPE_Pos)
#define USBC_UECFG7_EPTYPE_INTERRUPT (USBC_UECFG7_EPTYPE_INTERRUPT_Val << USBC_UECFG7_EPTYPE_Pos)
#define USBC_UECFG7_REPNB_Pos       16           /**< \brief (USBC_UECFG7) Redirected Endpoint Number */
#define USBC_UECFG7_REPNB_Msk       (_U_(0xF) << USBC_UECFG7_REPNB_Pos)
#define USBC_UECFG7_REPNB(value)    (USBC_UECFG7_REPNB_Msk & ((value) << USBC_UECFG7_REPNB_Pos))
#define USBC_UECFG7_MASK            _U_(0x000F1974) /**< \brief (USBC_UECFG7) MASK Register */

/* -------- USBC_UESTA0 : (USBC Offset: 0x130) (R/  32) Endpoint Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXINI:1;          /*!< bit:      0  Transmitted IN Data Interrupt      */
    uint32_t RXOUTI:1;         /*!< bit:      1  Received OUT Data Interrupt        */
    uint32_t RXSTPI:1;         /*!< bit:      2  Received SETUP Interrupt           */
    uint32_t NAKOUTI:1;        /*!< bit:      3  NAKed OUT Interrupt                */
    uint32_t NAKINI:1;         /*!< bit:      4  NAKed IN Interrupt                 */
    uint32_t :1;               /*!< bit:      5  Reserved                           */
    uint32_t STALLEDI:1;       /*!< bit:      6  STALLed Interrupt                  */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t DTSEQ:2;          /*!< bit:  8.. 9  Data Toggle Sequence               */
    uint32_t :1;               /*!< bit:     10  Reserved                           */
    uint32_t RAMACERI:1;       /*!< bit:     11  Ram Access Error Interrupt         */
    uint32_t NBUSYBK:2;        /*!< bit: 12..13  Number Of Busy Banks               */
    uint32_t CURRBK:2;         /*!< bit: 14..15  Current Bank                       */
    uint32_t :1;               /*!< bit:     16  Reserved                           */
    uint32_t CTRLDIR:1;        /*!< bit:     17  Control Direction                  */
    uint32_t :14;              /*!< bit: 18..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UESTA0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UESTA0_OFFSET          0x130        /**< \brief (USBC_UESTA0 offset) Endpoint Status Register */
#define USBC_UESTA0_RESETVALUE      _U_(0x00000100); /**< \brief (USBC_UESTA0 reset_value) Endpoint Status Register */

#define USBC_UESTA0_TXINI_Pos       0            /**< \brief (USBC_UESTA0) Transmitted IN Data Interrupt */
#define USBC_UESTA0_TXINI           (_U_(0x1) << USBC_UESTA0_TXINI_Pos)
#define USBC_UESTA0_RXOUTI_Pos      1            /**< \brief (USBC_UESTA0) Received OUT Data Interrupt */
#define USBC_UESTA0_RXOUTI          (_U_(0x1) << USBC_UESTA0_RXOUTI_Pos)
#define USBC_UESTA0_RXSTPI_Pos      2            /**< \brief (USBC_UESTA0) Received SETUP Interrupt */
#define USBC_UESTA0_RXSTPI          (_U_(0x1) << USBC_UESTA0_RXSTPI_Pos)
#define USBC_UESTA0_NAKOUTI_Pos     3            /**< \brief (USBC_UESTA0) NAKed OUT Interrupt */
#define USBC_UESTA0_NAKOUTI         (_U_(0x1) << USBC_UESTA0_NAKOUTI_Pos)
#define USBC_UESTA0_NAKINI_Pos      4            /**< \brief (USBC_UESTA0) NAKed IN Interrupt */
#define USBC_UESTA0_NAKINI          (_U_(0x1) << USBC_UESTA0_NAKINI_Pos)
#define USBC_UESTA0_STALLEDI_Pos    6            /**< \brief (USBC_UESTA0) STALLed Interrupt */
#define USBC_UESTA0_STALLEDI        (_U_(0x1) << USBC_UESTA0_STALLEDI_Pos)
#define USBC_UESTA0_DTSEQ_Pos       8            /**< \brief (USBC_UESTA0) Data Toggle Sequence */
#define USBC_UESTA0_DTSEQ_Msk       (_U_(0x3) << USBC_UESTA0_DTSEQ_Pos)
#define USBC_UESTA0_DTSEQ(value)    (USBC_UESTA0_DTSEQ_Msk & ((value) << USBC_UESTA0_DTSEQ_Pos))
#define USBC_UESTA0_RAMACERI_Pos    11           /**< \brief (USBC_UESTA0) Ram Access Error Interrupt */
#define USBC_UESTA0_RAMACERI        (_U_(0x1) << USBC_UESTA0_RAMACERI_Pos)
#define USBC_UESTA0_NBUSYBK_Pos     12           /**< \brief (USBC_UESTA0) Number Of Busy Banks */
#define USBC_UESTA0_NBUSYBK_Msk     (_U_(0x3) << USBC_UESTA0_NBUSYBK_Pos)
#define USBC_UESTA0_NBUSYBK(value)  (USBC_UESTA0_NBUSYBK_Msk & ((value) << USBC_UESTA0_NBUSYBK_Pos))
#define USBC_UESTA0_CURRBK_Pos      14           /**< \brief (USBC_UESTA0) Current Bank */
#define USBC_UESTA0_CURRBK_Msk      (_U_(0x3) << USBC_UESTA0_CURRBK_Pos)
#define USBC_UESTA0_CURRBK(value)   (USBC_UESTA0_CURRBK_Msk & ((value) << USBC_UESTA0_CURRBK_Pos))
#define USBC_UESTA0_CTRLDIR_Pos     17           /**< \brief (USBC_UESTA0) Control Direction */
#define USBC_UESTA0_CTRLDIR         (_U_(0x1) << USBC_UESTA0_CTRLDIR_Pos)
#define   USBC_UESTA0_CTRLDIR_OUT_Val     _U_(0x0)   /**< \brief (USBC_UESTA0)  */
#define   USBC_UESTA0_CTRLDIR_IN_Val      _U_(0x1)   /**< \brief (USBC_UESTA0)  */
#define USBC_UESTA0_CTRLDIR_OUT     (USBC_UESTA0_CTRLDIR_OUT_Val   << USBC_UESTA0_CTRLDIR_Pos)
#define USBC_UESTA0_CTRLDIR_IN      (USBC_UESTA0_CTRLDIR_IN_Val    << USBC_UESTA0_CTRLDIR_Pos)
#define USBC_UESTA0_MASK            _U_(0x0002FB5F) /**< \brief (USBC_UESTA0) MASK Register */

/* -------- USBC_UESTA1 : (USBC Offset: 0x134) (R/  32) Endpoint Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXINI:1;          /*!< bit:      0  Transmitted IN Data Interrupt      */
    uint32_t RXOUTI:1;         /*!< bit:      1  Received OUT Data Interrupt        */
    uint32_t RXSTPI:1;         /*!< bit:      2  Received SETUP Interrupt           */
    uint32_t NAKOUTI:1;        /*!< bit:      3  NAKed OUT Interrupt                */
    uint32_t NAKINI:1;         /*!< bit:      4  NAKed IN Interrupt                 */
    uint32_t :1;               /*!< bit:      5  Reserved                           */
    uint32_t STALLEDI:1;       /*!< bit:      6  STALLed Interrupt                  */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t DTSEQ:2;          /*!< bit:  8.. 9  Data Toggle Sequence               */
    uint32_t :1;               /*!< bit:     10  Reserved                           */
    uint32_t RAMACERI:1;       /*!< bit:     11  Ram Access Error Interrupt         */
    uint32_t NBUSYBK:2;        /*!< bit: 12..13  Number Of Busy Banks               */
    uint32_t CURRBK:2;         /*!< bit: 14..15  Current Bank                       */
    uint32_t :1;               /*!< bit:     16  Reserved                           */
    uint32_t CTRLDIR:1;        /*!< bit:     17  Control Direction                  */
    uint32_t :14;              /*!< bit: 18..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UESTA1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UESTA1_OFFSET          0x134        /**< \brief (USBC_UESTA1 offset) Endpoint Status Register */
#define USBC_UESTA1_RESETVALUE      _U_(0x00000100); /**< \brief (USBC_UESTA1 reset_value) Endpoint Status Register */

#define USBC_UESTA1_TXINI_Pos       0            /**< \brief (USBC_UESTA1) Transmitted IN Data Interrupt */
#define USBC_UESTA1_TXINI           (_U_(0x1) << USBC_UESTA1_TXINI_Pos)
#define USBC_UESTA1_RXOUTI_Pos      1            /**< \brief (USBC_UESTA1) Received OUT Data Interrupt */
#define USBC_UESTA1_RXOUTI          (_U_(0x1) << USBC_UESTA1_RXOUTI_Pos)
#define USBC_UESTA1_RXSTPI_Pos      2            /**< \brief (USBC_UESTA1) Received SETUP Interrupt */
#define USBC_UESTA1_RXSTPI          (_U_(0x1) << USBC_UESTA1_RXSTPI_Pos)
#define USBC_UESTA1_NAKOUTI_Pos     3            /**< \brief (USBC_UESTA1) NAKed OUT Interrupt */
#define USBC_UESTA1_NAKOUTI         (_U_(0x1) << USBC_UESTA1_NAKOUTI_Pos)
#define USBC_UESTA1_NAKINI_Pos      4            /**< \brief (USBC_UESTA1) NAKed IN Interrupt */
#define USBC_UESTA1_NAKINI          (_U_(0x1) << USBC_UESTA1_NAKINI_Pos)
#define USBC_UESTA1_STALLEDI_Pos    6            /**< \brief (USBC_UESTA1) STALLed Interrupt */
#define USBC_UESTA1_STALLEDI        (_U_(0x1) << USBC_UESTA1_STALLEDI_Pos)
#define USBC_UESTA1_DTSEQ_Pos       8            /**< \brief (USBC_UESTA1) Data Toggle Sequence */
#define USBC_UESTA1_DTSEQ_Msk       (_U_(0x3) << USBC_UESTA1_DTSEQ_Pos)
#define USBC_UESTA1_DTSEQ(value)    (USBC_UESTA1_DTSEQ_Msk & ((value) << USBC_UESTA1_DTSEQ_Pos))
#define USBC_UESTA1_RAMACERI_Pos    11           /**< \brief (USBC_UESTA1) Ram Access Error Interrupt */
#define USBC_UESTA1_RAMACERI        (_U_(0x1) << USBC_UESTA1_RAMACERI_Pos)
#define USBC_UESTA1_NBUSYBK_Pos     12           /**< \brief (USBC_UESTA1) Number Of Busy Banks */
#define USBC_UESTA1_NBUSYBK_Msk     (_U_(0x3) << USBC_UESTA1_NBUSYBK_Pos)
#define USBC_UESTA1_NBUSYBK(value)  (USBC_UESTA1_NBUSYBK_Msk & ((value) << USBC_UESTA1_NBUSYBK_Pos))
#define USBC_UESTA1_CURRBK_Pos      14           /**< \brief (USBC_UESTA1) Current Bank */
#define USBC_UESTA1_CURRBK_Msk      (_U_(0x3) << USBC_UESTA1_CURRBK_Pos)
#define USBC_UESTA1_CURRBK(value)   (USBC_UESTA1_CURRBK_Msk & ((value) << USBC_UESTA1_CURRBK_Pos))
#define USBC_UESTA1_CTRLDIR_Pos     17           /**< \brief (USBC_UESTA1) Control Direction */
#define USBC_UESTA1_CTRLDIR         (_U_(0x1) << USBC_UESTA1_CTRLDIR_Pos)
#define   USBC_UESTA1_CTRLDIR_OUT_Val     _U_(0x0)   /**< \brief (USBC_UESTA1)  */
#define   USBC_UESTA1_CTRLDIR_IN_Val      _U_(0x1)   /**< \brief (USBC_UESTA1)  */
#define USBC_UESTA1_CTRLDIR_OUT     (USBC_UESTA1_CTRLDIR_OUT_Val   << USBC_UESTA1_CTRLDIR_Pos)
#define USBC_UESTA1_CTRLDIR_IN      (USBC_UESTA1_CTRLDIR_IN_Val    << USBC_UESTA1_CTRLDIR_Pos)
#define USBC_UESTA1_MASK            _U_(0x0002FB5F) /**< \brief (USBC_UESTA1) MASK Register */

/* -------- USBC_UESTA2 : (USBC Offset: 0x138) (R/  32) Endpoint Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXINI:1;          /*!< bit:      0  Transmitted IN Data Interrupt      */
    uint32_t RXOUTI:1;         /*!< bit:      1  Received OUT Data Interrupt        */
    uint32_t RXSTPI:1;         /*!< bit:      2  Received SETUP Interrupt           */
    uint32_t NAKOUTI:1;        /*!< bit:      3  NAKed OUT Interrupt                */
    uint32_t NAKINI:1;         /*!< bit:      4  NAKed IN Interrupt                 */
    uint32_t :1;               /*!< bit:      5  Reserved                           */
    uint32_t STALLEDI:1;       /*!< bit:      6  STALLed Interrupt                  */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t DTSEQ:2;          /*!< bit:  8.. 9  Data Toggle Sequence               */
    uint32_t :1;               /*!< bit:     10  Reserved                           */
    uint32_t RAMACERI:1;       /*!< bit:     11  Ram Access Error Interrupt         */
    uint32_t NBUSYBK:2;        /*!< bit: 12..13  Number Of Busy Banks               */
    uint32_t CURRBK:2;         /*!< bit: 14..15  Current Bank                       */
    uint32_t :1;               /*!< bit:     16  Reserved                           */
    uint32_t CTRLDIR:1;        /*!< bit:     17  Control Direction                  */
    uint32_t :14;              /*!< bit: 18..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UESTA2_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UESTA2_OFFSET          0x138        /**< \brief (USBC_UESTA2 offset) Endpoint Status Register */
#define USBC_UESTA2_RESETVALUE      _U_(0x00000100); /**< \brief (USBC_UESTA2 reset_value) Endpoint Status Register */

#define USBC_UESTA2_TXINI_Pos       0            /**< \brief (USBC_UESTA2) Transmitted IN Data Interrupt */
#define USBC_UESTA2_TXINI           (_U_(0x1) << USBC_UESTA2_TXINI_Pos)
#define USBC_UESTA2_RXOUTI_Pos      1            /**< \brief (USBC_UESTA2) Received OUT Data Interrupt */
#define USBC_UESTA2_RXOUTI          (_U_(0x1) << USBC_UESTA2_RXOUTI_Pos)
#define USBC_UESTA2_RXSTPI_Pos      2            /**< \brief (USBC_UESTA2) Received SETUP Interrupt */
#define USBC_UESTA2_RXSTPI          (_U_(0x1) << USBC_UESTA2_RXSTPI_Pos)
#define USBC_UESTA2_NAKOUTI_Pos     3            /**< \brief (USBC_UESTA2) NAKed OUT Interrupt */
#define USBC_UESTA2_NAKOUTI         (_U_(0x1) << USBC_UESTA2_NAKOUTI_Pos)
#define USBC_UESTA2_NAKINI_Pos      4            /**< \brief (USBC_UESTA2) NAKed IN Interrupt */
#define USBC_UESTA2_NAKINI          (_U_(0x1) << USBC_UESTA2_NAKINI_Pos)
#define USBC_UESTA2_STALLEDI_Pos    6            /**< \brief (USBC_UESTA2) STALLed Interrupt */
#define USBC_UESTA2_STALLEDI        (_U_(0x1) << USBC_UESTA2_STALLEDI_Pos)
#define USBC_UESTA2_DTSEQ_Pos       8            /**< \brief (USBC_UESTA2) Data Toggle Sequence */
#define USBC_UESTA2_DTSEQ_Msk       (_U_(0x3) << USBC_UESTA2_DTSEQ_Pos)
#define USBC_UESTA2_DTSEQ(value)    (USBC_UESTA2_DTSEQ_Msk & ((value) << USBC_UESTA2_DTSEQ_Pos))
#define USBC_UESTA2_RAMACERI_Pos    11           /**< \brief (USBC_UESTA2) Ram Access Error Interrupt */
#define USBC_UESTA2_RAMACERI        (_U_(0x1) << USBC_UESTA2_RAMACERI_Pos)
#define USBC_UESTA2_NBUSYBK_Pos     12           /**< \brief (USBC_UESTA2) Number Of Busy Banks */
#define USBC_UESTA2_NBUSYBK_Msk     (_U_(0x3) << USBC_UESTA2_NBUSYBK_Pos)
#define USBC_UESTA2_NBUSYBK(value)  (USBC_UESTA2_NBUSYBK_Msk & ((value) << USBC_UESTA2_NBUSYBK_Pos))
#define USBC_UESTA2_CURRBK_Pos      14           /**< \brief (USBC_UESTA2) Current Bank */
#define USBC_UESTA2_CURRBK_Msk      (_U_(0x3) << USBC_UESTA2_CURRBK_Pos)
#define USBC_UESTA2_CURRBK(value)   (USBC_UESTA2_CURRBK_Msk & ((value) << USBC_UESTA2_CURRBK_Pos))
#define USBC_UESTA2_CTRLDIR_Pos     17           /**< \brief (USBC_UESTA2) Control Direction */
#define USBC_UESTA2_CTRLDIR         (_U_(0x1) << USBC_UESTA2_CTRLDIR_Pos)
#define   USBC_UESTA2_CTRLDIR_OUT_Val     _U_(0x0)   /**< \brief (USBC_UESTA2)  */
#define   USBC_UESTA2_CTRLDIR_IN_Val      _U_(0x1)   /**< \brief (USBC_UESTA2)  */
#define USBC_UESTA2_CTRLDIR_OUT     (USBC_UESTA2_CTRLDIR_OUT_Val   << USBC_UESTA2_CTRLDIR_Pos)
#define USBC_UESTA2_CTRLDIR_IN      (USBC_UESTA2_CTRLDIR_IN_Val    << USBC_UESTA2_CTRLDIR_Pos)
#define USBC_UESTA2_MASK            _U_(0x0002FB5F) /**< \brief (USBC_UESTA2) MASK Register */

/* -------- USBC_UESTA3 : (USBC Offset: 0x13C) (R/  32) Endpoint Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXINI:1;          /*!< bit:      0  Transmitted IN Data Interrupt      */
    uint32_t RXOUTI:1;         /*!< bit:      1  Received OUT Data Interrupt        */
    uint32_t RXSTPI:1;         /*!< bit:      2  Received SETUP Interrupt           */
    uint32_t NAKOUTI:1;        /*!< bit:      3  NAKed OUT Interrupt                */
    uint32_t NAKINI:1;         /*!< bit:      4  NAKed IN Interrupt                 */
    uint32_t :1;               /*!< bit:      5  Reserved                           */
    uint32_t STALLEDI:1;       /*!< bit:      6  STALLed Interrupt                  */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t DTSEQ:2;          /*!< bit:  8.. 9  Data Toggle Sequence               */
    uint32_t :1;               /*!< bit:     10  Reserved                           */
    uint32_t RAMACERI:1;       /*!< bit:     11  Ram Access Error Interrupt         */
    uint32_t NBUSYBK:2;        /*!< bit: 12..13  Number Of Busy Banks               */
    uint32_t CURRBK:2;         /*!< bit: 14..15  Current Bank                       */
    uint32_t :1;               /*!< bit:     16  Reserved                           */
    uint32_t CTRLDIR:1;        /*!< bit:     17  Control Direction                  */
    uint32_t :14;              /*!< bit: 18..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UESTA3_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UESTA3_OFFSET          0x13C        /**< \brief (USBC_UESTA3 offset) Endpoint Status Register */
#define USBC_UESTA3_RESETVALUE      _U_(0x00000100); /**< \brief (USBC_UESTA3 reset_value) Endpoint Status Register */

#define USBC_UESTA3_TXINI_Pos       0            /**< \brief (USBC_UESTA3) Transmitted IN Data Interrupt */
#define USBC_UESTA3_TXINI           (_U_(0x1) << USBC_UESTA3_TXINI_Pos)
#define USBC_UESTA3_RXOUTI_Pos      1            /**< \brief (USBC_UESTA3) Received OUT Data Interrupt */
#define USBC_UESTA3_RXOUTI          (_U_(0x1) << USBC_UESTA3_RXOUTI_Pos)
#define USBC_UESTA3_RXSTPI_Pos      2            /**< \brief (USBC_UESTA3) Received SETUP Interrupt */
#define USBC_UESTA3_RXSTPI          (_U_(0x1) << USBC_UESTA3_RXSTPI_Pos)
#define USBC_UESTA3_NAKOUTI_Pos     3            /**< \brief (USBC_UESTA3) NAKed OUT Interrupt */
#define USBC_UESTA3_NAKOUTI         (_U_(0x1) << USBC_UESTA3_NAKOUTI_Pos)
#define USBC_UESTA3_NAKINI_Pos      4            /**< \brief (USBC_UESTA3) NAKed IN Interrupt */
#define USBC_UESTA3_NAKINI          (_U_(0x1) << USBC_UESTA3_NAKINI_Pos)
#define USBC_UESTA3_STALLEDI_Pos    6            /**< \brief (USBC_UESTA3) STALLed Interrupt */
#define USBC_UESTA3_STALLEDI        (_U_(0x1) << USBC_UESTA3_STALLEDI_Pos)
#define USBC_UESTA3_DTSEQ_Pos       8            /**< \brief (USBC_UESTA3) Data Toggle Sequence */
#define USBC_UESTA3_DTSEQ_Msk       (_U_(0x3) << USBC_UESTA3_DTSEQ_Pos)
#define USBC_UESTA3_DTSEQ(value)    (USBC_UESTA3_DTSEQ_Msk & ((value) << USBC_UESTA3_DTSEQ_Pos))
#define USBC_UESTA3_RAMACERI_Pos    11           /**< \brief (USBC_UESTA3) Ram Access Error Interrupt */
#define USBC_UESTA3_RAMACERI        (_U_(0x1) << USBC_UESTA3_RAMACERI_Pos)
#define USBC_UESTA3_NBUSYBK_Pos     12           /**< \brief (USBC_UESTA3) Number Of Busy Banks */
#define USBC_UESTA3_NBUSYBK_Msk     (_U_(0x3) << USBC_UESTA3_NBUSYBK_Pos)
#define USBC_UESTA3_NBUSYBK(value)  (USBC_UESTA3_NBUSYBK_Msk & ((value) << USBC_UESTA3_NBUSYBK_Pos))
#define USBC_UESTA3_CURRBK_Pos      14           /**< \brief (USBC_UESTA3) Current Bank */
#define USBC_UESTA3_CURRBK_Msk      (_U_(0x3) << USBC_UESTA3_CURRBK_Pos)
#define USBC_UESTA3_CURRBK(value)   (USBC_UESTA3_CURRBK_Msk & ((value) << USBC_UESTA3_CURRBK_Pos))
#define USBC_UESTA3_CTRLDIR_Pos     17           /**< \brief (USBC_UESTA3) Control Direction */
#define USBC_UESTA3_CTRLDIR         (_U_(0x1) << USBC_UESTA3_CTRLDIR_Pos)
#define   USBC_UESTA3_CTRLDIR_OUT_Val     _U_(0x0)   /**< \brief (USBC_UESTA3)  */
#define   USBC_UESTA3_CTRLDIR_IN_Val      _U_(0x1)   /**< \brief (USBC_UESTA3)  */
#define USBC_UESTA3_CTRLDIR_OUT     (USBC_UESTA3_CTRLDIR_OUT_Val   << USBC_UESTA3_CTRLDIR_Pos)
#define USBC_UESTA3_CTRLDIR_IN      (USBC_UESTA3_CTRLDIR_IN_Val    << USBC_UESTA3_CTRLDIR_Pos)
#define USBC_UESTA3_MASK            _U_(0x0002FB5F) /**< \brief (USBC_UESTA3) MASK Register */

/* -------- USBC_UESTA4 : (USBC Offset: 0x140) (R/  32) Endpoint Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXINI:1;          /*!< bit:      0  Transmitted IN Data Interrupt      */
    uint32_t RXOUTI:1;         /*!< bit:      1  Received OUT Data Interrupt        */
    uint32_t RXSTPI:1;         /*!< bit:      2  Received SETUP Interrupt           */
    uint32_t NAKOUTI:1;        /*!< bit:      3  NAKed OUT Interrupt                */
    uint32_t NAKINI:1;         /*!< bit:      4  NAKed IN Interrupt                 */
    uint32_t :1;               /*!< bit:      5  Reserved                           */
    uint32_t STALLEDI:1;       /*!< bit:      6  STALLed Interrupt                  */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t DTSEQ:2;          /*!< bit:  8.. 9  Data Toggle Sequence               */
    uint32_t :1;               /*!< bit:     10  Reserved                           */
    uint32_t RAMACERI:1;       /*!< bit:     11  Ram Access Error Interrupt         */
    uint32_t NBUSYBK:2;        /*!< bit: 12..13  Number Of Busy Banks               */
    uint32_t CURRBK:2;         /*!< bit: 14..15  Current Bank                       */
    uint32_t :1;               /*!< bit:     16  Reserved                           */
    uint32_t CTRLDIR:1;        /*!< bit:     17  Control Direction                  */
    uint32_t :14;              /*!< bit: 18..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UESTA4_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UESTA4_OFFSET          0x140        /**< \brief (USBC_UESTA4 offset) Endpoint Status Register */
#define USBC_UESTA4_RESETVALUE      _U_(0x00000100); /**< \brief (USBC_UESTA4 reset_value) Endpoint Status Register */

#define USBC_UESTA4_TXINI_Pos       0            /**< \brief (USBC_UESTA4) Transmitted IN Data Interrupt */
#define USBC_UESTA4_TXINI           (_U_(0x1) << USBC_UESTA4_TXINI_Pos)
#define USBC_UESTA4_RXOUTI_Pos      1            /**< \brief (USBC_UESTA4) Received OUT Data Interrupt */
#define USBC_UESTA4_RXOUTI          (_U_(0x1) << USBC_UESTA4_RXOUTI_Pos)
#define USBC_UESTA4_RXSTPI_Pos      2            /**< \brief (USBC_UESTA4) Received SETUP Interrupt */
#define USBC_UESTA4_RXSTPI          (_U_(0x1) << USBC_UESTA4_RXSTPI_Pos)
#define USBC_UESTA4_NAKOUTI_Pos     3            /**< \brief (USBC_UESTA4) NAKed OUT Interrupt */
#define USBC_UESTA4_NAKOUTI         (_U_(0x1) << USBC_UESTA4_NAKOUTI_Pos)
#define USBC_UESTA4_NAKINI_Pos      4            /**< \brief (USBC_UESTA4) NAKed IN Interrupt */
#define USBC_UESTA4_NAKINI          (_U_(0x1) << USBC_UESTA4_NAKINI_Pos)
#define USBC_UESTA4_STALLEDI_Pos    6            /**< \brief (USBC_UESTA4) STALLed Interrupt */
#define USBC_UESTA4_STALLEDI        (_U_(0x1) << USBC_UESTA4_STALLEDI_Pos)
#define USBC_UESTA4_DTSEQ_Pos       8            /**< \brief (USBC_UESTA4) Data Toggle Sequence */
#define USBC_UESTA4_DTSEQ_Msk       (_U_(0x3) << USBC_UESTA4_DTSEQ_Pos)
#define USBC_UESTA4_DTSEQ(value)    (USBC_UESTA4_DTSEQ_Msk & ((value) << USBC_UESTA4_DTSEQ_Pos))
#define USBC_UESTA4_RAMACERI_Pos    11           /**< \brief (USBC_UESTA4) Ram Access Error Interrupt */
#define USBC_UESTA4_RAMACERI        (_U_(0x1) << USBC_UESTA4_RAMACERI_Pos)
#define USBC_UESTA4_NBUSYBK_Pos     12           /**< \brief (USBC_UESTA4) Number Of Busy Banks */
#define USBC_UESTA4_NBUSYBK_Msk     (_U_(0x3) << USBC_UESTA4_NBUSYBK_Pos)
#define USBC_UESTA4_NBUSYBK(value)  (USBC_UESTA4_NBUSYBK_Msk & ((value) << USBC_UESTA4_NBUSYBK_Pos))
#define USBC_UESTA4_CURRBK_Pos      14           /**< \brief (USBC_UESTA4) Current Bank */
#define USBC_UESTA4_CURRBK_Msk      (_U_(0x3) << USBC_UESTA4_CURRBK_Pos)
#define USBC_UESTA4_CURRBK(value)   (USBC_UESTA4_CURRBK_Msk & ((value) << USBC_UESTA4_CURRBK_Pos))
#define USBC_UESTA4_CTRLDIR_Pos     17           /**< \brief (USBC_UESTA4) Control Direction */
#define USBC_UESTA4_CTRLDIR         (_U_(0x1) << USBC_UESTA4_CTRLDIR_Pos)
#define   USBC_UESTA4_CTRLDIR_OUT_Val     _U_(0x0)   /**< \brief (USBC_UESTA4)  */
#define   USBC_UESTA4_CTRLDIR_IN_Val      _U_(0x1)   /**< \brief (USBC_UESTA4)  */
#define USBC_UESTA4_CTRLDIR_OUT     (USBC_UESTA4_CTRLDIR_OUT_Val   << USBC_UESTA4_CTRLDIR_Pos)
#define USBC_UESTA4_CTRLDIR_IN      (USBC_UESTA4_CTRLDIR_IN_Val    << USBC_UESTA4_CTRLDIR_Pos)
#define USBC_UESTA4_MASK            _U_(0x0002FB5F) /**< \brief (USBC_UESTA4) MASK Register */

/* -------- USBC_UESTA5 : (USBC Offset: 0x144) (R/  32) Endpoint Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXINI:1;          /*!< bit:      0  Transmitted IN Data Interrupt      */
    uint32_t RXOUTI:1;         /*!< bit:      1  Received OUT Data Interrupt        */
    uint32_t RXSTPI:1;         /*!< bit:      2  Received SETUP Interrupt           */
    uint32_t NAKOUTI:1;        /*!< bit:      3  NAKed OUT Interrupt                */
    uint32_t NAKINI:1;         /*!< bit:      4  NAKed IN Interrupt                 */
    uint32_t :1;               /*!< bit:      5  Reserved                           */
    uint32_t STALLEDI:1;       /*!< bit:      6  STALLed Interrupt                  */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t DTSEQ:2;          /*!< bit:  8.. 9  Data Toggle Sequence               */
    uint32_t :1;               /*!< bit:     10  Reserved                           */
    uint32_t RAMACERI:1;       /*!< bit:     11  Ram Access Error Interrupt         */
    uint32_t NBUSYBK:2;        /*!< bit: 12..13  Number Of Busy Banks               */
    uint32_t CURRBK:2;         /*!< bit: 14..15  Current Bank                       */
    uint32_t :1;               /*!< bit:     16  Reserved                           */
    uint32_t CTRLDIR:1;        /*!< bit:     17  Control Direction                  */
    uint32_t :14;              /*!< bit: 18..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UESTA5_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UESTA5_OFFSET          0x144        /**< \brief (USBC_UESTA5 offset) Endpoint Status Register */
#define USBC_UESTA5_RESETVALUE      _U_(0x00000100); /**< \brief (USBC_UESTA5 reset_value) Endpoint Status Register */

#define USBC_UESTA5_TXINI_Pos       0            /**< \brief (USBC_UESTA5) Transmitted IN Data Interrupt */
#define USBC_UESTA5_TXINI           (_U_(0x1) << USBC_UESTA5_TXINI_Pos)
#define USBC_UESTA5_RXOUTI_Pos      1            /**< \brief (USBC_UESTA5) Received OUT Data Interrupt */
#define USBC_UESTA5_RXOUTI          (_U_(0x1) << USBC_UESTA5_RXOUTI_Pos)
#define USBC_UESTA5_RXSTPI_Pos      2            /**< \brief (USBC_UESTA5) Received SETUP Interrupt */
#define USBC_UESTA5_RXSTPI          (_U_(0x1) << USBC_UESTA5_RXSTPI_Pos)
#define USBC_UESTA5_NAKOUTI_Pos     3            /**< \brief (USBC_UESTA5) NAKed OUT Interrupt */
#define USBC_UESTA5_NAKOUTI         (_U_(0x1) << USBC_UESTA5_NAKOUTI_Pos)
#define USBC_UESTA5_NAKINI_Pos      4            /**< \brief (USBC_UESTA5) NAKed IN Interrupt */
#define USBC_UESTA5_NAKINI          (_U_(0x1) << USBC_UESTA5_NAKINI_Pos)
#define USBC_UESTA5_STALLEDI_Pos    6            /**< \brief (USBC_UESTA5) STALLed Interrupt */
#define USBC_UESTA5_STALLEDI        (_U_(0x1) << USBC_UESTA5_STALLEDI_Pos)
#define USBC_UESTA5_DTSEQ_Pos       8            /**< \brief (USBC_UESTA5) Data Toggle Sequence */
#define USBC_UESTA5_DTSEQ_Msk       (_U_(0x3) << USBC_UESTA5_DTSEQ_Pos)
#define USBC_UESTA5_DTSEQ(value)    (USBC_UESTA5_DTSEQ_Msk & ((value) << USBC_UESTA5_DTSEQ_Pos))
#define USBC_UESTA5_RAMACERI_Pos    11           /**< \brief (USBC_UESTA5) Ram Access Error Interrupt */
#define USBC_UESTA5_RAMACERI        (_U_(0x1) << USBC_UESTA5_RAMACERI_Pos)
#define USBC_UESTA5_NBUSYBK_Pos     12           /**< \brief (USBC_UESTA5) Number Of Busy Banks */
#define USBC_UESTA5_NBUSYBK_Msk     (_U_(0x3) << USBC_UESTA5_NBUSYBK_Pos)
#define USBC_UESTA5_NBUSYBK(value)  (USBC_UESTA5_NBUSYBK_Msk & ((value) << USBC_UESTA5_NBUSYBK_Pos))
#define USBC_UESTA5_CURRBK_Pos      14           /**< \brief (USBC_UESTA5) Current Bank */
#define USBC_UESTA5_CURRBK_Msk      (_U_(0x3) << USBC_UESTA5_CURRBK_Pos)
#define USBC_UESTA5_CURRBK(value)   (USBC_UESTA5_CURRBK_Msk & ((value) << USBC_UESTA5_CURRBK_Pos))
#define USBC_UESTA5_CTRLDIR_Pos     17           /**< \brief (USBC_UESTA5) Control Direction */
#define USBC_UESTA5_CTRLDIR         (_U_(0x1) << USBC_UESTA5_CTRLDIR_Pos)
#define   USBC_UESTA5_CTRLDIR_OUT_Val     _U_(0x0)   /**< \brief (USBC_UESTA5)  */
#define   USBC_UESTA5_CTRLDIR_IN_Val      _U_(0x1)   /**< \brief (USBC_UESTA5)  */
#define USBC_UESTA5_CTRLDIR_OUT     (USBC_UESTA5_CTRLDIR_OUT_Val   << USBC_UESTA5_CTRLDIR_Pos)
#define USBC_UESTA5_CTRLDIR_IN      (USBC_UESTA5_CTRLDIR_IN_Val    << USBC_UESTA5_CTRLDIR_Pos)
#define USBC_UESTA5_MASK            _U_(0x0002FB5F) /**< \brief (USBC_UESTA5) MASK Register */

/* -------- USBC_UESTA6 : (USBC Offset: 0x148) (R/  32) Endpoint Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXINI:1;          /*!< bit:      0  Transmitted IN Data Interrupt      */
    uint32_t RXOUTI:1;         /*!< bit:      1  Received OUT Data Interrupt        */
    uint32_t RXSTPI:1;         /*!< bit:      2  Received SETUP Interrupt           */
    uint32_t NAKOUTI:1;        /*!< bit:      3  NAKed OUT Interrupt                */
    uint32_t NAKINI:1;         /*!< bit:      4  NAKed IN Interrupt                 */
    uint32_t :1;               /*!< bit:      5  Reserved                           */
    uint32_t STALLEDI:1;       /*!< bit:      6  STALLed Interrupt                  */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t DTSEQ:2;          /*!< bit:  8.. 9  Data Toggle Sequence               */
    uint32_t :1;               /*!< bit:     10  Reserved                           */
    uint32_t RAMACERI:1;       /*!< bit:     11  Ram Access Error Interrupt         */
    uint32_t NBUSYBK:2;        /*!< bit: 12..13  Number Of Busy Banks               */
    uint32_t CURRBK:2;         /*!< bit: 14..15  Current Bank                       */
    uint32_t :1;               /*!< bit:     16  Reserved                           */
    uint32_t CTRLDIR:1;        /*!< bit:     17  Control Direction                  */
    uint32_t :14;              /*!< bit: 18..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UESTA6_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UESTA6_OFFSET          0x148        /**< \brief (USBC_UESTA6 offset) Endpoint Status Register */
#define USBC_UESTA6_RESETVALUE      _U_(0x00000100); /**< \brief (USBC_UESTA6 reset_value) Endpoint Status Register */

#define USBC_UESTA6_TXINI_Pos       0            /**< \brief (USBC_UESTA6) Transmitted IN Data Interrupt */
#define USBC_UESTA6_TXINI           (_U_(0x1) << USBC_UESTA6_TXINI_Pos)
#define USBC_UESTA6_RXOUTI_Pos      1            /**< \brief (USBC_UESTA6) Received OUT Data Interrupt */
#define USBC_UESTA6_RXOUTI          (_U_(0x1) << USBC_UESTA6_RXOUTI_Pos)
#define USBC_UESTA6_RXSTPI_Pos      2            /**< \brief (USBC_UESTA6) Received SETUP Interrupt */
#define USBC_UESTA6_RXSTPI          (_U_(0x1) << USBC_UESTA6_RXSTPI_Pos)
#define USBC_UESTA6_NAKOUTI_Pos     3            /**< \brief (USBC_UESTA6) NAKed OUT Interrupt */
#define USBC_UESTA6_NAKOUTI         (_U_(0x1) << USBC_UESTA6_NAKOUTI_Pos)
#define USBC_UESTA6_NAKINI_Pos      4            /**< \brief (USBC_UESTA6) NAKed IN Interrupt */
#define USBC_UESTA6_NAKINI          (_U_(0x1) << USBC_UESTA6_NAKINI_Pos)
#define USBC_UESTA6_STALLEDI_Pos    6            /**< \brief (USBC_UESTA6) STALLed Interrupt */
#define USBC_UESTA6_STALLEDI        (_U_(0x1) << USBC_UESTA6_STALLEDI_Pos)
#define USBC_UESTA6_DTSEQ_Pos       8            /**< \brief (USBC_UESTA6) Data Toggle Sequence */
#define USBC_UESTA6_DTSEQ_Msk       (_U_(0x3) << USBC_UESTA6_DTSEQ_Pos)
#define USBC_UESTA6_DTSEQ(value)    (USBC_UESTA6_DTSEQ_Msk & ((value) << USBC_UESTA6_DTSEQ_Pos))
#define USBC_UESTA6_RAMACERI_Pos    11           /**< \brief (USBC_UESTA6) Ram Access Error Interrupt */
#define USBC_UESTA6_RAMACERI        (_U_(0x1) << USBC_UESTA6_RAMACERI_Pos)
#define USBC_UESTA6_NBUSYBK_Pos     12           /**< \brief (USBC_UESTA6) Number Of Busy Banks */
#define USBC_UESTA6_NBUSYBK_Msk     (_U_(0x3) << USBC_UESTA6_NBUSYBK_Pos)
#define USBC_UESTA6_NBUSYBK(value)  (USBC_UESTA6_NBUSYBK_Msk & ((value) << USBC_UESTA6_NBUSYBK_Pos))
#define USBC_UESTA6_CURRBK_Pos      14           /**< \brief (USBC_UESTA6) Current Bank */
#define USBC_UESTA6_CURRBK_Msk      (_U_(0x3) << USBC_UESTA6_CURRBK_Pos)
#define USBC_UESTA6_CURRBK(value)   (USBC_UESTA6_CURRBK_Msk & ((value) << USBC_UESTA6_CURRBK_Pos))
#define USBC_UESTA6_CTRLDIR_Pos     17           /**< \brief (USBC_UESTA6) Control Direction */
#define USBC_UESTA6_CTRLDIR         (_U_(0x1) << USBC_UESTA6_CTRLDIR_Pos)
#define   USBC_UESTA6_CTRLDIR_OUT_Val     _U_(0x0)   /**< \brief (USBC_UESTA6)  */
#define   USBC_UESTA6_CTRLDIR_IN_Val      _U_(0x1)   /**< \brief (USBC_UESTA6)  */
#define USBC_UESTA6_CTRLDIR_OUT     (USBC_UESTA6_CTRLDIR_OUT_Val   << USBC_UESTA6_CTRLDIR_Pos)
#define USBC_UESTA6_CTRLDIR_IN      (USBC_UESTA6_CTRLDIR_IN_Val    << USBC_UESTA6_CTRLDIR_Pos)
#define USBC_UESTA6_MASK            _U_(0x0002FB5F) /**< \brief (USBC_UESTA6) MASK Register */

/* -------- USBC_UESTA7 : (USBC Offset: 0x14C) (R/  32) Endpoint Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXINI:1;          /*!< bit:      0  Transmitted IN Data Interrupt      */
    uint32_t RXOUTI:1;         /*!< bit:      1  Received OUT Data Interrupt        */
    uint32_t RXSTPI:1;         /*!< bit:      2  Received SETUP Interrupt           */
    uint32_t NAKOUTI:1;        /*!< bit:      3  NAKed OUT Interrupt                */
    uint32_t NAKINI:1;         /*!< bit:      4  NAKed IN Interrupt                 */
    uint32_t :1;               /*!< bit:      5  Reserved                           */
    uint32_t STALLEDI:1;       /*!< bit:      6  STALLed Interrupt                  */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t DTSEQ:2;          /*!< bit:  8.. 9  Data Toggle Sequence               */
    uint32_t :1;               /*!< bit:     10  Reserved                           */
    uint32_t RAMACERI:1;       /*!< bit:     11  Ram Access Error Interrupt         */
    uint32_t NBUSYBK:2;        /*!< bit: 12..13  Number Of Busy Banks               */
    uint32_t CURRBK:2;         /*!< bit: 14..15  Current Bank                       */
    uint32_t :1;               /*!< bit:     16  Reserved                           */
    uint32_t CTRLDIR:1;        /*!< bit:     17  Control Direction                  */
    uint32_t :14;              /*!< bit: 18..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UESTA7_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UESTA7_OFFSET          0x14C        /**< \brief (USBC_UESTA7 offset) Endpoint Status Register */
#define USBC_UESTA7_RESETVALUE      _U_(0x00000100); /**< \brief (USBC_UESTA7 reset_value) Endpoint Status Register */

#define USBC_UESTA7_TXINI_Pos       0            /**< \brief (USBC_UESTA7) Transmitted IN Data Interrupt */
#define USBC_UESTA7_TXINI           (_U_(0x1) << USBC_UESTA7_TXINI_Pos)
#define USBC_UESTA7_RXOUTI_Pos      1            /**< \brief (USBC_UESTA7) Received OUT Data Interrupt */
#define USBC_UESTA7_RXOUTI          (_U_(0x1) << USBC_UESTA7_RXOUTI_Pos)
#define USBC_UESTA7_RXSTPI_Pos      2            /**< \brief (USBC_UESTA7) Received SETUP Interrupt */
#define USBC_UESTA7_RXSTPI          (_U_(0x1) << USBC_UESTA7_RXSTPI_Pos)
#define USBC_UESTA7_NAKOUTI_Pos     3            /**< \brief (USBC_UESTA7) NAKed OUT Interrupt */
#define USBC_UESTA7_NAKOUTI         (_U_(0x1) << USBC_UESTA7_NAKOUTI_Pos)
#define USBC_UESTA7_NAKINI_Pos      4            /**< \brief (USBC_UESTA7) NAKed IN Interrupt */
#define USBC_UESTA7_NAKINI          (_U_(0x1) << USBC_UESTA7_NAKINI_Pos)
#define USBC_UESTA7_STALLEDI_Pos    6            /**< \brief (USBC_UESTA7) STALLed Interrupt */
#define USBC_UESTA7_STALLEDI        (_U_(0x1) << USBC_UESTA7_STALLEDI_Pos)
#define USBC_UESTA7_DTSEQ_Pos       8            /**< \brief (USBC_UESTA7) Data Toggle Sequence */
#define USBC_UESTA7_DTSEQ_Msk       (_U_(0x3) << USBC_UESTA7_DTSEQ_Pos)
#define USBC_UESTA7_DTSEQ(value)    (USBC_UESTA7_DTSEQ_Msk & ((value) << USBC_UESTA7_DTSEQ_Pos))
#define USBC_UESTA7_RAMACERI_Pos    11           /**< \brief (USBC_UESTA7) Ram Access Error Interrupt */
#define USBC_UESTA7_RAMACERI        (_U_(0x1) << USBC_UESTA7_RAMACERI_Pos)
#define USBC_UESTA7_NBUSYBK_Pos     12           /**< \brief (USBC_UESTA7) Number Of Busy Banks */
#define USBC_UESTA7_NBUSYBK_Msk     (_U_(0x3) << USBC_UESTA7_NBUSYBK_Pos)
#define USBC_UESTA7_NBUSYBK(value)  (USBC_UESTA7_NBUSYBK_Msk & ((value) << USBC_UESTA7_NBUSYBK_Pos))
#define USBC_UESTA7_CURRBK_Pos      14           /**< \brief (USBC_UESTA7) Current Bank */
#define USBC_UESTA7_CURRBK_Msk      (_U_(0x3) << USBC_UESTA7_CURRBK_Pos)
#define USBC_UESTA7_CURRBK(value)   (USBC_UESTA7_CURRBK_Msk & ((value) << USBC_UESTA7_CURRBK_Pos))
#define USBC_UESTA7_CTRLDIR_Pos     17           /**< \brief (USBC_UESTA7) Control Direction */
#define USBC_UESTA7_CTRLDIR         (_U_(0x1) << USBC_UESTA7_CTRLDIR_Pos)
#define   USBC_UESTA7_CTRLDIR_OUT_Val     _U_(0x0)   /**< \brief (USBC_UESTA7)  */
#define   USBC_UESTA7_CTRLDIR_IN_Val      _U_(0x1)   /**< \brief (USBC_UESTA7)  */
#define USBC_UESTA7_CTRLDIR_OUT     (USBC_UESTA7_CTRLDIR_OUT_Val   << USBC_UESTA7_CTRLDIR_Pos)
#define USBC_UESTA7_CTRLDIR_IN      (USBC_UESTA7_CTRLDIR_IN_Val    << USBC_UESTA7_CTRLDIR_Pos)
#define USBC_UESTA7_MASK            _U_(0x0002FB5F) /**< \brief (USBC_UESTA7) MASK Register */

/* -------- USBC_UESTA0CLR : (USBC Offset: 0x160) ( /W 32) Endpoint Status Clear Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXINIC:1;         /*!< bit:      0  TXINI Clear                        */
    uint32_t RXOUTIC:1;        /*!< bit:      1  RXOUTI Clear                       */
    uint32_t RXSTPIC:1;        /*!< bit:      2  RXSTPI Clear                       */
    uint32_t NAKOUTIC:1;       /*!< bit:      3  NAKOUTI Clear                      */
    uint32_t NAKINIC:1;        /*!< bit:      4  NAKINI Clear                       */
    uint32_t :1;               /*!< bit:      5  Reserved                           */
    uint32_t STALLEDIC:1;      /*!< bit:      6  STALLEDI Clear                     */
    uint32_t :4;               /*!< bit:  7..10  Reserved                           */
    uint32_t RAMACERIC:1;      /*!< bit:     11  RAMACERI Clear                     */
    uint32_t :20;              /*!< bit: 12..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UESTA0CLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UESTA0CLR_OFFSET       0x160        /**< \brief (USBC_UESTA0CLR offset) Endpoint Status Clear Register */
#define USBC_UESTA0CLR_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UESTA0CLR reset_value) Endpoint Status Clear Register */

#define USBC_UESTA0CLR_TXINIC_Pos   0            /**< \brief (USBC_UESTA0CLR) TXINI Clear */
#define USBC_UESTA0CLR_TXINIC       (_U_(0x1) << USBC_UESTA0CLR_TXINIC_Pos)
#define USBC_UESTA0CLR_RXOUTIC_Pos  1            /**< \brief (USBC_UESTA0CLR) RXOUTI Clear */
#define USBC_UESTA0CLR_RXOUTIC      (_U_(0x1) << USBC_UESTA0CLR_RXOUTIC_Pos)
#define USBC_UESTA0CLR_RXSTPIC_Pos  2            /**< \brief (USBC_UESTA0CLR) RXSTPI Clear */
#define USBC_UESTA0CLR_RXSTPIC      (_U_(0x1) << USBC_UESTA0CLR_RXSTPIC_Pos)
#define USBC_UESTA0CLR_NAKOUTIC_Pos 3            /**< \brief (USBC_UESTA0CLR) NAKOUTI Clear */
#define USBC_UESTA0CLR_NAKOUTIC     (_U_(0x1) << USBC_UESTA0CLR_NAKOUTIC_Pos)
#define USBC_UESTA0CLR_NAKINIC_Pos  4            /**< \brief (USBC_UESTA0CLR) NAKINI Clear */
#define USBC_UESTA0CLR_NAKINIC      (_U_(0x1) << USBC_UESTA0CLR_NAKINIC_Pos)
#define USBC_UESTA0CLR_STALLEDIC_Pos 6            /**< \brief (USBC_UESTA0CLR) STALLEDI Clear */
#define USBC_UESTA0CLR_STALLEDIC    (_U_(0x1) << USBC_UESTA0CLR_STALLEDIC_Pos)
#define USBC_UESTA0CLR_RAMACERIC_Pos 11           /**< \brief (USBC_UESTA0CLR) RAMACERI Clear */
#define USBC_UESTA0CLR_RAMACERIC    (_U_(0x1) << USBC_UESTA0CLR_RAMACERIC_Pos)
#define USBC_UESTA0CLR_MASK         _U_(0x0000085F) /**< \brief (USBC_UESTA0CLR) MASK Register */

/* -------- USBC_UESTA1CLR : (USBC Offset: 0x164) ( /W 32) Endpoint Status Clear Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXINIC:1;         /*!< bit:      0  TXINI Clear                        */
    uint32_t RXOUTIC:1;        /*!< bit:      1  RXOUTI Clear                       */
    uint32_t RXSTPIC:1;        /*!< bit:      2  RXSTPI Clear                       */
    uint32_t NAKOUTIC:1;       /*!< bit:      3  NAKOUTI Clear                      */
    uint32_t NAKINIC:1;        /*!< bit:      4  NAKINI Clear                       */
    uint32_t :1;               /*!< bit:      5  Reserved                           */
    uint32_t STALLEDIC:1;      /*!< bit:      6  STALLEDI Clear                     */
    uint32_t :4;               /*!< bit:  7..10  Reserved                           */
    uint32_t RAMACERIC:1;      /*!< bit:     11  RAMACERI Clear                     */
    uint32_t :20;              /*!< bit: 12..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UESTA1CLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UESTA1CLR_OFFSET       0x164        /**< \brief (USBC_UESTA1CLR offset) Endpoint Status Clear Register */
#define USBC_UESTA1CLR_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UESTA1CLR reset_value) Endpoint Status Clear Register */

#define USBC_UESTA1CLR_TXINIC_Pos   0            /**< \brief (USBC_UESTA1CLR) TXINI Clear */
#define USBC_UESTA1CLR_TXINIC       (_U_(0x1) << USBC_UESTA1CLR_TXINIC_Pos)
#define USBC_UESTA1CLR_RXOUTIC_Pos  1            /**< \brief (USBC_UESTA1CLR) RXOUTI Clear */
#define USBC_UESTA1CLR_RXOUTIC      (_U_(0x1) << USBC_UESTA1CLR_RXOUTIC_Pos)
#define USBC_UESTA1CLR_RXSTPIC_Pos  2            /**< \brief (USBC_UESTA1CLR) RXSTPI Clear */
#define USBC_UESTA1CLR_RXSTPIC      (_U_(0x1) << USBC_UESTA1CLR_RXSTPIC_Pos)
#define USBC_UESTA1CLR_NAKOUTIC_Pos 3            /**< \brief (USBC_UESTA1CLR) NAKOUTI Clear */
#define USBC_UESTA1CLR_NAKOUTIC     (_U_(0x1) << USBC_UESTA1CLR_NAKOUTIC_Pos)
#define USBC_UESTA1CLR_NAKINIC_Pos  4            /**< \brief (USBC_UESTA1CLR) NAKINI Clear */
#define USBC_UESTA1CLR_NAKINIC      (_U_(0x1) << USBC_UESTA1CLR_NAKINIC_Pos)
#define USBC_UESTA1CLR_STALLEDIC_Pos 6            /**< \brief (USBC_UESTA1CLR) STALLEDI Clear */
#define USBC_UESTA1CLR_STALLEDIC    (_U_(0x1) << USBC_UESTA1CLR_STALLEDIC_Pos)
#define USBC_UESTA1CLR_RAMACERIC_Pos 11           /**< \brief (USBC_UESTA1CLR) RAMACERI Clear */
#define USBC_UESTA1CLR_RAMACERIC    (_U_(0x1) << USBC_UESTA1CLR_RAMACERIC_Pos)
#define USBC_UESTA1CLR_MASK         _U_(0x0000085F) /**< \brief (USBC_UESTA1CLR) MASK Register */

/* -------- USBC_UESTA2CLR : (USBC Offset: 0x168) ( /W 32) Endpoint Status Clear Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXINIC:1;         /*!< bit:      0  TXINI Clear                        */
    uint32_t RXOUTIC:1;        /*!< bit:      1  RXOUTI Clear                       */
    uint32_t RXSTPIC:1;        /*!< bit:      2  RXSTPI Clear                       */
    uint32_t NAKOUTIC:1;       /*!< bit:      3  NAKOUTI Clear                      */
    uint32_t NAKINIC:1;        /*!< bit:      4  NAKINI Clear                       */
    uint32_t :1;               /*!< bit:      5  Reserved                           */
    uint32_t STALLEDIC:1;      /*!< bit:      6  STALLEDI Clear                     */
    uint32_t :4;               /*!< bit:  7..10  Reserved                           */
    uint32_t RAMACERIC:1;      /*!< bit:     11  RAMACERI Clear                     */
    uint32_t :20;              /*!< bit: 12..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UESTA2CLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UESTA2CLR_OFFSET       0x168        /**< \brief (USBC_UESTA2CLR offset) Endpoint Status Clear Register */
#define USBC_UESTA2CLR_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UESTA2CLR reset_value) Endpoint Status Clear Register */

#define USBC_UESTA2CLR_TXINIC_Pos   0            /**< \brief (USBC_UESTA2CLR) TXINI Clear */
#define USBC_UESTA2CLR_TXINIC       (_U_(0x1) << USBC_UESTA2CLR_TXINIC_Pos)
#define USBC_UESTA2CLR_RXOUTIC_Pos  1            /**< \brief (USBC_UESTA2CLR) RXOUTI Clear */
#define USBC_UESTA2CLR_RXOUTIC      (_U_(0x1) << USBC_UESTA2CLR_RXOUTIC_Pos)
#define USBC_UESTA2CLR_RXSTPIC_Pos  2            /**< \brief (USBC_UESTA2CLR) RXSTPI Clear */
#define USBC_UESTA2CLR_RXSTPIC      (_U_(0x1) << USBC_UESTA2CLR_RXSTPIC_Pos)
#define USBC_UESTA2CLR_NAKOUTIC_Pos 3            /**< \brief (USBC_UESTA2CLR) NAKOUTI Clear */
#define USBC_UESTA2CLR_NAKOUTIC     (_U_(0x1) << USBC_UESTA2CLR_NAKOUTIC_Pos)
#define USBC_UESTA2CLR_NAKINIC_Pos  4            /**< \brief (USBC_UESTA2CLR) NAKINI Clear */
#define USBC_UESTA2CLR_NAKINIC      (_U_(0x1) << USBC_UESTA2CLR_NAKINIC_Pos)
#define USBC_UESTA2CLR_STALLEDIC_Pos 6            /**< \brief (USBC_UESTA2CLR) STALLEDI Clear */
#define USBC_UESTA2CLR_STALLEDIC    (_U_(0x1) << USBC_UESTA2CLR_STALLEDIC_Pos)
#define USBC_UESTA2CLR_RAMACERIC_Pos 11           /**< \brief (USBC_UESTA2CLR) RAMACERI Clear */
#define USBC_UESTA2CLR_RAMACERIC    (_U_(0x1) << USBC_UESTA2CLR_RAMACERIC_Pos)
#define USBC_UESTA2CLR_MASK         _U_(0x0000085F) /**< \brief (USBC_UESTA2CLR) MASK Register */

/* -------- USBC_UESTA3CLR : (USBC Offset: 0x16C) ( /W 32) Endpoint Status Clear Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXINIC:1;         /*!< bit:      0  TXINI Clear                        */
    uint32_t RXOUTIC:1;        /*!< bit:      1  RXOUTI Clear                       */
    uint32_t RXSTPIC:1;        /*!< bit:      2  RXSTPI Clear                       */
    uint32_t NAKOUTIC:1;       /*!< bit:      3  NAKOUTI Clear                      */
    uint32_t NAKINIC:1;        /*!< bit:      4  NAKINI Clear                       */
    uint32_t :1;               /*!< bit:      5  Reserved                           */
    uint32_t STALLEDIC:1;      /*!< bit:      6  STALLEDI Clear                     */
    uint32_t :4;               /*!< bit:  7..10  Reserved                           */
    uint32_t RAMACERIC:1;      /*!< bit:     11  RAMACERI Clear                     */
    uint32_t :20;              /*!< bit: 12..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UESTA3CLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UESTA3CLR_OFFSET       0x16C        /**< \brief (USBC_UESTA3CLR offset) Endpoint Status Clear Register */
#define USBC_UESTA3CLR_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UESTA3CLR reset_value) Endpoint Status Clear Register */

#define USBC_UESTA3CLR_TXINIC_Pos   0            /**< \brief (USBC_UESTA3CLR) TXINI Clear */
#define USBC_UESTA3CLR_TXINIC       (_U_(0x1) << USBC_UESTA3CLR_TXINIC_Pos)
#define USBC_UESTA3CLR_RXOUTIC_Pos  1            /**< \brief (USBC_UESTA3CLR) RXOUTI Clear */
#define USBC_UESTA3CLR_RXOUTIC      (_U_(0x1) << USBC_UESTA3CLR_RXOUTIC_Pos)
#define USBC_UESTA3CLR_RXSTPIC_Pos  2            /**< \brief (USBC_UESTA3CLR) RXSTPI Clear */
#define USBC_UESTA3CLR_RXSTPIC      (_U_(0x1) << USBC_UESTA3CLR_RXSTPIC_Pos)
#define USBC_UESTA3CLR_NAKOUTIC_Pos 3            /**< \brief (USBC_UESTA3CLR) NAKOUTI Clear */
#define USBC_UESTA3CLR_NAKOUTIC     (_U_(0x1) << USBC_UESTA3CLR_NAKOUTIC_Pos)
#define USBC_UESTA3CLR_NAKINIC_Pos  4            /**< \brief (USBC_UESTA3CLR) NAKINI Clear */
#define USBC_UESTA3CLR_NAKINIC      (_U_(0x1) << USBC_UESTA3CLR_NAKINIC_Pos)
#define USBC_UESTA3CLR_STALLEDIC_Pos 6            /**< \brief (USBC_UESTA3CLR) STALLEDI Clear */
#define USBC_UESTA3CLR_STALLEDIC    (_U_(0x1) << USBC_UESTA3CLR_STALLEDIC_Pos)
#define USBC_UESTA3CLR_RAMACERIC_Pos 11           /**< \brief (USBC_UESTA3CLR) RAMACERI Clear */
#define USBC_UESTA3CLR_RAMACERIC    (_U_(0x1) << USBC_UESTA3CLR_RAMACERIC_Pos)
#define USBC_UESTA3CLR_MASK         _U_(0x0000085F) /**< \brief (USBC_UESTA3CLR) MASK Register */

/* -------- USBC_UESTA4CLR : (USBC Offset: 0x170) ( /W 32) Endpoint Status Clear Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXINIC:1;         /*!< bit:      0  TXINI Clear                        */
    uint32_t RXOUTIC:1;        /*!< bit:      1  RXOUTI Clear                       */
    uint32_t RXSTPIC:1;        /*!< bit:      2  RXSTPI Clear                       */
    uint32_t NAKOUTIC:1;       /*!< bit:      3  NAKOUTI Clear                      */
    uint32_t NAKINIC:1;        /*!< bit:      4  NAKINI Clear                       */
    uint32_t :1;               /*!< bit:      5  Reserved                           */
    uint32_t STALLEDIC:1;      /*!< bit:      6  STALLEDI Clear                     */
    uint32_t :4;               /*!< bit:  7..10  Reserved                           */
    uint32_t RAMACERIC:1;      /*!< bit:     11  RAMACERI Clear                     */
    uint32_t :20;              /*!< bit: 12..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UESTA4CLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UESTA4CLR_OFFSET       0x170        /**< \brief (USBC_UESTA4CLR offset) Endpoint Status Clear Register */
#define USBC_UESTA4CLR_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UESTA4CLR reset_value) Endpoint Status Clear Register */

#define USBC_UESTA4CLR_TXINIC_Pos   0            /**< \brief (USBC_UESTA4CLR) TXINI Clear */
#define USBC_UESTA4CLR_TXINIC       (_U_(0x1) << USBC_UESTA4CLR_TXINIC_Pos)
#define USBC_UESTA4CLR_RXOUTIC_Pos  1            /**< \brief (USBC_UESTA4CLR) RXOUTI Clear */
#define USBC_UESTA4CLR_RXOUTIC      (_U_(0x1) << USBC_UESTA4CLR_RXOUTIC_Pos)
#define USBC_UESTA4CLR_RXSTPIC_Pos  2            /**< \brief (USBC_UESTA4CLR) RXSTPI Clear */
#define USBC_UESTA4CLR_RXSTPIC      (_U_(0x1) << USBC_UESTA4CLR_RXSTPIC_Pos)
#define USBC_UESTA4CLR_NAKOUTIC_Pos 3            /**< \brief (USBC_UESTA4CLR) NAKOUTI Clear */
#define USBC_UESTA4CLR_NAKOUTIC     (_U_(0x1) << USBC_UESTA4CLR_NAKOUTIC_Pos)
#define USBC_UESTA4CLR_NAKINIC_Pos  4            /**< \brief (USBC_UESTA4CLR) NAKINI Clear */
#define USBC_UESTA4CLR_NAKINIC      (_U_(0x1) << USBC_UESTA4CLR_NAKINIC_Pos)
#define USBC_UESTA4CLR_STALLEDIC_Pos 6            /**< \brief (USBC_UESTA4CLR) STALLEDI Clear */
#define USBC_UESTA4CLR_STALLEDIC    (_U_(0x1) << USBC_UESTA4CLR_STALLEDIC_Pos)
#define USBC_UESTA4CLR_RAMACERIC_Pos 11           /**< \brief (USBC_UESTA4CLR) RAMACERI Clear */
#define USBC_UESTA4CLR_RAMACERIC    (_U_(0x1) << USBC_UESTA4CLR_RAMACERIC_Pos)
#define USBC_UESTA4CLR_MASK         _U_(0x0000085F) /**< \brief (USBC_UESTA4CLR) MASK Register */

/* -------- USBC_UESTA5CLR : (USBC Offset: 0x174) ( /W 32) Endpoint Status Clear Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXINIC:1;         /*!< bit:      0  TXINI Clear                        */
    uint32_t RXOUTIC:1;        /*!< bit:      1  RXOUTI Clear                       */
    uint32_t RXSTPIC:1;        /*!< bit:      2  RXSTPI Clear                       */
    uint32_t NAKOUTIC:1;       /*!< bit:      3  NAKOUTI Clear                      */
    uint32_t NAKINIC:1;        /*!< bit:      4  NAKINI Clear                       */
    uint32_t :1;               /*!< bit:      5  Reserved                           */
    uint32_t STALLEDIC:1;      /*!< bit:      6  STALLEDI Clear                     */
    uint32_t :4;               /*!< bit:  7..10  Reserved                           */
    uint32_t RAMACERIC:1;      /*!< bit:     11  RAMACERI Clear                     */
    uint32_t :20;              /*!< bit: 12..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UESTA5CLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UESTA5CLR_OFFSET       0x174        /**< \brief (USBC_UESTA5CLR offset) Endpoint Status Clear Register */
#define USBC_UESTA5CLR_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UESTA5CLR reset_value) Endpoint Status Clear Register */

#define USBC_UESTA5CLR_TXINIC_Pos   0            /**< \brief (USBC_UESTA5CLR) TXINI Clear */
#define USBC_UESTA5CLR_TXINIC       (_U_(0x1) << USBC_UESTA5CLR_TXINIC_Pos)
#define USBC_UESTA5CLR_RXOUTIC_Pos  1            /**< \brief (USBC_UESTA5CLR) RXOUTI Clear */
#define USBC_UESTA5CLR_RXOUTIC      (_U_(0x1) << USBC_UESTA5CLR_RXOUTIC_Pos)
#define USBC_UESTA5CLR_RXSTPIC_Pos  2            /**< \brief (USBC_UESTA5CLR) RXSTPI Clear */
#define USBC_UESTA5CLR_RXSTPIC      (_U_(0x1) << USBC_UESTA5CLR_RXSTPIC_Pos)
#define USBC_UESTA5CLR_NAKOUTIC_Pos 3            /**< \brief (USBC_UESTA5CLR) NAKOUTI Clear */
#define USBC_UESTA5CLR_NAKOUTIC     (_U_(0x1) << USBC_UESTA5CLR_NAKOUTIC_Pos)
#define USBC_UESTA5CLR_NAKINIC_Pos  4            /**< \brief (USBC_UESTA5CLR) NAKINI Clear */
#define USBC_UESTA5CLR_NAKINIC      (_U_(0x1) << USBC_UESTA5CLR_NAKINIC_Pos)
#define USBC_UESTA5CLR_STALLEDIC_Pos 6            /**< \brief (USBC_UESTA5CLR) STALLEDI Clear */
#define USBC_UESTA5CLR_STALLEDIC    (_U_(0x1) << USBC_UESTA5CLR_STALLEDIC_Pos)
#define USBC_UESTA5CLR_RAMACERIC_Pos 11           /**< \brief (USBC_UESTA5CLR) RAMACERI Clear */
#define USBC_UESTA5CLR_RAMACERIC    (_U_(0x1) << USBC_UESTA5CLR_RAMACERIC_Pos)
#define USBC_UESTA5CLR_MASK         _U_(0x0000085F) /**< \brief (USBC_UESTA5CLR) MASK Register */

/* -------- USBC_UESTA6CLR : (USBC Offset: 0x178) ( /W 32) Endpoint Status Clear Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXINIC:1;         /*!< bit:      0  TXINI Clear                        */
    uint32_t RXOUTIC:1;        /*!< bit:      1  RXOUTI Clear                       */
    uint32_t RXSTPIC:1;        /*!< bit:      2  RXSTPI Clear                       */
    uint32_t NAKOUTIC:1;       /*!< bit:      3  NAKOUTI Clear                      */
    uint32_t NAKINIC:1;        /*!< bit:      4  NAKINI Clear                       */
    uint32_t :1;               /*!< bit:      5  Reserved                           */
    uint32_t STALLEDIC:1;      /*!< bit:      6  STALLEDI Clear                     */
    uint32_t :4;               /*!< bit:  7..10  Reserved                           */
    uint32_t RAMACERIC:1;      /*!< bit:     11  RAMACERI Clear                     */
    uint32_t :20;              /*!< bit: 12..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UESTA6CLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UESTA6CLR_OFFSET       0x178        /**< \brief (USBC_UESTA6CLR offset) Endpoint Status Clear Register */
#define USBC_UESTA6CLR_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UESTA6CLR reset_value) Endpoint Status Clear Register */

#define USBC_UESTA6CLR_TXINIC_Pos   0            /**< \brief (USBC_UESTA6CLR) TXINI Clear */
#define USBC_UESTA6CLR_TXINIC       (_U_(0x1) << USBC_UESTA6CLR_TXINIC_Pos)
#define USBC_UESTA6CLR_RXOUTIC_Pos  1            /**< \brief (USBC_UESTA6CLR) RXOUTI Clear */
#define USBC_UESTA6CLR_RXOUTIC      (_U_(0x1) << USBC_UESTA6CLR_RXOUTIC_Pos)
#define USBC_UESTA6CLR_RXSTPIC_Pos  2            /**< \brief (USBC_UESTA6CLR) RXSTPI Clear */
#define USBC_UESTA6CLR_RXSTPIC      (_U_(0x1) << USBC_UESTA6CLR_RXSTPIC_Pos)
#define USBC_UESTA6CLR_NAKOUTIC_Pos 3            /**< \brief (USBC_UESTA6CLR) NAKOUTI Clear */
#define USBC_UESTA6CLR_NAKOUTIC     (_U_(0x1) << USBC_UESTA6CLR_NAKOUTIC_Pos)
#define USBC_UESTA6CLR_NAKINIC_Pos  4            /**< \brief (USBC_UESTA6CLR) NAKINI Clear */
#define USBC_UESTA6CLR_NAKINIC      (_U_(0x1) << USBC_UESTA6CLR_NAKINIC_Pos)
#define USBC_UESTA6CLR_STALLEDIC_Pos 6            /**< \brief (USBC_UESTA6CLR) STALLEDI Clear */
#define USBC_UESTA6CLR_STALLEDIC    (_U_(0x1) << USBC_UESTA6CLR_STALLEDIC_Pos)
#define USBC_UESTA6CLR_RAMACERIC_Pos 11           /**< \brief (USBC_UESTA6CLR) RAMACERI Clear */
#define USBC_UESTA6CLR_RAMACERIC    (_U_(0x1) << USBC_UESTA6CLR_RAMACERIC_Pos)
#define USBC_UESTA6CLR_MASK         _U_(0x0000085F) /**< \brief (USBC_UESTA6CLR) MASK Register */

/* -------- USBC_UESTA7CLR : (USBC Offset: 0x17C) ( /W 32) Endpoint Status Clear Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXINIC:1;         /*!< bit:      0  TXINI Clear                        */
    uint32_t RXOUTIC:1;        /*!< bit:      1  RXOUTI Clear                       */
    uint32_t RXSTPIC:1;        /*!< bit:      2  RXSTPI Clear                       */
    uint32_t NAKOUTIC:1;       /*!< bit:      3  NAKOUTI Clear                      */
    uint32_t NAKINIC:1;        /*!< bit:      4  NAKINI Clear                       */
    uint32_t :1;               /*!< bit:      5  Reserved                           */
    uint32_t STALLEDIC:1;      /*!< bit:      6  STALLEDI Clear                     */
    uint32_t :4;               /*!< bit:  7..10  Reserved                           */
    uint32_t RAMACERIC:1;      /*!< bit:     11  RAMACERI Clear                     */
    uint32_t :20;              /*!< bit: 12..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UESTA7CLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UESTA7CLR_OFFSET       0x17C        /**< \brief (USBC_UESTA7CLR offset) Endpoint Status Clear Register */
#define USBC_UESTA7CLR_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UESTA7CLR reset_value) Endpoint Status Clear Register */

#define USBC_UESTA7CLR_TXINIC_Pos   0            /**< \brief (USBC_UESTA7CLR) TXINI Clear */
#define USBC_UESTA7CLR_TXINIC       (_U_(0x1) << USBC_UESTA7CLR_TXINIC_Pos)
#define USBC_UESTA7CLR_RXOUTIC_Pos  1            /**< \brief (USBC_UESTA7CLR) RXOUTI Clear */
#define USBC_UESTA7CLR_RXOUTIC      (_U_(0x1) << USBC_UESTA7CLR_RXOUTIC_Pos)
#define USBC_UESTA7CLR_RXSTPIC_Pos  2            /**< \brief (USBC_UESTA7CLR) RXSTPI Clear */
#define USBC_UESTA7CLR_RXSTPIC      (_U_(0x1) << USBC_UESTA7CLR_RXSTPIC_Pos)
#define USBC_UESTA7CLR_NAKOUTIC_Pos 3            /**< \brief (USBC_UESTA7CLR) NAKOUTI Clear */
#define USBC_UESTA7CLR_NAKOUTIC     (_U_(0x1) << USBC_UESTA7CLR_NAKOUTIC_Pos)
#define USBC_UESTA7CLR_NAKINIC_Pos  4            /**< \brief (USBC_UESTA7CLR) NAKINI Clear */
#define USBC_UESTA7CLR_NAKINIC      (_U_(0x1) << USBC_UESTA7CLR_NAKINIC_Pos)
#define USBC_UESTA7CLR_STALLEDIC_Pos 6            /**< \brief (USBC_UESTA7CLR) STALLEDI Clear */
#define USBC_UESTA7CLR_STALLEDIC    (_U_(0x1) << USBC_UESTA7CLR_STALLEDIC_Pos)
#define USBC_UESTA7CLR_RAMACERIC_Pos 11           /**< \brief (USBC_UESTA7CLR) RAMACERI Clear */
#define USBC_UESTA7CLR_RAMACERIC    (_U_(0x1) << USBC_UESTA7CLR_RAMACERIC_Pos)
#define USBC_UESTA7CLR_MASK         _U_(0x0000085F) /**< \brief (USBC_UESTA7CLR) MASK Register */

/* -------- USBC_UESTA0SET : (USBC Offset: 0x190) ( /W 32) Endpoint Status Set Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXINIS:1;         /*!< bit:      0  TXINI Set                          */
    uint32_t RXOUTIS:1;        /*!< bit:      1  RXOUTI Set                         */
    uint32_t RXSTPIS:1;        /*!< bit:      2  RXSTPI Set                         */
    uint32_t NAKOUTIS:1;       /*!< bit:      3  NAKOUTI Set                        */
    uint32_t NAKINIS:1;        /*!< bit:      4  NAKINI Set                         */
    uint32_t :1;               /*!< bit:      5  Reserved                           */
    uint32_t STALLEDIS:1;      /*!< bit:      6  STALLEDI Set                       */
    uint32_t :4;               /*!< bit:  7..10  Reserved                           */
    uint32_t RAMACERIS:1;      /*!< bit:     11  RAMACERI Set                       */
    uint32_t NBUSYBKS:1;       /*!< bit:     12  NBUSYBK Set                        */
    uint32_t :19;              /*!< bit: 13..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UESTA0SET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UESTA0SET_OFFSET       0x190        /**< \brief (USBC_UESTA0SET offset) Endpoint Status Set Register */
#define USBC_UESTA0SET_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UESTA0SET reset_value) Endpoint Status Set Register */

#define USBC_UESTA0SET_TXINIS_Pos   0            /**< \brief (USBC_UESTA0SET) TXINI Set */
#define USBC_UESTA0SET_TXINIS       (_U_(0x1) << USBC_UESTA0SET_TXINIS_Pos)
#define USBC_UESTA0SET_RXOUTIS_Pos  1            /**< \brief (USBC_UESTA0SET) RXOUTI Set */
#define USBC_UESTA0SET_RXOUTIS      (_U_(0x1) << USBC_UESTA0SET_RXOUTIS_Pos)
#define USBC_UESTA0SET_RXSTPIS_Pos  2            /**< \brief (USBC_UESTA0SET) RXSTPI Set */
#define USBC_UESTA0SET_RXSTPIS      (_U_(0x1) << USBC_UESTA0SET_RXSTPIS_Pos)
#define USBC_UESTA0SET_NAKOUTIS_Pos 3            /**< \brief (USBC_UESTA0SET) NAKOUTI Set */
#define USBC_UESTA0SET_NAKOUTIS     (_U_(0x1) << USBC_UESTA0SET_NAKOUTIS_Pos)
#define USBC_UESTA0SET_NAKINIS_Pos  4            /**< \brief (USBC_UESTA0SET) NAKINI Set */
#define USBC_UESTA0SET_NAKINIS      (_U_(0x1) << USBC_UESTA0SET_NAKINIS_Pos)
#define USBC_UESTA0SET_STALLEDIS_Pos 6            /**< \brief (USBC_UESTA0SET) STALLEDI Set */
#define USBC_UESTA0SET_STALLEDIS    (_U_(0x1) << USBC_UESTA0SET_STALLEDIS_Pos)
#define USBC_UESTA0SET_RAMACERIS_Pos 11           /**< \brief (USBC_UESTA0SET) RAMACERI Set */
#define USBC_UESTA0SET_RAMACERIS    (_U_(0x1) << USBC_UESTA0SET_RAMACERIS_Pos)
#define USBC_UESTA0SET_NBUSYBKS_Pos 12           /**< \brief (USBC_UESTA0SET) NBUSYBK Set */
#define USBC_UESTA0SET_NBUSYBKS     (_U_(0x1) << USBC_UESTA0SET_NBUSYBKS_Pos)
#define USBC_UESTA0SET_MASK         _U_(0x0000185F) /**< \brief (USBC_UESTA0SET) MASK Register */

/* -------- USBC_UESTA1SET : (USBC Offset: 0x194) ( /W 32) Endpoint Status Set Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXINIS:1;         /*!< bit:      0  TXINI Set                          */
    uint32_t RXOUTIS:1;        /*!< bit:      1  RXOUTI Set                         */
    uint32_t RXSTPIS:1;        /*!< bit:      2  RXSTPI Set                         */
    uint32_t NAKOUTIS:1;       /*!< bit:      3  NAKOUTI Set                        */
    uint32_t NAKINIS:1;        /*!< bit:      4  NAKINI Set                         */
    uint32_t :1;               /*!< bit:      5  Reserved                           */
    uint32_t STALLEDIS:1;      /*!< bit:      6  STALLEDI Set                       */
    uint32_t :4;               /*!< bit:  7..10  Reserved                           */
    uint32_t RAMACERIS:1;      /*!< bit:     11  RAMACERI Set                       */
    uint32_t NBUSYBKS:1;       /*!< bit:     12  NBUSYBK Set                        */
    uint32_t :19;              /*!< bit: 13..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UESTA1SET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UESTA1SET_OFFSET       0x194        /**< \brief (USBC_UESTA1SET offset) Endpoint Status Set Register */
#define USBC_UESTA1SET_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UESTA1SET reset_value) Endpoint Status Set Register */

#define USBC_UESTA1SET_TXINIS_Pos   0            /**< \brief (USBC_UESTA1SET) TXINI Set */
#define USBC_UESTA1SET_TXINIS       (_U_(0x1) << USBC_UESTA1SET_TXINIS_Pos)
#define USBC_UESTA1SET_RXOUTIS_Pos  1            /**< \brief (USBC_UESTA1SET) RXOUTI Set */
#define USBC_UESTA1SET_RXOUTIS      (_U_(0x1) << USBC_UESTA1SET_RXOUTIS_Pos)
#define USBC_UESTA1SET_RXSTPIS_Pos  2            /**< \brief (USBC_UESTA1SET) RXSTPI Set */
#define USBC_UESTA1SET_RXSTPIS      (_U_(0x1) << USBC_UESTA1SET_RXSTPIS_Pos)
#define USBC_UESTA1SET_NAKOUTIS_Pos 3            /**< \brief (USBC_UESTA1SET) NAKOUTI Set */
#define USBC_UESTA1SET_NAKOUTIS     (_U_(0x1) << USBC_UESTA1SET_NAKOUTIS_Pos)
#define USBC_UESTA1SET_NAKINIS_Pos  4            /**< \brief (USBC_UESTA1SET) NAKINI Set */
#define USBC_UESTA1SET_NAKINIS      (_U_(0x1) << USBC_UESTA1SET_NAKINIS_Pos)
#define USBC_UESTA1SET_STALLEDIS_Pos 6            /**< \brief (USBC_UESTA1SET) STALLEDI Set */
#define USBC_UESTA1SET_STALLEDIS    (_U_(0x1) << USBC_UESTA1SET_STALLEDIS_Pos)
#define USBC_UESTA1SET_RAMACERIS_Pos 11           /**< \brief (USBC_UESTA1SET) RAMACERI Set */
#define USBC_UESTA1SET_RAMACERIS    (_U_(0x1) << USBC_UESTA1SET_RAMACERIS_Pos)
#define USBC_UESTA1SET_NBUSYBKS_Pos 12           /**< \brief (USBC_UESTA1SET) NBUSYBK Set */
#define USBC_UESTA1SET_NBUSYBKS     (_U_(0x1) << USBC_UESTA1SET_NBUSYBKS_Pos)
#define USBC_UESTA1SET_MASK         _U_(0x0000185F) /**< \brief (USBC_UESTA1SET) MASK Register */

/* -------- USBC_UESTA2SET : (USBC Offset: 0x198) ( /W 32) Endpoint Status Set Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXINIS:1;         /*!< bit:      0  TXINI Set                          */
    uint32_t RXOUTIS:1;        /*!< bit:      1  RXOUTI Set                         */
    uint32_t RXSTPIS:1;        /*!< bit:      2  RXSTPI Set                         */
    uint32_t NAKOUTIS:1;       /*!< bit:      3  NAKOUTI Set                        */
    uint32_t NAKINIS:1;        /*!< bit:      4  NAKINI Set                         */
    uint32_t :1;               /*!< bit:      5  Reserved                           */
    uint32_t STALLEDIS:1;      /*!< bit:      6  STALLEDI Set                       */
    uint32_t :4;               /*!< bit:  7..10  Reserved                           */
    uint32_t RAMACERIS:1;      /*!< bit:     11  RAMACERI Set                       */
    uint32_t NBUSYBKS:1;       /*!< bit:     12  NBUSYBK Set                        */
    uint32_t :19;              /*!< bit: 13..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UESTA2SET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UESTA2SET_OFFSET       0x198        /**< \brief (USBC_UESTA2SET offset) Endpoint Status Set Register */
#define USBC_UESTA2SET_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UESTA2SET reset_value) Endpoint Status Set Register */

#define USBC_UESTA2SET_TXINIS_Pos   0            /**< \brief (USBC_UESTA2SET) TXINI Set */
#define USBC_UESTA2SET_TXINIS       (_U_(0x1) << USBC_UESTA2SET_TXINIS_Pos)
#define USBC_UESTA2SET_RXOUTIS_Pos  1            /**< \brief (USBC_UESTA2SET) RXOUTI Set */
#define USBC_UESTA2SET_RXOUTIS      (_U_(0x1) << USBC_UESTA2SET_RXOUTIS_Pos)
#define USBC_UESTA2SET_RXSTPIS_Pos  2            /**< \brief (USBC_UESTA2SET) RXSTPI Set */
#define USBC_UESTA2SET_RXSTPIS      (_U_(0x1) << USBC_UESTA2SET_RXSTPIS_Pos)
#define USBC_UESTA2SET_NAKOUTIS_Pos 3            /**< \brief (USBC_UESTA2SET) NAKOUTI Set */
#define USBC_UESTA2SET_NAKOUTIS     (_U_(0x1) << USBC_UESTA2SET_NAKOUTIS_Pos)
#define USBC_UESTA2SET_NAKINIS_Pos  4            /**< \brief (USBC_UESTA2SET) NAKINI Set */
#define USBC_UESTA2SET_NAKINIS      (_U_(0x1) << USBC_UESTA2SET_NAKINIS_Pos)
#define USBC_UESTA2SET_STALLEDIS_Pos 6            /**< \brief (USBC_UESTA2SET) STALLEDI Set */
#define USBC_UESTA2SET_STALLEDIS    (_U_(0x1) << USBC_UESTA2SET_STALLEDIS_Pos)
#define USBC_UESTA2SET_RAMACERIS_Pos 11           /**< \brief (USBC_UESTA2SET) RAMACERI Set */
#define USBC_UESTA2SET_RAMACERIS    (_U_(0x1) << USBC_UESTA2SET_RAMACERIS_Pos)
#define USBC_UESTA2SET_NBUSYBKS_Pos 12           /**< \brief (USBC_UESTA2SET) NBUSYBK Set */
#define USBC_UESTA2SET_NBUSYBKS     (_U_(0x1) << USBC_UESTA2SET_NBUSYBKS_Pos)
#define USBC_UESTA2SET_MASK         _U_(0x0000185F) /**< \brief (USBC_UESTA2SET) MASK Register */

/* -------- USBC_UESTA3SET : (USBC Offset: 0x19C) ( /W 32) Endpoint Status Set Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXINIS:1;         /*!< bit:      0  TXINI Set                          */
    uint32_t RXOUTIS:1;        /*!< bit:      1  RXOUTI Set                         */
    uint32_t RXSTPIS:1;        /*!< bit:      2  RXSTPI Set                         */
    uint32_t NAKOUTIS:1;       /*!< bit:      3  NAKOUTI Set                        */
    uint32_t NAKINIS:1;        /*!< bit:      4  NAKINI Set                         */
    uint32_t :1;               /*!< bit:      5  Reserved                           */
    uint32_t STALLEDIS:1;      /*!< bit:      6  STALLEDI Set                       */
    uint32_t :4;               /*!< bit:  7..10  Reserved                           */
    uint32_t RAMACERIS:1;      /*!< bit:     11  RAMACERI Set                       */
    uint32_t NBUSYBKS:1;       /*!< bit:     12  NBUSYBK Set                        */
    uint32_t :19;              /*!< bit: 13..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UESTA3SET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UESTA3SET_OFFSET       0x19C        /**< \brief (USBC_UESTA3SET offset) Endpoint Status Set Register */
#define USBC_UESTA3SET_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UESTA3SET reset_value) Endpoint Status Set Register */

#define USBC_UESTA3SET_TXINIS_Pos   0            /**< \brief (USBC_UESTA3SET) TXINI Set */
#define USBC_UESTA3SET_TXINIS       (_U_(0x1) << USBC_UESTA3SET_TXINIS_Pos)
#define USBC_UESTA3SET_RXOUTIS_Pos  1            /**< \brief (USBC_UESTA3SET) RXOUTI Set */
#define USBC_UESTA3SET_RXOUTIS      (_U_(0x1) << USBC_UESTA3SET_RXOUTIS_Pos)
#define USBC_UESTA3SET_RXSTPIS_Pos  2            /**< \brief (USBC_UESTA3SET) RXSTPI Set */
#define USBC_UESTA3SET_RXSTPIS      (_U_(0x1) << USBC_UESTA3SET_RXSTPIS_Pos)
#define USBC_UESTA3SET_NAKOUTIS_Pos 3            /**< \brief (USBC_UESTA3SET) NAKOUTI Set */
#define USBC_UESTA3SET_NAKOUTIS     (_U_(0x1) << USBC_UESTA3SET_NAKOUTIS_Pos)
#define USBC_UESTA3SET_NAKINIS_Pos  4            /**< \brief (USBC_UESTA3SET) NAKINI Set */
#define USBC_UESTA3SET_NAKINIS      (_U_(0x1) << USBC_UESTA3SET_NAKINIS_Pos)
#define USBC_UESTA3SET_STALLEDIS_Pos 6            /**< \brief (USBC_UESTA3SET) STALLEDI Set */
#define USBC_UESTA3SET_STALLEDIS    (_U_(0x1) << USBC_UESTA3SET_STALLEDIS_Pos)
#define USBC_UESTA3SET_RAMACERIS_Pos 11           /**< \brief (USBC_UESTA3SET) RAMACERI Set */
#define USBC_UESTA3SET_RAMACERIS    (_U_(0x1) << USBC_UESTA3SET_RAMACERIS_Pos)
#define USBC_UESTA3SET_NBUSYBKS_Pos 12           /**< \brief (USBC_UESTA3SET) NBUSYBK Set */
#define USBC_UESTA3SET_NBUSYBKS     (_U_(0x1) << USBC_UESTA3SET_NBUSYBKS_Pos)
#define USBC_UESTA3SET_MASK         _U_(0x0000185F) /**< \brief (USBC_UESTA3SET) MASK Register */

/* -------- USBC_UESTA4SET : (USBC Offset: 0x1A0) ( /W 32) Endpoint Status Set Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXINIS:1;         /*!< bit:      0  TXINI Set                          */
    uint32_t RXOUTIS:1;        /*!< bit:      1  RXOUTI Set                         */
    uint32_t RXSTPIS:1;        /*!< bit:      2  RXSTPI Set                         */
    uint32_t NAKOUTIS:1;       /*!< bit:      3  NAKOUTI Set                        */
    uint32_t NAKINIS:1;        /*!< bit:      4  NAKINI Set                         */
    uint32_t :1;               /*!< bit:      5  Reserved                           */
    uint32_t STALLEDIS:1;      /*!< bit:      6  STALLEDI Set                       */
    uint32_t :4;               /*!< bit:  7..10  Reserved                           */
    uint32_t RAMACERIS:1;      /*!< bit:     11  RAMACERI Set                       */
    uint32_t NBUSYBKS:1;       /*!< bit:     12  NBUSYBK Set                        */
    uint32_t :19;              /*!< bit: 13..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UESTA4SET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UESTA4SET_OFFSET       0x1A0        /**< \brief (USBC_UESTA4SET offset) Endpoint Status Set Register */
#define USBC_UESTA4SET_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UESTA4SET reset_value) Endpoint Status Set Register */

#define USBC_UESTA4SET_TXINIS_Pos   0            /**< \brief (USBC_UESTA4SET) TXINI Set */
#define USBC_UESTA4SET_TXINIS       (_U_(0x1) << USBC_UESTA4SET_TXINIS_Pos)
#define USBC_UESTA4SET_RXOUTIS_Pos  1            /**< \brief (USBC_UESTA4SET) RXOUTI Set */
#define USBC_UESTA4SET_RXOUTIS      (_U_(0x1) << USBC_UESTA4SET_RXOUTIS_Pos)
#define USBC_UESTA4SET_RXSTPIS_Pos  2            /**< \brief (USBC_UESTA4SET) RXSTPI Set */
#define USBC_UESTA4SET_RXSTPIS      (_U_(0x1) << USBC_UESTA4SET_RXSTPIS_Pos)
#define USBC_UESTA4SET_NAKOUTIS_Pos 3            /**< \brief (USBC_UESTA4SET) NAKOUTI Set */
#define USBC_UESTA4SET_NAKOUTIS     (_U_(0x1) << USBC_UESTA4SET_NAKOUTIS_Pos)
#define USBC_UESTA4SET_NAKINIS_Pos  4            /**< \brief (USBC_UESTA4SET) NAKINI Set */
#define USBC_UESTA4SET_NAKINIS      (_U_(0x1) << USBC_UESTA4SET_NAKINIS_Pos)
#define USBC_UESTA4SET_STALLEDIS_Pos 6            /**< \brief (USBC_UESTA4SET) STALLEDI Set */
#define USBC_UESTA4SET_STALLEDIS    (_U_(0x1) << USBC_UESTA4SET_STALLEDIS_Pos)
#define USBC_UESTA4SET_RAMACERIS_Pos 11           /**< \brief (USBC_UESTA4SET) RAMACERI Set */
#define USBC_UESTA4SET_RAMACERIS    (_U_(0x1) << USBC_UESTA4SET_RAMACERIS_Pos)
#define USBC_UESTA4SET_NBUSYBKS_Pos 12           /**< \brief (USBC_UESTA4SET) NBUSYBK Set */
#define USBC_UESTA4SET_NBUSYBKS     (_U_(0x1) << USBC_UESTA4SET_NBUSYBKS_Pos)
#define USBC_UESTA4SET_MASK         _U_(0x0000185F) /**< \brief (USBC_UESTA4SET) MASK Register */

/* -------- USBC_UESTA5SET : (USBC Offset: 0x1A4) ( /W 32) Endpoint Status Set Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXINIS:1;         /*!< bit:      0  TXINI Set                          */
    uint32_t RXOUTIS:1;        /*!< bit:      1  RXOUTI Set                         */
    uint32_t RXSTPIS:1;        /*!< bit:      2  RXSTPI Set                         */
    uint32_t NAKOUTIS:1;       /*!< bit:      3  NAKOUTI Set                        */
    uint32_t NAKINIS:1;        /*!< bit:      4  NAKINI Set                         */
    uint32_t :1;               /*!< bit:      5  Reserved                           */
    uint32_t STALLEDIS:1;      /*!< bit:      6  STALLEDI Set                       */
    uint32_t :4;               /*!< bit:  7..10  Reserved                           */
    uint32_t RAMACERIS:1;      /*!< bit:     11  RAMACERI Set                       */
    uint32_t NBUSYBKS:1;       /*!< bit:     12  NBUSYBK Set                        */
    uint32_t :19;              /*!< bit: 13..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UESTA5SET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UESTA5SET_OFFSET       0x1A4        /**< \brief (USBC_UESTA5SET offset) Endpoint Status Set Register */
#define USBC_UESTA5SET_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UESTA5SET reset_value) Endpoint Status Set Register */

#define USBC_UESTA5SET_TXINIS_Pos   0            /**< \brief (USBC_UESTA5SET) TXINI Set */
#define USBC_UESTA5SET_TXINIS       (_U_(0x1) << USBC_UESTA5SET_TXINIS_Pos)
#define USBC_UESTA5SET_RXOUTIS_Pos  1            /**< \brief (USBC_UESTA5SET) RXOUTI Set */
#define USBC_UESTA5SET_RXOUTIS      (_U_(0x1) << USBC_UESTA5SET_RXOUTIS_Pos)
#define USBC_UESTA5SET_RXSTPIS_Pos  2            /**< \brief (USBC_UESTA5SET) RXSTPI Set */
#define USBC_UESTA5SET_RXSTPIS      (_U_(0x1) << USBC_UESTA5SET_RXSTPIS_Pos)
#define USBC_UESTA5SET_NAKOUTIS_Pos 3            /**< \brief (USBC_UESTA5SET) NAKOUTI Set */
#define USBC_UESTA5SET_NAKOUTIS     (_U_(0x1) << USBC_UESTA5SET_NAKOUTIS_Pos)
#define USBC_UESTA5SET_NAKINIS_Pos  4            /**< \brief (USBC_UESTA5SET) NAKINI Set */
#define USBC_UESTA5SET_NAKINIS      (_U_(0x1) << USBC_UESTA5SET_NAKINIS_Pos)
#define USBC_UESTA5SET_STALLEDIS_Pos 6            /**< \brief (USBC_UESTA5SET) STALLEDI Set */
#define USBC_UESTA5SET_STALLEDIS    (_U_(0x1) << USBC_UESTA5SET_STALLEDIS_Pos)
#define USBC_UESTA5SET_RAMACERIS_Pos 11           /**< \brief (USBC_UESTA5SET) RAMACERI Set */
#define USBC_UESTA5SET_RAMACERIS    (_U_(0x1) << USBC_UESTA5SET_RAMACERIS_Pos)
#define USBC_UESTA5SET_NBUSYBKS_Pos 12           /**< \brief (USBC_UESTA5SET) NBUSYBK Set */
#define USBC_UESTA5SET_NBUSYBKS     (_U_(0x1) << USBC_UESTA5SET_NBUSYBKS_Pos)
#define USBC_UESTA5SET_MASK         _U_(0x0000185F) /**< \brief (USBC_UESTA5SET) MASK Register */

/* -------- USBC_UESTA6SET : (USBC Offset: 0x1A8) ( /W 32) Endpoint Status Set Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXINIS:1;         /*!< bit:      0  TXINI Set                          */
    uint32_t RXOUTIS:1;        /*!< bit:      1  RXOUTI Set                         */
    uint32_t RXSTPIS:1;        /*!< bit:      2  RXSTPI Set                         */
    uint32_t NAKOUTIS:1;       /*!< bit:      3  NAKOUTI Set                        */
    uint32_t NAKINIS:1;        /*!< bit:      4  NAKINI Set                         */
    uint32_t :1;               /*!< bit:      5  Reserved                           */
    uint32_t STALLEDIS:1;      /*!< bit:      6  STALLEDI Set                       */
    uint32_t :4;               /*!< bit:  7..10  Reserved                           */
    uint32_t RAMACERIS:1;      /*!< bit:     11  RAMACERI Set                       */
    uint32_t NBUSYBKS:1;       /*!< bit:     12  NBUSYBK Set                        */
    uint32_t :19;              /*!< bit: 13..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UESTA6SET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UESTA6SET_OFFSET       0x1A8        /**< \brief (USBC_UESTA6SET offset) Endpoint Status Set Register */
#define USBC_UESTA6SET_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UESTA6SET reset_value) Endpoint Status Set Register */

#define USBC_UESTA6SET_TXINIS_Pos   0            /**< \brief (USBC_UESTA6SET) TXINI Set */
#define USBC_UESTA6SET_TXINIS       (_U_(0x1) << USBC_UESTA6SET_TXINIS_Pos)
#define USBC_UESTA6SET_RXOUTIS_Pos  1            /**< \brief (USBC_UESTA6SET) RXOUTI Set */
#define USBC_UESTA6SET_RXOUTIS      (_U_(0x1) << USBC_UESTA6SET_RXOUTIS_Pos)
#define USBC_UESTA6SET_RXSTPIS_Pos  2            /**< \brief (USBC_UESTA6SET) RXSTPI Set */
#define USBC_UESTA6SET_RXSTPIS      (_U_(0x1) << USBC_UESTA6SET_RXSTPIS_Pos)
#define USBC_UESTA6SET_NAKOUTIS_Pos 3            /**< \brief (USBC_UESTA6SET) NAKOUTI Set */
#define USBC_UESTA6SET_NAKOUTIS     (_U_(0x1) << USBC_UESTA6SET_NAKOUTIS_Pos)
#define USBC_UESTA6SET_NAKINIS_Pos  4            /**< \brief (USBC_UESTA6SET) NAKINI Set */
#define USBC_UESTA6SET_NAKINIS      (_U_(0x1) << USBC_UESTA6SET_NAKINIS_Pos)
#define USBC_UESTA6SET_STALLEDIS_Pos 6            /**< \brief (USBC_UESTA6SET) STALLEDI Set */
#define USBC_UESTA6SET_STALLEDIS    (_U_(0x1) << USBC_UESTA6SET_STALLEDIS_Pos)
#define USBC_UESTA6SET_RAMACERIS_Pos 11           /**< \brief (USBC_UESTA6SET) RAMACERI Set */
#define USBC_UESTA6SET_RAMACERIS    (_U_(0x1) << USBC_UESTA6SET_RAMACERIS_Pos)
#define USBC_UESTA6SET_NBUSYBKS_Pos 12           /**< \brief (USBC_UESTA6SET) NBUSYBK Set */
#define USBC_UESTA6SET_NBUSYBKS     (_U_(0x1) << USBC_UESTA6SET_NBUSYBKS_Pos)
#define USBC_UESTA6SET_MASK         _U_(0x0000185F) /**< \brief (USBC_UESTA6SET) MASK Register */

/* -------- USBC_UESTA7SET : (USBC Offset: 0x1AC) ( /W 32) Endpoint Status Set Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXINIS:1;         /*!< bit:      0  TXINI Set                          */
    uint32_t RXOUTIS:1;        /*!< bit:      1  RXOUTI Set                         */
    uint32_t RXSTPIS:1;        /*!< bit:      2  RXSTPI Set                         */
    uint32_t NAKOUTIS:1;       /*!< bit:      3  NAKOUTI Set                        */
    uint32_t NAKINIS:1;        /*!< bit:      4  NAKINI Set                         */
    uint32_t :1;               /*!< bit:      5  Reserved                           */
    uint32_t STALLEDIS:1;      /*!< bit:      6  STALLEDI Set                       */
    uint32_t :4;               /*!< bit:  7..10  Reserved                           */
    uint32_t RAMACERIS:1;      /*!< bit:     11  RAMACERI Set                       */
    uint32_t NBUSYBKS:1;       /*!< bit:     12  NBUSYBK Set                        */
    uint32_t :19;              /*!< bit: 13..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UESTA7SET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UESTA7SET_OFFSET       0x1AC        /**< \brief (USBC_UESTA7SET offset) Endpoint Status Set Register */
#define USBC_UESTA7SET_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UESTA7SET reset_value) Endpoint Status Set Register */

#define USBC_UESTA7SET_TXINIS_Pos   0            /**< \brief (USBC_UESTA7SET) TXINI Set */
#define USBC_UESTA7SET_TXINIS       (_U_(0x1) << USBC_UESTA7SET_TXINIS_Pos)
#define USBC_UESTA7SET_RXOUTIS_Pos  1            /**< \brief (USBC_UESTA7SET) RXOUTI Set */
#define USBC_UESTA7SET_RXOUTIS      (_U_(0x1) << USBC_UESTA7SET_RXOUTIS_Pos)
#define USBC_UESTA7SET_RXSTPIS_Pos  2            /**< \brief (USBC_UESTA7SET) RXSTPI Set */
#define USBC_UESTA7SET_RXSTPIS      (_U_(0x1) << USBC_UESTA7SET_RXSTPIS_Pos)
#define USBC_UESTA7SET_NAKOUTIS_Pos 3            /**< \brief (USBC_UESTA7SET) NAKOUTI Set */
#define USBC_UESTA7SET_NAKOUTIS     (_U_(0x1) << USBC_UESTA7SET_NAKOUTIS_Pos)
#define USBC_UESTA7SET_NAKINIS_Pos  4            /**< \brief (USBC_UESTA7SET) NAKINI Set */
#define USBC_UESTA7SET_NAKINIS      (_U_(0x1) << USBC_UESTA7SET_NAKINIS_Pos)
#define USBC_UESTA7SET_STALLEDIS_Pos 6            /**< \brief (USBC_UESTA7SET) STALLEDI Set */
#define USBC_UESTA7SET_STALLEDIS    (_U_(0x1) << USBC_UESTA7SET_STALLEDIS_Pos)
#define USBC_UESTA7SET_RAMACERIS_Pos 11           /**< \brief (USBC_UESTA7SET) RAMACERI Set */
#define USBC_UESTA7SET_RAMACERIS    (_U_(0x1) << USBC_UESTA7SET_RAMACERIS_Pos)
#define USBC_UESTA7SET_NBUSYBKS_Pos 12           /**< \brief (USBC_UESTA7SET) NBUSYBK Set */
#define USBC_UESTA7SET_NBUSYBKS     (_U_(0x1) << USBC_UESTA7SET_NBUSYBKS_Pos)
#define USBC_UESTA7SET_MASK         _U_(0x0000185F) /**< \brief (USBC_UESTA7SET) MASK Register */

/* -------- USBC_UECON0 : (USBC Offset: 0x1C0) (R/  32) Endpoint Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXINE:1;          /*!< bit:      0  TXIN Interrupt Enable              */
    uint32_t RXOUTE:1;         /*!< bit:      1  RXOUT Interrupt Enable             */
    uint32_t RXSTPE:1;         /*!< bit:      2  RXSTP Interrupt Enable             */
    uint32_t NAKOUTE:1;        /*!< bit:      3  NAKOUT Interrupt Enable            */
    uint32_t NAKINE:1;         /*!< bit:      4  NAKIN Interrupt Enable             */
    uint32_t :1;               /*!< bit:      5  Reserved                           */
    uint32_t STALLEDE:1;       /*!< bit:      6  STALLED Interrupt Enable           */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t NREPLY:1;         /*!< bit:      8  No Reply                           */
    uint32_t :2;               /*!< bit:  9..10  Reserved                           */
    uint32_t RAMACERE:1;       /*!< bit:     11  RAMACER Interrupt Enable           */
    uint32_t NBUSYBKE:1;       /*!< bit:     12  Number of Busy Banks Interrupt Enable */
    uint32_t KILLBK:1;         /*!< bit:     13  Kill IN Bank                       */
    uint32_t FIFOCON:1;        /*!< bit:     14  FIFO Control                       */
    uint32_t :2;               /*!< bit: 15..16  Reserved                           */
    uint32_t NYETDIS:1;        /*!< bit:     17  NYET token disable                 */
    uint32_t RSTDT:1;          /*!< bit:     18  Reset Data Toggle                  */
    uint32_t STALLRQ:1;        /*!< bit:     19  STALL Request                      */
    uint32_t :4;               /*!< bit: 20..23  Reserved                           */
    uint32_t BUSY0:1;          /*!< bit:     24  Busy Bank1 Enable                  */
    uint32_t BUSY1:1;          /*!< bit:     25  Busy Bank0 Enable                  */
    uint32_t :6;               /*!< bit: 26..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UECON0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UECON0_OFFSET          0x1C0        /**< \brief (USBC_UECON0 offset) Endpoint Control Register */
#define USBC_UECON0_RESETVALUE      _U_(0x00000000); /**< \brief (USBC_UECON0 reset_value) Endpoint Control Register */

#define USBC_UECON0_TXINE_Pos       0            /**< \brief (USBC_UECON0) TXIN Interrupt Enable */
#define USBC_UECON0_TXINE           (_U_(0x1) << USBC_UECON0_TXINE_Pos)
#define USBC_UECON0_RXOUTE_Pos      1            /**< \brief (USBC_UECON0) RXOUT Interrupt Enable */
#define USBC_UECON0_RXOUTE          (_U_(0x1) << USBC_UECON0_RXOUTE_Pos)
#define USBC_UECON0_RXSTPE_Pos      2            /**< \brief (USBC_UECON0) RXSTP Interrupt Enable */
#define USBC_UECON0_RXSTPE          (_U_(0x1) << USBC_UECON0_RXSTPE_Pos)
#define USBC_UECON0_NAKOUTE_Pos     3            /**< \brief (USBC_UECON0) NAKOUT Interrupt Enable */
#define USBC_UECON0_NAKOUTE         (_U_(0x1) << USBC_UECON0_NAKOUTE_Pos)
#define USBC_UECON0_NAKINE_Pos      4            /**< \brief (USBC_UECON0) NAKIN Interrupt Enable */
#define USBC_UECON0_NAKINE          (_U_(0x1) << USBC_UECON0_NAKINE_Pos)
#define USBC_UECON0_STALLEDE_Pos    6            /**< \brief (USBC_UECON0) STALLED Interrupt Enable */
#define USBC_UECON0_STALLEDE        (_U_(0x1) << USBC_UECON0_STALLEDE_Pos)
#define USBC_UECON0_NREPLY_Pos      8            /**< \brief (USBC_UECON0) No Reply */
#define USBC_UECON0_NREPLY          (_U_(0x1) << USBC_UECON0_NREPLY_Pos)
#define USBC_UECON0_RAMACERE_Pos    11           /**< \brief (USBC_UECON0) RAMACER Interrupt Enable */
#define USBC_UECON0_RAMACERE        (_U_(0x1) << USBC_UECON0_RAMACERE_Pos)
#define USBC_UECON0_NBUSYBKE_Pos    12           /**< \brief (USBC_UECON0) Number of Busy Banks Interrupt Enable */
#define USBC_UECON0_NBUSYBKE        (_U_(0x1) << USBC_UECON0_NBUSYBKE_Pos)
#define USBC_UECON0_KILLBK_Pos      13           /**< \brief (USBC_UECON0) Kill IN Bank */
#define USBC_UECON0_KILLBK          (_U_(0x1) << USBC_UECON0_KILLBK_Pos)
#define USBC_UECON0_FIFOCON_Pos     14           /**< \brief (USBC_UECON0) FIFO Control */
#define USBC_UECON0_FIFOCON         (_U_(0x1) << USBC_UECON0_FIFOCON_Pos)
#define USBC_UECON0_NYETDIS_Pos     17           /**< \brief (USBC_UECON0) NYET token disable */
#define USBC_UECON0_NYETDIS         (_U_(0x1) << USBC_UECON0_NYETDIS_Pos)
#define USBC_UECON0_RSTDT_Pos       18           /**< \brief (USBC_UECON0) Reset Data Toggle */
#define USBC_UECON0_RSTDT           (_U_(0x1) << USBC_UECON0_RSTDT_Pos)
#define USBC_UECON0_STALLRQ_Pos     19           /**< \brief (USBC_UECON0) STALL Request */
#define USBC_UECON0_STALLRQ         (_U_(0x1) << USBC_UECON0_STALLRQ_Pos)
#define USBC_UECON0_BUSY0_Pos       24           /**< \brief (USBC_UECON0) Busy Bank1 Enable */
#define USBC_UECON0_BUSY0           (_U_(0x1) << USBC_UECON0_BUSY0_Pos)
#define USBC_UECON0_BUSY1_Pos       25           /**< \brief (USBC_UECON0) Busy Bank0 Enable */
#define USBC_UECON0_BUSY1           (_U_(0x1) << USBC_UECON0_BUSY1_Pos)
#define USBC_UECON0_MASK            _U_(0x030E795F) /**< \brief (USBC_UECON0) MASK Register */

/* -------- USBC_UECON1 : (USBC Offset: 0x1C4) (R/  32) Endpoint Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXINE:1;          /*!< bit:      0  TXIN Interrupt Enable              */
    uint32_t RXOUTE:1;         /*!< bit:      1  RXOUT Interrupt Enable             */
    uint32_t RXSTPE:1;         /*!< bit:      2  RXSTP Interrupt Enable             */
    uint32_t NAKOUTE:1;        /*!< bit:      3  NAKOUT Interrupt Enable            */
    uint32_t NAKINE:1;         /*!< bit:      4  NAKIN Interrupt Enable             */
    uint32_t :1;               /*!< bit:      5  Reserved                           */
    uint32_t STALLEDE:1;       /*!< bit:      6  STALLED Interrupt Enable           */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t NREPLY:1;         /*!< bit:      8  No Reply                           */
    uint32_t :2;               /*!< bit:  9..10  Reserved                           */
    uint32_t RAMACERE:1;       /*!< bit:     11  RAMACER Interrupt Enable           */
    uint32_t NBUSYBKE:1;       /*!< bit:     12  Number of Busy Banks Interrupt Enable */
    uint32_t KILLBK:1;         /*!< bit:     13  Kill IN Bank                       */
    uint32_t FIFOCON:1;        /*!< bit:     14  FIFO Control                       */
    uint32_t :2;               /*!< bit: 15..16  Reserved                           */
    uint32_t NYETDIS:1;        /*!< bit:     17  NYET Token Enable                  */
    uint32_t RSTDT:1;          /*!< bit:     18  Reset Data Toggle                  */
    uint32_t STALLRQ:1;        /*!< bit:     19  STALL Request                      */
    uint32_t :4;               /*!< bit: 20..23  Reserved                           */
    uint32_t BUSY0:1;          /*!< bit:     24  Busy Bank1 Enable                  */
    uint32_t BUSY1:1;          /*!< bit:     25  Busy Bank0 Enable                  */
    uint32_t :6;               /*!< bit: 26..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UECON1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UECON1_OFFSET          0x1C4        /**< \brief (USBC_UECON1 offset) Endpoint Control Register */
#define USBC_UECON1_RESETVALUE      _U_(0x00000000); /**< \brief (USBC_UECON1 reset_value) Endpoint Control Register */

#define USBC_UECON1_TXINE_Pos       0            /**< \brief (USBC_UECON1) TXIN Interrupt Enable */
#define USBC_UECON1_TXINE           (_U_(0x1) << USBC_UECON1_TXINE_Pos)
#define USBC_UECON1_RXOUTE_Pos      1            /**< \brief (USBC_UECON1) RXOUT Interrupt Enable */
#define USBC_UECON1_RXOUTE          (_U_(0x1) << USBC_UECON1_RXOUTE_Pos)
#define USBC_UECON1_RXSTPE_Pos      2            /**< \brief (USBC_UECON1) RXSTP Interrupt Enable */
#define USBC_UECON1_RXSTPE          (_U_(0x1) << USBC_UECON1_RXSTPE_Pos)
#define USBC_UECON1_NAKOUTE_Pos     3            /**< \brief (USBC_UECON1) NAKOUT Interrupt Enable */
#define USBC_UECON1_NAKOUTE         (_U_(0x1) << USBC_UECON1_NAKOUTE_Pos)
#define USBC_UECON1_NAKINE_Pos      4            /**< \brief (USBC_UECON1) NAKIN Interrupt Enable */
#define USBC_UECON1_NAKINE          (_U_(0x1) << USBC_UECON1_NAKINE_Pos)
#define USBC_UECON1_STALLEDE_Pos    6            /**< \brief (USBC_UECON1) STALLED Interrupt Enable */
#define USBC_UECON1_STALLEDE        (_U_(0x1) << USBC_UECON1_STALLEDE_Pos)
#define USBC_UECON1_NREPLY_Pos      8            /**< \brief (USBC_UECON1) No Reply */
#define USBC_UECON1_NREPLY          (_U_(0x1) << USBC_UECON1_NREPLY_Pos)
#define USBC_UECON1_RAMACERE_Pos    11           /**< \brief (USBC_UECON1) RAMACER Interrupt Enable */
#define USBC_UECON1_RAMACERE        (_U_(0x1) << USBC_UECON1_RAMACERE_Pos)
#define USBC_UECON1_NBUSYBKE_Pos    12           /**< \brief (USBC_UECON1) Number of Busy Banks Interrupt Enable */
#define USBC_UECON1_NBUSYBKE        (_U_(0x1) << USBC_UECON1_NBUSYBKE_Pos)
#define USBC_UECON1_KILLBK_Pos      13           /**< \brief (USBC_UECON1) Kill IN Bank */
#define USBC_UECON1_KILLBK          (_U_(0x1) << USBC_UECON1_KILLBK_Pos)
#define USBC_UECON1_FIFOCON_Pos     14           /**< \brief (USBC_UECON1) FIFO Control */
#define USBC_UECON1_FIFOCON         (_U_(0x1) << USBC_UECON1_FIFOCON_Pos)
#define USBC_UECON1_NYETDIS_Pos     17           /**< \brief (USBC_UECON1) NYET Token Enable */
#define USBC_UECON1_NYETDIS         (_U_(0x1) << USBC_UECON1_NYETDIS_Pos)
#define USBC_UECON1_RSTDT_Pos       18           /**< \brief (USBC_UECON1) Reset Data Toggle */
#define USBC_UECON1_RSTDT           (_U_(0x1) << USBC_UECON1_RSTDT_Pos)
#define USBC_UECON1_STALLRQ_Pos     19           /**< \brief (USBC_UECON1) STALL Request */
#define USBC_UECON1_STALLRQ         (_U_(0x1) << USBC_UECON1_STALLRQ_Pos)
#define USBC_UECON1_BUSY0_Pos       24           /**< \brief (USBC_UECON1) Busy Bank1 Enable */
#define USBC_UECON1_BUSY0           (_U_(0x1) << USBC_UECON1_BUSY0_Pos)
#define USBC_UECON1_BUSY1_Pos       25           /**< \brief (USBC_UECON1) Busy Bank0 Enable */
#define USBC_UECON1_BUSY1           (_U_(0x1) << USBC_UECON1_BUSY1_Pos)
#define USBC_UECON1_MASK            _U_(0x030E795F) /**< \brief (USBC_UECON1) MASK Register */

/* -------- USBC_UECON2 : (USBC Offset: 0x1C8) (R/  32) Endpoint Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXINE:1;          /*!< bit:      0  TXIN Interrupt Enable              */
    uint32_t RXOUTE:1;         /*!< bit:      1  RXOUT Interrupt Enable             */
    uint32_t RXSTPE:1;         /*!< bit:      2  RXSTP Interrupt Enable             */
    uint32_t NAKOUTE:1;        /*!< bit:      3  NAKOUT Interrupt Enable            */
    uint32_t NAKINE:1;         /*!< bit:      4  NAKIN Interrupt Enable             */
    uint32_t :1;               /*!< bit:      5  Reserved                           */
    uint32_t STALLEDE:1;       /*!< bit:      6  STALLED Interrupt Enable           */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t NREPLY:1;         /*!< bit:      8  No Reply                           */
    uint32_t :2;               /*!< bit:  9..10  Reserved                           */
    uint32_t RAMACERE:1;       /*!< bit:     11  RAMACER Interrupt Enable           */
    uint32_t NBUSYBKE:1;       /*!< bit:     12  Number of Busy Banks Interrupt Enable */
    uint32_t KILLBK:1;         /*!< bit:     13  Kill IN Bank                       */
    uint32_t FIFOCON:1;        /*!< bit:     14  FIFO Control                       */
    uint32_t :2;               /*!< bit: 15..16  Reserved                           */
    uint32_t NYETDIS:1;        /*!< bit:     17  NYET Token Enable                  */
    uint32_t RSTDT:1;          /*!< bit:     18  Reset Data Toggle                  */
    uint32_t STALLRQ:1;        /*!< bit:     19  STALL Request                      */
    uint32_t :4;               /*!< bit: 20..23  Reserved                           */
    uint32_t BUSY0:1;          /*!< bit:     24  Busy Bank1 Enable                  */
    uint32_t BUSY1:1;          /*!< bit:     25  Busy Bank0 Enable                  */
    uint32_t :6;               /*!< bit: 26..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UECON2_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UECON2_OFFSET          0x1C8        /**< \brief (USBC_UECON2 offset) Endpoint Control Register */
#define USBC_UECON2_RESETVALUE      _U_(0x00000000); /**< \brief (USBC_UECON2 reset_value) Endpoint Control Register */

#define USBC_UECON2_TXINE_Pos       0            /**< \brief (USBC_UECON2) TXIN Interrupt Enable */
#define USBC_UECON2_TXINE           (_U_(0x1) << USBC_UECON2_TXINE_Pos)
#define USBC_UECON2_RXOUTE_Pos      1            /**< \brief (USBC_UECON2) RXOUT Interrupt Enable */
#define USBC_UECON2_RXOUTE          (_U_(0x1) << USBC_UECON2_RXOUTE_Pos)
#define USBC_UECON2_RXSTPE_Pos      2            /**< \brief (USBC_UECON2) RXSTP Interrupt Enable */
#define USBC_UECON2_RXSTPE          (_U_(0x1) << USBC_UECON2_RXSTPE_Pos)
#define USBC_UECON2_NAKOUTE_Pos     3            /**< \brief (USBC_UECON2) NAKOUT Interrupt Enable */
#define USBC_UECON2_NAKOUTE         (_U_(0x1) << USBC_UECON2_NAKOUTE_Pos)
#define USBC_UECON2_NAKINE_Pos      4            /**< \brief (USBC_UECON2) NAKIN Interrupt Enable */
#define USBC_UECON2_NAKINE          (_U_(0x1) << USBC_UECON2_NAKINE_Pos)
#define USBC_UECON2_STALLEDE_Pos    6            /**< \brief (USBC_UECON2) STALLED Interrupt Enable */
#define USBC_UECON2_STALLEDE        (_U_(0x1) << USBC_UECON2_STALLEDE_Pos)
#define USBC_UECON2_NREPLY_Pos      8            /**< \brief (USBC_UECON2) No Reply */
#define USBC_UECON2_NREPLY          (_U_(0x1) << USBC_UECON2_NREPLY_Pos)
#define USBC_UECON2_RAMACERE_Pos    11           /**< \brief (USBC_UECON2) RAMACER Interrupt Enable */
#define USBC_UECON2_RAMACERE        (_U_(0x1) << USBC_UECON2_RAMACERE_Pos)
#define USBC_UECON2_NBUSYBKE_Pos    12           /**< \brief (USBC_UECON2) Number of Busy Banks Interrupt Enable */
#define USBC_UECON2_NBUSYBKE        (_U_(0x1) << USBC_UECON2_NBUSYBKE_Pos)
#define USBC_UECON2_KILLBK_Pos      13           /**< \brief (USBC_UECON2) Kill IN Bank */
#define USBC_UECON2_KILLBK          (_U_(0x1) << USBC_UECON2_KILLBK_Pos)
#define USBC_UECON2_FIFOCON_Pos     14           /**< \brief (USBC_UECON2) FIFO Control */
#define USBC_UECON2_FIFOCON         (_U_(0x1) << USBC_UECON2_FIFOCON_Pos)
#define USBC_UECON2_NYETDIS_Pos     17           /**< \brief (USBC_UECON2) NYET Token Enable */
#define USBC_UECON2_NYETDIS         (_U_(0x1) << USBC_UECON2_NYETDIS_Pos)
#define USBC_UECON2_RSTDT_Pos       18           /**< \brief (USBC_UECON2) Reset Data Toggle */
#define USBC_UECON2_RSTDT           (_U_(0x1) << USBC_UECON2_RSTDT_Pos)
#define USBC_UECON2_STALLRQ_Pos     19           /**< \brief (USBC_UECON2) STALL Request */
#define USBC_UECON2_STALLRQ         (_U_(0x1) << USBC_UECON2_STALLRQ_Pos)
#define USBC_UECON2_BUSY0_Pos       24           /**< \brief (USBC_UECON2) Busy Bank1 Enable */
#define USBC_UECON2_BUSY0           (_U_(0x1) << USBC_UECON2_BUSY0_Pos)
#define USBC_UECON2_BUSY1_Pos       25           /**< \brief (USBC_UECON2) Busy Bank0 Enable */
#define USBC_UECON2_BUSY1           (_U_(0x1) << USBC_UECON2_BUSY1_Pos)
#define USBC_UECON2_MASK            _U_(0x030E795F) /**< \brief (USBC_UECON2) MASK Register */

/* -------- USBC_UECON3 : (USBC Offset: 0x1CC) (R/  32) Endpoint Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXINE:1;          /*!< bit:      0  TXIN Interrupt Enable              */
    uint32_t RXOUTE:1;         /*!< bit:      1  RXOUT Interrupt Enable             */
    uint32_t RXSTPE:1;         /*!< bit:      2  RXSTP Interrupt Enable             */
    uint32_t NAKOUTE:1;        /*!< bit:      3  NAKOUT Interrupt Enable            */
    uint32_t NAKINE:1;         /*!< bit:      4  NAKIN Interrupt Enable             */
    uint32_t :1;               /*!< bit:      5  Reserved                           */
    uint32_t STALLEDE:1;       /*!< bit:      6  STALLED Interrupt Enable           */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t NREPLY:1;         /*!< bit:      8  No Reply                           */
    uint32_t :2;               /*!< bit:  9..10  Reserved                           */
    uint32_t RAMACERE:1;       /*!< bit:     11  RAMACER Interrupt Enable           */
    uint32_t NBUSYBKE:1;       /*!< bit:     12  Number of Busy Banks Interrupt Enable */
    uint32_t KILLBK:1;         /*!< bit:     13  Kill IN Bank                       */
    uint32_t FIFOCON:1;        /*!< bit:     14  FIFO Control                       */
    uint32_t :2;               /*!< bit: 15..16  Reserved                           */
    uint32_t NYETDIS:1;        /*!< bit:     17  NYET Token Enable                  */
    uint32_t RSTDT:1;          /*!< bit:     18  Reset Data Toggle                  */
    uint32_t STALLRQ:1;        /*!< bit:     19  STALL Request                      */
    uint32_t :4;               /*!< bit: 20..23  Reserved                           */
    uint32_t BUSY0:1;          /*!< bit:     24  Busy Bank1 Enable                  */
    uint32_t BUSY1:1;          /*!< bit:     25  Busy Bank0 Enable                  */
    uint32_t :6;               /*!< bit: 26..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UECON3_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UECON3_OFFSET          0x1CC        /**< \brief (USBC_UECON3 offset) Endpoint Control Register */
#define USBC_UECON3_RESETVALUE      _U_(0x00000000); /**< \brief (USBC_UECON3 reset_value) Endpoint Control Register */

#define USBC_UECON3_TXINE_Pos       0            /**< \brief (USBC_UECON3) TXIN Interrupt Enable */
#define USBC_UECON3_TXINE           (_U_(0x1) << USBC_UECON3_TXINE_Pos)
#define USBC_UECON3_RXOUTE_Pos      1            /**< \brief (USBC_UECON3) RXOUT Interrupt Enable */
#define USBC_UECON3_RXOUTE          (_U_(0x1) << USBC_UECON3_RXOUTE_Pos)
#define USBC_UECON3_RXSTPE_Pos      2            /**< \brief (USBC_UECON3) RXSTP Interrupt Enable */
#define USBC_UECON3_RXSTPE          (_U_(0x1) << USBC_UECON3_RXSTPE_Pos)
#define USBC_UECON3_NAKOUTE_Pos     3            /**< \brief (USBC_UECON3) NAKOUT Interrupt Enable */
#define USBC_UECON3_NAKOUTE         (_U_(0x1) << USBC_UECON3_NAKOUTE_Pos)
#define USBC_UECON3_NAKINE_Pos      4            /**< \brief (USBC_UECON3) NAKIN Interrupt Enable */
#define USBC_UECON3_NAKINE          (_U_(0x1) << USBC_UECON3_NAKINE_Pos)
#define USBC_UECON3_STALLEDE_Pos    6            /**< \brief (USBC_UECON3) STALLED Interrupt Enable */
#define USBC_UECON3_STALLEDE        (_U_(0x1) << USBC_UECON3_STALLEDE_Pos)
#define USBC_UECON3_NREPLY_Pos      8            /**< \brief (USBC_UECON3) No Reply */
#define USBC_UECON3_NREPLY          (_U_(0x1) << USBC_UECON3_NREPLY_Pos)
#define USBC_UECON3_RAMACERE_Pos    11           /**< \brief (USBC_UECON3) RAMACER Interrupt Enable */
#define USBC_UECON3_RAMACERE        (_U_(0x1) << USBC_UECON3_RAMACERE_Pos)
#define USBC_UECON3_NBUSYBKE_Pos    12           /**< \brief (USBC_UECON3) Number of Busy Banks Interrupt Enable */
#define USBC_UECON3_NBUSYBKE        (_U_(0x1) << USBC_UECON3_NBUSYBKE_Pos)
#define USBC_UECON3_KILLBK_Pos      13           /**< \brief (USBC_UECON3) Kill IN Bank */
#define USBC_UECON3_KILLBK          (_U_(0x1) << USBC_UECON3_KILLBK_Pos)
#define USBC_UECON3_FIFOCON_Pos     14           /**< \brief (USBC_UECON3) FIFO Control */
#define USBC_UECON3_FIFOCON         (_U_(0x1) << USBC_UECON3_FIFOCON_Pos)
#define USBC_UECON3_NYETDIS_Pos     17           /**< \brief (USBC_UECON3) NYET Token Enable */
#define USBC_UECON3_NYETDIS         (_U_(0x1) << USBC_UECON3_NYETDIS_Pos)
#define USBC_UECON3_RSTDT_Pos       18           /**< \brief (USBC_UECON3) Reset Data Toggle */
#define USBC_UECON3_RSTDT           (_U_(0x1) << USBC_UECON3_RSTDT_Pos)
#define USBC_UECON3_STALLRQ_Pos     19           /**< \brief (USBC_UECON3) STALL Request */
#define USBC_UECON3_STALLRQ         (_U_(0x1) << USBC_UECON3_STALLRQ_Pos)
#define USBC_UECON3_BUSY0_Pos       24           /**< \brief (USBC_UECON3) Busy Bank1 Enable */
#define USBC_UECON3_BUSY0           (_U_(0x1) << USBC_UECON3_BUSY0_Pos)
#define USBC_UECON3_BUSY1_Pos       25           /**< \brief (USBC_UECON3) Busy Bank0 Enable */
#define USBC_UECON3_BUSY1           (_U_(0x1) << USBC_UECON3_BUSY1_Pos)
#define USBC_UECON3_MASK            _U_(0x030E795F) /**< \brief (USBC_UECON3) MASK Register */

/* -------- USBC_UECON4 : (USBC Offset: 0x1D0) (R/  32) Endpoint Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXINE:1;          /*!< bit:      0  TXIN Interrupt Enable              */
    uint32_t RXOUTE:1;         /*!< bit:      1  RXOUT Interrupt Enable             */
    uint32_t RXSTPE:1;         /*!< bit:      2  RXSTP Interrupt Enable             */
    uint32_t NAKOUTE:1;        /*!< bit:      3  NAKOUT Interrupt Enable            */
    uint32_t NAKINE:1;         /*!< bit:      4  NAKIN Interrupt Enable             */
    uint32_t :1;               /*!< bit:      5  Reserved                           */
    uint32_t STALLEDE:1;       /*!< bit:      6  STALLED Interrupt Enable           */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t NREPLY:1;         /*!< bit:      8  No Reply                           */
    uint32_t :2;               /*!< bit:  9..10  Reserved                           */
    uint32_t RAMACERE:1;       /*!< bit:     11  RAMACER Interrupt Enable           */
    uint32_t NBUSYBKE:1;       /*!< bit:     12  Number of Busy Banks Interrupt Enable */
    uint32_t KILLBK:1;         /*!< bit:     13  Kill IN Bank                       */
    uint32_t FIFOCON:1;        /*!< bit:     14  FIFO Control                       */
    uint32_t :2;               /*!< bit: 15..16  Reserved                           */
    uint32_t NYETDIS:1;        /*!< bit:     17  NYET Token Enable                  */
    uint32_t RSTDT:1;          /*!< bit:     18  Reset Data Toggle                  */
    uint32_t STALLRQ:1;        /*!< bit:     19  STALL Request                      */
    uint32_t :4;               /*!< bit: 20..23  Reserved                           */
    uint32_t BUSY0:1;          /*!< bit:     24  Busy Bank1 Enable                  */
    uint32_t BUSY1:1;          /*!< bit:     25  Busy Bank0 Enable                  */
    uint32_t :6;               /*!< bit: 26..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UECON4_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UECON4_OFFSET          0x1D0        /**< \brief (USBC_UECON4 offset) Endpoint Control Register */
#define USBC_UECON4_RESETVALUE      _U_(0x00000000); /**< \brief (USBC_UECON4 reset_value) Endpoint Control Register */

#define USBC_UECON4_TXINE_Pos       0            /**< \brief (USBC_UECON4) TXIN Interrupt Enable */
#define USBC_UECON4_TXINE           (_U_(0x1) << USBC_UECON4_TXINE_Pos)
#define USBC_UECON4_RXOUTE_Pos      1            /**< \brief (USBC_UECON4) RXOUT Interrupt Enable */
#define USBC_UECON4_RXOUTE          (_U_(0x1) << USBC_UECON4_RXOUTE_Pos)
#define USBC_UECON4_RXSTPE_Pos      2            /**< \brief (USBC_UECON4) RXSTP Interrupt Enable */
#define USBC_UECON4_RXSTPE          (_U_(0x1) << USBC_UECON4_RXSTPE_Pos)
#define USBC_UECON4_NAKOUTE_Pos     3            /**< \brief (USBC_UECON4) NAKOUT Interrupt Enable */
#define USBC_UECON4_NAKOUTE         (_U_(0x1) << USBC_UECON4_NAKOUTE_Pos)
#define USBC_UECON4_NAKINE_Pos      4            /**< \brief (USBC_UECON4) NAKIN Interrupt Enable */
#define USBC_UECON4_NAKINE          (_U_(0x1) << USBC_UECON4_NAKINE_Pos)
#define USBC_UECON4_STALLEDE_Pos    6            /**< \brief (USBC_UECON4) STALLED Interrupt Enable */
#define USBC_UECON4_STALLEDE        (_U_(0x1) << USBC_UECON4_STALLEDE_Pos)
#define USBC_UECON4_NREPLY_Pos      8            /**< \brief (USBC_UECON4) No Reply */
#define USBC_UECON4_NREPLY          (_U_(0x1) << USBC_UECON4_NREPLY_Pos)
#define USBC_UECON4_RAMACERE_Pos    11           /**< \brief (USBC_UECON4) RAMACER Interrupt Enable */
#define USBC_UECON4_RAMACERE        (_U_(0x1) << USBC_UECON4_RAMACERE_Pos)
#define USBC_UECON4_NBUSYBKE_Pos    12           /**< \brief (USBC_UECON4) Number of Busy Banks Interrupt Enable */
#define USBC_UECON4_NBUSYBKE        (_U_(0x1) << USBC_UECON4_NBUSYBKE_Pos)
#define USBC_UECON4_KILLBK_Pos      13           /**< \brief (USBC_UECON4) Kill IN Bank */
#define USBC_UECON4_KILLBK          (_U_(0x1) << USBC_UECON4_KILLBK_Pos)
#define USBC_UECON4_FIFOCON_Pos     14           /**< \brief (USBC_UECON4) FIFO Control */
#define USBC_UECON4_FIFOCON         (_U_(0x1) << USBC_UECON4_FIFOCON_Pos)
#define USBC_UECON4_NYETDIS_Pos     17           /**< \brief (USBC_UECON4) NYET Token Enable */
#define USBC_UECON4_NYETDIS         (_U_(0x1) << USBC_UECON4_NYETDIS_Pos)
#define USBC_UECON4_RSTDT_Pos       18           /**< \brief (USBC_UECON4) Reset Data Toggle */
#define USBC_UECON4_RSTDT           (_U_(0x1) << USBC_UECON4_RSTDT_Pos)
#define USBC_UECON4_STALLRQ_Pos     19           /**< \brief (USBC_UECON4) STALL Request */
#define USBC_UECON4_STALLRQ         (_U_(0x1) << USBC_UECON4_STALLRQ_Pos)
#define USBC_UECON4_BUSY0_Pos       24           /**< \brief (USBC_UECON4) Busy Bank1 Enable */
#define USBC_UECON4_BUSY0           (_U_(0x1) << USBC_UECON4_BUSY0_Pos)
#define USBC_UECON4_BUSY1_Pos       25           /**< \brief (USBC_UECON4) Busy Bank0 Enable */
#define USBC_UECON4_BUSY1           (_U_(0x1) << USBC_UECON4_BUSY1_Pos)
#define USBC_UECON4_MASK            _U_(0x030E795F) /**< \brief (USBC_UECON4) MASK Register */

/* -------- USBC_UECON5 : (USBC Offset: 0x1D4) (R/  32) Endpoint Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXINE:1;          /*!< bit:      0  TXIN Interrupt Enable              */
    uint32_t RXOUTE:1;         /*!< bit:      1  RXOUT Interrupt Enable             */
    uint32_t RXSTPE:1;         /*!< bit:      2  RXSTP Interrupt Enable             */
    uint32_t NAKOUTE:1;        /*!< bit:      3  NAKOUT Interrupt Enable            */
    uint32_t NAKINE:1;         /*!< bit:      4  NAKIN Interrupt Enable             */
    uint32_t :1;               /*!< bit:      5  Reserved                           */
    uint32_t STALLEDE:1;       /*!< bit:      6  STALLED Interrupt Enable           */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t NREPLY:1;         /*!< bit:      8  No Reply                           */
    uint32_t :2;               /*!< bit:  9..10  Reserved                           */
    uint32_t RAMACERE:1;       /*!< bit:     11  RAMACER Interrupt Enable           */
    uint32_t NBUSYBKE:1;       /*!< bit:     12  Number of Busy Banks Interrupt Enable */
    uint32_t KILLBK:1;         /*!< bit:     13  Kill IN Bank                       */
    uint32_t FIFOCON:1;        /*!< bit:     14  FIFO Control                       */
    uint32_t :2;               /*!< bit: 15..16  Reserved                           */
    uint32_t NYETDIS:1;        /*!< bit:     17  NYET Token Enable                  */
    uint32_t RSTDT:1;          /*!< bit:     18  Reset Data Toggle                  */
    uint32_t STALLRQ:1;        /*!< bit:     19  STALL Request                      */
    uint32_t :4;               /*!< bit: 20..23  Reserved                           */
    uint32_t BUSY0:1;          /*!< bit:     24  Busy Bank1 Enable                  */
    uint32_t BUSY1:1;          /*!< bit:     25  Busy Bank0 Enable                  */
    uint32_t :6;               /*!< bit: 26..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UECON5_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UECON5_OFFSET          0x1D4        /**< \brief (USBC_UECON5 offset) Endpoint Control Register */
#define USBC_UECON5_RESETVALUE      _U_(0x00000000); /**< \brief (USBC_UECON5 reset_value) Endpoint Control Register */

#define USBC_UECON5_TXINE_Pos       0            /**< \brief (USBC_UECON5) TXIN Interrupt Enable */
#define USBC_UECON5_TXINE           (_U_(0x1) << USBC_UECON5_TXINE_Pos)
#define USBC_UECON5_RXOUTE_Pos      1            /**< \brief (USBC_UECON5) RXOUT Interrupt Enable */
#define USBC_UECON5_RXOUTE          (_U_(0x1) << USBC_UECON5_RXOUTE_Pos)
#define USBC_UECON5_RXSTPE_Pos      2            /**< \brief (USBC_UECON5) RXSTP Interrupt Enable */
#define USBC_UECON5_RXSTPE          (_U_(0x1) << USBC_UECON5_RXSTPE_Pos)
#define USBC_UECON5_NAKOUTE_Pos     3            /**< \brief (USBC_UECON5) NAKOUT Interrupt Enable */
#define USBC_UECON5_NAKOUTE         (_U_(0x1) << USBC_UECON5_NAKOUTE_Pos)
#define USBC_UECON5_NAKINE_Pos      4            /**< \brief (USBC_UECON5) NAKIN Interrupt Enable */
#define USBC_UECON5_NAKINE          (_U_(0x1) << USBC_UECON5_NAKINE_Pos)
#define USBC_UECON5_STALLEDE_Pos    6            /**< \brief (USBC_UECON5) STALLED Interrupt Enable */
#define USBC_UECON5_STALLEDE        (_U_(0x1) << USBC_UECON5_STALLEDE_Pos)
#define USBC_UECON5_NREPLY_Pos      8            /**< \brief (USBC_UECON5) No Reply */
#define USBC_UECON5_NREPLY          (_U_(0x1) << USBC_UECON5_NREPLY_Pos)
#define USBC_UECON5_RAMACERE_Pos    11           /**< \brief (USBC_UECON5) RAMACER Interrupt Enable */
#define USBC_UECON5_RAMACERE        (_U_(0x1) << USBC_UECON5_RAMACERE_Pos)
#define USBC_UECON5_NBUSYBKE_Pos    12           /**< \brief (USBC_UECON5) Number of Busy Banks Interrupt Enable */
#define USBC_UECON5_NBUSYBKE        (_U_(0x1) << USBC_UECON5_NBUSYBKE_Pos)
#define USBC_UECON5_KILLBK_Pos      13           /**< \brief (USBC_UECON5) Kill IN Bank */
#define USBC_UECON5_KILLBK          (_U_(0x1) << USBC_UECON5_KILLBK_Pos)
#define USBC_UECON5_FIFOCON_Pos     14           /**< \brief (USBC_UECON5) FIFO Control */
#define USBC_UECON5_FIFOCON         (_U_(0x1) << USBC_UECON5_FIFOCON_Pos)
#define USBC_UECON5_NYETDIS_Pos     17           /**< \brief (USBC_UECON5) NYET Token Enable */
#define USBC_UECON5_NYETDIS         (_U_(0x1) << USBC_UECON5_NYETDIS_Pos)
#define USBC_UECON5_RSTDT_Pos       18           /**< \brief (USBC_UECON5) Reset Data Toggle */
#define USBC_UECON5_RSTDT           (_U_(0x1) << USBC_UECON5_RSTDT_Pos)
#define USBC_UECON5_STALLRQ_Pos     19           /**< \brief (USBC_UECON5) STALL Request */
#define USBC_UECON5_STALLRQ         (_U_(0x1) << USBC_UECON5_STALLRQ_Pos)
#define USBC_UECON5_BUSY0_Pos       24           /**< \brief (USBC_UECON5) Busy Bank1 Enable */
#define USBC_UECON5_BUSY0           (_U_(0x1) << USBC_UECON5_BUSY0_Pos)
#define USBC_UECON5_BUSY1_Pos       25           /**< \brief (USBC_UECON5) Busy Bank0 Enable */
#define USBC_UECON5_BUSY1           (_U_(0x1) << USBC_UECON5_BUSY1_Pos)
#define USBC_UECON5_MASK            _U_(0x030E795F) /**< \brief (USBC_UECON5) MASK Register */

/* -------- USBC_UECON6 : (USBC Offset: 0x1D8) (R/  32) Endpoint Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXINE:1;          /*!< bit:      0  TXIN Interrupt Enable              */
    uint32_t RXOUTE:1;         /*!< bit:      1  RXOUT Interrupt Enable             */
    uint32_t RXSTPE:1;         /*!< bit:      2  RXSTP Interrupt Enable             */
    uint32_t NAKOUTE:1;        /*!< bit:      3  NAKOUT Interrupt Enable            */
    uint32_t NAKINE:1;         /*!< bit:      4  NAKIN Interrupt Enable             */
    uint32_t :1;               /*!< bit:      5  Reserved                           */
    uint32_t STALLEDE:1;       /*!< bit:      6  STALLED Interrupt Enable           */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t NREPLY:1;         /*!< bit:      8  No Reply                           */
    uint32_t :2;               /*!< bit:  9..10  Reserved                           */
    uint32_t RAMACERE:1;       /*!< bit:     11  RAMACER Interrupt Enable           */
    uint32_t NBUSYBKE:1;       /*!< bit:     12  Number of Busy Banks Interrupt Enable */
    uint32_t KILLBK:1;         /*!< bit:     13  Kill IN Bank                       */
    uint32_t FIFOCON:1;        /*!< bit:     14  FIFO Control                       */
    uint32_t :2;               /*!< bit: 15..16  Reserved                           */
    uint32_t NYETDIS:1;        /*!< bit:     17  NYET Token Enable                  */
    uint32_t RSTDT:1;          /*!< bit:     18  Reset Data Toggle                  */
    uint32_t STALLRQ:1;        /*!< bit:     19  STALL Request                      */
    uint32_t :4;               /*!< bit: 20..23  Reserved                           */
    uint32_t BUSY0:1;          /*!< bit:     24  Busy Bank1 Enable                  */
    uint32_t BUSY1:1;          /*!< bit:     25  Busy Bank0 Enable                  */
    uint32_t :6;               /*!< bit: 26..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UECON6_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UECON6_OFFSET          0x1D8        /**< \brief (USBC_UECON6 offset) Endpoint Control Register */
#define USBC_UECON6_RESETVALUE      _U_(0x00000000); /**< \brief (USBC_UECON6 reset_value) Endpoint Control Register */

#define USBC_UECON6_TXINE_Pos       0            /**< \brief (USBC_UECON6) TXIN Interrupt Enable */
#define USBC_UECON6_TXINE           (_U_(0x1) << USBC_UECON6_TXINE_Pos)
#define USBC_UECON6_RXOUTE_Pos      1            /**< \brief (USBC_UECON6) RXOUT Interrupt Enable */
#define USBC_UECON6_RXOUTE          (_U_(0x1) << USBC_UECON6_RXOUTE_Pos)
#define USBC_UECON6_RXSTPE_Pos      2            /**< \brief (USBC_UECON6) RXSTP Interrupt Enable */
#define USBC_UECON6_RXSTPE          (_U_(0x1) << USBC_UECON6_RXSTPE_Pos)
#define USBC_UECON6_NAKOUTE_Pos     3            /**< \brief (USBC_UECON6) NAKOUT Interrupt Enable */
#define USBC_UECON6_NAKOUTE         (_U_(0x1) << USBC_UECON6_NAKOUTE_Pos)
#define USBC_UECON6_NAKINE_Pos      4            /**< \brief (USBC_UECON6) NAKIN Interrupt Enable */
#define USBC_UECON6_NAKINE          (_U_(0x1) << USBC_UECON6_NAKINE_Pos)
#define USBC_UECON6_STALLEDE_Pos    6            /**< \brief (USBC_UECON6) STALLED Interrupt Enable */
#define USBC_UECON6_STALLEDE        (_U_(0x1) << USBC_UECON6_STALLEDE_Pos)
#define USBC_UECON6_NREPLY_Pos      8            /**< \brief (USBC_UECON6) No Reply */
#define USBC_UECON6_NREPLY          (_U_(0x1) << USBC_UECON6_NREPLY_Pos)
#define USBC_UECON6_RAMACERE_Pos    11           /**< \brief (USBC_UECON6) RAMACER Interrupt Enable */
#define USBC_UECON6_RAMACERE        (_U_(0x1) << USBC_UECON6_RAMACERE_Pos)
#define USBC_UECON6_NBUSYBKE_Pos    12           /**< \brief (USBC_UECON6) Number of Busy Banks Interrupt Enable */
#define USBC_UECON6_NBUSYBKE        (_U_(0x1) << USBC_UECON6_NBUSYBKE_Pos)
#define USBC_UECON6_KILLBK_Pos      13           /**< \brief (USBC_UECON6) Kill IN Bank */
#define USBC_UECON6_KILLBK          (_U_(0x1) << USBC_UECON6_KILLBK_Pos)
#define USBC_UECON6_FIFOCON_Pos     14           /**< \brief (USBC_UECON6) FIFO Control */
#define USBC_UECON6_FIFOCON         (_U_(0x1) << USBC_UECON6_FIFOCON_Pos)
#define USBC_UECON6_NYETDIS_Pos     17           /**< \brief (USBC_UECON6) NYET Token Enable */
#define USBC_UECON6_NYETDIS         (_U_(0x1) << USBC_UECON6_NYETDIS_Pos)
#define USBC_UECON6_RSTDT_Pos       18           /**< \brief (USBC_UECON6) Reset Data Toggle */
#define USBC_UECON6_RSTDT           (_U_(0x1) << USBC_UECON6_RSTDT_Pos)
#define USBC_UECON6_STALLRQ_Pos     19           /**< \brief (USBC_UECON6) STALL Request */
#define USBC_UECON6_STALLRQ         (_U_(0x1) << USBC_UECON6_STALLRQ_Pos)
#define USBC_UECON6_BUSY0_Pos       24           /**< \brief (USBC_UECON6) Busy Bank1 Enable */
#define USBC_UECON6_BUSY0           (_U_(0x1) << USBC_UECON6_BUSY0_Pos)
#define USBC_UECON6_BUSY1_Pos       25           /**< \brief (USBC_UECON6) Busy Bank0 Enable */
#define USBC_UECON6_BUSY1           (_U_(0x1) << USBC_UECON6_BUSY1_Pos)
#define USBC_UECON6_MASK            _U_(0x030E795F) /**< \brief (USBC_UECON6) MASK Register */

/* -------- USBC_UECON7 : (USBC Offset: 0x1DC) (R/  32) Endpoint Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXINE:1;          /*!< bit:      0  TXIN Interrupt Enable              */
    uint32_t RXOUTE:1;         /*!< bit:      1  RXOUT Interrupt Enable             */
    uint32_t RXSTPE:1;         /*!< bit:      2  RXSTP Interrupt Enable             */
    uint32_t NAKOUTE:1;        /*!< bit:      3  NAKOUT Interrupt Enable            */
    uint32_t NAKINE:1;         /*!< bit:      4  NAKIN Interrupt Enable             */
    uint32_t :1;               /*!< bit:      5  Reserved                           */
    uint32_t STALLEDE:1;       /*!< bit:      6  STALLED Interrupt Enable           */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t NREPLY:1;         /*!< bit:      8  No Reply                           */
    uint32_t :2;               /*!< bit:  9..10  Reserved                           */
    uint32_t RAMACERE:1;       /*!< bit:     11  RAMACER Interrupt Enable           */
    uint32_t NBUSYBKE:1;       /*!< bit:     12  Number of Busy Banks Interrupt Enable */
    uint32_t KILLBK:1;         /*!< bit:     13  Kill IN Bank                       */
    uint32_t FIFOCON:1;        /*!< bit:     14  FIFO Control                       */
    uint32_t :2;               /*!< bit: 15..16  Reserved                           */
    uint32_t NYETDIS:1;        /*!< bit:     17  NYET Token Enable                  */
    uint32_t RSTDT:1;          /*!< bit:     18  Reset Data Toggle                  */
    uint32_t STALLRQ:1;        /*!< bit:     19  STALL Request                      */
    uint32_t :4;               /*!< bit: 20..23  Reserved                           */
    uint32_t BUSY0:1;          /*!< bit:     24  Busy Bank1 Enable                  */
    uint32_t BUSY1:1;          /*!< bit:     25  Busy Bank0 Enable                  */
    uint32_t :6;               /*!< bit: 26..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UECON7_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UECON7_OFFSET          0x1DC        /**< \brief (USBC_UECON7 offset) Endpoint Control Register */
#define USBC_UECON7_RESETVALUE      _U_(0x00000000); /**< \brief (USBC_UECON7 reset_value) Endpoint Control Register */

#define USBC_UECON7_TXINE_Pos       0            /**< \brief (USBC_UECON7) TXIN Interrupt Enable */
#define USBC_UECON7_TXINE           (_U_(0x1) << USBC_UECON7_TXINE_Pos)
#define USBC_UECON7_RXOUTE_Pos      1            /**< \brief (USBC_UECON7) RXOUT Interrupt Enable */
#define USBC_UECON7_RXOUTE          (_U_(0x1) << USBC_UECON7_RXOUTE_Pos)
#define USBC_UECON7_RXSTPE_Pos      2            /**< \brief (USBC_UECON7) RXSTP Interrupt Enable */
#define USBC_UECON7_RXSTPE          (_U_(0x1) << USBC_UECON7_RXSTPE_Pos)
#define USBC_UECON7_NAKOUTE_Pos     3            /**< \brief (USBC_UECON7) NAKOUT Interrupt Enable */
#define USBC_UECON7_NAKOUTE         (_U_(0x1) << USBC_UECON7_NAKOUTE_Pos)
#define USBC_UECON7_NAKINE_Pos      4            /**< \brief (USBC_UECON7) NAKIN Interrupt Enable */
#define USBC_UECON7_NAKINE          (_U_(0x1) << USBC_UECON7_NAKINE_Pos)
#define USBC_UECON7_STALLEDE_Pos    6            /**< \brief (USBC_UECON7) STALLED Interrupt Enable */
#define USBC_UECON7_STALLEDE        (_U_(0x1) << USBC_UECON7_STALLEDE_Pos)
#define USBC_UECON7_NREPLY_Pos      8            /**< \brief (USBC_UECON7) No Reply */
#define USBC_UECON7_NREPLY          (_U_(0x1) << USBC_UECON7_NREPLY_Pos)
#define USBC_UECON7_RAMACERE_Pos    11           /**< \brief (USBC_UECON7) RAMACER Interrupt Enable */
#define USBC_UECON7_RAMACERE        (_U_(0x1) << USBC_UECON7_RAMACERE_Pos)
#define USBC_UECON7_NBUSYBKE_Pos    12           /**< \brief (USBC_UECON7) Number of Busy Banks Interrupt Enable */
#define USBC_UECON7_NBUSYBKE        (_U_(0x1) << USBC_UECON7_NBUSYBKE_Pos)
#define USBC_UECON7_KILLBK_Pos      13           /**< \brief (USBC_UECON7) Kill IN Bank */
#define USBC_UECON7_KILLBK          (_U_(0x1) << USBC_UECON7_KILLBK_Pos)
#define USBC_UECON7_FIFOCON_Pos     14           /**< \brief (USBC_UECON7) FIFO Control */
#define USBC_UECON7_FIFOCON         (_U_(0x1) << USBC_UECON7_FIFOCON_Pos)
#define USBC_UECON7_NYETDIS_Pos     17           /**< \brief (USBC_UECON7) NYET Token Enable */
#define USBC_UECON7_NYETDIS         (_U_(0x1) << USBC_UECON7_NYETDIS_Pos)
#define USBC_UECON7_RSTDT_Pos       18           /**< \brief (USBC_UECON7) Reset Data Toggle */
#define USBC_UECON7_RSTDT           (_U_(0x1) << USBC_UECON7_RSTDT_Pos)
#define USBC_UECON7_STALLRQ_Pos     19           /**< \brief (USBC_UECON7) STALL Request */
#define USBC_UECON7_STALLRQ         (_U_(0x1) << USBC_UECON7_STALLRQ_Pos)
#define USBC_UECON7_BUSY0_Pos       24           /**< \brief (USBC_UECON7) Busy Bank1 Enable */
#define USBC_UECON7_BUSY0           (_U_(0x1) << USBC_UECON7_BUSY0_Pos)
#define USBC_UECON7_BUSY1_Pos       25           /**< \brief (USBC_UECON7) Busy Bank0 Enable */
#define USBC_UECON7_BUSY1           (_U_(0x1) << USBC_UECON7_BUSY1_Pos)
#define USBC_UECON7_MASK            _U_(0x030E795F) /**< \brief (USBC_UECON7) MASK Register */

/* -------- USBC_UECON0SET : (USBC Offset: 0x1F0) ( /W 32) Endpoint Control Set Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXINES:1;         /*!< bit:      0  TXINE Set                          */
    uint32_t RXOUTES:1;        /*!< bit:      1  RXOUTE Set                         */
    uint32_t RXSTPES:1;        /*!< bit:      2  RXSTPE Set                         */
    uint32_t NAKOUTES:1;       /*!< bit:      3  NAKOUTE Set                        */
    uint32_t NAKINES:1;        /*!< bit:      4  NAKINE Set                         */
    uint32_t :1;               /*!< bit:      5  Reserved                           */
    uint32_t STALLEDES:1;      /*!< bit:      6  STALLEDE Set                       */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t NREPLYS:1;        /*!< bit:      8  NREPLY Set                         */
    uint32_t :2;               /*!< bit:  9..10  Reserved                           */
    uint32_t RAMACERES:1;      /*!< bit:     11  RAMACERE Set                       */
    uint32_t NBUSYBKES:1;      /*!< bit:     12  NBUSYBKE Set                       */
    uint32_t KILLBKS:1;        /*!< bit:     13  KILLBK Set                         */
    uint32_t :3;               /*!< bit: 14..16  Reserved                           */
    uint32_t NYETDISS:1;       /*!< bit:     17  NYETDIS Set                        */
    uint32_t RSTDTS:1;         /*!< bit:     18  RSTDT Set                          */
    uint32_t STALLRQS:1;       /*!< bit:     19  STALLRQ Set                        */
    uint32_t :4;               /*!< bit: 20..23  Reserved                           */
    uint32_t BUSY0S:1;         /*!< bit:     24  BUSY0 Set                          */
    uint32_t BUSY1S:1;         /*!< bit:     25  BUSY1 Set                          */
    uint32_t :6;               /*!< bit: 26..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UECON0SET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UECON0SET_OFFSET       0x1F0        /**< \brief (USBC_UECON0SET offset) Endpoint Control Set Register */
#define USBC_UECON0SET_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UECON0SET reset_value) Endpoint Control Set Register */

#define USBC_UECON0SET_TXINES_Pos   0            /**< \brief (USBC_UECON0SET) TXINE Set */
#define USBC_UECON0SET_TXINES       (_U_(0x1) << USBC_UECON0SET_TXINES_Pos)
#define USBC_UECON0SET_RXOUTES_Pos  1            /**< \brief (USBC_UECON0SET) RXOUTE Set */
#define USBC_UECON0SET_RXOUTES      (_U_(0x1) << USBC_UECON0SET_RXOUTES_Pos)
#define USBC_UECON0SET_RXSTPES_Pos  2            /**< \brief (USBC_UECON0SET) RXSTPE Set */
#define USBC_UECON0SET_RXSTPES      (_U_(0x1) << USBC_UECON0SET_RXSTPES_Pos)
#define USBC_UECON0SET_NAKOUTES_Pos 3            /**< \brief (USBC_UECON0SET) NAKOUTE Set */
#define USBC_UECON0SET_NAKOUTES     (_U_(0x1) << USBC_UECON0SET_NAKOUTES_Pos)
#define USBC_UECON0SET_NAKINES_Pos  4            /**< \brief (USBC_UECON0SET) NAKINE Set */
#define USBC_UECON0SET_NAKINES      (_U_(0x1) << USBC_UECON0SET_NAKINES_Pos)
#define USBC_UECON0SET_STALLEDES_Pos 6            /**< \brief (USBC_UECON0SET) STALLEDE Set */
#define USBC_UECON0SET_STALLEDES    (_U_(0x1) << USBC_UECON0SET_STALLEDES_Pos)
#define USBC_UECON0SET_NREPLYS_Pos  8            /**< \brief (USBC_UECON0SET) NREPLY Set */
#define USBC_UECON0SET_NREPLYS      (_U_(0x1) << USBC_UECON0SET_NREPLYS_Pos)
#define USBC_UECON0SET_RAMACERES_Pos 11           /**< \brief (USBC_UECON0SET) RAMACERE Set */
#define USBC_UECON0SET_RAMACERES    (_U_(0x1) << USBC_UECON0SET_RAMACERES_Pos)
#define USBC_UECON0SET_NBUSYBKES_Pos 12           /**< \brief (USBC_UECON0SET) NBUSYBKE Set */
#define USBC_UECON0SET_NBUSYBKES    (_U_(0x1) << USBC_UECON0SET_NBUSYBKES_Pos)
#define USBC_UECON0SET_KILLBKS_Pos  13           /**< \brief (USBC_UECON0SET) KILLBK Set */
#define USBC_UECON0SET_KILLBKS      (_U_(0x1) << USBC_UECON0SET_KILLBKS_Pos)
#define USBC_UECON0SET_NYETDISS_Pos 17           /**< \brief (USBC_UECON0SET) NYETDIS Set */
#define USBC_UECON0SET_NYETDISS     (_U_(0x1) << USBC_UECON0SET_NYETDISS_Pos)
#define USBC_UECON0SET_RSTDTS_Pos   18           /**< \brief (USBC_UECON0SET) RSTDT Set */
#define USBC_UECON0SET_RSTDTS       (_U_(0x1) << USBC_UECON0SET_RSTDTS_Pos)
#define USBC_UECON0SET_STALLRQS_Pos 19           /**< \brief (USBC_UECON0SET) STALLRQ Set */
#define USBC_UECON0SET_STALLRQS     (_U_(0x1) << USBC_UECON0SET_STALLRQS_Pos)
#define USBC_UECON0SET_BUSY0S_Pos   24           /**< \brief (USBC_UECON0SET) BUSY0 Set */
#define USBC_UECON0SET_BUSY0S       (_U_(0x1) << USBC_UECON0SET_BUSY0S_Pos)
#define USBC_UECON0SET_BUSY1S_Pos   25           /**< \brief (USBC_UECON0SET) BUSY1 Set */
#define USBC_UECON0SET_BUSY1S       (_U_(0x1) << USBC_UECON0SET_BUSY1S_Pos)
#define USBC_UECON0SET_MASK         _U_(0x030E395F) /**< \brief (USBC_UECON0SET) MASK Register */

/* -------- USBC_UECON1SET : (USBC Offset: 0x1F4) ( /W 32) Endpoint Control Set Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXINES:1;         /*!< bit:      0  TXINE Set                          */
    uint32_t RXOUTES:1;        /*!< bit:      1  RXOUTE Set                         */
    uint32_t RXSTPES:1;        /*!< bit:      2  RXSTPE Set                         */
    uint32_t NAKOUTES:1;       /*!< bit:      3  NAKOUTE Set                        */
    uint32_t NAKINES:1;        /*!< bit:      4  NAKINE Set                         */
    uint32_t :1;               /*!< bit:      5  Reserved                           */
    uint32_t STALLEDES:1;      /*!< bit:      6  STALLEDE Set                       */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t NREPLYS:1;        /*!< bit:      8  NREPLY Set                         */
    uint32_t :2;               /*!< bit:  9..10  Reserved                           */
    uint32_t RAMACERES:1;      /*!< bit:     11  RAMACERE Set                       */
    uint32_t NBUSYBKES:1;      /*!< bit:     12  NBUSYBKE Set                       */
    uint32_t KILLBKS:1;        /*!< bit:     13  KILLBK Set                         */
    uint32_t :3;               /*!< bit: 14..16  Reserved                           */
    uint32_t NYETDISS:1;       /*!< bit:     17  NYETDIS Set                        */
    uint32_t RSTDTS:1;         /*!< bit:     18  RSTDT Set                          */
    uint32_t STALLRQS:1;       /*!< bit:     19  STALLRQ Set                        */
    uint32_t :4;               /*!< bit: 20..23  Reserved                           */
    uint32_t BUSY0S:1;         /*!< bit:     24  BUSY0 Set                          */
    uint32_t BUSY1S:1;         /*!< bit:     25  BUSY1 Set                          */
    uint32_t :6;               /*!< bit: 26..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UECON1SET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UECON1SET_OFFSET       0x1F4        /**< \brief (USBC_UECON1SET offset) Endpoint Control Set Register */
#define USBC_UECON1SET_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UECON1SET reset_value) Endpoint Control Set Register */

#define USBC_UECON1SET_TXINES_Pos   0            /**< \brief (USBC_UECON1SET) TXINE Set */
#define USBC_UECON1SET_TXINES       (_U_(0x1) << USBC_UECON1SET_TXINES_Pos)
#define USBC_UECON1SET_RXOUTES_Pos  1            /**< \brief (USBC_UECON1SET) RXOUTE Set */
#define USBC_UECON1SET_RXOUTES      (_U_(0x1) << USBC_UECON1SET_RXOUTES_Pos)
#define USBC_UECON1SET_RXSTPES_Pos  2            /**< \brief (USBC_UECON1SET) RXSTPE Set */
#define USBC_UECON1SET_RXSTPES      (_U_(0x1) << USBC_UECON1SET_RXSTPES_Pos)
#define USBC_UECON1SET_NAKOUTES_Pos 3            /**< \brief (USBC_UECON1SET) NAKOUTE Set */
#define USBC_UECON1SET_NAKOUTES     (_U_(0x1) << USBC_UECON1SET_NAKOUTES_Pos)
#define USBC_UECON1SET_NAKINES_Pos  4            /**< \brief (USBC_UECON1SET) NAKINE Set */
#define USBC_UECON1SET_NAKINES      (_U_(0x1) << USBC_UECON1SET_NAKINES_Pos)
#define USBC_UECON1SET_STALLEDES_Pos 6            /**< \brief (USBC_UECON1SET) STALLEDE Set */
#define USBC_UECON1SET_STALLEDES    (_U_(0x1) << USBC_UECON1SET_STALLEDES_Pos)
#define USBC_UECON1SET_NREPLYS_Pos  8            /**< \brief (USBC_UECON1SET) NREPLY Set */
#define USBC_UECON1SET_NREPLYS      (_U_(0x1) << USBC_UECON1SET_NREPLYS_Pos)
#define USBC_UECON1SET_RAMACERES_Pos 11           /**< \brief (USBC_UECON1SET) RAMACERE Set */
#define USBC_UECON1SET_RAMACERES    (_U_(0x1) << USBC_UECON1SET_RAMACERES_Pos)
#define USBC_UECON1SET_NBUSYBKES_Pos 12           /**< \brief (USBC_UECON1SET) NBUSYBKE Set */
#define USBC_UECON1SET_NBUSYBKES    (_U_(0x1) << USBC_UECON1SET_NBUSYBKES_Pos)
#define USBC_UECON1SET_KILLBKS_Pos  13           /**< \brief (USBC_UECON1SET) KILLBK Set */
#define USBC_UECON1SET_KILLBKS      (_U_(0x1) << USBC_UECON1SET_KILLBKS_Pos)
#define USBC_UECON1SET_NYETDISS_Pos 17           /**< \brief (USBC_UECON1SET) NYETDIS Set */
#define USBC_UECON1SET_NYETDISS     (_U_(0x1) << USBC_UECON1SET_NYETDISS_Pos)
#define USBC_UECON1SET_RSTDTS_Pos   18           /**< \brief (USBC_UECON1SET) RSTDT Set */
#define USBC_UECON1SET_RSTDTS       (_U_(0x1) << USBC_UECON1SET_RSTDTS_Pos)
#define USBC_UECON1SET_STALLRQS_Pos 19           /**< \brief (USBC_UECON1SET) STALLRQ Set */
#define USBC_UECON1SET_STALLRQS     (_U_(0x1) << USBC_UECON1SET_STALLRQS_Pos)
#define USBC_UECON1SET_BUSY0S_Pos   24           /**< \brief (USBC_UECON1SET) BUSY0 Set */
#define USBC_UECON1SET_BUSY0S       (_U_(0x1) << USBC_UECON1SET_BUSY0S_Pos)
#define USBC_UECON1SET_BUSY1S_Pos   25           /**< \brief (USBC_UECON1SET) BUSY1 Set */
#define USBC_UECON1SET_BUSY1S       (_U_(0x1) << USBC_UECON1SET_BUSY1S_Pos)
#define USBC_UECON1SET_MASK         _U_(0x030E395F) /**< \brief (USBC_UECON1SET) MASK Register */

/* -------- USBC_UECON2SET : (USBC Offset: 0x1F8) ( /W 32) Endpoint Control Set Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXINES:1;         /*!< bit:      0  TXINE Set                          */
    uint32_t RXOUTES:1;        /*!< bit:      1  RXOUTE Set                         */
    uint32_t RXSTPES:1;        /*!< bit:      2  RXSTPE Set                         */
    uint32_t NAKOUTES:1;       /*!< bit:      3  NAKOUTE Set                        */
    uint32_t NAKINES:1;        /*!< bit:      4  NAKINE Set                         */
    uint32_t :1;               /*!< bit:      5  Reserved                           */
    uint32_t STALLEDES:1;      /*!< bit:      6  STALLEDE Set                       */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t NREPLYS:1;        /*!< bit:      8  NREPLY Set                         */
    uint32_t :2;               /*!< bit:  9..10  Reserved                           */
    uint32_t RAMACERES:1;      /*!< bit:     11  RAMACERE Set                       */
    uint32_t NBUSYBKES:1;      /*!< bit:     12  NBUSYBKE Set                       */
    uint32_t KILLBKS:1;        /*!< bit:     13  KILLBK Set                         */
    uint32_t :3;               /*!< bit: 14..16  Reserved                           */
    uint32_t NYETDISS:1;       /*!< bit:     17  NYETDIS Set                        */
    uint32_t RSTDTS:1;         /*!< bit:     18  RSTDT Set                          */
    uint32_t STALLRQS:1;       /*!< bit:     19  STALLRQ Set                        */
    uint32_t :4;               /*!< bit: 20..23  Reserved                           */
    uint32_t BUSY0S:1;         /*!< bit:     24  BUSY0 Set                          */
    uint32_t BUSY1S:1;         /*!< bit:     25  BUSY1 Set                          */
    uint32_t :6;               /*!< bit: 26..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UECON2SET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UECON2SET_OFFSET       0x1F8        /**< \brief (USBC_UECON2SET offset) Endpoint Control Set Register */
#define USBC_UECON2SET_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UECON2SET reset_value) Endpoint Control Set Register */

#define USBC_UECON2SET_TXINES_Pos   0            /**< \brief (USBC_UECON2SET) TXINE Set */
#define USBC_UECON2SET_TXINES       (_U_(0x1) << USBC_UECON2SET_TXINES_Pos)
#define USBC_UECON2SET_RXOUTES_Pos  1            /**< \brief (USBC_UECON2SET) RXOUTE Set */
#define USBC_UECON2SET_RXOUTES      (_U_(0x1) << USBC_UECON2SET_RXOUTES_Pos)
#define USBC_UECON2SET_RXSTPES_Pos  2            /**< \brief (USBC_UECON2SET) RXSTPE Set */
#define USBC_UECON2SET_RXSTPES      (_U_(0x1) << USBC_UECON2SET_RXSTPES_Pos)
#define USBC_UECON2SET_NAKOUTES_Pos 3            /**< \brief (USBC_UECON2SET) NAKOUTE Set */
#define USBC_UECON2SET_NAKOUTES     (_U_(0x1) << USBC_UECON2SET_NAKOUTES_Pos)
#define USBC_UECON2SET_NAKINES_Pos  4            /**< \brief (USBC_UECON2SET) NAKINE Set */
#define USBC_UECON2SET_NAKINES      (_U_(0x1) << USBC_UECON2SET_NAKINES_Pos)
#define USBC_UECON2SET_STALLEDES_Pos 6            /**< \brief (USBC_UECON2SET) STALLEDE Set */
#define USBC_UECON2SET_STALLEDES    (_U_(0x1) << USBC_UECON2SET_STALLEDES_Pos)
#define USBC_UECON2SET_NREPLYS_Pos  8            /**< \brief (USBC_UECON2SET) NREPLY Set */
#define USBC_UECON2SET_NREPLYS      (_U_(0x1) << USBC_UECON2SET_NREPLYS_Pos)
#define USBC_UECON2SET_RAMACERES_Pos 11           /**< \brief (USBC_UECON2SET) RAMACERE Set */
#define USBC_UECON2SET_RAMACERES    (_U_(0x1) << USBC_UECON2SET_RAMACERES_Pos)
#define USBC_UECON2SET_NBUSYBKES_Pos 12           /**< \brief (USBC_UECON2SET) NBUSYBKE Set */
#define USBC_UECON2SET_NBUSYBKES    (_U_(0x1) << USBC_UECON2SET_NBUSYBKES_Pos)
#define USBC_UECON2SET_KILLBKS_Pos  13           /**< \brief (USBC_UECON2SET) KILLBK Set */
#define USBC_UECON2SET_KILLBKS      (_U_(0x1) << USBC_UECON2SET_KILLBKS_Pos)
#define USBC_UECON2SET_NYETDISS_Pos 17           /**< \brief (USBC_UECON2SET) NYETDIS Set */
#define USBC_UECON2SET_NYETDISS     (_U_(0x1) << USBC_UECON2SET_NYETDISS_Pos)
#define USBC_UECON2SET_RSTDTS_Pos   18           /**< \brief (USBC_UECON2SET) RSTDT Set */
#define USBC_UECON2SET_RSTDTS       (_U_(0x1) << USBC_UECON2SET_RSTDTS_Pos)
#define USBC_UECON2SET_STALLRQS_Pos 19           /**< \brief (USBC_UECON2SET) STALLRQ Set */
#define USBC_UECON2SET_STALLRQS     (_U_(0x1) << USBC_UECON2SET_STALLRQS_Pos)
#define USBC_UECON2SET_BUSY0S_Pos   24           /**< \brief (USBC_UECON2SET) BUSY0 Set */
#define USBC_UECON2SET_BUSY0S       (_U_(0x1) << USBC_UECON2SET_BUSY0S_Pos)
#define USBC_UECON2SET_BUSY1S_Pos   25           /**< \brief (USBC_UECON2SET) BUSY1 Set */
#define USBC_UECON2SET_BUSY1S       (_U_(0x1) << USBC_UECON2SET_BUSY1S_Pos)
#define USBC_UECON2SET_MASK         _U_(0x030E395F) /**< \brief (USBC_UECON2SET) MASK Register */

/* -------- USBC_UECON3SET : (USBC Offset: 0x1FC) ( /W 32) Endpoint Control Set Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXINES:1;         /*!< bit:      0  TXINE Set                          */
    uint32_t RXOUTES:1;        /*!< bit:      1  RXOUTE Set                         */
    uint32_t RXSTPES:1;        /*!< bit:      2  RXSTPE Set                         */
    uint32_t NAKOUTES:1;       /*!< bit:      3  NAKOUTE Set                        */
    uint32_t NAKINES:1;        /*!< bit:      4  NAKINE Set                         */
    uint32_t :1;               /*!< bit:      5  Reserved                           */
    uint32_t STALLEDES:1;      /*!< bit:      6  STALLEDE Set                       */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t NREPLYS:1;        /*!< bit:      8  NREPLY Set                         */
    uint32_t :2;               /*!< bit:  9..10  Reserved                           */
    uint32_t RAMACERES:1;      /*!< bit:     11  RAMACERE Set                       */
    uint32_t NBUSYBKES:1;      /*!< bit:     12  NBUSYBKE Set                       */
    uint32_t KILLBKS:1;        /*!< bit:     13  KILLBK Set                         */
    uint32_t :3;               /*!< bit: 14..16  Reserved                           */
    uint32_t NYETDISS:1;       /*!< bit:     17  NYETDIS Set                        */
    uint32_t RSTDTS:1;         /*!< bit:     18  RSTDT Set                          */
    uint32_t STALLRQS:1;       /*!< bit:     19  STALLRQ Set                        */
    uint32_t :4;               /*!< bit: 20..23  Reserved                           */
    uint32_t BUSY0S:1;         /*!< bit:     24  BUSY0 Set                          */
    uint32_t BUSY1S:1;         /*!< bit:     25  BUSY1 Set                          */
    uint32_t :6;               /*!< bit: 26..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UECON3SET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UECON3SET_OFFSET       0x1FC        /**< \brief (USBC_UECON3SET offset) Endpoint Control Set Register */
#define USBC_UECON3SET_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UECON3SET reset_value) Endpoint Control Set Register */

#define USBC_UECON3SET_TXINES_Pos   0            /**< \brief (USBC_UECON3SET) TXINE Set */
#define USBC_UECON3SET_TXINES       (_U_(0x1) << USBC_UECON3SET_TXINES_Pos)
#define USBC_UECON3SET_RXOUTES_Pos  1            /**< \brief (USBC_UECON3SET) RXOUTE Set */
#define USBC_UECON3SET_RXOUTES      (_U_(0x1) << USBC_UECON3SET_RXOUTES_Pos)
#define USBC_UECON3SET_RXSTPES_Pos  2            /**< \brief (USBC_UECON3SET) RXSTPE Set */
#define USBC_UECON3SET_RXSTPES      (_U_(0x1) << USBC_UECON3SET_RXSTPES_Pos)
#define USBC_UECON3SET_NAKOUTES_Pos 3            /**< \brief (USBC_UECON3SET) NAKOUTE Set */
#define USBC_UECON3SET_NAKOUTES     (_U_(0x1) << USBC_UECON3SET_NAKOUTES_Pos)
#define USBC_UECON3SET_NAKINES_Pos  4            /**< \brief (USBC_UECON3SET) NAKINE Set */
#define USBC_UECON3SET_NAKINES      (_U_(0x1) << USBC_UECON3SET_NAKINES_Pos)
#define USBC_UECON3SET_STALLEDES_Pos 6            /**< \brief (USBC_UECON3SET) STALLEDE Set */
#define USBC_UECON3SET_STALLEDES    (_U_(0x1) << USBC_UECON3SET_STALLEDES_Pos)
#define USBC_UECON3SET_NREPLYS_Pos  8            /**< \brief (USBC_UECON3SET) NREPLY Set */
#define USBC_UECON3SET_NREPLYS      (_U_(0x1) << USBC_UECON3SET_NREPLYS_Pos)
#define USBC_UECON3SET_RAMACERES_Pos 11           /**< \brief (USBC_UECON3SET) RAMACERE Set */
#define USBC_UECON3SET_RAMACERES    (_U_(0x1) << USBC_UECON3SET_RAMACERES_Pos)
#define USBC_UECON3SET_NBUSYBKES_Pos 12           /**< \brief (USBC_UECON3SET) NBUSYBKE Set */
#define USBC_UECON3SET_NBUSYBKES    (_U_(0x1) << USBC_UECON3SET_NBUSYBKES_Pos)
#define USBC_UECON3SET_KILLBKS_Pos  13           /**< \brief (USBC_UECON3SET) KILLBK Set */
#define USBC_UECON3SET_KILLBKS      (_U_(0x1) << USBC_UECON3SET_KILLBKS_Pos)
#define USBC_UECON3SET_NYETDISS_Pos 17           /**< \brief (USBC_UECON3SET) NYETDIS Set */
#define USBC_UECON3SET_NYETDISS     (_U_(0x1) << USBC_UECON3SET_NYETDISS_Pos)
#define USBC_UECON3SET_RSTDTS_Pos   18           /**< \brief (USBC_UECON3SET) RSTDT Set */
#define USBC_UECON3SET_RSTDTS       (_U_(0x1) << USBC_UECON3SET_RSTDTS_Pos)
#define USBC_UECON3SET_STALLRQS_Pos 19           /**< \brief (USBC_UECON3SET) STALLRQ Set */
#define USBC_UECON3SET_STALLRQS     (_U_(0x1) << USBC_UECON3SET_STALLRQS_Pos)
#define USBC_UECON3SET_BUSY0S_Pos   24           /**< \brief (USBC_UECON3SET) BUSY0 Set */
#define USBC_UECON3SET_BUSY0S       (_U_(0x1) << USBC_UECON3SET_BUSY0S_Pos)
#define USBC_UECON3SET_BUSY1S_Pos   25           /**< \brief (USBC_UECON3SET) BUSY1 Set */
#define USBC_UECON3SET_BUSY1S       (_U_(0x1) << USBC_UECON3SET_BUSY1S_Pos)
#define USBC_UECON3SET_MASK         _U_(0x030E395F) /**< \brief (USBC_UECON3SET) MASK Register */

/* -------- USBC_UECON4SET : (USBC Offset: 0x200) ( /W 32) Endpoint Control Set Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXINES:1;         /*!< bit:      0  TXINE Set                          */
    uint32_t RXOUTES:1;        /*!< bit:      1  RXOUTE Set                         */
    uint32_t RXSTPES:1;        /*!< bit:      2  RXSTPE Set                         */
    uint32_t NAKOUTES:1;       /*!< bit:      3  NAKOUTE Set                        */
    uint32_t NAKINES:1;        /*!< bit:      4  NAKINE Set                         */
    uint32_t :1;               /*!< bit:      5  Reserved                           */
    uint32_t STALLEDES:1;      /*!< bit:      6  STALLEDE Set                       */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t NREPLYS:1;        /*!< bit:      8  NREPLY Set                         */
    uint32_t :2;               /*!< bit:  9..10  Reserved                           */
    uint32_t RAMACERES:1;      /*!< bit:     11  RAMACERE Set                       */
    uint32_t NBUSYBKES:1;      /*!< bit:     12  NBUSYBKE Set                       */
    uint32_t KILLBKS:1;        /*!< bit:     13  KILLBK Set                         */
    uint32_t :3;               /*!< bit: 14..16  Reserved                           */
    uint32_t NYETDISS:1;       /*!< bit:     17  NYETDIS Set                        */
    uint32_t RSTDTS:1;         /*!< bit:     18  RSTDT Set                          */
    uint32_t STALLRQS:1;       /*!< bit:     19  STALLRQ Set                        */
    uint32_t :4;               /*!< bit: 20..23  Reserved                           */
    uint32_t BUSY0S:1;         /*!< bit:     24  BUSY0 Set                          */
    uint32_t BUSY1S:1;         /*!< bit:     25  BUSY1 Set                          */
    uint32_t :6;               /*!< bit: 26..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UECON4SET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UECON4SET_OFFSET       0x200        /**< \brief (USBC_UECON4SET offset) Endpoint Control Set Register */
#define USBC_UECON4SET_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UECON4SET reset_value) Endpoint Control Set Register */

#define USBC_UECON4SET_TXINES_Pos   0            /**< \brief (USBC_UECON4SET) TXINE Set */
#define USBC_UECON4SET_TXINES       (_U_(0x1) << USBC_UECON4SET_TXINES_Pos)
#define USBC_UECON4SET_RXOUTES_Pos  1            /**< \brief (USBC_UECON4SET) RXOUTE Set */
#define USBC_UECON4SET_RXOUTES      (_U_(0x1) << USBC_UECON4SET_RXOUTES_Pos)
#define USBC_UECON4SET_RXSTPES_Pos  2            /**< \brief (USBC_UECON4SET) RXSTPE Set */
#define USBC_UECON4SET_RXSTPES      (_U_(0x1) << USBC_UECON4SET_RXSTPES_Pos)
#define USBC_UECON4SET_NAKOUTES_Pos 3            /**< \brief (USBC_UECON4SET) NAKOUTE Set */
#define USBC_UECON4SET_NAKOUTES     (_U_(0x1) << USBC_UECON4SET_NAKOUTES_Pos)
#define USBC_UECON4SET_NAKINES_Pos  4            /**< \brief (USBC_UECON4SET) NAKINE Set */
#define USBC_UECON4SET_NAKINES      (_U_(0x1) << USBC_UECON4SET_NAKINES_Pos)
#define USBC_UECON4SET_STALLEDES_Pos 6            /**< \brief (USBC_UECON4SET) STALLEDE Set */
#define USBC_UECON4SET_STALLEDES    (_U_(0x1) << USBC_UECON4SET_STALLEDES_Pos)
#define USBC_UECON4SET_NREPLYS_Pos  8            /**< \brief (USBC_UECON4SET) NREPLY Set */
#define USBC_UECON4SET_NREPLYS      (_U_(0x1) << USBC_UECON4SET_NREPLYS_Pos)
#define USBC_UECON4SET_RAMACERES_Pos 11           /**< \brief (USBC_UECON4SET) RAMACERE Set */
#define USBC_UECON4SET_RAMACERES    (_U_(0x1) << USBC_UECON4SET_RAMACERES_Pos)
#define USBC_UECON4SET_NBUSYBKES_Pos 12           /**< \brief (USBC_UECON4SET) NBUSYBKE Set */
#define USBC_UECON4SET_NBUSYBKES    (_U_(0x1) << USBC_UECON4SET_NBUSYBKES_Pos)
#define USBC_UECON4SET_KILLBKS_Pos  13           /**< \brief (USBC_UECON4SET) KILLBK Set */
#define USBC_UECON4SET_KILLBKS      (_U_(0x1) << USBC_UECON4SET_KILLBKS_Pos)
#define USBC_UECON4SET_NYETDISS_Pos 17           /**< \brief (USBC_UECON4SET) NYETDIS Set */
#define USBC_UECON4SET_NYETDISS     (_U_(0x1) << USBC_UECON4SET_NYETDISS_Pos)
#define USBC_UECON4SET_RSTDTS_Pos   18           /**< \brief (USBC_UECON4SET) RSTDT Set */
#define USBC_UECON4SET_RSTDTS       (_U_(0x1) << USBC_UECON4SET_RSTDTS_Pos)
#define USBC_UECON4SET_STALLRQS_Pos 19           /**< \brief (USBC_UECON4SET) STALLRQ Set */
#define USBC_UECON4SET_STALLRQS     (_U_(0x1) << USBC_UECON4SET_STALLRQS_Pos)
#define USBC_UECON4SET_BUSY0S_Pos   24           /**< \brief (USBC_UECON4SET) BUSY0 Set */
#define USBC_UECON4SET_BUSY0S       (_U_(0x1) << USBC_UECON4SET_BUSY0S_Pos)
#define USBC_UECON4SET_BUSY1S_Pos   25           /**< \brief (USBC_UECON4SET) BUSY1 Set */
#define USBC_UECON4SET_BUSY1S       (_U_(0x1) << USBC_UECON4SET_BUSY1S_Pos)
#define USBC_UECON4SET_MASK         _U_(0x030E395F) /**< \brief (USBC_UECON4SET) MASK Register */

/* -------- USBC_UECON5SET : (USBC Offset: 0x204) ( /W 32) Endpoint Control Set Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXINES:1;         /*!< bit:      0  TXINE Set                          */
    uint32_t RXOUTES:1;        /*!< bit:      1  RXOUTE Set                         */
    uint32_t RXSTPES:1;        /*!< bit:      2  RXSTPE Set                         */
    uint32_t NAKOUTES:1;       /*!< bit:      3  NAKOUTE Set                        */
    uint32_t NAKINES:1;        /*!< bit:      4  NAKINE Set                         */
    uint32_t :1;               /*!< bit:      5  Reserved                           */
    uint32_t STALLEDES:1;      /*!< bit:      6  STALLEDE Set                       */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t NREPLYS:1;        /*!< bit:      8  NREPLY Set                         */
    uint32_t :2;               /*!< bit:  9..10  Reserved                           */
    uint32_t RAMACERES:1;      /*!< bit:     11  RAMACERE Set                       */
    uint32_t NBUSYBKES:1;      /*!< bit:     12  NBUSYBKE Set                       */
    uint32_t KILLBKS:1;        /*!< bit:     13  KILLBK Set                         */
    uint32_t :3;               /*!< bit: 14..16  Reserved                           */
    uint32_t NYETDISS:1;       /*!< bit:     17  NYETDIS Set                        */
    uint32_t RSTDTS:1;         /*!< bit:     18  RSTDT Set                          */
    uint32_t STALLRQS:1;       /*!< bit:     19  STALLRQ Set                        */
    uint32_t :4;               /*!< bit: 20..23  Reserved                           */
    uint32_t BUSY0S:1;         /*!< bit:     24  BUSY0 Set                          */
    uint32_t BUSY1S:1;         /*!< bit:     25  BUSY1 Set                          */
    uint32_t :6;               /*!< bit: 26..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UECON5SET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UECON5SET_OFFSET       0x204        /**< \brief (USBC_UECON5SET offset) Endpoint Control Set Register */
#define USBC_UECON5SET_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UECON5SET reset_value) Endpoint Control Set Register */

#define USBC_UECON5SET_TXINES_Pos   0            /**< \brief (USBC_UECON5SET) TXINE Set */
#define USBC_UECON5SET_TXINES       (_U_(0x1) << USBC_UECON5SET_TXINES_Pos)
#define USBC_UECON5SET_RXOUTES_Pos  1            /**< \brief (USBC_UECON5SET) RXOUTE Set */
#define USBC_UECON5SET_RXOUTES      (_U_(0x1) << USBC_UECON5SET_RXOUTES_Pos)
#define USBC_UECON5SET_RXSTPES_Pos  2            /**< \brief (USBC_UECON5SET) RXSTPE Set */
#define USBC_UECON5SET_RXSTPES      (_U_(0x1) << USBC_UECON5SET_RXSTPES_Pos)
#define USBC_UECON5SET_NAKOUTES_Pos 3            /**< \brief (USBC_UECON5SET) NAKOUTE Set */
#define USBC_UECON5SET_NAKOUTES     (_U_(0x1) << USBC_UECON5SET_NAKOUTES_Pos)
#define USBC_UECON5SET_NAKINES_Pos  4            /**< \brief (USBC_UECON5SET) NAKINE Set */
#define USBC_UECON5SET_NAKINES      (_U_(0x1) << USBC_UECON5SET_NAKINES_Pos)
#define USBC_UECON5SET_STALLEDES_Pos 6            /**< \brief (USBC_UECON5SET) STALLEDE Set */
#define USBC_UECON5SET_STALLEDES    (_U_(0x1) << USBC_UECON5SET_STALLEDES_Pos)
#define USBC_UECON5SET_NREPLYS_Pos  8            /**< \brief (USBC_UECON5SET) NREPLY Set */
#define USBC_UECON5SET_NREPLYS      (_U_(0x1) << USBC_UECON5SET_NREPLYS_Pos)
#define USBC_UECON5SET_RAMACERES_Pos 11           /**< \brief (USBC_UECON5SET) RAMACERE Set */
#define USBC_UECON5SET_RAMACERES    (_U_(0x1) << USBC_UECON5SET_RAMACERES_Pos)
#define USBC_UECON5SET_NBUSYBKES_Pos 12           /**< \brief (USBC_UECON5SET) NBUSYBKE Set */
#define USBC_UECON5SET_NBUSYBKES    (_U_(0x1) << USBC_UECON5SET_NBUSYBKES_Pos)
#define USBC_UECON5SET_KILLBKS_Pos  13           /**< \brief (USBC_UECON5SET) KILLBK Set */
#define USBC_UECON5SET_KILLBKS      (_U_(0x1) << USBC_UECON5SET_KILLBKS_Pos)
#define USBC_UECON5SET_NYETDISS_Pos 17           /**< \brief (USBC_UECON5SET) NYETDIS Set */
#define USBC_UECON5SET_NYETDISS     (_U_(0x1) << USBC_UECON5SET_NYETDISS_Pos)
#define USBC_UECON5SET_RSTDTS_Pos   18           /**< \brief (USBC_UECON5SET) RSTDT Set */
#define USBC_UECON5SET_RSTDTS       (_U_(0x1) << USBC_UECON5SET_RSTDTS_Pos)
#define USBC_UECON5SET_STALLRQS_Pos 19           /**< \brief (USBC_UECON5SET) STALLRQ Set */
#define USBC_UECON5SET_STALLRQS     (_U_(0x1) << USBC_UECON5SET_STALLRQS_Pos)
#define USBC_UECON5SET_BUSY0S_Pos   24           /**< \brief (USBC_UECON5SET) BUSY0 Set */
#define USBC_UECON5SET_BUSY0S       (_U_(0x1) << USBC_UECON5SET_BUSY0S_Pos)
#define USBC_UECON5SET_BUSY1S_Pos   25           /**< \brief (USBC_UECON5SET) BUSY1 Set */
#define USBC_UECON5SET_BUSY1S       (_U_(0x1) << USBC_UECON5SET_BUSY1S_Pos)
#define USBC_UECON5SET_MASK         _U_(0x030E395F) /**< \brief (USBC_UECON5SET) MASK Register */

/* -------- USBC_UECON6SET : (USBC Offset: 0x208) ( /W 32) Endpoint Control Set Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXINES:1;         /*!< bit:      0  TXINE Set                          */
    uint32_t RXOUTES:1;        /*!< bit:      1  RXOUTE Set                         */
    uint32_t RXSTPES:1;        /*!< bit:      2  RXSTPE Set                         */
    uint32_t NAKOUTES:1;       /*!< bit:      3  NAKOUTE Set                        */
    uint32_t NAKINES:1;        /*!< bit:      4  NAKINE Set                         */
    uint32_t :1;               /*!< bit:      5  Reserved                           */
    uint32_t STALLEDES:1;      /*!< bit:      6  STALLEDE Set                       */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t NREPLYS:1;        /*!< bit:      8  NREPLY Set                         */
    uint32_t :2;               /*!< bit:  9..10  Reserved                           */
    uint32_t RAMACERES:1;      /*!< bit:     11  RAMACERE Set                       */
    uint32_t NBUSYBKES:1;      /*!< bit:     12  NBUSYBKE Set                       */
    uint32_t KILLBKS:1;        /*!< bit:     13  KILLBK Set                         */
    uint32_t :3;               /*!< bit: 14..16  Reserved                           */
    uint32_t NYETDISS:1;       /*!< bit:     17  NYETDIS Set                        */
    uint32_t RSTDTS:1;         /*!< bit:     18  RSTDT Set                          */
    uint32_t STALLRQS:1;       /*!< bit:     19  STALLRQ Set                        */
    uint32_t :4;               /*!< bit: 20..23  Reserved                           */
    uint32_t BUSY0S:1;         /*!< bit:     24  BUSY0 Set                          */
    uint32_t BUSY1S:1;         /*!< bit:     25  BUSY1 Set                          */
    uint32_t :6;               /*!< bit: 26..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UECON6SET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UECON6SET_OFFSET       0x208        /**< \brief (USBC_UECON6SET offset) Endpoint Control Set Register */
#define USBC_UECON6SET_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UECON6SET reset_value) Endpoint Control Set Register */

#define USBC_UECON6SET_TXINES_Pos   0            /**< \brief (USBC_UECON6SET) TXINE Set */
#define USBC_UECON6SET_TXINES       (_U_(0x1) << USBC_UECON6SET_TXINES_Pos)
#define USBC_UECON6SET_RXOUTES_Pos  1            /**< \brief (USBC_UECON6SET) RXOUTE Set */
#define USBC_UECON6SET_RXOUTES      (_U_(0x1) << USBC_UECON6SET_RXOUTES_Pos)
#define USBC_UECON6SET_RXSTPES_Pos  2            /**< \brief (USBC_UECON6SET) RXSTPE Set */
#define USBC_UECON6SET_RXSTPES      (_U_(0x1) << USBC_UECON6SET_RXSTPES_Pos)
#define USBC_UECON6SET_NAKOUTES_Pos 3            /**< \brief (USBC_UECON6SET) NAKOUTE Set */
#define USBC_UECON6SET_NAKOUTES     (_U_(0x1) << USBC_UECON6SET_NAKOUTES_Pos)
#define USBC_UECON6SET_NAKINES_Pos  4            /**< \brief (USBC_UECON6SET) NAKINE Set */
#define USBC_UECON6SET_NAKINES      (_U_(0x1) << USBC_UECON6SET_NAKINES_Pos)
#define USBC_UECON6SET_STALLEDES_Pos 6            /**< \brief (USBC_UECON6SET) STALLEDE Set */
#define USBC_UECON6SET_STALLEDES    (_U_(0x1) << USBC_UECON6SET_STALLEDES_Pos)
#define USBC_UECON6SET_NREPLYS_Pos  8            /**< \brief (USBC_UECON6SET) NREPLY Set */
#define USBC_UECON6SET_NREPLYS      (_U_(0x1) << USBC_UECON6SET_NREPLYS_Pos)
#define USBC_UECON6SET_RAMACERES_Pos 11           /**< \brief (USBC_UECON6SET) RAMACERE Set */
#define USBC_UECON6SET_RAMACERES    (_U_(0x1) << USBC_UECON6SET_RAMACERES_Pos)
#define USBC_UECON6SET_NBUSYBKES_Pos 12           /**< \brief (USBC_UECON6SET) NBUSYBKE Set */
#define USBC_UECON6SET_NBUSYBKES    (_U_(0x1) << USBC_UECON6SET_NBUSYBKES_Pos)
#define USBC_UECON6SET_KILLBKS_Pos  13           /**< \brief (USBC_UECON6SET) KILLBK Set */
#define USBC_UECON6SET_KILLBKS      (_U_(0x1) << USBC_UECON6SET_KILLBKS_Pos)
#define USBC_UECON6SET_NYETDISS_Pos 17           /**< \brief (USBC_UECON6SET) NYETDIS Set */
#define USBC_UECON6SET_NYETDISS     (_U_(0x1) << USBC_UECON6SET_NYETDISS_Pos)
#define USBC_UECON6SET_RSTDTS_Pos   18           /**< \brief (USBC_UECON6SET) RSTDT Set */
#define USBC_UECON6SET_RSTDTS       (_U_(0x1) << USBC_UECON6SET_RSTDTS_Pos)
#define USBC_UECON6SET_STALLRQS_Pos 19           /**< \brief (USBC_UECON6SET) STALLRQ Set */
#define USBC_UECON6SET_STALLRQS     (_U_(0x1) << USBC_UECON6SET_STALLRQS_Pos)
#define USBC_UECON6SET_BUSY0S_Pos   24           /**< \brief (USBC_UECON6SET) BUSY0 Set */
#define USBC_UECON6SET_BUSY0S       (_U_(0x1) << USBC_UECON6SET_BUSY0S_Pos)
#define USBC_UECON6SET_BUSY1S_Pos   25           /**< \brief (USBC_UECON6SET) BUSY1 Set */
#define USBC_UECON6SET_BUSY1S       (_U_(0x1) << USBC_UECON6SET_BUSY1S_Pos)
#define USBC_UECON6SET_MASK         _U_(0x030E395F) /**< \brief (USBC_UECON6SET) MASK Register */

/* -------- USBC_UECON7SET : (USBC Offset: 0x20C) ( /W 32) Endpoint Control Set Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXINES:1;         /*!< bit:      0  TXINE Set                          */
    uint32_t RXOUTES:1;        /*!< bit:      1  RXOUTE Set                         */
    uint32_t RXSTPES:1;        /*!< bit:      2  RXSTPE Set                         */
    uint32_t NAKOUTES:1;       /*!< bit:      3  NAKOUTE Set                        */
    uint32_t NAKINES:1;        /*!< bit:      4  NAKINE Set                         */
    uint32_t :1;               /*!< bit:      5  Reserved                           */
    uint32_t STALLEDES:1;      /*!< bit:      6  STALLEDE Set                       */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t NREPLYS:1;        /*!< bit:      8  NREPLY Set                         */
    uint32_t :2;               /*!< bit:  9..10  Reserved                           */
    uint32_t RAMACERES:1;      /*!< bit:     11  RAMACERE Set                       */
    uint32_t NBUSYBKES:1;      /*!< bit:     12  NBUSYBKE Set                       */
    uint32_t KILLBKS:1;        /*!< bit:     13  KILLBK Set                         */
    uint32_t :3;               /*!< bit: 14..16  Reserved                           */
    uint32_t NYETDISS:1;       /*!< bit:     17  NYETDIS Set                        */
    uint32_t RSTDTS:1;         /*!< bit:     18  RSTDT Set                          */
    uint32_t STALLRQS:1;       /*!< bit:     19  STALLRQ Set                        */
    uint32_t :4;               /*!< bit: 20..23  Reserved                           */
    uint32_t BUSY0S:1;         /*!< bit:     24  BUSY0 Set                          */
    uint32_t BUSY1S:1;         /*!< bit:     25  BUSY1 Set                          */
    uint32_t :6;               /*!< bit: 26..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UECON7SET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UECON7SET_OFFSET       0x20C        /**< \brief (USBC_UECON7SET offset) Endpoint Control Set Register */
#define USBC_UECON7SET_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UECON7SET reset_value) Endpoint Control Set Register */

#define USBC_UECON7SET_TXINES_Pos   0            /**< \brief (USBC_UECON7SET) TXINE Set */
#define USBC_UECON7SET_TXINES       (_U_(0x1) << USBC_UECON7SET_TXINES_Pos)
#define USBC_UECON7SET_RXOUTES_Pos  1            /**< \brief (USBC_UECON7SET) RXOUTE Set */
#define USBC_UECON7SET_RXOUTES      (_U_(0x1) << USBC_UECON7SET_RXOUTES_Pos)
#define USBC_UECON7SET_RXSTPES_Pos  2            /**< \brief (USBC_UECON7SET) RXSTPE Set */
#define USBC_UECON7SET_RXSTPES      (_U_(0x1) << USBC_UECON7SET_RXSTPES_Pos)
#define USBC_UECON7SET_NAKOUTES_Pos 3            /**< \brief (USBC_UECON7SET) NAKOUTE Set */
#define USBC_UECON7SET_NAKOUTES     (_U_(0x1) << USBC_UECON7SET_NAKOUTES_Pos)
#define USBC_UECON7SET_NAKINES_Pos  4            /**< \brief (USBC_UECON7SET) NAKINE Set */
#define USBC_UECON7SET_NAKINES      (_U_(0x1) << USBC_UECON7SET_NAKINES_Pos)
#define USBC_UECON7SET_STALLEDES_Pos 6            /**< \brief (USBC_UECON7SET) STALLEDE Set */
#define USBC_UECON7SET_STALLEDES    (_U_(0x1) << USBC_UECON7SET_STALLEDES_Pos)
#define USBC_UECON7SET_NREPLYS_Pos  8            /**< \brief (USBC_UECON7SET) NREPLY Set */
#define USBC_UECON7SET_NREPLYS      (_U_(0x1) << USBC_UECON7SET_NREPLYS_Pos)
#define USBC_UECON7SET_RAMACERES_Pos 11           /**< \brief (USBC_UECON7SET) RAMACERE Set */
#define USBC_UECON7SET_RAMACERES    (_U_(0x1) << USBC_UECON7SET_RAMACERES_Pos)
#define USBC_UECON7SET_NBUSYBKES_Pos 12           /**< \brief (USBC_UECON7SET) NBUSYBKE Set */
#define USBC_UECON7SET_NBUSYBKES    (_U_(0x1) << USBC_UECON7SET_NBUSYBKES_Pos)
#define USBC_UECON7SET_KILLBKS_Pos  13           /**< \brief (USBC_UECON7SET) KILLBK Set */
#define USBC_UECON7SET_KILLBKS      (_U_(0x1) << USBC_UECON7SET_KILLBKS_Pos)
#define USBC_UECON7SET_NYETDISS_Pos 17           /**< \brief (USBC_UECON7SET) NYETDIS Set */
#define USBC_UECON7SET_NYETDISS     (_U_(0x1) << USBC_UECON7SET_NYETDISS_Pos)
#define USBC_UECON7SET_RSTDTS_Pos   18           /**< \brief (USBC_UECON7SET) RSTDT Set */
#define USBC_UECON7SET_RSTDTS       (_U_(0x1) << USBC_UECON7SET_RSTDTS_Pos)
#define USBC_UECON7SET_STALLRQS_Pos 19           /**< \brief (USBC_UECON7SET) STALLRQ Set */
#define USBC_UECON7SET_STALLRQS     (_U_(0x1) << USBC_UECON7SET_STALLRQS_Pos)
#define USBC_UECON7SET_BUSY0S_Pos   24           /**< \brief (USBC_UECON7SET) BUSY0 Set */
#define USBC_UECON7SET_BUSY0S       (_U_(0x1) << USBC_UECON7SET_BUSY0S_Pos)
#define USBC_UECON7SET_BUSY1S_Pos   25           /**< \brief (USBC_UECON7SET) BUSY1 Set */
#define USBC_UECON7SET_BUSY1S       (_U_(0x1) << USBC_UECON7SET_BUSY1S_Pos)
#define USBC_UECON7SET_MASK         _U_(0x030E395F) /**< \brief (USBC_UECON7SET) MASK Register */

/* -------- USBC_UECON0CLR : (USBC Offset: 0x220) ( /W 32) Endpoint Control Clear Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXINEC:1;         /*!< bit:      0  TXINE Clear                        */
    uint32_t RXOUTEC:1;        /*!< bit:      1  RXOUTE Clear                       */
    uint32_t RXSTPEC:1;        /*!< bit:      2  RXSTPE Clear                       */
    uint32_t NAKOUTEC:1;       /*!< bit:      3  NAKOUTE Clear                      */
    uint32_t NAKINEC:1;        /*!< bit:      4  NAKINE Clear                       */
    uint32_t :1;               /*!< bit:      5  Reserved                           */
    uint32_t STALLEDEC:1;      /*!< bit:      6  STALLEDE Clear                     */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t NREPLYC:1;        /*!< bit:      8  NREPLY Clear                       */
    uint32_t :2;               /*!< bit:  9..10  Reserved                           */
    uint32_t RAMACEREC:1;      /*!< bit:     11  RAMACERE Clear                     */
    uint32_t NBUSYBKEC:1;      /*!< bit:     12  NBUSYBKE Clear                     */
    uint32_t :1;               /*!< bit:     13  Reserved                           */
    uint32_t FIFOCONC:1;       /*!< bit:     14  FIFOCON Clear                      */
    uint32_t :2;               /*!< bit: 15..16  Reserved                           */
    uint32_t NYETDISC:1;       /*!< bit:     17  NYETDIS Clear                      */
    uint32_t :1;               /*!< bit:     18  Reserved                           */
    uint32_t STALLRQC:1;       /*!< bit:     19  STALLRQ Clear                      */
    uint32_t :4;               /*!< bit: 20..23  Reserved                           */
    uint32_t BUSY0C:1;         /*!< bit:     24  BUSY0 Clear                        */
    uint32_t BUSY1C:1;         /*!< bit:     25  BUSY1 Clear                        */
    uint32_t :6;               /*!< bit: 26..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UECON0CLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UECON0CLR_OFFSET       0x220        /**< \brief (USBC_UECON0CLR offset) Endpoint Control Clear Register */
#define USBC_UECON0CLR_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UECON0CLR reset_value) Endpoint Control Clear Register */

#define USBC_UECON0CLR_TXINEC_Pos   0            /**< \brief (USBC_UECON0CLR) TXINE Clear */
#define USBC_UECON0CLR_TXINEC       (_U_(0x1) << USBC_UECON0CLR_TXINEC_Pos)
#define USBC_UECON0CLR_RXOUTEC_Pos  1            /**< \brief (USBC_UECON0CLR) RXOUTE Clear */
#define USBC_UECON0CLR_RXOUTEC      (_U_(0x1) << USBC_UECON0CLR_RXOUTEC_Pos)
#define USBC_UECON0CLR_RXSTPEC_Pos  2            /**< \brief (USBC_UECON0CLR) RXSTPE Clear */
#define USBC_UECON0CLR_RXSTPEC      (_U_(0x1) << USBC_UECON0CLR_RXSTPEC_Pos)
#define USBC_UECON0CLR_NAKOUTEC_Pos 3            /**< \brief (USBC_UECON0CLR) NAKOUTE Clear */
#define USBC_UECON0CLR_NAKOUTEC     (_U_(0x1) << USBC_UECON0CLR_NAKOUTEC_Pos)
#define USBC_UECON0CLR_NAKINEC_Pos  4            /**< \brief (USBC_UECON0CLR) NAKINE Clear */
#define USBC_UECON0CLR_NAKINEC      (_U_(0x1) << USBC_UECON0CLR_NAKINEC_Pos)
#define USBC_UECON0CLR_STALLEDEC_Pos 6            /**< \brief (USBC_UECON0CLR) STALLEDE Clear */
#define USBC_UECON0CLR_STALLEDEC    (_U_(0x1) << USBC_UECON0CLR_STALLEDEC_Pos)
#define USBC_UECON0CLR_NREPLYC_Pos  8            /**< \brief (USBC_UECON0CLR) NREPLY Clear */
#define USBC_UECON0CLR_NREPLYC      (_U_(0x1) << USBC_UECON0CLR_NREPLYC_Pos)
#define USBC_UECON0CLR_RAMACEREC_Pos 11           /**< \brief (USBC_UECON0CLR) RAMACERE Clear */
#define USBC_UECON0CLR_RAMACEREC    (_U_(0x1) << USBC_UECON0CLR_RAMACEREC_Pos)
#define USBC_UECON0CLR_NBUSYBKEC_Pos 12           /**< \brief (USBC_UECON0CLR) NBUSYBKE Clear */
#define USBC_UECON0CLR_NBUSYBKEC    (_U_(0x1) << USBC_UECON0CLR_NBUSYBKEC_Pos)
#define USBC_UECON0CLR_FIFOCONC_Pos 14           /**< \brief (USBC_UECON0CLR) FIFOCON Clear */
#define USBC_UECON0CLR_FIFOCONC     (_U_(0x1) << USBC_UECON0CLR_FIFOCONC_Pos)
#define USBC_UECON0CLR_NYETDISC_Pos 17           /**< \brief (USBC_UECON0CLR) NYETDIS Clear */
#define USBC_UECON0CLR_NYETDISC     (_U_(0x1) << USBC_UECON0CLR_NYETDISC_Pos)
#define USBC_UECON0CLR_STALLRQC_Pos 19           /**< \brief (USBC_UECON0CLR) STALLRQ Clear */
#define USBC_UECON0CLR_STALLRQC     (_U_(0x1) << USBC_UECON0CLR_STALLRQC_Pos)
#define USBC_UECON0CLR_BUSY0C_Pos   24           /**< \brief (USBC_UECON0CLR) BUSY0 Clear */
#define USBC_UECON0CLR_BUSY0C       (_U_(0x1) << USBC_UECON0CLR_BUSY0C_Pos)
#define USBC_UECON0CLR_BUSY1C_Pos   25           /**< \brief (USBC_UECON0CLR) BUSY1 Clear */
#define USBC_UECON0CLR_BUSY1C       (_U_(0x1) << USBC_UECON0CLR_BUSY1C_Pos)
#define USBC_UECON0CLR_MASK         _U_(0x030A595F) /**< \brief (USBC_UECON0CLR) MASK Register */

/* -------- USBC_UECON1CLR : (USBC Offset: 0x224) ( /W 32) TXINE Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXINEC:1;         /*!< bit:      0  TXINE Clear                        */
    uint32_t RXOUTEC:1;        /*!< bit:      1  RXOUTE Clear                       */
    uint32_t RXSTPEC:1;        /*!< bit:      2  RXOUTE Clear                       */
    uint32_t NAKOUTEC:1;       /*!< bit:      3  NAKOUTE Clear                      */
    uint32_t NAKINEC:1;        /*!< bit:      4  NAKINE Clear                       */
    uint32_t :1;               /*!< bit:      5  Reserved                           */
    uint32_t STALLEDEC:1;      /*!< bit:      6  RXSTPE Clear                       */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t NREPLYC:1;        /*!< bit:      8  NREPLY Clear                       */
    uint32_t :2;               /*!< bit:  9..10  Reserved                           */
    uint32_t RAMACEREC:1;      /*!< bit:     11  RAMACERE Clear                     */
    uint32_t NBUSYBKEC:1;      /*!< bit:     12  NBUSYBKE Clear                     */
    uint32_t :1;               /*!< bit:     13  Reserved                           */
    uint32_t FIFOCONC:1;       /*!< bit:     14  FIFOCON Clear                      */
    uint32_t :2;               /*!< bit: 15..16  Reserved                           */
    uint32_t NYETDISC:1;       /*!< bit:     17  NYETDIS Clear                      */
    uint32_t :1;               /*!< bit:     18  Reserved                           */
    uint32_t STALLRQC:1;       /*!< bit:     19  STALLEDE Clear                     */
    uint32_t :4;               /*!< bit: 20..23  Reserved                           */
    uint32_t BUSY0C:1;         /*!< bit:     24  BUSY0 Clear                        */
    uint32_t BUSY1C:1;         /*!< bit:     25  BUSY1 Clear                        */
    uint32_t :6;               /*!< bit: 26..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UECON1CLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UECON1CLR_OFFSET       0x224        /**< \brief (USBC_UECON1CLR offset) TXINE Clear */
#define USBC_UECON1CLR_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UECON1CLR reset_value) TXINE Clear */

#define USBC_UECON1CLR_TXINEC_Pos   0            /**< \brief (USBC_UECON1CLR) TXINE Clear */
#define USBC_UECON1CLR_TXINEC       (_U_(0x1) << USBC_UECON1CLR_TXINEC_Pos)
#define USBC_UECON1CLR_RXOUTEC_Pos  1            /**< \brief (USBC_UECON1CLR) RXOUTE Clear */
#define USBC_UECON1CLR_RXOUTEC      (_U_(0x1) << USBC_UECON1CLR_RXOUTEC_Pos)
#define USBC_UECON1CLR_RXSTPEC_Pos  2            /**< \brief (USBC_UECON1CLR) RXOUTE Clear */
#define USBC_UECON1CLR_RXSTPEC      (_U_(0x1) << USBC_UECON1CLR_RXSTPEC_Pos)
#define USBC_UECON1CLR_NAKOUTEC_Pos 3            /**< \brief (USBC_UECON1CLR) NAKOUTE Clear */
#define USBC_UECON1CLR_NAKOUTEC     (_U_(0x1) << USBC_UECON1CLR_NAKOUTEC_Pos)
#define USBC_UECON1CLR_NAKINEC_Pos  4            /**< \brief (USBC_UECON1CLR) NAKINE Clear */
#define USBC_UECON1CLR_NAKINEC      (_U_(0x1) << USBC_UECON1CLR_NAKINEC_Pos)
#define USBC_UECON1CLR_STALLEDEC_Pos 6            /**< \brief (USBC_UECON1CLR) RXSTPE Clear */
#define USBC_UECON1CLR_STALLEDEC    (_U_(0x1) << USBC_UECON1CLR_STALLEDEC_Pos)
#define USBC_UECON1CLR_NREPLYC_Pos  8            /**< \brief (USBC_UECON1CLR) NREPLY Clear */
#define USBC_UECON1CLR_NREPLYC      (_U_(0x1) << USBC_UECON1CLR_NREPLYC_Pos)
#define USBC_UECON1CLR_RAMACEREC_Pos 11           /**< \brief (USBC_UECON1CLR) RAMACERE Clear */
#define USBC_UECON1CLR_RAMACEREC    (_U_(0x1) << USBC_UECON1CLR_RAMACEREC_Pos)
#define USBC_UECON1CLR_NBUSYBKEC_Pos 12           /**< \brief (USBC_UECON1CLR) NBUSYBKE Clear */
#define USBC_UECON1CLR_NBUSYBKEC    (_U_(0x1) << USBC_UECON1CLR_NBUSYBKEC_Pos)
#define USBC_UECON1CLR_FIFOCONC_Pos 14           /**< \brief (USBC_UECON1CLR) FIFOCON Clear */
#define USBC_UECON1CLR_FIFOCONC     (_U_(0x1) << USBC_UECON1CLR_FIFOCONC_Pos)
#define USBC_UECON1CLR_NYETDISC_Pos 17           /**< \brief (USBC_UECON1CLR) NYETDIS Clear */
#define USBC_UECON1CLR_NYETDISC     (_U_(0x1) << USBC_UECON1CLR_NYETDISC_Pos)
#define USBC_UECON1CLR_STALLRQC_Pos 19           /**< \brief (USBC_UECON1CLR) STALLEDE Clear */
#define USBC_UECON1CLR_STALLRQC     (_U_(0x1) << USBC_UECON1CLR_STALLRQC_Pos)
#define USBC_UECON1CLR_BUSY0C_Pos   24           /**< \brief (USBC_UECON1CLR) BUSY0 Clear */
#define USBC_UECON1CLR_BUSY0C       (_U_(0x1) << USBC_UECON1CLR_BUSY0C_Pos)
#define USBC_UECON1CLR_BUSY1C_Pos   25           /**< \brief (USBC_UECON1CLR) BUSY1 Clear */
#define USBC_UECON1CLR_BUSY1C       (_U_(0x1) << USBC_UECON1CLR_BUSY1C_Pos)
#define USBC_UECON1CLR_MASK         _U_(0x030A595F) /**< \brief (USBC_UECON1CLR) MASK Register */

/* -------- USBC_UECON2CLR : (USBC Offset: 0x228) ( /W 32) TXINE Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXINEC:1;         /*!< bit:      0  TXINE Clear                        */
    uint32_t RXOUTEC:1;        /*!< bit:      1  RXOUTE Clear                       */
    uint32_t RXSTPEC:1;        /*!< bit:      2  RXOUTE Clear                       */
    uint32_t NAKOUTEC:1;       /*!< bit:      3  NAKOUTE Clear                      */
    uint32_t NAKINEC:1;        /*!< bit:      4  NAKINE Clear                       */
    uint32_t :1;               /*!< bit:      5  Reserved                           */
    uint32_t STALLEDEC:1;      /*!< bit:      6  RXSTPE Clear                       */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t NREPLYC:1;        /*!< bit:      8  NREPLY Clear                       */
    uint32_t :2;               /*!< bit:  9..10  Reserved                           */
    uint32_t RAMACEREC:1;      /*!< bit:     11  RAMACERE Clear                     */
    uint32_t NBUSYBKEC:1;      /*!< bit:     12  NBUSYBKE Clear                     */
    uint32_t :1;               /*!< bit:     13  Reserved                           */
    uint32_t FIFOCONC:1;       /*!< bit:     14  FIFOCON Clear                      */
    uint32_t :2;               /*!< bit: 15..16  Reserved                           */
    uint32_t NYETDISC:1;       /*!< bit:     17  NYETDIS Clear                      */
    uint32_t :1;               /*!< bit:     18  Reserved                           */
    uint32_t STALLRQC:1;       /*!< bit:     19  STALLEDE Clear                     */
    uint32_t :4;               /*!< bit: 20..23  Reserved                           */
    uint32_t BUSY0C:1;         /*!< bit:     24  BUSY0 Clear                        */
    uint32_t BUSY1C:1;         /*!< bit:     25  BUSY1 Clear                        */
    uint32_t :6;               /*!< bit: 26..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UECON2CLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UECON2CLR_OFFSET       0x228        /**< \brief (USBC_UECON2CLR offset) TXINE Clear */
#define USBC_UECON2CLR_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UECON2CLR reset_value) TXINE Clear */

#define USBC_UECON2CLR_TXINEC_Pos   0            /**< \brief (USBC_UECON2CLR) TXINE Clear */
#define USBC_UECON2CLR_TXINEC       (_U_(0x1) << USBC_UECON2CLR_TXINEC_Pos)
#define USBC_UECON2CLR_RXOUTEC_Pos  1            /**< \brief (USBC_UECON2CLR) RXOUTE Clear */
#define USBC_UECON2CLR_RXOUTEC      (_U_(0x1) << USBC_UECON2CLR_RXOUTEC_Pos)
#define USBC_UECON2CLR_RXSTPEC_Pos  2            /**< \brief (USBC_UECON2CLR) RXOUTE Clear */
#define USBC_UECON2CLR_RXSTPEC      (_U_(0x1) << USBC_UECON2CLR_RXSTPEC_Pos)
#define USBC_UECON2CLR_NAKOUTEC_Pos 3            /**< \brief (USBC_UECON2CLR) NAKOUTE Clear */
#define USBC_UECON2CLR_NAKOUTEC     (_U_(0x1) << USBC_UECON2CLR_NAKOUTEC_Pos)
#define USBC_UECON2CLR_NAKINEC_Pos  4            /**< \brief (USBC_UECON2CLR) NAKINE Clear */
#define USBC_UECON2CLR_NAKINEC      (_U_(0x1) << USBC_UECON2CLR_NAKINEC_Pos)
#define USBC_UECON2CLR_STALLEDEC_Pos 6            /**< \brief (USBC_UECON2CLR) RXSTPE Clear */
#define USBC_UECON2CLR_STALLEDEC    (_U_(0x1) << USBC_UECON2CLR_STALLEDEC_Pos)
#define USBC_UECON2CLR_NREPLYC_Pos  8            /**< \brief (USBC_UECON2CLR) NREPLY Clear */
#define USBC_UECON2CLR_NREPLYC      (_U_(0x1) << USBC_UECON2CLR_NREPLYC_Pos)
#define USBC_UECON2CLR_RAMACEREC_Pos 11           /**< \brief (USBC_UECON2CLR) RAMACERE Clear */
#define USBC_UECON2CLR_RAMACEREC    (_U_(0x1) << USBC_UECON2CLR_RAMACEREC_Pos)
#define USBC_UECON2CLR_NBUSYBKEC_Pos 12           /**< \brief (USBC_UECON2CLR) NBUSYBKE Clear */
#define USBC_UECON2CLR_NBUSYBKEC    (_U_(0x1) << USBC_UECON2CLR_NBUSYBKEC_Pos)
#define USBC_UECON2CLR_FIFOCONC_Pos 14           /**< \brief (USBC_UECON2CLR) FIFOCON Clear */
#define USBC_UECON2CLR_FIFOCONC     (_U_(0x1) << USBC_UECON2CLR_FIFOCONC_Pos)
#define USBC_UECON2CLR_NYETDISC_Pos 17           /**< \brief (USBC_UECON2CLR) NYETDIS Clear */
#define USBC_UECON2CLR_NYETDISC     (_U_(0x1) << USBC_UECON2CLR_NYETDISC_Pos)
#define USBC_UECON2CLR_STALLRQC_Pos 19           /**< \brief (USBC_UECON2CLR) STALLEDE Clear */
#define USBC_UECON2CLR_STALLRQC     (_U_(0x1) << USBC_UECON2CLR_STALLRQC_Pos)
#define USBC_UECON2CLR_BUSY0C_Pos   24           /**< \brief (USBC_UECON2CLR) BUSY0 Clear */
#define USBC_UECON2CLR_BUSY0C       (_U_(0x1) << USBC_UECON2CLR_BUSY0C_Pos)
#define USBC_UECON2CLR_BUSY1C_Pos   25           /**< \brief (USBC_UECON2CLR) BUSY1 Clear */
#define USBC_UECON2CLR_BUSY1C       (_U_(0x1) << USBC_UECON2CLR_BUSY1C_Pos)
#define USBC_UECON2CLR_MASK         _U_(0x030A595F) /**< \brief (USBC_UECON2CLR) MASK Register */

/* -------- USBC_UECON3CLR : (USBC Offset: 0x22C) ( /W 32) TXINE Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXINEC:1;         /*!< bit:      0  TXINE Clear                        */
    uint32_t RXOUTEC:1;        /*!< bit:      1  RXOUTE Clear                       */
    uint32_t RXSTPEC:1;        /*!< bit:      2  RXOUTE Clear                       */
    uint32_t NAKOUTEC:1;       /*!< bit:      3  NAKOUTE Clear                      */
    uint32_t NAKINEC:1;        /*!< bit:      4  NAKINE Clear                       */
    uint32_t :1;               /*!< bit:      5  Reserved                           */
    uint32_t STALLEDEC:1;      /*!< bit:      6  RXSTPE Clear                       */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t NREPLYC:1;        /*!< bit:      8  NREPLY Clear                       */
    uint32_t :2;               /*!< bit:  9..10  Reserved                           */
    uint32_t RAMACEREC:1;      /*!< bit:     11  RAMACERE Clear                     */
    uint32_t NBUSYBKEC:1;      /*!< bit:     12  NBUSYBKE Clear                     */
    uint32_t :1;               /*!< bit:     13  Reserved                           */
    uint32_t FIFOCONC:1;       /*!< bit:     14  FIFOCON Clear                      */
    uint32_t :2;               /*!< bit: 15..16  Reserved                           */
    uint32_t NYETDISC:1;       /*!< bit:     17  NYETDIS Clear                      */
    uint32_t :1;               /*!< bit:     18  Reserved                           */
    uint32_t STALLRQC:1;       /*!< bit:     19  STALLEDE Clear                     */
    uint32_t :4;               /*!< bit: 20..23  Reserved                           */
    uint32_t BUSY0C:1;         /*!< bit:     24  BUSY0 Clear                        */
    uint32_t BUSY1C:1;         /*!< bit:     25  BUSY1 Clear                        */
    uint32_t :6;               /*!< bit: 26..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UECON3CLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UECON3CLR_OFFSET       0x22C        /**< \brief (USBC_UECON3CLR offset) TXINE Clear */
#define USBC_UECON3CLR_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UECON3CLR reset_value) TXINE Clear */

#define USBC_UECON3CLR_TXINEC_Pos   0            /**< \brief (USBC_UECON3CLR) TXINE Clear */
#define USBC_UECON3CLR_TXINEC       (_U_(0x1) << USBC_UECON3CLR_TXINEC_Pos)
#define USBC_UECON3CLR_RXOUTEC_Pos  1            /**< \brief (USBC_UECON3CLR) RXOUTE Clear */
#define USBC_UECON3CLR_RXOUTEC      (_U_(0x1) << USBC_UECON3CLR_RXOUTEC_Pos)
#define USBC_UECON3CLR_RXSTPEC_Pos  2            /**< \brief (USBC_UECON3CLR) RXOUTE Clear */
#define USBC_UECON3CLR_RXSTPEC      (_U_(0x1) << USBC_UECON3CLR_RXSTPEC_Pos)
#define USBC_UECON3CLR_NAKOUTEC_Pos 3            /**< \brief (USBC_UECON3CLR) NAKOUTE Clear */
#define USBC_UECON3CLR_NAKOUTEC     (_U_(0x1) << USBC_UECON3CLR_NAKOUTEC_Pos)
#define USBC_UECON3CLR_NAKINEC_Pos  4            /**< \brief (USBC_UECON3CLR) NAKINE Clear */
#define USBC_UECON3CLR_NAKINEC      (_U_(0x1) << USBC_UECON3CLR_NAKINEC_Pos)
#define USBC_UECON3CLR_STALLEDEC_Pos 6            /**< \brief (USBC_UECON3CLR) RXSTPE Clear */
#define USBC_UECON3CLR_STALLEDEC    (_U_(0x1) << USBC_UECON3CLR_STALLEDEC_Pos)
#define USBC_UECON3CLR_NREPLYC_Pos  8            /**< \brief (USBC_UECON3CLR) NREPLY Clear */
#define USBC_UECON3CLR_NREPLYC      (_U_(0x1) << USBC_UECON3CLR_NREPLYC_Pos)
#define USBC_UECON3CLR_RAMACEREC_Pos 11           /**< \brief (USBC_UECON3CLR) RAMACERE Clear */
#define USBC_UECON3CLR_RAMACEREC    (_U_(0x1) << USBC_UECON3CLR_RAMACEREC_Pos)
#define USBC_UECON3CLR_NBUSYBKEC_Pos 12           /**< \brief (USBC_UECON3CLR) NBUSYBKE Clear */
#define USBC_UECON3CLR_NBUSYBKEC    (_U_(0x1) << USBC_UECON3CLR_NBUSYBKEC_Pos)
#define USBC_UECON3CLR_FIFOCONC_Pos 14           /**< \brief (USBC_UECON3CLR) FIFOCON Clear */
#define USBC_UECON3CLR_FIFOCONC     (_U_(0x1) << USBC_UECON3CLR_FIFOCONC_Pos)
#define USBC_UECON3CLR_NYETDISC_Pos 17           /**< \brief (USBC_UECON3CLR) NYETDIS Clear */
#define USBC_UECON3CLR_NYETDISC     (_U_(0x1) << USBC_UECON3CLR_NYETDISC_Pos)
#define USBC_UECON3CLR_STALLRQC_Pos 19           /**< \brief (USBC_UECON3CLR) STALLEDE Clear */
#define USBC_UECON3CLR_STALLRQC     (_U_(0x1) << USBC_UECON3CLR_STALLRQC_Pos)
#define USBC_UECON3CLR_BUSY0C_Pos   24           /**< \brief (USBC_UECON3CLR) BUSY0 Clear */
#define USBC_UECON3CLR_BUSY0C       (_U_(0x1) << USBC_UECON3CLR_BUSY0C_Pos)
#define USBC_UECON3CLR_BUSY1C_Pos   25           /**< \brief (USBC_UECON3CLR) BUSY1 Clear */
#define USBC_UECON3CLR_BUSY1C       (_U_(0x1) << USBC_UECON3CLR_BUSY1C_Pos)
#define USBC_UECON3CLR_MASK         _U_(0x030A595F) /**< \brief (USBC_UECON3CLR) MASK Register */

/* -------- USBC_UECON4CLR : (USBC Offset: 0x230) ( /W 32) TXINE Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXINEC:1;         /*!< bit:      0  TXINE Clear                        */
    uint32_t RXOUTEC:1;        /*!< bit:      1  RXOUTE Clear                       */
    uint32_t RXSTPEC:1;        /*!< bit:      2  RXOUTE Clear                       */
    uint32_t NAKOUTEC:1;       /*!< bit:      3  NAKOUTE Clear                      */
    uint32_t NAKINEC:1;        /*!< bit:      4  NAKINE Clear                       */
    uint32_t :1;               /*!< bit:      5  Reserved                           */
    uint32_t STALLEDEC:1;      /*!< bit:      6  RXSTPE Clear                       */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t NREPLYC:1;        /*!< bit:      8  NREPLY Clear                       */
    uint32_t :2;               /*!< bit:  9..10  Reserved                           */
    uint32_t RAMACEREC:1;      /*!< bit:     11  RAMACERE Clear                     */
    uint32_t NBUSYBKEC:1;      /*!< bit:     12  NBUSYBKE Clear                     */
    uint32_t :1;               /*!< bit:     13  Reserved                           */
    uint32_t FIFOCONC:1;       /*!< bit:     14  FIFOCON Clear                      */
    uint32_t :2;               /*!< bit: 15..16  Reserved                           */
    uint32_t NYETDISC:1;       /*!< bit:     17  NYETDIS Clear                      */
    uint32_t :1;               /*!< bit:     18  Reserved                           */
    uint32_t STALLRQC:1;       /*!< bit:     19  STALLEDE Clear                     */
    uint32_t :4;               /*!< bit: 20..23  Reserved                           */
    uint32_t BUSY0C:1;         /*!< bit:     24  BUSY0 Clear                        */
    uint32_t BUSY1C:1;         /*!< bit:     25  BUSY1 Clear                        */
    uint32_t :6;               /*!< bit: 26..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UECON4CLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UECON4CLR_OFFSET       0x230        /**< \brief (USBC_UECON4CLR offset) TXINE Clear */
#define USBC_UECON4CLR_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UECON4CLR reset_value) TXINE Clear */

#define USBC_UECON4CLR_TXINEC_Pos   0            /**< \brief (USBC_UECON4CLR) TXINE Clear */
#define USBC_UECON4CLR_TXINEC       (_U_(0x1) << USBC_UECON4CLR_TXINEC_Pos)
#define USBC_UECON4CLR_RXOUTEC_Pos  1            /**< \brief (USBC_UECON4CLR) RXOUTE Clear */
#define USBC_UECON4CLR_RXOUTEC      (_U_(0x1) << USBC_UECON4CLR_RXOUTEC_Pos)
#define USBC_UECON4CLR_RXSTPEC_Pos  2            /**< \brief (USBC_UECON4CLR) RXOUTE Clear */
#define USBC_UECON4CLR_RXSTPEC      (_U_(0x1) << USBC_UECON4CLR_RXSTPEC_Pos)
#define USBC_UECON4CLR_NAKOUTEC_Pos 3            /**< \brief (USBC_UECON4CLR) NAKOUTE Clear */
#define USBC_UECON4CLR_NAKOUTEC     (_U_(0x1) << USBC_UECON4CLR_NAKOUTEC_Pos)
#define USBC_UECON4CLR_NAKINEC_Pos  4            /**< \brief (USBC_UECON4CLR) NAKINE Clear */
#define USBC_UECON4CLR_NAKINEC      (_U_(0x1) << USBC_UECON4CLR_NAKINEC_Pos)
#define USBC_UECON4CLR_STALLEDEC_Pos 6            /**< \brief (USBC_UECON4CLR) RXSTPE Clear */
#define USBC_UECON4CLR_STALLEDEC    (_U_(0x1) << USBC_UECON4CLR_STALLEDEC_Pos)
#define USBC_UECON4CLR_NREPLYC_Pos  8            /**< \brief (USBC_UECON4CLR) NREPLY Clear */
#define USBC_UECON4CLR_NREPLYC      (_U_(0x1) << USBC_UECON4CLR_NREPLYC_Pos)
#define USBC_UECON4CLR_RAMACEREC_Pos 11           /**< \brief (USBC_UECON4CLR) RAMACERE Clear */
#define USBC_UECON4CLR_RAMACEREC    (_U_(0x1) << USBC_UECON4CLR_RAMACEREC_Pos)
#define USBC_UECON4CLR_NBUSYBKEC_Pos 12           /**< \brief (USBC_UECON4CLR) NBUSYBKE Clear */
#define USBC_UECON4CLR_NBUSYBKEC    (_U_(0x1) << USBC_UECON4CLR_NBUSYBKEC_Pos)
#define USBC_UECON4CLR_FIFOCONC_Pos 14           /**< \brief (USBC_UECON4CLR) FIFOCON Clear */
#define USBC_UECON4CLR_FIFOCONC     (_U_(0x1) << USBC_UECON4CLR_FIFOCONC_Pos)
#define USBC_UECON4CLR_NYETDISC_Pos 17           /**< \brief (USBC_UECON4CLR) NYETDIS Clear */
#define USBC_UECON4CLR_NYETDISC     (_U_(0x1) << USBC_UECON4CLR_NYETDISC_Pos)
#define USBC_UECON4CLR_STALLRQC_Pos 19           /**< \brief (USBC_UECON4CLR) STALLEDE Clear */
#define USBC_UECON4CLR_STALLRQC     (_U_(0x1) << USBC_UECON4CLR_STALLRQC_Pos)
#define USBC_UECON4CLR_BUSY0C_Pos   24           /**< \brief (USBC_UECON4CLR) BUSY0 Clear */
#define USBC_UECON4CLR_BUSY0C       (_U_(0x1) << USBC_UECON4CLR_BUSY0C_Pos)
#define USBC_UECON4CLR_BUSY1C_Pos   25           /**< \brief (USBC_UECON4CLR) BUSY1 Clear */
#define USBC_UECON4CLR_BUSY1C       (_U_(0x1) << USBC_UECON4CLR_BUSY1C_Pos)
#define USBC_UECON4CLR_MASK         _U_(0x030A595F) /**< \brief (USBC_UECON4CLR) MASK Register */

/* -------- USBC_UECON5CLR : (USBC Offset: 0x234) ( /W 32) TXINE Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXINEC:1;         /*!< bit:      0  TXINE Clear                        */
    uint32_t RXOUTEC:1;        /*!< bit:      1  RXOUTE Clear                       */
    uint32_t RXSTPEC:1;        /*!< bit:      2  RXOUTE Clear                       */
    uint32_t NAKOUTEC:1;       /*!< bit:      3  NAKOUTE Clear                      */
    uint32_t NAKINEC:1;        /*!< bit:      4  NAKINE Clear                       */
    uint32_t :1;               /*!< bit:      5  Reserved                           */
    uint32_t STALLEDEC:1;      /*!< bit:      6  RXSTPE Clear                       */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t NREPLYC:1;        /*!< bit:      8  NREPLY Clear                       */
    uint32_t :2;               /*!< bit:  9..10  Reserved                           */
    uint32_t RAMACEREC:1;      /*!< bit:     11  RAMACERE Clear                     */
    uint32_t NBUSYBKEC:1;      /*!< bit:     12  NBUSYBKE Clear                     */
    uint32_t :1;               /*!< bit:     13  Reserved                           */
    uint32_t FIFOCONC:1;       /*!< bit:     14  FIFOCON Clear                      */
    uint32_t :2;               /*!< bit: 15..16  Reserved                           */
    uint32_t NYETDISC:1;       /*!< bit:     17  NYETDIS Clear                      */
    uint32_t :1;               /*!< bit:     18  Reserved                           */
    uint32_t STALLRQC:1;       /*!< bit:     19  STALLEDE Clear                     */
    uint32_t :4;               /*!< bit: 20..23  Reserved                           */
    uint32_t BUSY0C:1;         /*!< bit:     24  BUSY0 Clear                        */
    uint32_t BUSY1C:1;         /*!< bit:     25  BUSY1 Clear                        */
    uint32_t :6;               /*!< bit: 26..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UECON5CLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UECON5CLR_OFFSET       0x234        /**< \brief (USBC_UECON5CLR offset) TXINE Clear */
#define USBC_UECON5CLR_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UECON5CLR reset_value) TXINE Clear */

#define USBC_UECON5CLR_TXINEC_Pos   0            /**< \brief (USBC_UECON5CLR) TXINE Clear */
#define USBC_UECON5CLR_TXINEC       (_U_(0x1) << USBC_UECON5CLR_TXINEC_Pos)
#define USBC_UECON5CLR_RXOUTEC_Pos  1            /**< \brief (USBC_UECON5CLR) RXOUTE Clear */
#define USBC_UECON5CLR_RXOUTEC      (_U_(0x1) << USBC_UECON5CLR_RXOUTEC_Pos)
#define USBC_UECON5CLR_RXSTPEC_Pos  2            /**< \brief (USBC_UECON5CLR) RXOUTE Clear */
#define USBC_UECON5CLR_RXSTPEC      (_U_(0x1) << USBC_UECON5CLR_RXSTPEC_Pos)
#define USBC_UECON5CLR_NAKOUTEC_Pos 3            /**< \brief (USBC_UECON5CLR) NAKOUTE Clear */
#define USBC_UECON5CLR_NAKOUTEC     (_U_(0x1) << USBC_UECON5CLR_NAKOUTEC_Pos)
#define USBC_UECON5CLR_NAKINEC_Pos  4            /**< \brief (USBC_UECON5CLR) NAKINE Clear */
#define USBC_UECON5CLR_NAKINEC      (_U_(0x1) << USBC_UECON5CLR_NAKINEC_Pos)
#define USBC_UECON5CLR_STALLEDEC_Pos 6            /**< \brief (USBC_UECON5CLR) RXSTPE Clear */
#define USBC_UECON5CLR_STALLEDEC    (_U_(0x1) << USBC_UECON5CLR_STALLEDEC_Pos)
#define USBC_UECON5CLR_NREPLYC_Pos  8            /**< \brief (USBC_UECON5CLR) NREPLY Clear */
#define USBC_UECON5CLR_NREPLYC      (_U_(0x1) << USBC_UECON5CLR_NREPLYC_Pos)
#define USBC_UECON5CLR_RAMACEREC_Pos 11           /**< \brief (USBC_UECON5CLR) RAMACERE Clear */
#define USBC_UECON5CLR_RAMACEREC    (_U_(0x1) << USBC_UECON5CLR_RAMACEREC_Pos)
#define USBC_UECON5CLR_NBUSYBKEC_Pos 12           /**< \brief (USBC_UECON5CLR) NBUSYBKE Clear */
#define USBC_UECON5CLR_NBUSYBKEC    (_U_(0x1) << USBC_UECON5CLR_NBUSYBKEC_Pos)
#define USBC_UECON5CLR_FIFOCONC_Pos 14           /**< \brief (USBC_UECON5CLR) FIFOCON Clear */
#define USBC_UECON5CLR_FIFOCONC     (_U_(0x1) << USBC_UECON5CLR_FIFOCONC_Pos)
#define USBC_UECON5CLR_NYETDISC_Pos 17           /**< \brief (USBC_UECON5CLR) NYETDIS Clear */
#define USBC_UECON5CLR_NYETDISC     (_U_(0x1) << USBC_UECON5CLR_NYETDISC_Pos)
#define USBC_UECON5CLR_STALLRQC_Pos 19           /**< \brief (USBC_UECON5CLR) STALLEDE Clear */
#define USBC_UECON5CLR_STALLRQC     (_U_(0x1) << USBC_UECON5CLR_STALLRQC_Pos)
#define USBC_UECON5CLR_BUSY0C_Pos   24           /**< \brief (USBC_UECON5CLR) BUSY0 Clear */
#define USBC_UECON5CLR_BUSY0C       (_U_(0x1) << USBC_UECON5CLR_BUSY0C_Pos)
#define USBC_UECON5CLR_BUSY1C_Pos   25           /**< \brief (USBC_UECON5CLR) BUSY1 Clear */
#define USBC_UECON5CLR_BUSY1C       (_U_(0x1) << USBC_UECON5CLR_BUSY1C_Pos)
#define USBC_UECON5CLR_MASK         _U_(0x030A595F) /**< \brief (USBC_UECON5CLR) MASK Register */

/* -------- USBC_UECON6CLR : (USBC Offset: 0x238) ( /W 32) TXINE Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXINEC:1;         /*!< bit:      0  TXINE Clear                        */
    uint32_t RXOUTEC:1;        /*!< bit:      1  RXOUTE Clear                       */
    uint32_t RXSTPEC:1;        /*!< bit:      2  RXOUTE Clear                       */
    uint32_t NAKOUTEC:1;       /*!< bit:      3  NAKOUTE Clear                      */
    uint32_t NAKINEC:1;        /*!< bit:      4  NAKINE Clear                       */
    uint32_t :1;               /*!< bit:      5  Reserved                           */
    uint32_t STALLEDEC:1;      /*!< bit:      6  RXSTPE Clear                       */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t NREPLYC:1;        /*!< bit:      8  NREPLY Clear                       */
    uint32_t :2;               /*!< bit:  9..10  Reserved                           */
    uint32_t RAMACEREC:1;      /*!< bit:     11  RAMACERE Clear                     */
    uint32_t NBUSYBKEC:1;      /*!< bit:     12  NBUSYBKE Clear                     */
    uint32_t :1;               /*!< bit:     13  Reserved                           */
    uint32_t FIFOCONC:1;       /*!< bit:     14  FIFOCON Clear                      */
    uint32_t :2;               /*!< bit: 15..16  Reserved                           */
    uint32_t NYETDISC:1;       /*!< bit:     17  NYETDIS Clear                      */
    uint32_t :1;               /*!< bit:     18  Reserved                           */
    uint32_t STALLRQC:1;       /*!< bit:     19  STALLEDE Clear                     */
    uint32_t :4;               /*!< bit: 20..23  Reserved                           */
    uint32_t BUSY0C:1;         /*!< bit:     24  BUSY0 Clear                        */
    uint32_t BUSY1C:1;         /*!< bit:     25  BUSY1 Clear                        */
    uint32_t :6;               /*!< bit: 26..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UECON6CLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UECON6CLR_OFFSET       0x238        /**< \brief (USBC_UECON6CLR offset) TXINE Clear */
#define USBC_UECON6CLR_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UECON6CLR reset_value) TXINE Clear */

#define USBC_UECON6CLR_TXINEC_Pos   0            /**< \brief (USBC_UECON6CLR) TXINE Clear */
#define USBC_UECON6CLR_TXINEC       (_U_(0x1) << USBC_UECON6CLR_TXINEC_Pos)
#define USBC_UECON6CLR_RXOUTEC_Pos  1            /**< \brief (USBC_UECON6CLR) RXOUTE Clear */
#define USBC_UECON6CLR_RXOUTEC      (_U_(0x1) << USBC_UECON6CLR_RXOUTEC_Pos)
#define USBC_UECON6CLR_RXSTPEC_Pos  2            /**< \brief (USBC_UECON6CLR) RXOUTE Clear */
#define USBC_UECON6CLR_RXSTPEC      (_U_(0x1) << USBC_UECON6CLR_RXSTPEC_Pos)
#define USBC_UECON6CLR_NAKOUTEC_Pos 3            /**< \brief (USBC_UECON6CLR) NAKOUTE Clear */
#define USBC_UECON6CLR_NAKOUTEC     (_U_(0x1) << USBC_UECON6CLR_NAKOUTEC_Pos)
#define USBC_UECON6CLR_NAKINEC_Pos  4            /**< \brief (USBC_UECON6CLR) NAKINE Clear */
#define USBC_UECON6CLR_NAKINEC      (_U_(0x1) << USBC_UECON6CLR_NAKINEC_Pos)
#define USBC_UECON6CLR_STALLEDEC_Pos 6            /**< \brief (USBC_UECON6CLR) RXSTPE Clear */
#define USBC_UECON6CLR_STALLEDEC    (_U_(0x1) << USBC_UECON6CLR_STALLEDEC_Pos)
#define USBC_UECON6CLR_NREPLYC_Pos  8            /**< \brief (USBC_UECON6CLR) NREPLY Clear */
#define USBC_UECON6CLR_NREPLYC      (_U_(0x1) << USBC_UECON6CLR_NREPLYC_Pos)
#define USBC_UECON6CLR_RAMACEREC_Pos 11           /**< \brief (USBC_UECON6CLR) RAMACERE Clear */
#define USBC_UECON6CLR_RAMACEREC    (_U_(0x1) << USBC_UECON6CLR_RAMACEREC_Pos)
#define USBC_UECON6CLR_NBUSYBKEC_Pos 12           /**< \brief (USBC_UECON6CLR) NBUSYBKE Clear */
#define USBC_UECON6CLR_NBUSYBKEC    (_U_(0x1) << USBC_UECON6CLR_NBUSYBKEC_Pos)
#define USBC_UECON6CLR_FIFOCONC_Pos 14           /**< \brief (USBC_UECON6CLR) FIFOCON Clear */
#define USBC_UECON6CLR_FIFOCONC     (_U_(0x1) << USBC_UECON6CLR_FIFOCONC_Pos)
#define USBC_UECON6CLR_NYETDISC_Pos 17           /**< \brief (USBC_UECON6CLR) NYETDIS Clear */
#define USBC_UECON6CLR_NYETDISC     (_U_(0x1) << USBC_UECON6CLR_NYETDISC_Pos)
#define USBC_UECON6CLR_STALLRQC_Pos 19           /**< \brief (USBC_UECON6CLR) STALLEDE Clear */
#define USBC_UECON6CLR_STALLRQC     (_U_(0x1) << USBC_UECON6CLR_STALLRQC_Pos)
#define USBC_UECON6CLR_BUSY0C_Pos   24           /**< \brief (USBC_UECON6CLR) BUSY0 Clear */
#define USBC_UECON6CLR_BUSY0C       (_U_(0x1) << USBC_UECON6CLR_BUSY0C_Pos)
#define USBC_UECON6CLR_BUSY1C_Pos   25           /**< \brief (USBC_UECON6CLR) BUSY1 Clear */
#define USBC_UECON6CLR_BUSY1C       (_U_(0x1) << USBC_UECON6CLR_BUSY1C_Pos)
#define USBC_UECON6CLR_MASK         _U_(0x030A595F) /**< \brief (USBC_UECON6CLR) MASK Register */

/* -------- USBC_UECON7CLR : (USBC Offset: 0x23C) ( /W 32) TXINE Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXINEC:1;         /*!< bit:      0  TXINE Clear                        */
    uint32_t RXOUTEC:1;        /*!< bit:      1  RXOUTE Clear                       */
    uint32_t RXSTPEC:1;        /*!< bit:      2  RXOUTE Clear                       */
    uint32_t NAKOUTEC:1;       /*!< bit:      3  NAKOUTE Clear                      */
    uint32_t NAKINEC:1;        /*!< bit:      4  NAKINE Clear                       */
    uint32_t :1;               /*!< bit:      5  Reserved                           */
    uint32_t STALLEDEC:1;      /*!< bit:      6  RXSTPE Clear                       */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t NREPLYC:1;        /*!< bit:      8  NREPLY Clear                       */
    uint32_t :2;               /*!< bit:  9..10  Reserved                           */
    uint32_t RAMACEREC:1;      /*!< bit:     11  RAMACERE Clear                     */
    uint32_t NBUSYBKEC:1;      /*!< bit:     12  NBUSYBKE Clear                     */
    uint32_t :1;               /*!< bit:     13  Reserved                           */
    uint32_t FIFOCONC:1;       /*!< bit:     14  FIFOCON Clear                      */
    uint32_t :2;               /*!< bit: 15..16  Reserved                           */
    uint32_t NYETDISC:1;       /*!< bit:     17  NYETDIS Clear                      */
    uint32_t :1;               /*!< bit:     18  Reserved                           */
    uint32_t STALLRQC:1;       /*!< bit:     19  STALLEDE Clear                     */
    uint32_t :4;               /*!< bit: 20..23  Reserved                           */
    uint32_t BUSY0C:1;         /*!< bit:     24  BUSY0 Clear                        */
    uint32_t BUSY1C:1;         /*!< bit:     25  BUSY1 Clear                        */
    uint32_t :6;               /*!< bit: 26..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UECON7CLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UECON7CLR_OFFSET       0x23C        /**< \brief (USBC_UECON7CLR offset) TXINE Clear */
#define USBC_UECON7CLR_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UECON7CLR reset_value) TXINE Clear */

#define USBC_UECON7CLR_TXINEC_Pos   0            /**< \brief (USBC_UECON7CLR) TXINE Clear */
#define USBC_UECON7CLR_TXINEC       (_U_(0x1) << USBC_UECON7CLR_TXINEC_Pos)
#define USBC_UECON7CLR_RXOUTEC_Pos  1            /**< \brief (USBC_UECON7CLR) RXOUTE Clear */
#define USBC_UECON7CLR_RXOUTEC      (_U_(0x1) << USBC_UECON7CLR_RXOUTEC_Pos)
#define USBC_UECON7CLR_RXSTPEC_Pos  2            /**< \brief (USBC_UECON7CLR) RXOUTE Clear */
#define USBC_UECON7CLR_RXSTPEC      (_U_(0x1) << USBC_UECON7CLR_RXSTPEC_Pos)
#define USBC_UECON7CLR_NAKOUTEC_Pos 3            /**< \brief (USBC_UECON7CLR) NAKOUTE Clear */
#define USBC_UECON7CLR_NAKOUTEC     (_U_(0x1) << USBC_UECON7CLR_NAKOUTEC_Pos)
#define USBC_UECON7CLR_NAKINEC_Pos  4            /**< \brief (USBC_UECON7CLR) NAKINE Clear */
#define USBC_UECON7CLR_NAKINEC      (_U_(0x1) << USBC_UECON7CLR_NAKINEC_Pos)
#define USBC_UECON7CLR_STALLEDEC_Pos 6            /**< \brief (USBC_UECON7CLR) RXSTPE Clear */
#define USBC_UECON7CLR_STALLEDEC    (_U_(0x1) << USBC_UECON7CLR_STALLEDEC_Pos)
#define USBC_UECON7CLR_NREPLYC_Pos  8            /**< \brief (USBC_UECON7CLR) NREPLY Clear */
#define USBC_UECON7CLR_NREPLYC      (_U_(0x1) << USBC_UECON7CLR_NREPLYC_Pos)
#define USBC_UECON7CLR_RAMACEREC_Pos 11           /**< \brief (USBC_UECON7CLR) RAMACERE Clear */
#define USBC_UECON7CLR_RAMACEREC    (_U_(0x1) << USBC_UECON7CLR_RAMACEREC_Pos)
#define USBC_UECON7CLR_NBUSYBKEC_Pos 12           /**< \brief (USBC_UECON7CLR) NBUSYBKE Clear */
#define USBC_UECON7CLR_NBUSYBKEC    (_U_(0x1) << USBC_UECON7CLR_NBUSYBKEC_Pos)
#define USBC_UECON7CLR_FIFOCONC_Pos 14           /**< \brief (USBC_UECON7CLR) FIFOCON Clear */
#define USBC_UECON7CLR_FIFOCONC     (_U_(0x1) << USBC_UECON7CLR_FIFOCONC_Pos)
#define USBC_UECON7CLR_NYETDISC_Pos 17           /**< \brief (USBC_UECON7CLR) NYETDIS Clear */
#define USBC_UECON7CLR_NYETDISC     (_U_(0x1) << USBC_UECON7CLR_NYETDISC_Pos)
#define USBC_UECON7CLR_STALLRQC_Pos 19           /**< \brief (USBC_UECON7CLR) STALLEDE Clear */
#define USBC_UECON7CLR_STALLRQC     (_U_(0x1) << USBC_UECON7CLR_STALLRQC_Pos)
#define USBC_UECON7CLR_BUSY0C_Pos   24           /**< \brief (USBC_UECON7CLR) BUSY0 Clear */
#define USBC_UECON7CLR_BUSY0C       (_U_(0x1) << USBC_UECON7CLR_BUSY0C_Pos)
#define USBC_UECON7CLR_BUSY1C_Pos   25           /**< \brief (USBC_UECON7CLR) BUSY1 Clear */
#define USBC_UECON7CLR_BUSY1C       (_U_(0x1) << USBC_UECON7CLR_BUSY1C_Pos)
#define USBC_UECON7CLR_MASK         _U_(0x030A595F) /**< \brief (USBC_UECON7CLR) MASK Register */

/* -------- USBC_UHCON : (USBC Offset: 0x400) (R/W 32) Host General Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t :8;               /*!< bit:  0.. 7  Reserved                           */
    uint32_t SOFE:1;           /*!< bit:      8  SOF Enable                         */
    uint32_t RESET:1;          /*!< bit:      9  Send USB Reset                     */
    uint32_t RESUME:1;         /*!< bit:     10  Send USB Resume                    */
    uint32_t :1;               /*!< bit:     11  Reserved                           */
    uint32_t SPDCONF:2;        /*!< bit: 12..13  Speed Configuration                */
    uint32_t :2;               /*!< bit: 14..15  Reserved                           */
    uint32_t TSTJ:1;           /*!< bit:     16  Test J                             */
    uint32_t TSTK:1;           /*!< bit:     17  Test K                             */
    uint32_t :14;              /*!< bit: 18..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UHCON_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UHCON_OFFSET           0x400        /**< \brief (USBC_UHCON offset) Host General Control Register */
#define USBC_UHCON_RESETVALUE       _U_(0x00000000); /**< \brief (USBC_UHCON reset_value) Host General Control Register */

#define USBC_UHCON_SOFE_Pos         8            /**< \brief (USBC_UHCON) SOF Enable */
#define USBC_UHCON_SOFE             (_U_(0x1) << USBC_UHCON_SOFE_Pos)
#define USBC_UHCON_RESET_Pos        9            /**< \brief (USBC_UHCON) Send USB Reset */
#define USBC_UHCON_RESET            (_U_(0x1) << USBC_UHCON_RESET_Pos)
#define USBC_UHCON_RESUME_Pos       10           /**< \brief (USBC_UHCON) Send USB Resume */
#define USBC_UHCON_RESUME           (_U_(0x1) << USBC_UHCON_RESUME_Pos)
#define USBC_UHCON_SPDCONF_Pos      12           /**< \brief (USBC_UHCON) Speed Configuration */
#define USBC_UHCON_SPDCONF_Msk      (_U_(0x3) << USBC_UHCON_SPDCONF_Pos)
#define USBC_UHCON_SPDCONF(value)   (USBC_UHCON_SPDCONF_Msk & ((value) << USBC_UHCON_SPDCONF_Pos))
#define USBC_UHCON_TSTJ_Pos         16           /**< \brief (USBC_UHCON) Test J */
#define USBC_UHCON_TSTJ             (_U_(0x1) << USBC_UHCON_TSTJ_Pos)
#define USBC_UHCON_TSTK_Pos         17           /**< \brief (USBC_UHCON) Test K */
#define USBC_UHCON_TSTK             (_U_(0x1) << USBC_UHCON_TSTK_Pos)
#define USBC_UHCON_MASK             _U_(0x00033700) /**< \brief (USBC_UHCON) MASK Register */

/* -------- USBC_UHINT : (USBC Offset: 0x404) (R/  32) Host Global Interrupt Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DCONNI:1;         /*!< bit:      0  Device Connection Interrupt        */
    uint32_t DDISCI:1;         /*!< bit:      1  Device Disconnection Interrupt     */
    uint32_t RSTI:1;           /*!< bit:      2  USB Reset Sent Interrupt           */
    uint32_t RSMEDI:1;         /*!< bit:      3  Downstream Resume Sent Interrupt   */
    uint32_t RXRSMI:1;         /*!< bit:      4  Upstream Resume Received Interrupt */
    uint32_t HSOFI:1;          /*!< bit:      5  Host SOF Interrupt                 */
    uint32_t HWUPI:1;          /*!< bit:      6  Host Wake-Up Interrupt             */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t P0INT:1;          /*!< bit:      8  Pipe 0 Interrupt                   */
    uint32_t P1INT:1;          /*!< bit:      9  Pipe 1 Interrupt                   */
    uint32_t P2INT:1;          /*!< bit:     10  Pipe 2 Interrupt                   */
    uint32_t P3INT:1;          /*!< bit:     11  Pipe 3 Interrupt                   */
    uint32_t P4INT:1;          /*!< bit:     12  Pipe 4 Interrupt                   */
    uint32_t P5INT:1;          /*!< bit:     13  Pipe 5 Interrupt                   */
    uint32_t P6INT:1;          /*!< bit:     14  Pipe 6 Interrupt                   */
    uint32_t :17;              /*!< bit: 15..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UHINT_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UHINT_OFFSET           0x404        /**< \brief (USBC_UHINT offset) Host Global Interrupt Register */
#define USBC_UHINT_RESETVALUE       _U_(0x00000000); /**< \brief (USBC_UHINT reset_value) Host Global Interrupt Register */

#define USBC_UHINT_DCONNI_Pos       0            /**< \brief (USBC_UHINT) Device Connection Interrupt */
#define USBC_UHINT_DCONNI           (_U_(0x1) << USBC_UHINT_DCONNI_Pos)
#define USBC_UHINT_DDISCI_Pos       1            /**< \brief (USBC_UHINT) Device Disconnection Interrupt */
#define USBC_UHINT_DDISCI           (_U_(0x1) << USBC_UHINT_DDISCI_Pos)
#define USBC_UHINT_RSTI_Pos         2            /**< \brief (USBC_UHINT) USB Reset Sent Interrupt */
#define USBC_UHINT_RSTI             (_U_(0x1) << USBC_UHINT_RSTI_Pos)
#define USBC_UHINT_RSMEDI_Pos       3            /**< \brief (USBC_UHINT) Downstream Resume Sent Interrupt */
#define USBC_UHINT_RSMEDI           (_U_(0x1) << USBC_UHINT_RSMEDI_Pos)
#define USBC_UHINT_RXRSMI_Pos       4            /**< \brief (USBC_UHINT) Upstream Resume Received Interrupt */
#define USBC_UHINT_RXRSMI           (_U_(0x1) << USBC_UHINT_RXRSMI_Pos)
#define USBC_UHINT_HSOFI_Pos        5            /**< \brief (USBC_UHINT) Host SOF Interrupt */
#define USBC_UHINT_HSOFI            (_U_(0x1) << USBC_UHINT_HSOFI_Pos)
#define USBC_UHINT_HWUPI_Pos        6            /**< \brief (USBC_UHINT) Host Wake-Up Interrupt */
#define USBC_UHINT_HWUPI            (_U_(0x1) << USBC_UHINT_HWUPI_Pos)
#define USBC_UHINT_P0INT_Pos        8            /**< \brief (USBC_UHINT) Pipe 0 Interrupt */
#define USBC_UHINT_P0INT            (_U_(0x1) << USBC_UHINT_P0INT_Pos)
#define USBC_UHINT_P1INT_Pos        9            /**< \brief (USBC_UHINT) Pipe 1 Interrupt */
#define USBC_UHINT_P1INT            (_U_(0x1) << USBC_UHINT_P1INT_Pos)
#define USBC_UHINT_P2INT_Pos        10           /**< \brief (USBC_UHINT) Pipe 2 Interrupt */
#define USBC_UHINT_P2INT            (_U_(0x1) << USBC_UHINT_P2INT_Pos)
#define USBC_UHINT_P3INT_Pos        11           /**< \brief (USBC_UHINT) Pipe 3 Interrupt */
#define USBC_UHINT_P3INT            (_U_(0x1) << USBC_UHINT_P3INT_Pos)
#define USBC_UHINT_P4INT_Pos        12           /**< \brief (USBC_UHINT) Pipe 4 Interrupt */
#define USBC_UHINT_P4INT            (_U_(0x1) << USBC_UHINT_P4INT_Pos)
#define USBC_UHINT_P5INT_Pos        13           /**< \brief (USBC_UHINT) Pipe 5 Interrupt */
#define USBC_UHINT_P5INT            (_U_(0x1) << USBC_UHINT_P5INT_Pos)
#define USBC_UHINT_P6INT_Pos        14           /**< \brief (USBC_UHINT) Pipe 6 Interrupt */
#define USBC_UHINT_P6INT            (_U_(0x1) << USBC_UHINT_P6INT_Pos)
#define USBC_UHINT_MASK             _U_(0x00007F7F) /**< \brief (USBC_UHINT) MASK Register */

/* -------- USBC_UHINTCLR : (USBC Offset: 0x408) ( /W 32) Host Global Interrrupt Clear Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DCONNIC:1;        /*!< bit:      0  DCONNI Clear                       */
    uint32_t DDISCIC:1;        /*!< bit:      1  DDISCI Clear                       */
    uint32_t RSTIC:1;          /*!< bit:      2  RSTI Clear                         */
    uint32_t RSMEDIC:1;        /*!< bit:      3  RSMEDI Clear                       */
    uint32_t RXRSMIC:1;        /*!< bit:      4  RXRSMI Clear                       */
    uint32_t HSOFIC:1;         /*!< bit:      5  HSOFI Clear                        */
    uint32_t HWUPIC:1;         /*!< bit:      6  HWUPI Clear                        */
    uint32_t :25;              /*!< bit:  7..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UHINTCLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UHINTCLR_OFFSET        0x408        /**< \brief (USBC_UHINTCLR offset) Host Global Interrrupt Clear Register */
#define USBC_UHINTCLR_RESETVALUE    _U_(0x00000000); /**< \brief (USBC_UHINTCLR reset_value) Host Global Interrrupt Clear Register */

#define USBC_UHINTCLR_DCONNIC_Pos   0            /**< \brief (USBC_UHINTCLR) DCONNI Clear */
#define USBC_UHINTCLR_DCONNIC       (_U_(0x1) << USBC_UHINTCLR_DCONNIC_Pos)
#define USBC_UHINTCLR_DDISCIC_Pos   1            /**< \brief (USBC_UHINTCLR) DDISCI Clear */
#define USBC_UHINTCLR_DDISCIC       (_U_(0x1) << USBC_UHINTCLR_DDISCIC_Pos)
#define USBC_UHINTCLR_RSTIC_Pos     2            /**< \brief (USBC_UHINTCLR) RSTI Clear */
#define USBC_UHINTCLR_RSTIC         (_U_(0x1) << USBC_UHINTCLR_RSTIC_Pos)
#define USBC_UHINTCLR_RSMEDIC_Pos   3            /**< \brief (USBC_UHINTCLR) RSMEDI Clear */
#define USBC_UHINTCLR_RSMEDIC       (_U_(0x1) << USBC_UHINTCLR_RSMEDIC_Pos)
#define USBC_UHINTCLR_RXRSMIC_Pos   4            /**< \brief (USBC_UHINTCLR) RXRSMI Clear */
#define USBC_UHINTCLR_RXRSMIC       (_U_(0x1) << USBC_UHINTCLR_RXRSMIC_Pos)
#define USBC_UHINTCLR_HSOFIC_Pos    5            /**< \brief (USBC_UHINTCLR) HSOFI Clear */
#define USBC_UHINTCLR_HSOFIC        (_U_(0x1) << USBC_UHINTCLR_HSOFIC_Pos)
#define USBC_UHINTCLR_HWUPIC_Pos    6            /**< \brief (USBC_UHINTCLR) HWUPI Clear */
#define USBC_UHINTCLR_HWUPIC        (_U_(0x1) << USBC_UHINTCLR_HWUPIC_Pos)
#define USBC_UHINTCLR_MASK          _U_(0x0000007F) /**< \brief (USBC_UHINTCLR) MASK Register */

/* -------- USBC_UHINTSET : (USBC Offset: 0x40C) ( /W 32) Host Global Interrupt Set Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DCONNIS:1;        /*!< bit:      0  DCONNI Set                         */
    uint32_t DDISCIS:1;        /*!< bit:      1  DDISCI Set                         */
    uint32_t RSTIS:1;          /*!< bit:      2  RSTI Set                           */
    uint32_t RSMEDIS:1;        /*!< bit:      3  RSMEDI Set                         */
    uint32_t RXRSMIS:1;        /*!< bit:      4  RXRSMI Set                         */
    uint32_t HSOFIS:1;         /*!< bit:      5  HSOFI Set                          */
    uint32_t HWUPIS:1;         /*!< bit:      6  HWUPI Set                          */
    uint32_t :25;              /*!< bit:  7..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UHINTSET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UHINTSET_OFFSET        0x40C        /**< \brief (USBC_UHINTSET offset) Host Global Interrupt Set Register */
#define USBC_UHINTSET_RESETVALUE    _U_(0x00000000); /**< \brief (USBC_UHINTSET reset_value) Host Global Interrupt Set Register */

#define USBC_UHINTSET_DCONNIS_Pos   0            /**< \brief (USBC_UHINTSET) DCONNI Set */
#define USBC_UHINTSET_DCONNIS       (_U_(0x1) << USBC_UHINTSET_DCONNIS_Pos)
#define USBC_UHINTSET_DDISCIS_Pos   1            /**< \brief (USBC_UHINTSET) DDISCI Set */
#define USBC_UHINTSET_DDISCIS       (_U_(0x1) << USBC_UHINTSET_DDISCIS_Pos)
#define USBC_UHINTSET_RSTIS_Pos     2            /**< \brief (USBC_UHINTSET) RSTI Set */
#define USBC_UHINTSET_RSTIS         (_U_(0x1) << USBC_UHINTSET_RSTIS_Pos)
#define USBC_UHINTSET_RSMEDIS_Pos   3            /**< \brief (USBC_UHINTSET) RSMEDI Set */
#define USBC_UHINTSET_RSMEDIS       (_U_(0x1) << USBC_UHINTSET_RSMEDIS_Pos)
#define USBC_UHINTSET_RXRSMIS_Pos   4            /**< \brief (USBC_UHINTSET) RXRSMI Set */
#define USBC_UHINTSET_RXRSMIS       (_U_(0x1) << USBC_UHINTSET_RXRSMIS_Pos)
#define USBC_UHINTSET_HSOFIS_Pos    5            /**< \brief (USBC_UHINTSET) HSOFI Set */
#define USBC_UHINTSET_HSOFIS        (_U_(0x1) << USBC_UHINTSET_HSOFIS_Pos)
#define USBC_UHINTSET_HWUPIS_Pos    6            /**< \brief (USBC_UHINTSET) HWUPI Set */
#define USBC_UHINTSET_HWUPIS        (_U_(0x1) << USBC_UHINTSET_HWUPIS_Pos)
#define USBC_UHINTSET_MASK          _U_(0x0000007F) /**< \brief (USBC_UHINTSET) MASK Register */

/* -------- USBC_UHINTE : (USBC Offset: 0x410) (R/  32) Host Global Interrupt Enable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DCONNIE:1;        /*!< bit:      0  DCONNI Enable                      */
    uint32_t DDISCIE:1;        /*!< bit:      1  DDISCI Enable                      */
    uint32_t RSTIE:1;          /*!< bit:      2  RSTI Enable                        */
    uint32_t RSMEDIE:1;        /*!< bit:      3  RSMEDI Enable                      */
    uint32_t RXRSMIE:1;        /*!< bit:      4  RXRSMI Enable                      */
    uint32_t HSOFIE:1;         /*!< bit:      5  HSOFI Enable                       */
    uint32_t HWUPIE:1;         /*!< bit:      6  HWUPI Enable                       */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t P0INTE:1;         /*!< bit:      8  P0INT Enable                       */
    uint32_t P1INTE:1;         /*!< bit:      9  P1INT Enable                       */
    uint32_t P2INTE:1;         /*!< bit:     10  P2INT Enable                       */
    uint32_t P3INTE:1;         /*!< bit:     11  P3INT Enable                       */
    uint32_t P4INTE:1;         /*!< bit:     12  P4INT Enable                       */
    uint32_t P5INTE:1;         /*!< bit:     13  P5INT Enable                       */
    uint32_t P6INTE:1;         /*!< bit:     14  P6INT Enable                       */
    uint32_t P7INTE:1;         /*!< bit:     15  P7INT Enable                       */
    uint32_t :16;              /*!< bit: 16..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UHINTE_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UHINTE_OFFSET          0x410        /**< \brief (USBC_UHINTE offset) Host Global Interrupt Enable Register */
#define USBC_UHINTE_RESETVALUE      _U_(0x00000000); /**< \brief (USBC_UHINTE reset_value) Host Global Interrupt Enable Register */

#define USBC_UHINTE_DCONNIE_Pos     0            /**< \brief (USBC_UHINTE) DCONNI Enable */
#define USBC_UHINTE_DCONNIE         (_U_(0x1) << USBC_UHINTE_DCONNIE_Pos)
#define USBC_UHINTE_DDISCIE_Pos     1            /**< \brief (USBC_UHINTE) DDISCI Enable */
#define USBC_UHINTE_DDISCIE         (_U_(0x1) << USBC_UHINTE_DDISCIE_Pos)
#define USBC_UHINTE_RSTIE_Pos       2            /**< \brief (USBC_UHINTE) RSTI Enable */
#define USBC_UHINTE_RSTIE           (_U_(0x1) << USBC_UHINTE_RSTIE_Pos)
#define USBC_UHINTE_RSMEDIE_Pos     3            /**< \brief (USBC_UHINTE) RSMEDI Enable */
#define USBC_UHINTE_RSMEDIE         (_U_(0x1) << USBC_UHINTE_RSMEDIE_Pos)
#define USBC_UHINTE_RXRSMIE_Pos     4            /**< \brief (USBC_UHINTE) RXRSMI Enable */
#define USBC_UHINTE_RXRSMIE         (_U_(0x1) << USBC_UHINTE_RXRSMIE_Pos)
#define USBC_UHINTE_HSOFIE_Pos      5            /**< \brief (USBC_UHINTE) HSOFI Enable */
#define USBC_UHINTE_HSOFIE          (_U_(0x1) << USBC_UHINTE_HSOFIE_Pos)
#define USBC_UHINTE_HWUPIE_Pos      6            /**< \brief (USBC_UHINTE) HWUPI Enable */
#define USBC_UHINTE_HWUPIE          (_U_(0x1) << USBC_UHINTE_HWUPIE_Pos)
#define USBC_UHINTE_P0INTE_Pos      8            /**< \brief (USBC_UHINTE) P0INT Enable */
#define USBC_UHINTE_P0INTE          (_U_(0x1) << USBC_UHINTE_P0INTE_Pos)
#define USBC_UHINTE_P1INTE_Pos      9            /**< \brief (USBC_UHINTE) P1INT Enable */
#define USBC_UHINTE_P1INTE          (_U_(0x1) << USBC_UHINTE_P1INTE_Pos)
#define USBC_UHINTE_P2INTE_Pos      10           /**< \brief (USBC_UHINTE) P2INT Enable */
#define USBC_UHINTE_P2INTE          (_U_(0x1) << USBC_UHINTE_P2INTE_Pos)
#define USBC_UHINTE_P3INTE_Pos      11           /**< \brief (USBC_UHINTE) P3INT Enable */
#define USBC_UHINTE_P3INTE          (_U_(0x1) << USBC_UHINTE_P3INTE_Pos)
#define USBC_UHINTE_P4INTE_Pos      12           /**< \brief (USBC_UHINTE) P4INT Enable */
#define USBC_UHINTE_P4INTE          (_U_(0x1) << USBC_UHINTE_P4INTE_Pos)
#define USBC_UHINTE_P5INTE_Pos      13           /**< \brief (USBC_UHINTE) P5INT Enable */
#define USBC_UHINTE_P5INTE          (_U_(0x1) << USBC_UHINTE_P5INTE_Pos)
#define USBC_UHINTE_P6INTE_Pos      14           /**< \brief (USBC_UHINTE) P6INT Enable */
#define USBC_UHINTE_P6INTE          (_U_(0x1) << USBC_UHINTE_P6INTE_Pos)
#define USBC_UHINTE_P7INTE_Pos      15           /**< \brief (USBC_UHINTE) P7INT Enable */
#define USBC_UHINTE_P7INTE          (_U_(0x1) << USBC_UHINTE_P7INTE_Pos)
#define USBC_UHINTE_MASK            _U_(0x0000FF7F) /**< \brief (USBC_UHINTE) MASK Register */

/* -------- USBC_UHINTECLR : (USBC Offset: 0x414) ( /W 32) Host Global Interrupt Enable Clear Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DCONNIEC:1;       /*!< bit:      0  DCONNIE Clear                      */
    uint32_t DDISCIEC:1;       /*!< bit:      1  DDISCIE Clear                      */
    uint32_t RSTIEC:1;         /*!< bit:      2  RSTIE Clear                        */
    uint32_t RSMEDIEC:1;       /*!< bit:      3  RSMEDIE Clear                      */
    uint32_t RXRSMIEC:1;       /*!< bit:      4  RXRSMIE Clear                      */
    uint32_t HSOFIEC:1;        /*!< bit:      5  HSOFIE Clear                       */
    uint32_t HWUPIEC:1;        /*!< bit:      6  HWUPIE Clear                       */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t P0INTEC:1;        /*!< bit:      8  P0INTE Clear                       */
    uint32_t P1INTEC:1;        /*!< bit:      9  P1INTE Clear                       */
    uint32_t P2INTEC:1;        /*!< bit:     10  P2INTE Clear                       */
    uint32_t P3INTEC:1;        /*!< bit:     11  P3INTE Clear                       */
    uint32_t P4INTEC:1;        /*!< bit:     12  P4INTE Clear                       */
    uint32_t P5INTEC:1;        /*!< bit:     13  P5INTE Clear                       */
    uint32_t P6INTEC:1;        /*!< bit:     14  P6INTE Clear                       */
    uint32_t P7INTEC:1;        /*!< bit:     15  P7INTE Clear                       */
    uint32_t :16;              /*!< bit: 16..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UHINTECLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UHINTECLR_OFFSET       0x414        /**< \brief (USBC_UHINTECLR offset) Host Global Interrupt Enable Clear Register */
#define USBC_UHINTECLR_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UHINTECLR reset_value) Host Global Interrupt Enable Clear Register */

#define USBC_UHINTECLR_DCONNIEC_Pos 0            /**< \brief (USBC_UHINTECLR) DCONNIE Clear */
#define USBC_UHINTECLR_DCONNIEC     (_U_(0x1) << USBC_UHINTECLR_DCONNIEC_Pos)
#define USBC_UHINTECLR_DDISCIEC_Pos 1            /**< \brief (USBC_UHINTECLR) DDISCIE Clear */
#define USBC_UHINTECLR_DDISCIEC     (_U_(0x1) << USBC_UHINTECLR_DDISCIEC_Pos)
#define USBC_UHINTECLR_RSTIEC_Pos   2            /**< \brief (USBC_UHINTECLR) RSTIE Clear */
#define USBC_UHINTECLR_RSTIEC       (_U_(0x1) << USBC_UHINTECLR_RSTIEC_Pos)
#define USBC_UHINTECLR_RSMEDIEC_Pos 3            /**< \brief (USBC_UHINTECLR) RSMEDIE Clear */
#define USBC_UHINTECLR_RSMEDIEC     (_U_(0x1) << USBC_UHINTECLR_RSMEDIEC_Pos)
#define USBC_UHINTECLR_RXRSMIEC_Pos 4            /**< \brief (USBC_UHINTECLR) RXRSMIE Clear */
#define USBC_UHINTECLR_RXRSMIEC     (_U_(0x1) << USBC_UHINTECLR_RXRSMIEC_Pos)
#define USBC_UHINTECLR_HSOFIEC_Pos  5            /**< \brief (USBC_UHINTECLR) HSOFIE Clear */
#define USBC_UHINTECLR_HSOFIEC      (_U_(0x1) << USBC_UHINTECLR_HSOFIEC_Pos)
#define USBC_UHINTECLR_HWUPIEC_Pos  6            /**< \brief (USBC_UHINTECLR) HWUPIE Clear */
#define USBC_UHINTECLR_HWUPIEC      (_U_(0x1) << USBC_UHINTECLR_HWUPIEC_Pos)
#define USBC_UHINTECLR_P0INTEC_Pos  8            /**< \brief (USBC_UHINTECLR) P0INTE Clear */
#define USBC_UHINTECLR_P0INTEC      (_U_(0x1) << USBC_UHINTECLR_P0INTEC_Pos)
#define USBC_UHINTECLR_P1INTEC_Pos  9            /**< \brief (USBC_UHINTECLR) P1INTE Clear */
#define USBC_UHINTECLR_P1INTEC      (_U_(0x1) << USBC_UHINTECLR_P1INTEC_Pos)
#define USBC_UHINTECLR_P2INTEC_Pos  10           /**< \brief (USBC_UHINTECLR) P2INTE Clear */
#define USBC_UHINTECLR_P2INTEC      (_U_(0x1) << USBC_UHINTECLR_P2INTEC_Pos)
#define USBC_UHINTECLR_P3INTEC_Pos  11           /**< \brief (USBC_UHINTECLR) P3INTE Clear */
#define USBC_UHINTECLR_P3INTEC      (_U_(0x1) << USBC_UHINTECLR_P3INTEC_Pos)
#define USBC_UHINTECLR_P4INTEC_Pos  12           /**< \brief (USBC_UHINTECLR) P4INTE Clear */
#define USBC_UHINTECLR_P4INTEC      (_U_(0x1) << USBC_UHINTECLR_P4INTEC_Pos)
#define USBC_UHINTECLR_P5INTEC_Pos  13           /**< \brief (USBC_UHINTECLR) P5INTE Clear */
#define USBC_UHINTECLR_P5INTEC      (_U_(0x1) << USBC_UHINTECLR_P5INTEC_Pos)
#define USBC_UHINTECLR_P6INTEC_Pos  14           /**< \brief (USBC_UHINTECLR) P6INTE Clear */
#define USBC_UHINTECLR_P6INTEC      (_U_(0x1) << USBC_UHINTECLR_P6INTEC_Pos)
#define USBC_UHINTECLR_P7INTEC_Pos  15           /**< \brief (USBC_UHINTECLR) P7INTE Clear */
#define USBC_UHINTECLR_P7INTEC      (_U_(0x1) << USBC_UHINTECLR_P7INTEC_Pos)
#define USBC_UHINTECLR_MASK         _U_(0x0000FF7F) /**< \brief (USBC_UHINTECLR) MASK Register */

/* -------- USBC_UHINTESET : (USBC Offset: 0x418) ( /W 32) Host Global Interrupt Enable Set Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DCONNIES:1;       /*!< bit:      0  DCONNIE Set                        */
    uint32_t DDISCIES:1;       /*!< bit:      1  DDISCIE Set                        */
    uint32_t RSTIES:1;         /*!< bit:      2  RSTIE Set                          */
    uint32_t RSMEDIES:1;       /*!< bit:      3  RSMEDIE Set                        */
    uint32_t RXRSMIES:1;       /*!< bit:      4  RXRSMIE Set                        */
    uint32_t HSOFIES:1;        /*!< bit:      5  HSOFIE Set                         */
    uint32_t HWUPIES:1;        /*!< bit:      6  HWUPIE Set                         */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t P0INTES:1;        /*!< bit:      8  P0INTE Set                         */
    uint32_t P1INTES:1;        /*!< bit:      9  P1INTE Set                         */
    uint32_t P2INTES:1;        /*!< bit:     10  P2INTE Set                         */
    uint32_t P3INTES:1;        /*!< bit:     11  P3INTE Set                         */
    uint32_t P4INTES:1;        /*!< bit:     12  P4INTE Set                         */
    uint32_t P5INTES:1;        /*!< bit:     13  P5INTE Set                         */
    uint32_t P6INTES:1;        /*!< bit:     14  P6INTE Set                         */
    uint32_t P7INTES:1;        /*!< bit:     15  P7INTE Set                         */
    uint32_t :16;              /*!< bit: 16..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UHINTESET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UHINTESET_OFFSET       0x418        /**< \brief (USBC_UHINTESET offset) Host Global Interrupt Enable Set Register */
#define USBC_UHINTESET_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UHINTESET reset_value) Host Global Interrupt Enable Set Register */

#define USBC_UHINTESET_DCONNIES_Pos 0            /**< \brief (USBC_UHINTESET) DCONNIE Set */
#define USBC_UHINTESET_DCONNIES     (_U_(0x1) << USBC_UHINTESET_DCONNIES_Pos)
#define USBC_UHINTESET_DDISCIES_Pos 1            /**< \brief (USBC_UHINTESET) DDISCIE Set */
#define USBC_UHINTESET_DDISCIES     (_U_(0x1) << USBC_UHINTESET_DDISCIES_Pos)
#define USBC_UHINTESET_RSTIES_Pos   2            /**< \brief (USBC_UHINTESET) RSTIE Set */
#define USBC_UHINTESET_RSTIES       (_U_(0x1) << USBC_UHINTESET_RSTIES_Pos)
#define USBC_UHINTESET_RSMEDIES_Pos 3            /**< \brief (USBC_UHINTESET) RSMEDIE Set */
#define USBC_UHINTESET_RSMEDIES     (_U_(0x1) << USBC_UHINTESET_RSMEDIES_Pos)
#define USBC_UHINTESET_RXRSMIES_Pos 4            /**< \brief (USBC_UHINTESET) RXRSMIE Set */
#define USBC_UHINTESET_RXRSMIES     (_U_(0x1) << USBC_UHINTESET_RXRSMIES_Pos)
#define USBC_UHINTESET_HSOFIES_Pos  5            /**< \brief (USBC_UHINTESET) HSOFIE Set */
#define USBC_UHINTESET_HSOFIES      (_U_(0x1) << USBC_UHINTESET_HSOFIES_Pos)
#define USBC_UHINTESET_HWUPIES_Pos  6            /**< \brief (USBC_UHINTESET) HWUPIE Set */
#define USBC_UHINTESET_HWUPIES      (_U_(0x1) << USBC_UHINTESET_HWUPIES_Pos)
#define USBC_UHINTESET_P0INTES_Pos  8            /**< \brief (USBC_UHINTESET) P0INTE Set */
#define USBC_UHINTESET_P0INTES      (_U_(0x1) << USBC_UHINTESET_P0INTES_Pos)
#define USBC_UHINTESET_P1INTES_Pos  9            /**< \brief (USBC_UHINTESET) P1INTE Set */
#define USBC_UHINTESET_P1INTES      (_U_(0x1) << USBC_UHINTESET_P1INTES_Pos)
#define USBC_UHINTESET_P2INTES_Pos  10           /**< \brief (USBC_UHINTESET) P2INTE Set */
#define USBC_UHINTESET_P2INTES      (_U_(0x1) << USBC_UHINTESET_P2INTES_Pos)
#define USBC_UHINTESET_P3INTES_Pos  11           /**< \brief (USBC_UHINTESET) P3INTE Set */
#define USBC_UHINTESET_P3INTES      (_U_(0x1) << USBC_UHINTESET_P3INTES_Pos)
#define USBC_UHINTESET_P4INTES_Pos  12           /**< \brief (USBC_UHINTESET) P4INTE Set */
#define USBC_UHINTESET_P4INTES      (_U_(0x1) << USBC_UHINTESET_P4INTES_Pos)
#define USBC_UHINTESET_P5INTES_Pos  13           /**< \brief (USBC_UHINTESET) P5INTE Set */
#define USBC_UHINTESET_P5INTES      (_U_(0x1) << USBC_UHINTESET_P5INTES_Pos)
#define USBC_UHINTESET_P6INTES_Pos  14           /**< \brief (USBC_UHINTESET) P6INTE Set */
#define USBC_UHINTESET_P6INTES      (_U_(0x1) << USBC_UHINTESET_P6INTES_Pos)
#define USBC_UHINTESET_P7INTES_Pos  15           /**< \brief (USBC_UHINTESET) P7INTE Set */
#define USBC_UHINTESET_P7INTES      (_U_(0x1) << USBC_UHINTESET_P7INTES_Pos)
#define USBC_UHINTESET_MASK         _U_(0x0000FF7F) /**< \brief (USBC_UHINTESET) MASK Register */

/* -------- USBC_UPRST : (USBC Offset: 0x41C) (R/W 32) Pipe Reset Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t PEN0:1;           /*!< bit:      0  Pipe0 Enable                       */
    uint32_t PEN1:1;           /*!< bit:      1  Pipe1 Enable                       */
    uint32_t PEN2:1;           /*!< bit:      2  Pipe2 Enable                       */
    uint32_t PEN3:1;           /*!< bit:      3  Pipe3 Enable                       */
    uint32_t PEN4:1;           /*!< bit:      4  Pipe4 Enable                       */
    uint32_t PEN5:1;           /*!< bit:      5  Pipe5 Enable                       */
    uint32_t PEN6:1;           /*!< bit:      6  Pipe6 Enable                       */
    uint32_t PEN7:1;           /*!< bit:      7  Pipe7 Enable                       */
    uint32_t :24;              /*!< bit:  8..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPRST_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPRST_OFFSET           0x41C        /**< \brief (USBC_UPRST offset) Pipe Reset Register */
#define USBC_UPRST_RESETVALUE       _U_(0x00000000); /**< \brief (USBC_UPRST reset_value) Pipe Reset Register */

#define USBC_UPRST_PEN0_Pos         0            /**< \brief (USBC_UPRST) Pipe0 Enable */
#define USBC_UPRST_PEN0             (_U_(0x1) << USBC_UPRST_PEN0_Pos)
#define USBC_UPRST_PEN1_Pos         1            /**< \brief (USBC_UPRST) Pipe1 Enable */
#define USBC_UPRST_PEN1             (_U_(0x1) << USBC_UPRST_PEN1_Pos)
#define USBC_UPRST_PEN2_Pos         2            /**< \brief (USBC_UPRST) Pipe2 Enable */
#define USBC_UPRST_PEN2             (_U_(0x1) << USBC_UPRST_PEN2_Pos)
#define USBC_UPRST_PEN3_Pos         3            /**< \brief (USBC_UPRST) Pipe3 Enable */
#define USBC_UPRST_PEN3             (_U_(0x1) << USBC_UPRST_PEN3_Pos)
#define USBC_UPRST_PEN4_Pos         4            /**< \brief (USBC_UPRST) Pipe4 Enable */
#define USBC_UPRST_PEN4             (_U_(0x1) << USBC_UPRST_PEN4_Pos)
#define USBC_UPRST_PEN5_Pos         5            /**< \brief (USBC_UPRST) Pipe5 Enable */
#define USBC_UPRST_PEN5             (_U_(0x1) << USBC_UPRST_PEN5_Pos)
#define USBC_UPRST_PEN6_Pos         6            /**< \brief (USBC_UPRST) Pipe6 Enable */
#define USBC_UPRST_PEN6             (_U_(0x1) << USBC_UPRST_PEN6_Pos)
#define USBC_UPRST_PEN7_Pos         7            /**< \brief (USBC_UPRST) Pipe7 Enable */
#define USBC_UPRST_PEN7             (_U_(0x1) << USBC_UPRST_PEN7_Pos)
#define USBC_UPRST_MASK             _U_(0x000000FF) /**< \brief (USBC_UPRST) MASK Register */

/* -------- USBC_UHFNUM : (USBC Offset: 0x420) (R/W 32) Host Frame Number Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t MFNUM:3;          /*!< bit:  0.. 2  Micro Frame Number                 */
    uint32_t FNUM:11;          /*!< bit:  3..13  Frame Number                       */
    uint32_t :2;               /*!< bit: 14..15  Reserved                           */
    uint32_t FLENHIGH:8;       /*!< bit: 16..23  Frame Length                       */
    uint32_t :8;               /*!< bit: 24..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UHFNUM_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UHFNUM_OFFSET          0x420        /**< \brief (USBC_UHFNUM offset) Host Frame Number Register */
#define USBC_UHFNUM_RESETVALUE      _U_(0x00000000); /**< \brief (USBC_UHFNUM reset_value) Host Frame Number Register */

#define USBC_UHFNUM_MFNUM_Pos       0            /**< \brief (USBC_UHFNUM) Micro Frame Number */
#define USBC_UHFNUM_MFNUM_Msk       (_U_(0x7) << USBC_UHFNUM_MFNUM_Pos)
#define USBC_UHFNUM_MFNUM(value)    (USBC_UHFNUM_MFNUM_Msk & ((value) << USBC_UHFNUM_MFNUM_Pos))
#define USBC_UHFNUM_FNUM_Pos        3            /**< \brief (USBC_UHFNUM) Frame Number */
#define USBC_UHFNUM_FNUM_Msk        (_U_(0x7FF) << USBC_UHFNUM_FNUM_Pos)
#define USBC_UHFNUM_FNUM(value)     (USBC_UHFNUM_FNUM_Msk & ((value) << USBC_UHFNUM_FNUM_Pos))
#define USBC_UHFNUM_FLENHIGH_Pos    16           /**< \brief (USBC_UHFNUM) Frame Length */
#define USBC_UHFNUM_FLENHIGH_Msk    (_U_(0xFF) << USBC_UHFNUM_FLENHIGH_Pos)
#define USBC_UHFNUM_FLENHIGH(value) (USBC_UHFNUM_FLENHIGH_Msk & ((value) << USBC_UHFNUM_FLENHIGH_Pos))
#define USBC_UHFNUM_MASK            _U_(0x00FF3FFF) /**< \brief (USBC_UHFNUM) MASK Register */

/* -------- USBC_UHSOFC : (USBC Offset: 0x424) (R/W 32) Host Start of Frame Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t FLENC:14;         /*!< bit:  0..13  Frame Length Control               */
    uint32_t :2;               /*!< bit: 14..15  Reserved                           */
    uint32_t FLENCE:1;         /*!< bit:     16  Frame Length Control Enable        */
    uint32_t :15;              /*!< bit: 17..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UHSOFC_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UHSOFC_OFFSET          0x424        /**< \brief (USBC_UHSOFC offset) Host Start of Frame Control Register */
#define USBC_UHSOFC_RESETVALUE      _U_(0x00000000); /**< \brief (USBC_UHSOFC reset_value) Host Start of Frame Control Register */

#define USBC_UHSOFC_FLENC_Pos       0            /**< \brief (USBC_UHSOFC) Frame Length Control */
#define USBC_UHSOFC_FLENC_Msk       (_U_(0x3FFF) << USBC_UHSOFC_FLENC_Pos)
#define USBC_UHSOFC_FLENC(value)    (USBC_UHSOFC_FLENC_Msk & ((value) << USBC_UHSOFC_FLENC_Pos))
#define USBC_UHSOFC_FLENCE_Pos      16           /**< \brief (USBC_UHSOFC) Frame Length Control Enable */
#define USBC_UHSOFC_FLENCE          (_U_(0x1) << USBC_UHSOFC_FLENCE_Pos)
#define USBC_UHSOFC_MASK            _U_(0x00013FFF) /**< \brief (USBC_UHSOFC) MASK Register */

/* -------- USBC_UPCFG0 : (USBC Offset: 0x500) (R/W 32) Pipe Configuration Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t :2;               /*!< bit:  0.. 1  Reserved                           */
    uint32_t PBK:1;            /*!< bit:      2  Pipe Banks                         */
    uint32_t :1;               /*!< bit:      3  Reserved                           */
    uint32_t PSIZE:3;          /*!< bit:  4.. 6  Pipe Size                          */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t PTOKEN:2;         /*!< bit:  8.. 9  Pipe Token                         */
    uint32_t :2;               /*!< bit: 10..11  Reserved                           */
    uint32_t PTYPE:2;          /*!< bit: 12..13  Pipe Type                          */
    uint32_t :6;               /*!< bit: 14..19  Reserved                           */
    uint32_t PINGEN:1;         /*!< bit:     20  Ping Enable                        */
    uint32_t :3;               /*!< bit: 21..23  Reserved                           */
    uint32_t BINTERVAL:8;      /*!< bit: 24..31  binterval parameter                */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPCFG0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPCFG0_OFFSET          0x500        /**< \brief (USBC_UPCFG0 offset) Pipe Configuration Register */
#define USBC_UPCFG0_RESETVALUE      _U_(0x00000000); /**< \brief (USBC_UPCFG0 reset_value) Pipe Configuration Register */

#define USBC_UPCFG0_PBK_Pos         2            /**< \brief (USBC_UPCFG0) Pipe Banks */
#define USBC_UPCFG0_PBK             (_U_(0x1) << USBC_UPCFG0_PBK_Pos)
#define   USBC_UPCFG0_PBK_SINGLE_Val      _U_(0x0)   /**< \brief (USBC_UPCFG0)  */
#define   USBC_UPCFG0_PBK_DOUBLE_Val      _U_(0x1)   /**< \brief (USBC_UPCFG0)  */
#define USBC_UPCFG0_PBK_SINGLE      (USBC_UPCFG0_PBK_SINGLE_Val    << USBC_UPCFG0_PBK_Pos)
#define USBC_UPCFG0_PBK_DOUBLE      (USBC_UPCFG0_PBK_DOUBLE_Val    << USBC_UPCFG0_PBK_Pos)
#define USBC_UPCFG0_PSIZE_Pos       4            /**< \brief (USBC_UPCFG0) Pipe Size */
#define USBC_UPCFG0_PSIZE_Msk       (_U_(0x7) << USBC_UPCFG0_PSIZE_Pos)
#define USBC_UPCFG0_PSIZE(value)    (USBC_UPCFG0_PSIZE_Msk & ((value) << USBC_UPCFG0_PSIZE_Pos))
#define   USBC_UPCFG0_PSIZE_8_Val         _U_(0x0)   /**< \brief (USBC_UPCFG0)  */
#define   USBC_UPCFG0_PSIZE_16_Val        _U_(0x1)   /**< \brief (USBC_UPCFG0)  */
#define   USBC_UPCFG0_PSIZE_32_Val        _U_(0x2)   /**< \brief (USBC_UPCFG0)  */
#define   USBC_UPCFG0_PSIZE_64_Val        _U_(0x3)   /**< \brief (USBC_UPCFG0)  */
#define   USBC_UPCFG0_PSIZE_128_Val       _U_(0x4)   /**< \brief (USBC_UPCFG0)  */
#define   USBC_UPCFG0_PSIZE_256_Val       _U_(0x5)   /**< \brief (USBC_UPCFG0)  */
#define   USBC_UPCFG0_PSIZE_512_Val       _U_(0x6)   /**< \brief (USBC_UPCFG0)  */
#define   USBC_UPCFG0_PSIZE_1024_Val      _U_(0x7)   /**< \brief (USBC_UPCFG0)  */
#define USBC_UPCFG0_PSIZE_8         (USBC_UPCFG0_PSIZE_8_Val       << USBC_UPCFG0_PSIZE_Pos)
#define USBC_UPCFG0_PSIZE_16        (USBC_UPCFG0_PSIZE_16_Val      << USBC_UPCFG0_PSIZE_Pos)
#define USBC_UPCFG0_PSIZE_32        (USBC_UPCFG0_PSIZE_32_Val      << USBC_UPCFG0_PSIZE_Pos)
#define USBC_UPCFG0_PSIZE_64        (USBC_UPCFG0_PSIZE_64_Val      << USBC_UPCFG0_PSIZE_Pos)
#define USBC_UPCFG0_PSIZE_128       (USBC_UPCFG0_PSIZE_128_Val     << USBC_UPCFG0_PSIZE_Pos)
#define USBC_UPCFG0_PSIZE_256       (USBC_UPCFG0_PSIZE_256_Val     << USBC_UPCFG0_PSIZE_Pos)
#define USBC_UPCFG0_PSIZE_512       (USBC_UPCFG0_PSIZE_512_Val     << USBC_UPCFG0_PSIZE_Pos)
#define USBC_UPCFG0_PSIZE_1024      (USBC_UPCFG0_PSIZE_1024_Val    << USBC_UPCFG0_PSIZE_Pos)
#define USBC_UPCFG0_PTOKEN_Pos      8            /**< \brief (USBC_UPCFG0) Pipe Token */
#define USBC_UPCFG0_PTOKEN_Msk      (_U_(0x3) << USBC_UPCFG0_PTOKEN_Pos)
#define USBC_UPCFG0_PTOKEN(value)   (USBC_UPCFG0_PTOKEN_Msk & ((value) << USBC_UPCFG0_PTOKEN_Pos))
#define   USBC_UPCFG0_PTOKEN_SETUP_Val    _U_(0x0)   /**< \brief (USBC_UPCFG0)  */
#define   USBC_UPCFG0_PTOKEN_IN_Val       _U_(0x1)   /**< \brief (USBC_UPCFG0)  */
#define   USBC_UPCFG0_PTOKEN_OUT_Val      _U_(0x2)   /**< \brief (USBC_UPCFG0)  */
#define USBC_UPCFG0_PTOKEN_SETUP    (USBC_UPCFG0_PTOKEN_SETUP_Val  << USBC_UPCFG0_PTOKEN_Pos)
#define USBC_UPCFG0_PTOKEN_IN       (USBC_UPCFG0_PTOKEN_IN_Val     << USBC_UPCFG0_PTOKEN_Pos)
#define USBC_UPCFG0_PTOKEN_OUT      (USBC_UPCFG0_PTOKEN_OUT_Val    << USBC_UPCFG0_PTOKEN_Pos)
#define USBC_UPCFG0_PTYPE_Pos       12           /**< \brief (USBC_UPCFG0) Pipe Type */
#define USBC_UPCFG0_PTYPE_Msk       (_U_(0x3) << USBC_UPCFG0_PTYPE_Pos)
#define USBC_UPCFG0_PTYPE(value)    (USBC_UPCFG0_PTYPE_Msk & ((value) << USBC_UPCFG0_PTYPE_Pos))
#define   USBC_UPCFG0_PTYPE_CONTROL_Val   _U_(0x0)   /**< \brief (USBC_UPCFG0)  */
#define   USBC_UPCFG0_PTYPE_ISOCHRONOUS_Val _U_(0x1)   /**< \brief (USBC_UPCFG0)  */
#define   USBC_UPCFG0_PTYPE_BULK_Val      _U_(0x2)   /**< \brief (USBC_UPCFG0)  */
#define   USBC_UPCFG0_PTYPE_INTERRUPT_Val _U_(0x3)   /**< \brief (USBC_UPCFG0)  */
#define USBC_UPCFG0_PTYPE_CONTROL   (USBC_UPCFG0_PTYPE_CONTROL_Val << USBC_UPCFG0_PTYPE_Pos)
#define USBC_UPCFG0_PTYPE_ISOCHRONOUS (USBC_UPCFG0_PTYPE_ISOCHRONOUS_Val << USBC_UPCFG0_PTYPE_Pos)
#define USBC_UPCFG0_PTYPE_BULK      (USBC_UPCFG0_PTYPE_BULK_Val    << USBC_UPCFG0_PTYPE_Pos)
#define USBC_UPCFG0_PTYPE_INTERRUPT (USBC_UPCFG0_PTYPE_INTERRUPT_Val << USBC_UPCFG0_PTYPE_Pos)
#define USBC_UPCFG0_PINGEN_Pos      20           /**< \brief (USBC_UPCFG0) Ping Enable */
#define USBC_UPCFG0_PINGEN          (_U_(0x1) << USBC_UPCFG0_PINGEN_Pos)
#define USBC_UPCFG0_BINTERVAL_Pos   24           /**< \brief (USBC_UPCFG0) binterval parameter */
#define USBC_UPCFG0_BINTERVAL_Msk   (_U_(0xFF) << USBC_UPCFG0_BINTERVAL_Pos)
#define USBC_UPCFG0_BINTERVAL(value) (USBC_UPCFG0_BINTERVAL_Msk & ((value) << USBC_UPCFG0_BINTERVAL_Pos))
#define USBC_UPCFG0_MASK            _U_(0xFF103374) /**< \brief (USBC_UPCFG0) MASK Register */

/* -------- USBC_UPCFG1 : (USBC Offset: 0x504) (R/W 32) Pipe Configuration Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t :2;               /*!< bit:  0.. 1  Reserved                           */
    uint32_t PBK:1;            /*!< bit:      2  Pipe Banks                         */
    uint32_t :1;               /*!< bit:      3  Reserved                           */
    uint32_t PSIZE:3;          /*!< bit:  4.. 6  Pipe Size                          */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t PTOKEN:2;         /*!< bit:  8.. 9  Pipe Token                         */
    uint32_t :2;               /*!< bit: 10..11  Reserved                           */
    uint32_t PTYPE:2;          /*!< bit: 12..13  Pipe Type                          */
    uint32_t :6;               /*!< bit: 14..19  Reserved                           */
    uint32_t PINGEN:1;         /*!< bit:     20  Ping Enable                        */
    uint32_t :3;               /*!< bit: 21..23  Reserved                           */
    uint32_t BINTERVAL:8;      /*!< bit: 24..31  binterval parameter                */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPCFG1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPCFG1_OFFSET          0x504        /**< \brief (USBC_UPCFG1 offset) Pipe Configuration Register */
#define USBC_UPCFG1_RESETVALUE      _U_(0x00000000); /**< \brief (USBC_UPCFG1 reset_value) Pipe Configuration Register */

#define USBC_UPCFG1_PBK_Pos         2            /**< \brief (USBC_UPCFG1) Pipe Banks */
#define USBC_UPCFG1_PBK             (_U_(0x1) << USBC_UPCFG1_PBK_Pos)
#define   USBC_UPCFG1_PBK_SINGLE_Val      _U_(0x0)   /**< \brief (USBC_UPCFG1)  */
#define   USBC_UPCFG1_PBK_DOUBLE_Val      _U_(0x1)   /**< \brief (USBC_UPCFG1)  */
#define USBC_UPCFG1_PBK_SINGLE      (USBC_UPCFG1_PBK_SINGLE_Val    << USBC_UPCFG1_PBK_Pos)
#define USBC_UPCFG1_PBK_DOUBLE      (USBC_UPCFG1_PBK_DOUBLE_Val    << USBC_UPCFG1_PBK_Pos)
#define USBC_UPCFG1_PSIZE_Pos       4            /**< \brief (USBC_UPCFG1) Pipe Size */
#define USBC_UPCFG1_PSIZE_Msk       (_U_(0x7) << USBC_UPCFG1_PSIZE_Pos)
#define USBC_UPCFG1_PSIZE(value)    (USBC_UPCFG1_PSIZE_Msk & ((value) << USBC_UPCFG1_PSIZE_Pos))
#define   USBC_UPCFG1_PSIZE_8_Val         _U_(0x0)   /**< \brief (USBC_UPCFG1)  */
#define   USBC_UPCFG1_PSIZE_16_Val        _U_(0x1)   /**< \brief (USBC_UPCFG1)  */
#define   USBC_UPCFG1_PSIZE_32_Val        _U_(0x2)   /**< \brief (USBC_UPCFG1)  */
#define   USBC_UPCFG1_PSIZE_64_Val        _U_(0x3)   /**< \brief (USBC_UPCFG1)  */
#define   USBC_UPCFG1_PSIZE_128_Val       _U_(0x4)   /**< \brief (USBC_UPCFG1)  */
#define   USBC_UPCFG1_PSIZE_256_Val       _U_(0x5)   /**< \brief (USBC_UPCFG1)  */
#define   USBC_UPCFG1_PSIZE_512_Val       _U_(0x6)   /**< \brief (USBC_UPCFG1)  */
#define   USBC_UPCFG1_PSIZE_1024_Val      _U_(0x7)   /**< \brief (USBC_UPCFG1)  */
#define USBC_UPCFG1_PSIZE_8         (USBC_UPCFG1_PSIZE_8_Val       << USBC_UPCFG1_PSIZE_Pos)
#define USBC_UPCFG1_PSIZE_16        (USBC_UPCFG1_PSIZE_16_Val      << USBC_UPCFG1_PSIZE_Pos)
#define USBC_UPCFG1_PSIZE_32        (USBC_UPCFG1_PSIZE_32_Val      << USBC_UPCFG1_PSIZE_Pos)
#define USBC_UPCFG1_PSIZE_64        (USBC_UPCFG1_PSIZE_64_Val      << USBC_UPCFG1_PSIZE_Pos)
#define USBC_UPCFG1_PSIZE_128       (USBC_UPCFG1_PSIZE_128_Val     << USBC_UPCFG1_PSIZE_Pos)
#define USBC_UPCFG1_PSIZE_256       (USBC_UPCFG1_PSIZE_256_Val     << USBC_UPCFG1_PSIZE_Pos)
#define USBC_UPCFG1_PSIZE_512       (USBC_UPCFG1_PSIZE_512_Val     << USBC_UPCFG1_PSIZE_Pos)
#define USBC_UPCFG1_PSIZE_1024      (USBC_UPCFG1_PSIZE_1024_Val    << USBC_UPCFG1_PSIZE_Pos)
#define USBC_UPCFG1_PTOKEN_Pos      8            /**< \brief (USBC_UPCFG1) Pipe Token */
#define USBC_UPCFG1_PTOKEN_Msk      (_U_(0x3) << USBC_UPCFG1_PTOKEN_Pos)
#define USBC_UPCFG1_PTOKEN(value)   (USBC_UPCFG1_PTOKEN_Msk & ((value) << USBC_UPCFG1_PTOKEN_Pos))
#define   USBC_UPCFG1_PTOKEN_SETUP_Val    _U_(0x0)   /**< \brief (USBC_UPCFG1)  */
#define   USBC_UPCFG1_PTOKEN_IN_Val       _U_(0x1)   /**< \brief (USBC_UPCFG1)  */
#define   USBC_UPCFG1_PTOKEN_OUT_Val      _U_(0x2)   /**< \brief (USBC_UPCFG1)  */
#define USBC_UPCFG1_PTOKEN_SETUP    (USBC_UPCFG1_PTOKEN_SETUP_Val  << USBC_UPCFG1_PTOKEN_Pos)
#define USBC_UPCFG1_PTOKEN_IN       (USBC_UPCFG1_PTOKEN_IN_Val     << USBC_UPCFG1_PTOKEN_Pos)
#define USBC_UPCFG1_PTOKEN_OUT      (USBC_UPCFG1_PTOKEN_OUT_Val    << USBC_UPCFG1_PTOKEN_Pos)
#define USBC_UPCFG1_PTYPE_Pos       12           /**< \brief (USBC_UPCFG1) Pipe Type */
#define USBC_UPCFG1_PTYPE_Msk       (_U_(0x3) << USBC_UPCFG1_PTYPE_Pos)
#define USBC_UPCFG1_PTYPE(value)    (USBC_UPCFG1_PTYPE_Msk & ((value) << USBC_UPCFG1_PTYPE_Pos))
#define   USBC_UPCFG1_PTYPE_CONTROL_Val   _U_(0x0)   /**< \brief (USBC_UPCFG1)  */
#define   USBC_UPCFG1_PTYPE_ISOCHRONOUS_Val _U_(0x1)   /**< \brief (USBC_UPCFG1)  */
#define   USBC_UPCFG1_PTYPE_BULK_Val      _U_(0x2)   /**< \brief (USBC_UPCFG1)  */
#define   USBC_UPCFG1_PTYPE_INTERRUPT_Val _U_(0x3)   /**< \brief (USBC_UPCFG1)  */
#define USBC_UPCFG1_PTYPE_CONTROL   (USBC_UPCFG1_PTYPE_CONTROL_Val << USBC_UPCFG1_PTYPE_Pos)
#define USBC_UPCFG1_PTYPE_ISOCHRONOUS (USBC_UPCFG1_PTYPE_ISOCHRONOUS_Val << USBC_UPCFG1_PTYPE_Pos)
#define USBC_UPCFG1_PTYPE_BULK      (USBC_UPCFG1_PTYPE_BULK_Val    << USBC_UPCFG1_PTYPE_Pos)
#define USBC_UPCFG1_PTYPE_INTERRUPT (USBC_UPCFG1_PTYPE_INTERRUPT_Val << USBC_UPCFG1_PTYPE_Pos)
#define USBC_UPCFG1_PINGEN_Pos      20           /**< \brief (USBC_UPCFG1) Ping Enable */
#define USBC_UPCFG1_PINGEN          (_U_(0x1) << USBC_UPCFG1_PINGEN_Pos)
#define USBC_UPCFG1_BINTERVAL_Pos   24           /**< \brief (USBC_UPCFG1) binterval parameter */
#define USBC_UPCFG1_BINTERVAL_Msk   (_U_(0xFF) << USBC_UPCFG1_BINTERVAL_Pos)
#define USBC_UPCFG1_BINTERVAL(value) (USBC_UPCFG1_BINTERVAL_Msk & ((value) << USBC_UPCFG1_BINTERVAL_Pos))
#define USBC_UPCFG1_MASK            _U_(0xFF103374) /**< \brief (USBC_UPCFG1) MASK Register */

/* -------- USBC_UPCFG2 : (USBC Offset: 0x508) (R/W 32) Pipe Configuration Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t :2;               /*!< bit:  0.. 1  Reserved                           */
    uint32_t PBK:1;            /*!< bit:      2  Pipe Banks                         */
    uint32_t :1;               /*!< bit:      3  Reserved                           */
    uint32_t PSIZE:3;          /*!< bit:  4.. 6  Pipe Size                          */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t PTOKEN:2;         /*!< bit:  8.. 9  Pipe Token                         */
    uint32_t :2;               /*!< bit: 10..11  Reserved                           */
    uint32_t PTYPE:2;          /*!< bit: 12..13  Pipe Type                          */
    uint32_t :6;               /*!< bit: 14..19  Reserved                           */
    uint32_t PINGEN:1;         /*!< bit:     20  Ping Enable                        */
    uint32_t :3;               /*!< bit: 21..23  Reserved                           */
    uint32_t BINTERVAL:8;      /*!< bit: 24..31  binterval parameter                */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPCFG2_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPCFG2_OFFSET          0x508        /**< \brief (USBC_UPCFG2 offset) Pipe Configuration Register */
#define USBC_UPCFG2_RESETVALUE      _U_(0x00000000); /**< \brief (USBC_UPCFG2 reset_value) Pipe Configuration Register */

#define USBC_UPCFG2_PBK_Pos         2            /**< \brief (USBC_UPCFG2) Pipe Banks */
#define USBC_UPCFG2_PBK             (_U_(0x1) << USBC_UPCFG2_PBK_Pos)
#define   USBC_UPCFG2_PBK_SINGLE_Val      _U_(0x0)   /**< \brief (USBC_UPCFG2)  */
#define   USBC_UPCFG2_PBK_DOUBLE_Val      _U_(0x1)   /**< \brief (USBC_UPCFG2)  */
#define USBC_UPCFG2_PBK_SINGLE      (USBC_UPCFG2_PBK_SINGLE_Val    << USBC_UPCFG2_PBK_Pos)
#define USBC_UPCFG2_PBK_DOUBLE      (USBC_UPCFG2_PBK_DOUBLE_Val    << USBC_UPCFG2_PBK_Pos)
#define USBC_UPCFG2_PSIZE_Pos       4            /**< \brief (USBC_UPCFG2) Pipe Size */
#define USBC_UPCFG2_PSIZE_Msk       (_U_(0x7) << USBC_UPCFG2_PSIZE_Pos)
#define USBC_UPCFG2_PSIZE(value)    (USBC_UPCFG2_PSIZE_Msk & ((value) << USBC_UPCFG2_PSIZE_Pos))
#define   USBC_UPCFG2_PSIZE_8_Val         _U_(0x0)   /**< \brief (USBC_UPCFG2)  */
#define   USBC_UPCFG2_PSIZE_16_Val        _U_(0x1)   /**< \brief (USBC_UPCFG2)  */
#define   USBC_UPCFG2_PSIZE_32_Val        _U_(0x2)   /**< \brief (USBC_UPCFG2)  */
#define   USBC_UPCFG2_PSIZE_64_Val        _U_(0x3)   /**< \brief (USBC_UPCFG2)  */
#define   USBC_UPCFG2_PSIZE_128_Val       _U_(0x4)   /**< \brief (USBC_UPCFG2)  */
#define   USBC_UPCFG2_PSIZE_256_Val       _U_(0x5)   /**< \brief (USBC_UPCFG2)  */
#define   USBC_UPCFG2_PSIZE_512_Val       _U_(0x6)   /**< \brief (USBC_UPCFG2)  */
#define   USBC_UPCFG2_PSIZE_1024_Val      _U_(0x7)   /**< \brief (USBC_UPCFG2)  */
#define USBC_UPCFG2_PSIZE_8         (USBC_UPCFG2_PSIZE_8_Val       << USBC_UPCFG2_PSIZE_Pos)
#define USBC_UPCFG2_PSIZE_16        (USBC_UPCFG2_PSIZE_16_Val      << USBC_UPCFG2_PSIZE_Pos)
#define USBC_UPCFG2_PSIZE_32        (USBC_UPCFG2_PSIZE_32_Val      << USBC_UPCFG2_PSIZE_Pos)
#define USBC_UPCFG2_PSIZE_64        (USBC_UPCFG2_PSIZE_64_Val      << USBC_UPCFG2_PSIZE_Pos)
#define USBC_UPCFG2_PSIZE_128       (USBC_UPCFG2_PSIZE_128_Val     << USBC_UPCFG2_PSIZE_Pos)
#define USBC_UPCFG2_PSIZE_256       (USBC_UPCFG2_PSIZE_256_Val     << USBC_UPCFG2_PSIZE_Pos)
#define USBC_UPCFG2_PSIZE_512       (USBC_UPCFG2_PSIZE_512_Val     << USBC_UPCFG2_PSIZE_Pos)
#define USBC_UPCFG2_PSIZE_1024      (USBC_UPCFG2_PSIZE_1024_Val    << USBC_UPCFG2_PSIZE_Pos)
#define USBC_UPCFG2_PTOKEN_Pos      8            /**< \brief (USBC_UPCFG2) Pipe Token */
#define USBC_UPCFG2_PTOKEN_Msk      (_U_(0x3) << USBC_UPCFG2_PTOKEN_Pos)
#define USBC_UPCFG2_PTOKEN(value)   (USBC_UPCFG2_PTOKEN_Msk & ((value) << USBC_UPCFG2_PTOKEN_Pos))
#define   USBC_UPCFG2_PTOKEN_SETUP_Val    _U_(0x0)   /**< \brief (USBC_UPCFG2)  */
#define   USBC_UPCFG2_PTOKEN_IN_Val       _U_(0x1)   /**< \brief (USBC_UPCFG2)  */
#define   USBC_UPCFG2_PTOKEN_OUT_Val      _U_(0x2)   /**< \brief (USBC_UPCFG2)  */
#define USBC_UPCFG2_PTOKEN_SETUP    (USBC_UPCFG2_PTOKEN_SETUP_Val  << USBC_UPCFG2_PTOKEN_Pos)
#define USBC_UPCFG2_PTOKEN_IN       (USBC_UPCFG2_PTOKEN_IN_Val     << USBC_UPCFG2_PTOKEN_Pos)
#define USBC_UPCFG2_PTOKEN_OUT      (USBC_UPCFG2_PTOKEN_OUT_Val    << USBC_UPCFG2_PTOKEN_Pos)
#define USBC_UPCFG2_PTYPE_Pos       12           /**< \brief (USBC_UPCFG2) Pipe Type */
#define USBC_UPCFG2_PTYPE_Msk       (_U_(0x3) << USBC_UPCFG2_PTYPE_Pos)
#define USBC_UPCFG2_PTYPE(value)    (USBC_UPCFG2_PTYPE_Msk & ((value) << USBC_UPCFG2_PTYPE_Pos))
#define   USBC_UPCFG2_PTYPE_CONTROL_Val   _U_(0x0)   /**< \brief (USBC_UPCFG2)  */
#define   USBC_UPCFG2_PTYPE_ISOCHRONOUS_Val _U_(0x1)   /**< \brief (USBC_UPCFG2)  */
#define   USBC_UPCFG2_PTYPE_BULK_Val      _U_(0x2)   /**< \brief (USBC_UPCFG2)  */
#define   USBC_UPCFG2_PTYPE_INTERRUPT_Val _U_(0x3)   /**< \brief (USBC_UPCFG2)  */
#define USBC_UPCFG2_PTYPE_CONTROL   (USBC_UPCFG2_PTYPE_CONTROL_Val << USBC_UPCFG2_PTYPE_Pos)
#define USBC_UPCFG2_PTYPE_ISOCHRONOUS (USBC_UPCFG2_PTYPE_ISOCHRONOUS_Val << USBC_UPCFG2_PTYPE_Pos)
#define USBC_UPCFG2_PTYPE_BULK      (USBC_UPCFG2_PTYPE_BULK_Val    << USBC_UPCFG2_PTYPE_Pos)
#define USBC_UPCFG2_PTYPE_INTERRUPT (USBC_UPCFG2_PTYPE_INTERRUPT_Val << USBC_UPCFG2_PTYPE_Pos)
#define USBC_UPCFG2_PINGEN_Pos      20           /**< \brief (USBC_UPCFG2) Ping Enable */
#define USBC_UPCFG2_PINGEN          (_U_(0x1) << USBC_UPCFG2_PINGEN_Pos)
#define USBC_UPCFG2_BINTERVAL_Pos   24           /**< \brief (USBC_UPCFG2) binterval parameter */
#define USBC_UPCFG2_BINTERVAL_Msk   (_U_(0xFF) << USBC_UPCFG2_BINTERVAL_Pos)
#define USBC_UPCFG2_BINTERVAL(value) (USBC_UPCFG2_BINTERVAL_Msk & ((value) << USBC_UPCFG2_BINTERVAL_Pos))
#define USBC_UPCFG2_MASK            _U_(0xFF103374) /**< \brief (USBC_UPCFG2) MASK Register */

/* -------- USBC_UPCFG3 : (USBC Offset: 0x50C) (R/W 32) Pipe Configuration Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t :2;               /*!< bit:  0.. 1  Reserved                           */
    uint32_t PBK:1;            /*!< bit:      2  Pipe Banks                         */
    uint32_t :1;               /*!< bit:      3  Reserved                           */
    uint32_t PSIZE:3;          /*!< bit:  4.. 6  Pipe Size                          */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t PTOKEN:2;         /*!< bit:  8.. 9  Pipe Token                         */
    uint32_t :2;               /*!< bit: 10..11  Reserved                           */
    uint32_t PTYPE:2;          /*!< bit: 12..13  Pipe Type                          */
    uint32_t :6;               /*!< bit: 14..19  Reserved                           */
    uint32_t PINGEN:1;         /*!< bit:     20  Ping Enable                        */
    uint32_t :3;               /*!< bit: 21..23  Reserved                           */
    uint32_t BINTERVAL:8;      /*!< bit: 24..31  binterval parameter                */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPCFG3_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPCFG3_OFFSET          0x50C        /**< \brief (USBC_UPCFG3 offset) Pipe Configuration Register */
#define USBC_UPCFG3_RESETVALUE      _U_(0x00000000); /**< \brief (USBC_UPCFG3 reset_value) Pipe Configuration Register */

#define USBC_UPCFG3_PBK_Pos         2            /**< \brief (USBC_UPCFG3) Pipe Banks */
#define USBC_UPCFG3_PBK             (_U_(0x1) << USBC_UPCFG3_PBK_Pos)
#define   USBC_UPCFG3_PBK_SINGLE_Val      _U_(0x0)   /**< \brief (USBC_UPCFG3)  */
#define   USBC_UPCFG3_PBK_DOUBLE_Val      _U_(0x1)   /**< \brief (USBC_UPCFG3)  */
#define USBC_UPCFG3_PBK_SINGLE      (USBC_UPCFG3_PBK_SINGLE_Val    << USBC_UPCFG3_PBK_Pos)
#define USBC_UPCFG3_PBK_DOUBLE      (USBC_UPCFG3_PBK_DOUBLE_Val    << USBC_UPCFG3_PBK_Pos)
#define USBC_UPCFG3_PSIZE_Pos       4            /**< \brief (USBC_UPCFG3) Pipe Size */
#define USBC_UPCFG3_PSIZE_Msk       (_U_(0x7) << USBC_UPCFG3_PSIZE_Pos)
#define USBC_UPCFG3_PSIZE(value)    (USBC_UPCFG3_PSIZE_Msk & ((value) << USBC_UPCFG3_PSIZE_Pos))
#define   USBC_UPCFG3_PSIZE_8_Val         _U_(0x0)   /**< \brief (USBC_UPCFG3)  */
#define   USBC_UPCFG3_PSIZE_16_Val        _U_(0x1)   /**< \brief (USBC_UPCFG3)  */
#define   USBC_UPCFG3_PSIZE_32_Val        _U_(0x2)   /**< \brief (USBC_UPCFG3)  */
#define   USBC_UPCFG3_PSIZE_64_Val        _U_(0x3)   /**< \brief (USBC_UPCFG3)  */
#define   USBC_UPCFG3_PSIZE_128_Val       _U_(0x4)   /**< \brief (USBC_UPCFG3)  */
#define   USBC_UPCFG3_PSIZE_256_Val       _U_(0x5)   /**< \brief (USBC_UPCFG3)  */
#define   USBC_UPCFG3_PSIZE_512_Val       _U_(0x6)   /**< \brief (USBC_UPCFG3)  */
#define   USBC_UPCFG3_PSIZE_1024_Val      _U_(0x7)   /**< \brief (USBC_UPCFG3)  */
#define USBC_UPCFG3_PSIZE_8         (USBC_UPCFG3_PSIZE_8_Val       << USBC_UPCFG3_PSIZE_Pos)
#define USBC_UPCFG3_PSIZE_16        (USBC_UPCFG3_PSIZE_16_Val      << USBC_UPCFG3_PSIZE_Pos)
#define USBC_UPCFG3_PSIZE_32        (USBC_UPCFG3_PSIZE_32_Val      << USBC_UPCFG3_PSIZE_Pos)
#define USBC_UPCFG3_PSIZE_64        (USBC_UPCFG3_PSIZE_64_Val      << USBC_UPCFG3_PSIZE_Pos)
#define USBC_UPCFG3_PSIZE_128       (USBC_UPCFG3_PSIZE_128_Val     << USBC_UPCFG3_PSIZE_Pos)
#define USBC_UPCFG3_PSIZE_256       (USBC_UPCFG3_PSIZE_256_Val     << USBC_UPCFG3_PSIZE_Pos)
#define USBC_UPCFG3_PSIZE_512       (USBC_UPCFG3_PSIZE_512_Val     << USBC_UPCFG3_PSIZE_Pos)
#define USBC_UPCFG3_PSIZE_1024      (USBC_UPCFG3_PSIZE_1024_Val    << USBC_UPCFG3_PSIZE_Pos)
#define USBC_UPCFG3_PTOKEN_Pos      8            /**< \brief (USBC_UPCFG3) Pipe Token */
#define USBC_UPCFG3_PTOKEN_Msk      (_U_(0x3) << USBC_UPCFG3_PTOKEN_Pos)
#define USBC_UPCFG3_PTOKEN(value)   (USBC_UPCFG3_PTOKEN_Msk & ((value) << USBC_UPCFG3_PTOKEN_Pos))
#define   USBC_UPCFG3_PTOKEN_SETUP_Val    _U_(0x0)   /**< \brief (USBC_UPCFG3)  */
#define   USBC_UPCFG3_PTOKEN_IN_Val       _U_(0x1)   /**< \brief (USBC_UPCFG3)  */
#define   USBC_UPCFG3_PTOKEN_OUT_Val      _U_(0x2)   /**< \brief (USBC_UPCFG3)  */
#define USBC_UPCFG3_PTOKEN_SETUP    (USBC_UPCFG3_PTOKEN_SETUP_Val  << USBC_UPCFG3_PTOKEN_Pos)
#define USBC_UPCFG3_PTOKEN_IN       (USBC_UPCFG3_PTOKEN_IN_Val     << USBC_UPCFG3_PTOKEN_Pos)
#define USBC_UPCFG3_PTOKEN_OUT      (USBC_UPCFG3_PTOKEN_OUT_Val    << USBC_UPCFG3_PTOKEN_Pos)
#define USBC_UPCFG3_PTYPE_Pos       12           /**< \brief (USBC_UPCFG3) Pipe Type */
#define USBC_UPCFG3_PTYPE_Msk       (_U_(0x3) << USBC_UPCFG3_PTYPE_Pos)
#define USBC_UPCFG3_PTYPE(value)    (USBC_UPCFG3_PTYPE_Msk & ((value) << USBC_UPCFG3_PTYPE_Pos))
#define   USBC_UPCFG3_PTYPE_CONTROL_Val   _U_(0x0)   /**< \brief (USBC_UPCFG3)  */
#define   USBC_UPCFG3_PTYPE_ISOCHRONOUS_Val _U_(0x1)   /**< \brief (USBC_UPCFG3)  */
#define   USBC_UPCFG3_PTYPE_BULK_Val      _U_(0x2)   /**< \brief (USBC_UPCFG3)  */
#define   USBC_UPCFG3_PTYPE_INTERRUPT_Val _U_(0x3)   /**< \brief (USBC_UPCFG3)  */
#define USBC_UPCFG3_PTYPE_CONTROL   (USBC_UPCFG3_PTYPE_CONTROL_Val << USBC_UPCFG3_PTYPE_Pos)
#define USBC_UPCFG3_PTYPE_ISOCHRONOUS (USBC_UPCFG3_PTYPE_ISOCHRONOUS_Val << USBC_UPCFG3_PTYPE_Pos)
#define USBC_UPCFG3_PTYPE_BULK      (USBC_UPCFG3_PTYPE_BULK_Val    << USBC_UPCFG3_PTYPE_Pos)
#define USBC_UPCFG3_PTYPE_INTERRUPT (USBC_UPCFG3_PTYPE_INTERRUPT_Val << USBC_UPCFG3_PTYPE_Pos)
#define USBC_UPCFG3_PINGEN_Pos      20           /**< \brief (USBC_UPCFG3) Ping Enable */
#define USBC_UPCFG3_PINGEN          (_U_(0x1) << USBC_UPCFG3_PINGEN_Pos)
#define USBC_UPCFG3_BINTERVAL_Pos   24           /**< \brief (USBC_UPCFG3) binterval parameter */
#define USBC_UPCFG3_BINTERVAL_Msk   (_U_(0xFF) << USBC_UPCFG3_BINTERVAL_Pos)
#define USBC_UPCFG3_BINTERVAL(value) (USBC_UPCFG3_BINTERVAL_Msk & ((value) << USBC_UPCFG3_BINTERVAL_Pos))
#define USBC_UPCFG3_MASK            _U_(0xFF103374) /**< \brief (USBC_UPCFG3) MASK Register */

/* -------- USBC_UPCFG4 : (USBC Offset: 0x510) (R/W 32) Pipe Configuration Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t :2;               /*!< bit:  0.. 1  Reserved                           */
    uint32_t PBK:1;            /*!< bit:      2  Pipe Banks                         */
    uint32_t :1;               /*!< bit:      3  Reserved                           */
    uint32_t PSIZE:3;          /*!< bit:  4.. 6  Pipe Size                          */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t PTOKEN:2;         /*!< bit:  8.. 9  Pipe Token                         */
    uint32_t :2;               /*!< bit: 10..11  Reserved                           */
    uint32_t PTYPE:2;          /*!< bit: 12..13  Pipe Type                          */
    uint32_t :6;               /*!< bit: 14..19  Reserved                           */
    uint32_t PINGEN:1;         /*!< bit:     20  Ping Enable                        */
    uint32_t :3;               /*!< bit: 21..23  Reserved                           */
    uint32_t BINTERVAL:8;      /*!< bit: 24..31  binterval parameter                */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPCFG4_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPCFG4_OFFSET          0x510        /**< \brief (USBC_UPCFG4 offset) Pipe Configuration Register */
#define USBC_UPCFG4_RESETVALUE      _U_(0x00000000); /**< \brief (USBC_UPCFG4 reset_value) Pipe Configuration Register */

#define USBC_UPCFG4_PBK_Pos         2            /**< \brief (USBC_UPCFG4) Pipe Banks */
#define USBC_UPCFG4_PBK             (_U_(0x1) << USBC_UPCFG4_PBK_Pos)
#define   USBC_UPCFG4_PBK_SINGLE_Val      _U_(0x0)   /**< \brief (USBC_UPCFG4)  */
#define   USBC_UPCFG4_PBK_DOUBLE_Val      _U_(0x1)   /**< \brief (USBC_UPCFG4)  */
#define USBC_UPCFG4_PBK_SINGLE      (USBC_UPCFG4_PBK_SINGLE_Val    << USBC_UPCFG4_PBK_Pos)
#define USBC_UPCFG4_PBK_DOUBLE      (USBC_UPCFG4_PBK_DOUBLE_Val    << USBC_UPCFG4_PBK_Pos)
#define USBC_UPCFG4_PSIZE_Pos       4            /**< \brief (USBC_UPCFG4) Pipe Size */
#define USBC_UPCFG4_PSIZE_Msk       (_U_(0x7) << USBC_UPCFG4_PSIZE_Pos)
#define USBC_UPCFG4_PSIZE(value)    (USBC_UPCFG4_PSIZE_Msk & ((value) << USBC_UPCFG4_PSIZE_Pos))
#define   USBC_UPCFG4_PSIZE_8_Val         _U_(0x0)   /**< \brief (USBC_UPCFG4)  */
#define   USBC_UPCFG4_PSIZE_16_Val        _U_(0x1)   /**< \brief (USBC_UPCFG4)  */
#define   USBC_UPCFG4_PSIZE_32_Val        _U_(0x2)   /**< \brief (USBC_UPCFG4)  */
#define   USBC_UPCFG4_PSIZE_64_Val        _U_(0x3)   /**< \brief (USBC_UPCFG4)  */
#define   USBC_UPCFG4_PSIZE_128_Val       _U_(0x4)   /**< \brief (USBC_UPCFG4)  */
#define   USBC_UPCFG4_PSIZE_256_Val       _U_(0x5)   /**< \brief (USBC_UPCFG4)  */
#define   USBC_UPCFG4_PSIZE_512_Val       _U_(0x6)   /**< \brief (USBC_UPCFG4)  */
#define   USBC_UPCFG4_PSIZE_1024_Val      _U_(0x7)   /**< \brief (USBC_UPCFG4)  */
#define USBC_UPCFG4_PSIZE_8         (USBC_UPCFG4_PSIZE_8_Val       << USBC_UPCFG4_PSIZE_Pos)
#define USBC_UPCFG4_PSIZE_16        (USBC_UPCFG4_PSIZE_16_Val      << USBC_UPCFG4_PSIZE_Pos)
#define USBC_UPCFG4_PSIZE_32        (USBC_UPCFG4_PSIZE_32_Val      << USBC_UPCFG4_PSIZE_Pos)
#define USBC_UPCFG4_PSIZE_64        (USBC_UPCFG4_PSIZE_64_Val      << USBC_UPCFG4_PSIZE_Pos)
#define USBC_UPCFG4_PSIZE_128       (USBC_UPCFG4_PSIZE_128_Val     << USBC_UPCFG4_PSIZE_Pos)
#define USBC_UPCFG4_PSIZE_256       (USBC_UPCFG4_PSIZE_256_Val     << USBC_UPCFG4_PSIZE_Pos)
#define USBC_UPCFG4_PSIZE_512       (USBC_UPCFG4_PSIZE_512_Val     << USBC_UPCFG4_PSIZE_Pos)
#define USBC_UPCFG4_PSIZE_1024      (USBC_UPCFG4_PSIZE_1024_Val    << USBC_UPCFG4_PSIZE_Pos)
#define USBC_UPCFG4_PTOKEN_Pos      8            /**< \brief (USBC_UPCFG4) Pipe Token */
#define USBC_UPCFG4_PTOKEN_Msk      (_U_(0x3) << USBC_UPCFG4_PTOKEN_Pos)
#define USBC_UPCFG4_PTOKEN(value)   (USBC_UPCFG4_PTOKEN_Msk & ((value) << USBC_UPCFG4_PTOKEN_Pos))
#define   USBC_UPCFG4_PTOKEN_SETUP_Val    _U_(0x0)   /**< \brief (USBC_UPCFG4)  */
#define   USBC_UPCFG4_PTOKEN_IN_Val       _U_(0x1)   /**< \brief (USBC_UPCFG4)  */
#define   USBC_UPCFG4_PTOKEN_OUT_Val      _U_(0x2)   /**< \brief (USBC_UPCFG4)  */
#define USBC_UPCFG4_PTOKEN_SETUP    (USBC_UPCFG4_PTOKEN_SETUP_Val  << USBC_UPCFG4_PTOKEN_Pos)
#define USBC_UPCFG4_PTOKEN_IN       (USBC_UPCFG4_PTOKEN_IN_Val     << USBC_UPCFG4_PTOKEN_Pos)
#define USBC_UPCFG4_PTOKEN_OUT      (USBC_UPCFG4_PTOKEN_OUT_Val    << USBC_UPCFG4_PTOKEN_Pos)
#define USBC_UPCFG4_PTYPE_Pos       12           /**< \brief (USBC_UPCFG4) Pipe Type */
#define USBC_UPCFG4_PTYPE_Msk       (_U_(0x3) << USBC_UPCFG4_PTYPE_Pos)
#define USBC_UPCFG4_PTYPE(value)    (USBC_UPCFG4_PTYPE_Msk & ((value) << USBC_UPCFG4_PTYPE_Pos))
#define   USBC_UPCFG4_PTYPE_CONTROL_Val   _U_(0x0)   /**< \brief (USBC_UPCFG4)  */
#define   USBC_UPCFG4_PTYPE_ISOCHRONOUS_Val _U_(0x1)   /**< \brief (USBC_UPCFG4)  */
#define   USBC_UPCFG4_PTYPE_BULK_Val      _U_(0x2)   /**< \brief (USBC_UPCFG4)  */
#define   USBC_UPCFG4_PTYPE_INTERRUPT_Val _U_(0x3)   /**< \brief (USBC_UPCFG4)  */
#define USBC_UPCFG4_PTYPE_CONTROL   (USBC_UPCFG4_PTYPE_CONTROL_Val << USBC_UPCFG4_PTYPE_Pos)
#define USBC_UPCFG4_PTYPE_ISOCHRONOUS (USBC_UPCFG4_PTYPE_ISOCHRONOUS_Val << USBC_UPCFG4_PTYPE_Pos)
#define USBC_UPCFG4_PTYPE_BULK      (USBC_UPCFG4_PTYPE_BULK_Val    << USBC_UPCFG4_PTYPE_Pos)
#define USBC_UPCFG4_PTYPE_INTERRUPT (USBC_UPCFG4_PTYPE_INTERRUPT_Val << USBC_UPCFG4_PTYPE_Pos)
#define USBC_UPCFG4_PINGEN_Pos      20           /**< \brief (USBC_UPCFG4) Ping Enable */
#define USBC_UPCFG4_PINGEN          (_U_(0x1) << USBC_UPCFG4_PINGEN_Pos)
#define USBC_UPCFG4_BINTERVAL_Pos   24           /**< \brief (USBC_UPCFG4) binterval parameter */
#define USBC_UPCFG4_BINTERVAL_Msk   (_U_(0xFF) << USBC_UPCFG4_BINTERVAL_Pos)
#define USBC_UPCFG4_BINTERVAL(value) (USBC_UPCFG4_BINTERVAL_Msk & ((value) << USBC_UPCFG4_BINTERVAL_Pos))
#define USBC_UPCFG4_MASK            _U_(0xFF103374) /**< \brief (USBC_UPCFG4) MASK Register */

/* -------- USBC_UPCFG5 : (USBC Offset: 0x514) (R/W 32) Pipe Configuration Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t :2;               /*!< bit:  0.. 1  Reserved                           */
    uint32_t PBK:1;            /*!< bit:      2  Pipe Banks                         */
    uint32_t :1;               /*!< bit:      3  Reserved                           */
    uint32_t PSIZE:3;          /*!< bit:  4.. 6  Pipe Size                          */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t PTOKEN:2;         /*!< bit:  8.. 9  Pipe Token                         */
    uint32_t :2;               /*!< bit: 10..11  Reserved                           */
    uint32_t PTYPE:2;          /*!< bit: 12..13  Pipe Type                          */
    uint32_t :6;               /*!< bit: 14..19  Reserved                           */
    uint32_t PINGEN:1;         /*!< bit:     20  Ping Enable                        */
    uint32_t :3;               /*!< bit: 21..23  Reserved                           */
    uint32_t BINTERVAL:8;      /*!< bit: 24..31  binterval parameter                */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPCFG5_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPCFG5_OFFSET          0x514        /**< \brief (USBC_UPCFG5 offset) Pipe Configuration Register */
#define USBC_UPCFG5_RESETVALUE      _U_(0x00000000); /**< \brief (USBC_UPCFG5 reset_value) Pipe Configuration Register */

#define USBC_UPCFG5_PBK_Pos         2            /**< \brief (USBC_UPCFG5) Pipe Banks */
#define USBC_UPCFG5_PBK             (_U_(0x1) << USBC_UPCFG5_PBK_Pos)
#define   USBC_UPCFG5_PBK_SINGLE_Val      _U_(0x0)   /**< \brief (USBC_UPCFG5)  */
#define   USBC_UPCFG5_PBK_DOUBLE_Val      _U_(0x1)   /**< \brief (USBC_UPCFG5)  */
#define USBC_UPCFG5_PBK_SINGLE      (USBC_UPCFG5_PBK_SINGLE_Val    << USBC_UPCFG5_PBK_Pos)
#define USBC_UPCFG5_PBK_DOUBLE      (USBC_UPCFG5_PBK_DOUBLE_Val    << USBC_UPCFG5_PBK_Pos)
#define USBC_UPCFG5_PSIZE_Pos       4            /**< \brief (USBC_UPCFG5) Pipe Size */
#define USBC_UPCFG5_PSIZE_Msk       (_U_(0x7) << USBC_UPCFG5_PSIZE_Pos)
#define USBC_UPCFG5_PSIZE(value)    (USBC_UPCFG5_PSIZE_Msk & ((value) << USBC_UPCFG5_PSIZE_Pos))
#define   USBC_UPCFG5_PSIZE_8_Val         _U_(0x0)   /**< \brief (USBC_UPCFG5)  */
#define   USBC_UPCFG5_PSIZE_16_Val        _U_(0x1)   /**< \brief (USBC_UPCFG5)  */
#define   USBC_UPCFG5_PSIZE_32_Val        _U_(0x2)   /**< \brief (USBC_UPCFG5)  */
#define   USBC_UPCFG5_PSIZE_64_Val        _U_(0x3)   /**< \brief (USBC_UPCFG5)  */
#define   USBC_UPCFG5_PSIZE_128_Val       _U_(0x4)   /**< \brief (USBC_UPCFG5)  */
#define   USBC_UPCFG5_PSIZE_256_Val       _U_(0x5)   /**< \brief (USBC_UPCFG5)  */
#define   USBC_UPCFG5_PSIZE_512_Val       _U_(0x6)   /**< \brief (USBC_UPCFG5)  */
#define   USBC_UPCFG5_PSIZE_1024_Val      _U_(0x7)   /**< \brief (USBC_UPCFG5)  */
#define USBC_UPCFG5_PSIZE_8         (USBC_UPCFG5_PSIZE_8_Val       << USBC_UPCFG5_PSIZE_Pos)
#define USBC_UPCFG5_PSIZE_16        (USBC_UPCFG5_PSIZE_16_Val      << USBC_UPCFG5_PSIZE_Pos)
#define USBC_UPCFG5_PSIZE_32        (USBC_UPCFG5_PSIZE_32_Val      << USBC_UPCFG5_PSIZE_Pos)
#define USBC_UPCFG5_PSIZE_64        (USBC_UPCFG5_PSIZE_64_Val      << USBC_UPCFG5_PSIZE_Pos)
#define USBC_UPCFG5_PSIZE_128       (USBC_UPCFG5_PSIZE_128_Val     << USBC_UPCFG5_PSIZE_Pos)
#define USBC_UPCFG5_PSIZE_256       (USBC_UPCFG5_PSIZE_256_Val     << USBC_UPCFG5_PSIZE_Pos)
#define USBC_UPCFG5_PSIZE_512       (USBC_UPCFG5_PSIZE_512_Val     << USBC_UPCFG5_PSIZE_Pos)
#define USBC_UPCFG5_PSIZE_1024      (USBC_UPCFG5_PSIZE_1024_Val    << USBC_UPCFG5_PSIZE_Pos)
#define USBC_UPCFG5_PTOKEN_Pos      8            /**< \brief (USBC_UPCFG5) Pipe Token */
#define USBC_UPCFG5_PTOKEN_Msk      (_U_(0x3) << USBC_UPCFG5_PTOKEN_Pos)
#define USBC_UPCFG5_PTOKEN(value)   (USBC_UPCFG5_PTOKEN_Msk & ((value) << USBC_UPCFG5_PTOKEN_Pos))
#define   USBC_UPCFG5_PTOKEN_SETUP_Val    _U_(0x0)   /**< \brief (USBC_UPCFG5)  */
#define   USBC_UPCFG5_PTOKEN_IN_Val       _U_(0x1)   /**< \brief (USBC_UPCFG5)  */
#define   USBC_UPCFG5_PTOKEN_OUT_Val      _U_(0x2)   /**< \brief (USBC_UPCFG5)  */
#define USBC_UPCFG5_PTOKEN_SETUP    (USBC_UPCFG5_PTOKEN_SETUP_Val  << USBC_UPCFG5_PTOKEN_Pos)
#define USBC_UPCFG5_PTOKEN_IN       (USBC_UPCFG5_PTOKEN_IN_Val     << USBC_UPCFG5_PTOKEN_Pos)
#define USBC_UPCFG5_PTOKEN_OUT      (USBC_UPCFG5_PTOKEN_OUT_Val    << USBC_UPCFG5_PTOKEN_Pos)
#define USBC_UPCFG5_PTYPE_Pos       12           /**< \brief (USBC_UPCFG5) Pipe Type */
#define USBC_UPCFG5_PTYPE_Msk       (_U_(0x3) << USBC_UPCFG5_PTYPE_Pos)
#define USBC_UPCFG5_PTYPE(value)    (USBC_UPCFG5_PTYPE_Msk & ((value) << USBC_UPCFG5_PTYPE_Pos))
#define   USBC_UPCFG5_PTYPE_CONTROL_Val   _U_(0x0)   /**< \brief (USBC_UPCFG5)  */
#define   USBC_UPCFG5_PTYPE_ISOCHRONOUS_Val _U_(0x1)   /**< \brief (USBC_UPCFG5)  */
#define   USBC_UPCFG5_PTYPE_BULK_Val      _U_(0x2)   /**< \brief (USBC_UPCFG5)  */
#define   USBC_UPCFG5_PTYPE_INTERRUPT_Val _U_(0x3)   /**< \brief (USBC_UPCFG5)  */
#define USBC_UPCFG5_PTYPE_CONTROL   (USBC_UPCFG5_PTYPE_CONTROL_Val << USBC_UPCFG5_PTYPE_Pos)
#define USBC_UPCFG5_PTYPE_ISOCHRONOUS (USBC_UPCFG5_PTYPE_ISOCHRONOUS_Val << USBC_UPCFG5_PTYPE_Pos)
#define USBC_UPCFG5_PTYPE_BULK      (USBC_UPCFG5_PTYPE_BULK_Val    << USBC_UPCFG5_PTYPE_Pos)
#define USBC_UPCFG5_PTYPE_INTERRUPT (USBC_UPCFG5_PTYPE_INTERRUPT_Val << USBC_UPCFG5_PTYPE_Pos)
#define USBC_UPCFG5_PINGEN_Pos      20           /**< \brief (USBC_UPCFG5) Ping Enable */
#define USBC_UPCFG5_PINGEN          (_U_(0x1) << USBC_UPCFG5_PINGEN_Pos)
#define USBC_UPCFG5_BINTERVAL_Pos   24           /**< \brief (USBC_UPCFG5) binterval parameter */
#define USBC_UPCFG5_BINTERVAL_Msk   (_U_(0xFF) << USBC_UPCFG5_BINTERVAL_Pos)
#define USBC_UPCFG5_BINTERVAL(value) (USBC_UPCFG5_BINTERVAL_Msk & ((value) << USBC_UPCFG5_BINTERVAL_Pos))
#define USBC_UPCFG5_MASK            _U_(0xFF103374) /**< \brief (USBC_UPCFG5) MASK Register */

/* -------- USBC_UPCFG6 : (USBC Offset: 0x518) (R/W 32) Pipe Configuration Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t :2;               /*!< bit:  0.. 1  Reserved                           */
    uint32_t PBK:1;            /*!< bit:      2  Pipe Banks                         */
    uint32_t :1;               /*!< bit:      3  Reserved                           */
    uint32_t PSIZE:3;          /*!< bit:  4.. 6  Pipe Size                          */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t PTOKEN:2;         /*!< bit:  8.. 9  Pipe Token                         */
    uint32_t :2;               /*!< bit: 10..11  Reserved                           */
    uint32_t PTYPE:2;          /*!< bit: 12..13  Pipe Type                          */
    uint32_t :6;               /*!< bit: 14..19  Reserved                           */
    uint32_t PINGEN:1;         /*!< bit:     20  Ping Enable                        */
    uint32_t :3;               /*!< bit: 21..23  Reserved                           */
    uint32_t BINTERVAL:8;      /*!< bit: 24..31  binterval parameter                */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPCFG6_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPCFG6_OFFSET          0x518        /**< \brief (USBC_UPCFG6 offset) Pipe Configuration Register */
#define USBC_UPCFG6_RESETVALUE      _U_(0x00000000); /**< \brief (USBC_UPCFG6 reset_value) Pipe Configuration Register */

#define USBC_UPCFG6_PBK_Pos         2            /**< \brief (USBC_UPCFG6) Pipe Banks */
#define USBC_UPCFG6_PBK             (_U_(0x1) << USBC_UPCFG6_PBK_Pos)
#define   USBC_UPCFG6_PBK_SINGLE_Val      _U_(0x0)   /**< \brief (USBC_UPCFG6)  */
#define   USBC_UPCFG6_PBK_DOUBLE_Val      _U_(0x1)   /**< \brief (USBC_UPCFG6)  */
#define USBC_UPCFG6_PBK_SINGLE      (USBC_UPCFG6_PBK_SINGLE_Val    << USBC_UPCFG6_PBK_Pos)
#define USBC_UPCFG6_PBK_DOUBLE      (USBC_UPCFG6_PBK_DOUBLE_Val    << USBC_UPCFG6_PBK_Pos)
#define USBC_UPCFG6_PSIZE_Pos       4            /**< \brief (USBC_UPCFG6) Pipe Size */
#define USBC_UPCFG6_PSIZE_Msk       (_U_(0x7) << USBC_UPCFG6_PSIZE_Pos)
#define USBC_UPCFG6_PSIZE(value)    (USBC_UPCFG6_PSIZE_Msk & ((value) << USBC_UPCFG6_PSIZE_Pos))
#define   USBC_UPCFG6_PSIZE_8_Val         _U_(0x0)   /**< \brief (USBC_UPCFG6)  */
#define   USBC_UPCFG6_PSIZE_16_Val        _U_(0x1)   /**< \brief (USBC_UPCFG6)  */
#define   USBC_UPCFG6_PSIZE_32_Val        _U_(0x2)   /**< \brief (USBC_UPCFG6)  */
#define   USBC_UPCFG6_PSIZE_64_Val        _U_(0x3)   /**< \brief (USBC_UPCFG6)  */
#define   USBC_UPCFG6_PSIZE_128_Val       _U_(0x4)   /**< \brief (USBC_UPCFG6)  */
#define   USBC_UPCFG6_PSIZE_256_Val       _U_(0x5)   /**< \brief (USBC_UPCFG6)  */
#define   USBC_UPCFG6_PSIZE_512_Val       _U_(0x6)   /**< \brief (USBC_UPCFG6)  */
#define   USBC_UPCFG6_PSIZE_1024_Val      _U_(0x7)   /**< \brief (USBC_UPCFG6)  */
#define USBC_UPCFG6_PSIZE_8         (USBC_UPCFG6_PSIZE_8_Val       << USBC_UPCFG6_PSIZE_Pos)
#define USBC_UPCFG6_PSIZE_16        (USBC_UPCFG6_PSIZE_16_Val      << USBC_UPCFG6_PSIZE_Pos)
#define USBC_UPCFG6_PSIZE_32        (USBC_UPCFG6_PSIZE_32_Val      << USBC_UPCFG6_PSIZE_Pos)
#define USBC_UPCFG6_PSIZE_64        (USBC_UPCFG6_PSIZE_64_Val      << USBC_UPCFG6_PSIZE_Pos)
#define USBC_UPCFG6_PSIZE_128       (USBC_UPCFG6_PSIZE_128_Val     << USBC_UPCFG6_PSIZE_Pos)
#define USBC_UPCFG6_PSIZE_256       (USBC_UPCFG6_PSIZE_256_Val     << USBC_UPCFG6_PSIZE_Pos)
#define USBC_UPCFG6_PSIZE_512       (USBC_UPCFG6_PSIZE_512_Val     << USBC_UPCFG6_PSIZE_Pos)
#define USBC_UPCFG6_PSIZE_1024      (USBC_UPCFG6_PSIZE_1024_Val    << USBC_UPCFG6_PSIZE_Pos)
#define USBC_UPCFG6_PTOKEN_Pos      8            /**< \brief (USBC_UPCFG6) Pipe Token */
#define USBC_UPCFG6_PTOKEN_Msk      (_U_(0x3) << USBC_UPCFG6_PTOKEN_Pos)
#define USBC_UPCFG6_PTOKEN(value)   (USBC_UPCFG6_PTOKEN_Msk & ((value) << USBC_UPCFG6_PTOKEN_Pos))
#define   USBC_UPCFG6_PTOKEN_SETUP_Val    _U_(0x0)   /**< \brief (USBC_UPCFG6)  */
#define   USBC_UPCFG6_PTOKEN_IN_Val       _U_(0x1)   /**< \brief (USBC_UPCFG6)  */
#define   USBC_UPCFG6_PTOKEN_OUT_Val      _U_(0x2)   /**< \brief (USBC_UPCFG6)  */
#define USBC_UPCFG6_PTOKEN_SETUP    (USBC_UPCFG6_PTOKEN_SETUP_Val  << USBC_UPCFG6_PTOKEN_Pos)
#define USBC_UPCFG6_PTOKEN_IN       (USBC_UPCFG6_PTOKEN_IN_Val     << USBC_UPCFG6_PTOKEN_Pos)
#define USBC_UPCFG6_PTOKEN_OUT      (USBC_UPCFG6_PTOKEN_OUT_Val    << USBC_UPCFG6_PTOKEN_Pos)
#define USBC_UPCFG6_PTYPE_Pos       12           /**< \brief (USBC_UPCFG6) Pipe Type */
#define USBC_UPCFG6_PTYPE_Msk       (_U_(0x3) << USBC_UPCFG6_PTYPE_Pos)
#define USBC_UPCFG6_PTYPE(value)    (USBC_UPCFG6_PTYPE_Msk & ((value) << USBC_UPCFG6_PTYPE_Pos))
#define   USBC_UPCFG6_PTYPE_CONTROL_Val   _U_(0x0)   /**< \brief (USBC_UPCFG6)  */
#define   USBC_UPCFG6_PTYPE_ISOCHRONOUS_Val _U_(0x1)   /**< \brief (USBC_UPCFG6)  */
#define   USBC_UPCFG6_PTYPE_BULK_Val      _U_(0x2)   /**< \brief (USBC_UPCFG6)  */
#define   USBC_UPCFG6_PTYPE_INTERRUPT_Val _U_(0x3)   /**< \brief (USBC_UPCFG6)  */
#define USBC_UPCFG6_PTYPE_CONTROL   (USBC_UPCFG6_PTYPE_CONTROL_Val << USBC_UPCFG6_PTYPE_Pos)
#define USBC_UPCFG6_PTYPE_ISOCHRONOUS (USBC_UPCFG6_PTYPE_ISOCHRONOUS_Val << USBC_UPCFG6_PTYPE_Pos)
#define USBC_UPCFG6_PTYPE_BULK      (USBC_UPCFG6_PTYPE_BULK_Val    << USBC_UPCFG6_PTYPE_Pos)
#define USBC_UPCFG6_PTYPE_INTERRUPT (USBC_UPCFG6_PTYPE_INTERRUPT_Val << USBC_UPCFG6_PTYPE_Pos)
#define USBC_UPCFG6_PINGEN_Pos      20           /**< \brief (USBC_UPCFG6) Ping Enable */
#define USBC_UPCFG6_PINGEN          (_U_(0x1) << USBC_UPCFG6_PINGEN_Pos)
#define USBC_UPCFG6_BINTERVAL_Pos   24           /**< \brief (USBC_UPCFG6) binterval parameter */
#define USBC_UPCFG6_BINTERVAL_Msk   (_U_(0xFF) << USBC_UPCFG6_BINTERVAL_Pos)
#define USBC_UPCFG6_BINTERVAL(value) (USBC_UPCFG6_BINTERVAL_Msk & ((value) << USBC_UPCFG6_BINTERVAL_Pos))
#define USBC_UPCFG6_MASK            _U_(0xFF103374) /**< \brief (USBC_UPCFG6) MASK Register */

/* -------- USBC_UPCFG7 : (USBC Offset: 0x51C) (R/W 32) Pipe Configuration Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t :2;               /*!< bit:  0.. 1  Reserved                           */
    uint32_t PBK:1;            /*!< bit:      2  Pipe Banks                         */
    uint32_t :1;               /*!< bit:      3  Reserved                           */
    uint32_t PSIZE:3;          /*!< bit:  4.. 6  Pipe Size                          */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t PTOKEN:2;         /*!< bit:  8.. 9  Pipe Token                         */
    uint32_t :2;               /*!< bit: 10..11  Reserved                           */
    uint32_t PTYPE:2;          /*!< bit: 12..13  Pipe Type                          */
    uint32_t :6;               /*!< bit: 14..19  Reserved                           */
    uint32_t PINGEN:1;         /*!< bit:     20  Ping Enable                        */
    uint32_t :3;               /*!< bit: 21..23  Reserved                           */
    uint32_t BINTERVAL:8;      /*!< bit: 24..31  binterval parameter                */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPCFG7_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPCFG7_OFFSET          0x51C        /**< \brief (USBC_UPCFG7 offset) Pipe Configuration Register */
#define USBC_UPCFG7_RESETVALUE      _U_(0x00000000); /**< \brief (USBC_UPCFG7 reset_value) Pipe Configuration Register */

#define USBC_UPCFG7_PBK_Pos         2            /**< \brief (USBC_UPCFG7) Pipe Banks */
#define USBC_UPCFG7_PBK             (_U_(0x1) << USBC_UPCFG7_PBK_Pos)
#define   USBC_UPCFG7_PBK_SINGLE_Val      _U_(0x0)   /**< \brief (USBC_UPCFG7)  */
#define   USBC_UPCFG7_PBK_DOUBLE_Val      _U_(0x1)   /**< \brief (USBC_UPCFG7)  */
#define USBC_UPCFG7_PBK_SINGLE      (USBC_UPCFG7_PBK_SINGLE_Val    << USBC_UPCFG7_PBK_Pos)
#define USBC_UPCFG7_PBK_DOUBLE      (USBC_UPCFG7_PBK_DOUBLE_Val    << USBC_UPCFG7_PBK_Pos)
#define USBC_UPCFG7_PSIZE_Pos       4            /**< \brief (USBC_UPCFG7) Pipe Size */
#define USBC_UPCFG7_PSIZE_Msk       (_U_(0x7) << USBC_UPCFG7_PSIZE_Pos)
#define USBC_UPCFG7_PSIZE(value)    (USBC_UPCFG7_PSIZE_Msk & ((value) << USBC_UPCFG7_PSIZE_Pos))
#define   USBC_UPCFG7_PSIZE_8_Val         _U_(0x0)   /**< \brief (USBC_UPCFG7)  */
#define   USBC_UPCFG7_PSIZE_16_Val        _U_(0x1)   /**< \brief (USBC_UPCFG7)  */
#define   USBC_UPCFG7_PSIZE_32_Val        _U_(0x2)   /**< \brief (USBC_UPCFG7)  */
#define   USBC_UPCFG7_PSIZE_64_Val        _U_(0x3)   /**< \brief (USBC_UPCFG7)  */
#define   USBC_UPCFG7_PSIZE_128_Val       _U_(0x4)   /**< \brief (USBC_UPCFG7)  */
#define   USBC_UPCFG7_PSIZE_256_Val       _U_(0x5)   /**< \brief (USBC_UPCFG7)  */
#define   USBC_UPCFG7_PSIZE_512_Val       _U_(0x6)   /**< \brief (USBC_UPCFG7)  */
#define   USBC_UPCFG7_PSIZE_1024_Val      _U_(0x7)   /**< \brief (USBC_UPCFG7)  */
#define USBC_UPCFG7_PSIZE_8         (USBC_UPCFG7_PSIZE_8_Val       << USBC_UPCFG7_PSIZE_Pos)
#define USBC_UPCFG7_PSIZE_16        (USBC_UPCFG7_PSIZE_16_Val      << USBC_UPCFG7_PSIZE_Pos)
#define USBC_UPCFG7_PSIZE_32        (USBC_UPCFG7_PSIZE_32_Val      << USBC_UPCFG7_PSIZE_Pos)
#define USBC_UPCFG7_PSIZE_64        (USBC_UPCFG7_PSIZE_64_Val      << USBC_UPCFG7_PSIZE_Pos)
#define USBC_UPCFG7_PSIZE_128       (USBC_UPCFG7_PSIZE_128_Val     << USBC_UPCFG7_PSIZE_Pos)
#define USBC_UPCFG7_PSIZE_256       (USBC_UPCFG7_PSIZE_256_Val     << USBC_UPCFG7_PSIZE_Pos)
#define USBC_UPCFG7_PSIZE_512       (USBC_UPCFG7_PSIZE_512_Val     << USBC_UPCFG7_PSIZE_Pos)
#define USBC_UPCFG7_PSIZE_1024      (USBC_UPCFG7_PSIZE_1024_Val    << USBC_UPCFG7_PSIZE_Pos)
#define USBC_UPCFG7_PTOKEN_Pos      8            /**< \brief (USBC_UPCFG7) Pipe Token */
#define USBC_UPCFG7_PTOKEN_Msk      (_U_(0x3) << USBC_UPCFG7_PTOKEN_Pos)
#define USBC_UPCFG7_PTOKEN(value)   (USBC_UPCFG7_PTOKEN_Msk & ((value) << USBC_UPCFG7_PTOKEN_Pos))
#define   USBC_UPCFG7_PTOKEN_SETUP_Val    _U_(0x0)   /**< \brief (USBC_UPCFG7)  */
#define   USBC_UPCFG7_PTOKEN_IN_Val       _U_(0x1)   /**< \brief (USBC_UPCFG7)  */
#define   USBC_UPCFG7_PTOKEN_OUT_Val      _U_(0x2)   /**< \brief (USBC_UPCFG7)  */
#define USBC_UPCFG7_PTOKEN_SETUP    (USBC_UPCFG7_PTOKEN_SETUP_Val  << USBC_UPCFG7_PTOKEN_Pos)
#define USBC_UPCFG7_PTOKEN_IN       (USBC_UPCFG7_PTOKEN_IN_Val     << USBC_UPCFG7_PTOKEN_Pos)
#define USBC_UPCFG7_PTOKEN_OUT      (USBC_UPCFG7_PTOKEN_OUT_Val    << USBC_UPCFG7_PTOKEN_Pos)
#define USBC_UPCFG7_PTYPE_Pos       12           /**< \brief (USBC_UPCFG7) Pipe Type */
#define USBC_UPCFG7_PTYPE_Msk       (_U_(0x3) << USBC_UPCFG7_PTYPE_Pos)
#define USBC_UPCFG7_PTYPE(value)    (USBC_UPCFG7_PTYPE_Msk & ((value) << USBC_UPCFG7_PTYPE_Pos))
#define   USBC_UPCFG7_PTYPE_CONTROL_Val   _U_(0x0)   /**< \brief (USBC_UPCFG7)  */
#define   USBC_UPCFG7_PTYPE_ISOCHRONOUS_Val _U_(0x1)   /**< \brief (USBC_UPCFG7)  */
#define   USBC_UPCFG7_PTYPE_BULK_Val      _U_(0x2)   /**< \brief (USBC_UPCFG7)  */
#define   USBC_UPCFG7_PTYPE_INTERRUPT_Val _U_(0x3)   /**< \brief (USBC_UPCFG7)  */
#define USBC_UPCFG7_PTYPE_CONTROL   (USBC_UPCFG7_PTYPE_CONTROL_Val << USBC_UPCFG7_PTYPE_Pos)
#define USBC_UPCFG7_PTYPE_ISOCHRONOUS (USBC_UPCFG7_PTYPE_ISOCHRONOUS_Val << USBC_UPCFG7_PTYPE_Pos)
#define USBC_UPCFG7_PTYPE_BULK      (USBC_UPCFG7_PTYPE_BULK_Val    << USBC_UPCFG7_PTYPE_Pos)
#define USBC_UPCFG7_PTYPE_INTERRUPT (USBC_UPCFG7_PTYPE_INTERRUPT_Val << USBC_UPCFG7_PTYPE_Pos)
#define USBC_UPCFG7_PINGEN_Pos      20           /**< \brief (USBC_UPCFG7) Ping Enable */
#define USBC_UPCFG7_PINGEN          (_U_(0x1) << USBC_UPCFG7_PINGEN_Pos)
#define USBC_UPCFG7_BINTERVAL_Pos   24           /**< \brief (USBC_UPCFG7) binterval parameter */
#define USBC_UPCFG7_BINTERVAL_Msk   (_U_(0xFF) << USBC_UPCFG7_BINTERVAL_Pos)
#define USBC_UPCFG7_BINTERVAL(value) (USBC_UPCFG7_BINTERVAL_Msk & ((value) << USBC_UPCFG7_BINTERVAL_Pos))
#define USBC_UPCFG7_MASK            _U_(0xFF103374) /**< \brief (USBC_UPCFG7) MASK Register */

/* -------- USBC_UPSTA0 : (USBC Offset: 0x530) (R/  32) Pipe Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXINI:1;          /*!< bit:      0  Received IN Data Interrupt         */
    uint32_t TXOUTI:1;         /*!< bit:      1  Transmitted OUT Data Interrupt     */
    uint32_t TXSTPI:1;         /*!< bit:      2  Transmitted SETUP Interrupt        */
    uint32_t PERRI:1;          /*!< bit:      3  Pipe Error Interrupt               */
    uint32_t NAKEDI:1;         /*!< bit:      4  NAKed Interrupt                    */
    uint32_t ERRORFI:1;        /*!< bit:      5  Errorflow Interrupt                */
    uint32_t RXSTALLDI:1;      /*!< bit:      6  Received STALLed Interrupt         */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t DTSEQ:2;          /*!< bit:  8.. 9  Data Toggle Sequence               */
    uint32_t RAMACERI:1;       /*!< bit:     10  Ram Access Error Interrupt         */
    uint32_t :1;               /*!< bit:     11  Reserved                           */
    uint32_t NBUSYBK:2;        /*!< bit: 12..13  Number of Busy Bank                */
    uint32_t CURRBK:2;         /*!< bit: 14..15  Current Bank                       */
    uint32_t :16;              /*!< bit: 16..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPSTA0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPSTA0_OFFSET          0x530        /**< \brief (USBC_UPSTA0 offset) Pipe Status Register */
#define USBC_UPSTA0_RESETVALUE      _U_(0x00000000); /**< \brief (USBC_UPSTA0 reset_value) Pipe Status Register */

#define USBC_UPSTA0_RXINI_Pos       0            /**< \brief (USBC_UPSTA0) Received IN Data Interrupt */
#define USBC_UPSTA0_RXINI           (_U_(0x1) << USBC_UPSTA0_RXINI_Pos)
#define USBC_UPSTA0_TXOUTI_Pos      1            /**< \brief (USBC_UPSTA0) Transmitted OUT Data Interrupt */
#define USBC_UPSTA0_TXOUTI          (_U_(0x1) << USBC_UPSTA0_TXOUTI_Pos)
#define USBC_UPSTA0_TXSTPI_Pos      2            /**< \brief (USBC_UPSTA0) Transmitted SETUP Interrupt */
#define USBC_UPSTA0_TXSTPI          (_U_(0x1) << USBC_UPSTA0_TXSTPI_Pos)
#define USBC_UPSTA0_PERRI_Pos       3            /**< \brief (USBC_UPSTA0) Pipe Error Interrupt */
#define USBC_UPSTA0_PERRI           (_U_(0x1) << USBC_UPSTA0_PERRI_Pos)
#define USBC_UPSTA0_NAKEDI_Pos      4            /**< \brief (USBC_UPSTA0) NAKed Interrupt */
#define USBC_UPSTA0_NAKEDI          (_U_(0x1) << USBC_UPSTA0_NAKEDI_Pos)
#define USBC_UPSTA0_ERRORFI_Pos     5            /**< \brief (USBC_UPSTA0) Errorflow Interrupt */
#define USBC_UPSTA0_ERRORFI         (_U_(0x1) << USBC_UPSTA0_ERRORFI_Pos)
#define USBC_UPSTA0_RXSTALLDI_Pos   6            /**< \brief (USBC_UPSTA0) Received STALLed Interrupt */
#define USBC_UPSTA0_RXSTALLDI       (_U_(0x1) << USBC_UPSTA0_RXSTALLDI_Pos)
#define USBC_UPSTA0_DTSEQ_Pos       8            /**< \brief (USBC_UPSTA0) Data Toggle Sequence */
#define USBC_UPSTA0_DTSEQ_Msk       (_U_(0x3) << USBC_UPSTA0_DTSEQ_Pos)
#define USBC_UPSTA0_DTSEQ(value)    (USBC_UPSTA0_DTSEQ_Msk & ((value) << USBC_UPSTA0_DTSEQ_Pos))
#define USBC_UPSTA0_RAMACERI_Pos    10           /**< \brief (USBC_UPSTA0) Ram Access Error Interrupt */
#define USBC_UPSTA0_RAMACERI        (_U_(0x1) << USBC_UPSTA0_RAMACERI_Pos)
#define USBC_UPSTA0_NBUSYBK_Pos     12           /**< \brief (USBC_UPSTA0) Number of Busy Bank */
#define USBC_UPSTA0_NBUSYBK_Msk     (_U_(0x3) << USBC_UPSTA0_NBUSYBK_Pos)
#define USBC_UPSTA0_NBUSYBK(value)  (USBC_UPSTA0_NBUSYBK_Msk & ((value) << USBC_UPSTA0_NBUSYBK_Pos))
#define USBC_UPSTA0_CURRBK_Pos      14           /**< \brief (USBC_UPSTA0) Current Bank */
#define USBC_UPSTA0_CURRBK_Msk      (_U_(0x3) << USBC_UPSTA0_CURRBK_Pos)
#define USBC_UPSTA0_CURRBK(value)   (USBC_UPSTA0_CURRBK_Msk & ((value) << USBC_UPSTA0_CURRBK_Pos))
#define USBC_UPSTA0_MASK            _U_(0x0000F77F) /**< \brief (USBC_UPSTA0) MASK Register */

/* -------- USBC_UPSTA1 : (USBC Offset: 0x534) (R/  32) Pipe Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXINI:1;          /*!< bit:      0  Received IN Data Interrupt         */
    uint32_t TXOUTI:1;         /*!< bit:      1  Transmitted OUT Data Interrupt     */
    uint32_t TXSTPI:1;         /*!< bit:      2  Transmitted SETUP Interrupt        */
    uint32_t PERRI:1;          /*!< bit:      3  Pipe Error Interrupt               */
    uint32_t NAKEDI:1;         /*!< bit:      4  NAKed Interrupt                    */
    uint32_t ERRORFI:1;        /*!< bit:      5  Errorflow Interrupt                */
    uint32_t RXSTALLDI:1;      /*!< bit:      6  Received STALLed Interrupt         */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t DTSEQ:2;          /*!< bit:  8.. 9  Data Toggle Sequence               */
    uint32_t RAMACERI:1;       /*!< bit:     10  Ram Access Error Interrupt         */
    uint32_t :1;               /*!< bit:     11  Reserved                           */
    uint32_t NBUSYBK:2;        /*!< bit: 12..13  Number of Busy Bank                */
    uint32_t CURRBK:2;         /*!< bit: 14..15  Current Bank                       */
    uint32_t :16;              /*!< bit: 16..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPSTA1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPSTA1_OFFSET          0x534        /**< \brief (USBC_UPSTA1 offset) Pipe Status Register */
#define USBC_UPSTA1_RESETVALUE      _U_(0x00000000); /**< \brief (USBC_UPSTA1 reset_value) Pipe Status Register */

#define USBC_UPSTA1_RXINI_Pos       0            /**< \brief (USBC_UPSTA1) Received IN Data Interrupt */
#define USBC_UPSTA1_RXINI           (_U_(0x1) << USBC_UPSTA1_RXINI_Pos)
#define USBC_UPSTA1_TXOUTI_Pos      1            /**< \brief (USBC_UPSTA1) Transmitted OUT Data Interrupt */
#define USBC_UPSTA1_TXOUTI          (_U_(0x1) << USBC_UPSTA1_TXOUTI_Pos)
#define USBC_UPSTA1_TXSTPI_Pos      2            /**< \brief (USBC_UPSTA1) Transmitted SETUP Interrupt */
#define USBC_UPSTA1_TXSTPI          (_U_(0x1) << USBC_UPSTA1_TXSTPI_Pos)
#define USBC_UPSTA1_PERRI_Pos       3            /**< \brief (USBC_UPSTA1) Pipe Error Interrupt */
#define USBC_UPSTA1_PERRI           (_U_(0x1) << USBC_UPSTA1_PERRI_Pos)
#define USBC_UPSTA1_NAKEDI_Pos      4            /**< \brief (USBC_UPSTA1) NAKed Interrupt */
#define USBC_UPSTA1_NAKEDI          (_U_(0x1) << USBC_UPSTA1_NAKEDI_Pos)
#define USBC_UPSTA1_ERRORFI_Pos     5            /**< \brief (USBC_UPSTA1) Errorflow Interrupt */
#define USBC_UPSTA1_ERRORFI         (_U_(0x1) << USBC_UPSTA1_ERRORFI_Pos)
#define USBC_UPSTA1_RXSTALLDI_Pos   6            /**< \brief (USBC_UPSTA1) Received STALLed Interrupt */
#define USBC_UPSTA1_RXSTALLDI       (_U_(0x1) << USBC_UPSTA1_RXSTALLDI_Pos)
#define USBC_UPSTA1_DTSEQ_Pos       8            /**< \brief (USBC_UPSTA1) Data Toggle Sequence */
#define USBC_UPSTA1_DTSEQ_Msk       (_U_(0x3) << USBC_UPSTA1_DTSEQ_Pos)
#define USBC_UPSTA1_DTSEQ(value)    (USBC_UPSTA1_DTSEQ_Msk & ((value) << USBC_UPSTA1_DTSEQ_Pos))
#define USBC_UPSTA1_RAMACERI_Pos    10           /**< \brief (USBC_UPSTA1) Ram Access Error Interrupt */
#define USBC_UPSTA1_RAMACERI        (_U_(0x1) << USBC_UPSTA1_RAMACERI_Pos)
#define USBC_UPSTA1_NBUSYBK_Pos     12           /**< \brief (USBC_UPSTA1) Number of Busy Bank */
#define USBC_UPSTA1_NBUSYBK_Msk     (_U_(0x3) << USBC_UPSTA1_NBUSYBK_Pos)
#define USBC_UPSTA1_NBUSYBK(value)  (USBC_UPSTA1_NBUSYBK_Msk & ((value) << USBC_UPSTA1_NBUSYBK_Pos))
#define USBC_UPSTA1_CURRBK_Pos      14           /**< \brief (USBC_UPSTA1) Current Bank */
#define USBC_UPSTA1_CURRBK_Msk      (_U_(0x3) << USBC_UPSTA1_CURRBK_Pos)
#define USBC_UPSTA1_CURRBK(value)   (USBC_UPSTA1_CURRBK_Msk & ((value) << USBC_UPSTA1_CURRBK_Pos))
#define USBC_UPSTA1_MASK            _U_(0x0000F77F) /**< \brief (USBC_UPSTA1) MASK Register */

/* -------- USBC_UPSTA2 : (USBC Offset: 0x538) (R/  32) Pipe Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXINI:1;          /*!< bit:      0  Received IN Data Interrupt         */
    uint32_t TXOUTI:1;         /*!< bit:      1  Transmitted OUT Data Interrupt     */
    uint32_t TXSTPI:1;         /*!< bit:      2  Transmitted SETUP Interrupt        */
    uint32_t PERRI:1;          /*!< bit:      3  Pipe Error Interrupt               */
    uint32_t NAKEDI:1;         /*!< bit:      4  NAKed Interrupt                    */
    uint32_t ERRORFI:1;        /*!< bit:      5  Errorflow Interrupt                */
    uint32_t RXSTALLDI:1;      /*!< bit:      6  Received STALLed Interrupt         */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t DTSEQ:2;          /*!< bit:  8.. 9  Data Toggle Sequence               */
    uint32_t RAMACERI:1;       /*!< bit:     10  Ram Access Error Interrupt         */
    uint32_t :1;               /*!< bit:     11  Reserved                           */
    uint32_t NBUSYBK:2;        /*!< bit: 12..13  Number of Busy Bank                */
    uint32_t CURRBK:2;         /*!< bit: 14..15  Current Bank                       */
    uint32_t :16;              /*!< bit: 16..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPSTA2_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPSTA2_OFFSET          0x538        /**< \brief (USBC_UPSTA2 offset) Pipe Status Register */
#define USBC_UPSTA2_RESETVALUE      _U_(0x00000000); /**< \brief (USBC_UPSTA2 reset_value) Pipe Status Register */

#define USBC_UPSTA2_RXINI_Pos       0            /**< \brief (USBC_UPSTA2) Received IN Data Interrupt */
#define USBC_UPSTA2_RXINI           (_U_(0x1) << USBC_UPSTA2_RXINI_Pos)
#define USBC_UPSTA2_TXOUTI_Pos      1            /**< \brief (USBC_UPSTA2) Transmitted OUT Data Interrupt */
#define USBC_UPSTA2_TXOUTI          (_U_(0x1) << USBC_UPSTA2_TXOUTI_Pos)
#define USBC_UPSTA2_TXSTPI_Pos      2            /**< \brief (USBC_UPSTA2) Transmitted SETUP Interrupt */
#define USBC_UPSTA2_TXSTPI          (_U_(0x1) << USBC_UPSTA2_TXSTPI_Pos)
#define USBC_UPSTA2_PERRI_Pos       3            /**< \brief (USBC_UPSTA2) Pipe Error Interrupt */
#define USBC_UPSTA2_PERRI           (_U_(0x1) << USBC_UPSTA2_PERRI_Pos)
#define USBC_UPSTA2_NAKEDI_Pos      4            /**< \brief (USBC_UPSTA2) NAKed Interrupt */
#define USBC_UPSTA2_NAKEDI          (_U_(0x1) << USBC_UPSTA2_NAKEDI_Pos)
#define USBC_UPSTA2_ERRORFI_Pos     5            /**< \brief (USBC_UPSTA2) Errorflow Interrupt */
#define USBC_UPSTA2_ERRORFI         (_U_(0x1) << USBC_UPSTA2_ERRORFI_Pos)
#define USBC_UPSTA2_RXSTALLDI_Pos   6            /**< \brief (USBC_UPSTA2) Received STALLed Interrupt */
#define USBC_UPSTA2_RXSTALLDI       (_U_(0x1) << USBC_UPSTA2_RXSTALLDI_Pos)
#define USBC_UPSTA2_DTSEQ_Pos       8            /**< \brief (USBC_UPSTA2) Data Toggle Sequence */
#define USBC_UPSTA2_DTSEQ_Msk       (_U_(0x3) << USBC_UPSTA2_DTSEQ_Pos)
#define USBC_UPSTA2_DTSEQ(value)    (USBC_UPSTA2_DTSEQ_Msk & ((value) << USBC_UPSTA2_DTSEQ_Pos))
#define USBC_UPSTA2_RAMACERI_Pos    10           /**< \brief (USBC_UPSTA2) Ram Access Error Interrupt */
#define USBC_UPSTA2_RAMACERI        (_U_(0x1) << USBC_UPSTA2_RAMACERI_Pos)
#define USBC_UPSTA2_NBUSYBK_Pos     12           /**< \brief (USBC_UPSTA2) Number of Busy Bank */
#define USBC_UPSTA2_NBUSYBK_Msk     (_U_(0x3) << USBC_UPSTA2_NBUSYBK_Pos)
#define USBC_UPSTA2_NBUSYBK(value)  (USBC_UPSTA2_NBUSYBK_Msk & ((value) << USBC_UPSTA2_NBUSYBK_Pos))
#define USBC_UPSTA2_CURRBK_Pos      14           /**< \brief (USBC_UPSTA2) Current Bank */
#define USBC_UPSTA2_CURRBK_Msk      (_U_(0x3) << USBC_UPSTA2_CURRBK_Pos)
#define USBC_UPSTA2_CURRBK(value)   (USBC_UPSTA2_CURRBK_Msk & ((value) << USBC_UPSTA2_CURRBK_Pos))
#define USBC_UPSTA2_MASK            _U_(0x0000F77F) /**< \brief (USBC_UPSTA2) MASK Register */

/* -------- USBC_UPSTA3 : (USBC Offset: 0x53C) (R/  32) Pipe Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXINI:1;          /*!< bit:      0  Received IN Data Interrupt         */
    uint32_t TXOUTI:1;         /*!< bit:      1  Transmitted OUT Data Interrupt     */
    uint32_t TXSTPI:1;         /*!< bit:      2  Transmitted SETUP Interrupt        */
    uint32_t PERRI:1;          /*!< bit:      3  Pipe Error Interrupt               */
    uint32_t NAKEDI:1;         /*!< bit:      4  NAKed Interrupt                    */
    uint32_t ERRORFI:1;        /*!< bit:      5  Errorflow Interrupt                */
    uint32_t RXSTALLDI:1;      /*!< bit:      6  Received STALLed Interrupt         */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t DTSEQ:2;          /*!< bit:  8.. 9  Data Toggle Sequence               */
    uint32_t RAMACERI:1;       /*!< bit:     10  Ram Access Error Interrupt         */
    uint32_t :1;               /*!< bit:     11  Reserved                           */
    uint32_t NBUSYBK:2;        /*!< bit: 12..13  Number of Busy Bank                */
    uint32_t CURRBK:2;         /*!< bit: 14..15  Current Bank                       */
    uint32_t :16;              /*!< bit: 16..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPSTA3_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPSTA3_OFFSET          0x53C        /**< \brief (USBC_UPSTA3 offset) Pipe Status Register */
#define USBC_UPSTA3_RESETVALUE      _U_(0x00000000); /**< \brief (USBC_UPSTA3 reset_value) Pipe Status Register */

#define USBC_UPSTA3_RXINI_Pos       0            /**< \brief (USBC_UPSTA3) Received IN Data Interrupt */
#define USBC_UPSTA3_RXINI           (_U_(0x1) << USBC_UPSTA3_RXINI_Pos)
#define USBC_UPSTA3_TXOUTI_Pos      1            /**< \brief (USBC_UPSTA3) Transmitted OUT Data Interrupt */
#define USBC_UPSTA3_TXOUTI          (_U_(0x1) << USBC_UPSTA3_TXOUTI_Pos)
#define USBC_UPSTA3_TXSTPI_Pos      2            /**< \brief (USBC_UPSTA3) Transmitted SETUP Interrupt */
#define USBC_UPSTA3_TXSTPI          (_U_(0x1) << USBC_UPSTA3_TXSTPI_Pos)
#define USBC_UPSTA3_PERRI_Pos       3            /**< \brief (USBC_UPSTA3) Pipe Error Interrupt */
#define USBC_UPSTA3_PERRI           (_U_(0x1) << USBC_UPSTA3_PERRI_Pos)
#define USBC_UPSTA3_NAKEDI_Pos      4            /**< \brief (USBC_UPSTA3) NAKed Interrupt */
#define USBC_UPSTA3_NAKEDI          (_U_(0x1) << USBC_UPSTA3_NAKEDI_Pos)
#define USBC_UPSTA3_ERRORFI_Pos     5            /**< \brief (USBC_UPSTA3) Errorflow Interrupt */
#define USBC_UPSTA3_ERRORFI         (_U_(0x1) << USBC_UPSTA3_ERRORFI_Pos)
#define USBC_UPSTA3_RXSTALLDI_Pos   6            /**< \brief (USBC_UPSTA3) Received STALLed Interrupt */
#define USBC_UPSTA3_RXSTALLDI       (_U_(0x1) << USBC_UPSTA3_RXSTALLDI_Pos)
#define USBC_UPSTA3_DTSEQ_Pos       8            /**< \brief (USBC_UPSTA3) Data Toggle Sequence */
#define USBC_UPSTA3_DTSEQ_Msk       (_U_(0x3) << USBC_UPSTA3_DTSEQ_Pos)
#define USBC_UPSTA3_DTSEQ(value)    (USBC_UPSTA3_DTSEQ_Msk & ((value) << USBC_UPSTA3_DTSEQ_Pos))
#define USBC_UPSTA3_RAMACERI_Pos    10           /**< \brief (USBC_UPSTA3) Ram Access Error Interrupt */
#define USBC_UPSTA3_RAMACERI        (_U_(0x1) << USBC_UPSTA3_RAMACERI_Pos)
#define USBC_UPSTA3_NBUSYBK_Pos     12           /**< \brief (USBC_UPSTA3) Number of Busy Bank */
#define USBC_UPSTA3_NBUSYBK_Msk     (_U_(0x3) << USBC_UPSTA3_NBUSYBK_Pos)
#define USBC_UPSTA3_NBUSYBK(value)  (USBC_UPSTA3_NBUSYBK_Msk & ((value) << USBC_UPSTA3_NBUSYBK_Pos))
#define USBC_UPSTA3_CURRBK_Pos      14           /**< \brief (USBC_UPSTA3) Current Bank */
#define USBC_UPSTA3_CURRBK_Msk      (_U_(0x3) << USBC_UPSTA3_CURRBK_Pos)
#define USBC_UPSTA3_CURRBK(value)   (USBC_UPSTA3_CURRBK_Msk & ((value) << USBC_UPSTA3_CURRBK_Pos))
#define USBC_UPSTA3_MASK            _U_(0x0000F77F) /**< \brief (USBC_UPSTA3) MASK Register */

/* -------- USBC_UPSTA4 : (USBC Offset: 0x540) (R/  32) Pipe Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXINI:1;          /*!< bit:      0  Received IN Data Interrupt         */
    uint32_t TXOUTI:1;         /*!< bit:      1  Transmitted OUT Data Interrupt     */
    uint32_t TXSTPI:1;         /*!< bit:      2  Transmitted SETUP Interrupt        */
    uint32_t PERRI:1;          /*!< bit:      3  Pipe Error Interrupt               */
    uint32_t NAKEDI:1;         /*!< bit:      4  NAKed Interrupt                    */
    uint32_t ERRORFI:1;        /*!< bit:      5  Errorflow Interrupt                */
    uint32_t RXSTALLDI:1;      /*!< bit:      6  Received STALLed Interrupt         */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t DTSEQ:2;          /*!< bit:  8.. 9  Data Toggle Sequence               */
    uint32_t RAMACERI:1;       /*!< bit:     10  Ram Access Error Interrupt         */
    uint32_t :1;               /*!< bit:     11  Reserved                           */
    uint32_t NBUSYBK:2;        /*!< bit: 12..13  Number of Busy Bank                */
    uint32_t CURRBK:2;         /*!< bit: 14..15  Current Bank                       */
    uint32_t :16;              /*!< bit: 16..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPSTA4_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPSTA4_OFFSET          0x540        /**< \brief (USBC_UPSTA4 offset) Pipe Status Register */
#define USBC_UPSTA4_RESETVALUE      _U_(0x00000000); /**< \brief (USBC_UPSTA4 reset_value) Pipe Status Register */

#define USBC_UPSTA4_RXINI_Pos       0            /**< \brief (USBC_UPSTA4) Received IN Data Interrupt */
#define USBC_UPSTA4_RXINI           (_U_(0x1) << USBC_UPSTA4_RXINI_Pos)
#define USBC_UPSTA4_TXOUTI_Pos      1            /**< \brief (USBC_UPSTA4) Transmitted OUT Data Interrupt */
#define USBC_UPSTA4_TXOUTI          (_U_(0x1) << USBC_UPSTA4_TXOUTI_Pos)
#define USBC_UPSTA4_TXSTPI_Pos      2            /**< \brief (USBC_UPSTA4) Transmitted SETUP Interrupt */
#define USBC_UPSTA4_TXSTPI          (_U_(0x1) << USBC_UPSTA4_TXSTPI_Pos)
#define USBC_UPSTA4_PERRI_Pos       3            /**< \brief (USBC_UPSTA4) Pipe Error Interrupt */
#define USBC_UPSTA4_PERRI           (_U_(0x1) << USBC_UPSTA4_PERRI_Pos)
#define USBC_UPSTA4_NAKEDI_Pos      4            /**< \brief (USBC_UPSTA4) NAKed Interrupt */
#define USBC_UPSTA4_NAKEDI          (_U_(0x1) << USBC_UPSTA4_NAKEDI_Pos)
#define USBC_UPSTA4_ERRORFI_Pos     5            /**< \brief (USBC_UPSTA4) Errorflow Interrupt */
#define USBC_UPSTA4_ERRORFI         (_U_(0x1) << USBC_UPSTA4_ERRORFI_Pos)
#define USBC_UPSTA4_RXSTALLDI_Pos   6            /**< \brief (USBC_UPSTA4) Received STALLed Interrupt */
#define USBC_UPSTA4_RXSTALLDI       (_U_(0x1) << USBC_UPSTA4_RXSTALLDI_Pos)
#define USBC_UPSTA4_DTSEQ_Pos       8            /**< \brief (USBC_UPSTA4) Data Toggle Sequence */
#define USBC_UPSTA4_DTSEQ_Msk       (_U_(0x3) << USBC_UPSTA4_DTSEQ_Pos)
#define USBC_UPSTA4_DTSEQ(value)    (USBC_UPSTA4_DTSEQ_Msk & ((value) << USBC_UPSTA4_DTSEQ_Pos))
#define USBC_UPSTA4_RAMACERI_Pos    10           /**< \brief (USBC_UPSTA4) Ram Access Error Interrupt */
#define USBC_UPSTA4_RAMACERI        (_U_(0x1) << USBC_UPSTA4_RAMACERI_Pos)
#define USBC_UPSTA4_NBUSYBK_Pos     12           /**< \brief (USBC_UPSTA4) Number of Busy Bank */
#define USBC_UPSTA4_NBUSYBK_Msk     (_U_(0x3) << USBC_UPSTA4_NBUSYBK_Pos)
#define USBC_UPSTA4_NBUSYBK(value)  (USBC_UPSTA4_NBUSYBK_Msk & ((value) << USBC_UPSTA4_NBUSYBK_Pos))
#define USBC_UPSTA4_CURRBK_Pos      14           /**< \brief (USBC_UPSTA4) Current Bank */
#define USBC_UPSTA4_CURRBK_Msk      (_U_(0x3) << USBC_UPSTA4_CURRBK_Pos)
#define USBC_UPSTA4_CURRBK(value)   (USBC_UPSTA4_CURRBK_Msk & ((value) << USBC_UPSTA4_CURRBK_Pos))
#define USBC_UPSTA4_MASK            _U_(0x0000F77F) /**< \brief (USBC_UPSTA4) MASK Register */

/* -------- USBC_UPSTA5 : (USBC Offset: 0x544) (R/  32) Pipe Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXINI:1;          /*!< bit:      0  Received IN Data Interrupt         */
    uint32_t TXOUTI:1;         /*!< bit:      1  Transmitted OUT Data Interrupt     */
    uint32_t TXSTPI:1;         /*!< bit:      2  Transmitted SETUP Interrupt        */
    uint32_t PERRI:1;          /*!< bit:      3  Pipe Error Interrupt               */
    uint32_t NAKEDI:1;         /*!< bit:      4  NAKed Interrupt                    */
    uint32_t ERRORFI:1;        /*!< bit:      5  Errorflow Interrupt                */
    uint32_t RXSTALLDI:1;      /*!< bit:      6  Received STALLed Interrupt         */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t DTSEQ:2;          /*!< bit:  8.. 9  Data Toggle Sequence               */
    uint32_t RAMACERI:1;       /*!< bit:     10  Ram Access Error Interrupt         */
    uint32_t :1;               /*!< bit:     11  Reserved                           */
    uint32_t NBUSYBK:2;        /*!< bit: 12..13  Number of Busy Bank                */
    uint32_t CURRBK:2;         /*!< bit: 14..15  Current Bank                       */
    uint32_t :16;              /*!< bit: 16..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPSTA5_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPSTA5_OFFSET          0x544        /**< \brief (USBC_UPSTA5 offset) Pipe Status Register */
#define USBC_UPSTA5_RESETVALUE      _U_(0x00000000); /**< \brief (USBC_UPSTA5 reset_value) Pipe Status Register */

#define USBC_UPSTA5_RXINI_Pos       0            /**< \brief (USBC_UPSTA5) Received IN Data Interrupt */
#define USBC_UPSTA5_RXINI           (_U_(0x1) << USBC_UPSTA5_RXINI_Pos)
#define USBC_UPSTA5_TXOUTI_Pos      1            /**< \brief (USBC_UPSTA5) Transmitted OUT Data Interrupt */
#define USBC_UPSTA5_TXOUTI          (_U_(0x1) << USBC_UPSTA5_TXOUTI_Pos)
#define USBC_UPSTA5_TXSTPI_Pos      2            /**< \brief (USBC_UPSTA5) Transmitted SETUP Interrupt */
#define USBC_UPSTA5_TXSTPI          (_U_(0x1) << USBC_UPSTA5_TXSTPI_Pos)
#define USBC_UPSTA5_PERRI_Pos       3            /**< \brief (USBC_UPSTA5) Pipe Error Interrupt */
#define USBC_UPSTA5_PERRI           (_U_(0x1) << USBC_UPSTA5_PERRI_Pos)
#define USBC_UPSTA5_NAKEDI_Pos      4            /**< \brief (USBC_UPSTA5) NAKed Interrupt */
#define USBC_UPSTA5_NAKEDI          (_U_(0x1) << USBC_UPSTA5_NAKEDI_Pos)
#define USBC_UPSTA5_ERRORFI_Pos     5            /**< \brief (USBC_UPSTA5) Errorflow Interrupt */
#define USBC_UPSTA5_ERRORFI         (_U_(0x1) << USBC_UPSTA5_ERRORFI_Pos)
#define USBC_UPSTA5_RXSTALLDI_Pos   6            /**< \brief (USBC_UPSTA5) Received STALLed Interrupt */
#define USBC_UPSTA5_RXSTALLDI       (_U_(0x1) << USBC_UPSTA5_RXSTALLDI_Pos)
#define USBC_UPSTA5_DTSEQ_Pos       8            /**< \brief (USBC_UPSTA5) Data Toggle Sequence */
#define USBC_UPSTA5_DTSEQ_Msk       (_U_(0x3) << USBC_UPSTA5_DTSEQ_Pos)
#define USBC_UPSTA5_DTSEQ(value)    (USBC_UPSTA5_DTSEQ_Msk & ((value) << USBC_UPSTA5_DTSEQ_Pos))
#define USBC_UPSTA5_RAMACERI_Pos    10           /**< \brief (USBC_UPSTA5) Ram Access Error Interrupt */
#define USBC_UPSTA5_RAMACERI        (_U_(0x1) << USBC_UPSTA5_RAMACERI_Pos)
#define USBC_UPSTA5_NBUSYBK_Pos     12           /**< \brief (USBC_UPSTA5) Number of Busy Bank */
#define USBC_UPSTA5_NBUSYBK_Msk     (_U_(0x3) << USBC_UPSTA5_NBUSYBK_Pos)
#define USBC_UPSTA5_NBUSYBK(value)  (USBC_UPSTA5_NBUSYBK_Msk & ((value) << USBC_UPSTA5_NBUSYBK_Pos))
#define USBC_UPSTA5_CURRBK_Pos      14           /**< \brief (USBC_UPSTA5) Current Bank */
#define USBC_UPSTA5_CURRBK_Msk      (_U_(0x3) << USBC_UPSTA5_CURRBK_Pos)
#define USBC_UPSTA5_CURRBK(value)   (USBC_UPSTA5_CURRBK_Msk & ((value) << USBC_UPSTA5_CURRBK_Pos))
#define USBC_UPSTA5_MASK            _U_(0x0000F77F) /**< \brief (USBC_UPSTA5) MASK Register */

/* -------- USBC_UPSTA6 : (USBC Offset: 0x548) (R/  32) Pipe Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXINI:1;          /*!< bit:      0  Received IN Data Interrupt         */
    uint32_t TXOUTI:1;         /*!< bit:      1  Transmitted OUT Data Interrupt     */
    uint32_t TXSTPI:1;         /*!< bit:      2  Transmitted SETUP Interrupt        */
    uint32_t PERRI:1;          /*!< bit:      3  Pipe Error Interrupt               */
    uint32_t NAKEDI:1;         /*!< bit:      4  NAKed Interrupt                    */
    uint32_t ERRORFI:1;        /*!< bit:      5  Errorflow Interrupt                */
    uint32_t RXSTALLDI:1;      /*!< bit:      6  Received STALLed Interrupt         */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t DTSEQ:2;          /*!< bit:  8.. 9  Data Toggle Sequence               */
    uint32_t RAMACERI:1;       /*!< bit:     10  Ram Access Error Interrupt         */
    uint32_t :1;               /*!< bit:     11  Reserved                           */
    uint32_t NBUSYBK:2;        /*!< bit: 12..13  Number of Busy Bank                */
    uint32_t CURRBK:2;         /*!< bit: 14..15  Current Bank                       */
    uint32_t :16;              /*!< bit: 16..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPSTA6_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPSTA6_OFFSET          0x548        /**< \brief (USBC_UPSTA6 offset) Pipe Status Register */
#define USBC_UPSTA6_RESETVALUE      _U_(0x00000000); /**< \brief (USBC_UPSTA6 reset_value) Pipe Status Register */

#define USBC_UPSTA6_RXINI_Pos       0            /**< \brief (USBC_UPSTA6) Received IN Data Interrupt */
#define USBC_UPSTA6_RXINI           (_U_(0x1) << USBC_UPSTA6_RXINI_Pos)
#define USBC_UPSTA6_TXOUTI_Pos      1            /**< \brief (USBC_UPSTA6) Transmitted OUT Data Interrupt */
#define USBC_UPSTA6_TXOUTI          (_U_(0x1) << USBC_UPSTA6_TXOUTI_Pos)
#define USBC_UPSTA6_TXSTPI_Pos      2            /**< \brief (USBC_UPSTA6) Transmitted SETUP Interrupt */
#define USBC_UPSTA6_TXSTPI          (_U_(0x1) << USBC_UPSTA6_TXSTPI_Pos)
#define USBC_UPSTA6_PERRI_Pos       3            /**< \brief (USBC_UPSTA6) Pipe Error Interrupt */
#define USBC_UPSTA6_PERRI           (_U_(0x1) << USBC_UPSTA6_PERRI_Pos)
#define USBC_UPSTA6_NAKEDI_Pos      4            /**< \brief (USBC_UPSTA6) NAKed Interrupt */
#define USBC_UPSTA6_NAKEDI          (_U_(0x1) << USBC_UPSTA6_NAKEDI_Pos)
#define USBC_UPSTA6_ERRORFI_Pos     5            /**< \brief (USBC_UPSTA6) Errorflow Interrupt */
#define USBC_UPSTA6_ERRORFI         (_U_(0x1) << USBC_UPSTA6_ERRORFI_Pos)
#define USBC_UPSTA6_RXSTALLDI_Pos   6            /**< \brief (USBC_UPSTA6) Received STALLed Interrupt */
#define USBC_UPSTA6_RXSTALLDI       (_U_(0x1) << USBC_UPSTA6_RXSTALLDI_Pos)
#define USBC_UPSTA6_DTSEQ_Pos       8            /**< \brief (USBC_UPSTA6) Data Toggle Sequence */
#define USBC_UPSTA6_DTSEQ_Msk       (_U_(0x3) << USBC_UPSTA6_DTSEQ_Pos)
#define USBC_UPSTA6_DTSEQ(value)    (USBC_UPSTA6_DTSEQ_Msk & ((value) << USBC_UPSTA6_DTSEQ_Pos))
#define USBC_UPSTA6_RAMACERI_Pos    10           /**< \brief (USBC_UPSTA6) Ram Access Error Interrupt */
#define USBC_UPSTA6_RAMACERI        (_U_(0x1) << USBC_UPSTA6_RAMACERI_Pos)
#define USBC_UPSTA6_NBUSYBK_Pos     12           /**< \brief (USBC_UPSTA6) Number of Busy Bank */
#define USBC_UPSTA6_NBUSYBK_Msk     (_U_(0x3) << USBC_UPSTA6_NBUSYBK_Pos)
#define USBC_UPSTA6_NBUSYBK(value)  (USBC_UPSTA6_NBUSYBK_Msk & ((value) << USBC_UPSTA6_NBUSYBK_Pos))
#define USBC_UPSTA6_CURRBK_Pos      14           /**< \brief (USBC_UPSTA6) Current Bank */
#define USBC_UPSTA6_CURRBK_Msk      (_U_(0x3) << USBC_UPSTA6_CURRBK_Pos)
#define USBC_UPSTA6_CURRBK(value)   (USBC_UPSTA6_CURRBK_Msk & ((value) << USBC_UPSTA6_CURRBK_Pos))
#define USBC_UPSTA6_MASK            _U_(0x0000F77F) /**< \brief (USBC_UPSTA6) MASK Register */

/* -------- USBC_UPSTA7 : (USBC Offset: 0x54C) (R/  32) Pipe Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXINI:1;          /*!< bit:      0  Received IN Data Interrupt         */
    uint32_t TXOUTI:1;         /*!< bit:      1  Transmitted OUT Data Interrupt     */
    uint32_t TXSTPI:1;         /*!< bit:      2  Transmitted SETUP Interrupt        */
    uint32_t PERRI:1;          /*!< bit:      3  Pipe Error Interrupt               */
    uint32_t NAKEDI:1;         /*!< bit:      4  NAKed Interrupt                    */
    uint32_t ERRORFI:1;        /*!< bit:      5  Errorflow Interrupt                */
    uint32_t RXSTALLDI:1;      /*!< bit:      6  Received STALLed Interrupt         */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t DTSEQ:2;          /*!< bit:  8.. 9  Data Toggle Sequence               */
    uint32_t RAMACERI:1;       /*!< bit:     10  Ram Access Error Interrupt         */
    uint32_t :1;               /*!< bit:     11  Reserved                           */
    uint32_t NBUSYBK:2;        /*!< bit: 12..13  Number of Busy Bank                */
    uint32_t CURRBK:2;         /*!< bit: 14..15  Current Bank                       */
    uint32_t :16;              /*!< bit: 16..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPSTA7_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPSTA7_OFFSET          0x54C        /**< \brief (USBC_UPSTA7 offset) Pipe Status Register */
#define USBC_UPSTA7_RESETVALUE      _U_(0x00000000); /**< \brief (USBC_UPSTA7 reset_value) Pipe Status Register */

#define USBC_UPSTA7_RXINI_Pos       0            /**< \brief (USBC_UPSTA7) Received IN Data Interrupt */
#define USBC_UPSTA7_RXINI           (_U_(0x1) << USBC_UPSTA7_RXINI_Pos)
#define USBC_UPSTA7_TXOUTI_Pos      1            /**< \brief (USBC_UPSTA7) Transmitted OUT Data Interrupt */
#define USBC_UPSTA7_TXOUTI          (_U_(0x1) << USBC_UPSTA7_TXOUTI_Pos)
#define USBC_UPSTA7_TXSTPI_Pos      2            /**< \brief (USBC_UPSTA7) Transmitted SETUP Interrupt */
#define USBC_UPSTA7_TXSTPI          (_U_(0x1) << USBC_UPSTA7_TXSTPI_Pos)
#define USBC_UPSTA7_PERRI_Pos       3            /**< \brief (USBC_UPSTA7) Pipe Error Interrupt */
#define USBC_UPSTA7_PERRI           (_U_(0x1) << USBC_UPSTA7_PERRI_Pos)
#define USBC_UPSTA7_NAKEDI_Pos      4            /**< \brief (USBC_UPSTA7) NAKed Interrupt */
#define USBC_UPSTA7_NAKEDI          (_U_(0x1) << USBC_UPSTA7_NAKEDI_Pos)
#define USBC_UPSTA7_ERRORFI_Pos     5            /**< \brief (USBC_UPSTA7) Errorflow Interrupt */
#define USBC_UPSTA7_ERRORFI         (_U_(0x1) << USBC_UPSTA7_ERRORFI_Pos)
#define USBC_UPSTA7_RXSTALLDI_Pos   6            /**< \brief (USBC_UPSTA7) Received STALLed Interrupt */
#define USBC_UPSTA7_RXSTALLDI       (_U_(0x1) << USBC_UPSTA7_RXSTALLDI_Pos)
#define USBC_UPSTA7_DTSEQ_Pos       8            /**< \brief (USBC_UPSTA7) Data Toggle Sequence */
#define USBC_UPSTA7_DTSEQ_Msk       (_U_(0x3) << USBC_UPSTA7_DTSEQ_Pos)
#define USBC_UPSTA7_DTSEQ(value)    (USBC_UPSTA7_DTSEQ_Msk & ((value) << USBC_UPSTA7_DTSEQ_Pos))
#define USBC_UPSTA7_RAMACERI_Pos    10           /**< \brief (USBC_UPSTA7) Ram Access Error Interrupt */
#define USBC_UPSTA7_RAMACERI        (_U_(0x1) << USBC_UPSTA7_RAMACERI_Pos)
#define USBC_UPSTA7_NBUSYBK_Pos     12           /**< \brief (USBC_UPSTA7) Number of Busy Bank */
#define USBC_UPSTA7_NBUSYBK_Msk     (_U_(0x3) << USBC_UPSTA7_NBUSYBK_Pos)
#define USBC_UPSTA7_NBUSYBK(value)  (USBC_UPSTA7_NBUSYBK_Msk & ((value) << USBC_UPSTA7_NBUSYBK_Pos))
#define USBC_UPSTA7_CURRBK_Pos      14           /**< \brief (USBC_UPSTA7) Current Bank */
#define USBC_UPSTA7_CURRBK_Msk      (_U_(0x3) << USBC_UPSTA7_CURRBK_Pos)
#define USBC_UPSTA7_CURRBK(value)   (USBC_UPSTA7_CURRBK_Msk & ((value) << USBC_UPSTA7_CURRBK_Pos))
#define USBC_UPSTA7_MASK            _U_(0x0000F77F) /**< \brief (USBC_UPSTA7) MASK Register */

/* -------- USBC_UPSTA0CLR : (USBC Offset: 0x560) ( /W 32) Pipe Status Clear Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXINIC:1;         /*!< bit:      0  RXINI Clear                        */
    uint32_t TXOUTIC:1;        /*!< bit:      1  TXOUTI Clear                       */
    uint32_t TXSTPIC:1;        /*!< bit:      2  TXSTPI Clear                       */
    uint32_t PERRIC:1;         /*!< bit:      3  PERRI Clear                        */
    uint32_t NAKEDIC:1;        /*!< bit:      4  NAKEDI Clear                       */
    uint32_t ERRORFIC:1;       /*!< bit:      5  ERRORFI Clear                      */
    uint32_t RXSTALLDIC:1;     /*!< bit:      6  RXSTALLDI Clear                    */
    uint32_t :3;               /*!< bit:  7.. 9  Reserved                           */
    uint32_t RAMACERIC:1;      /*!< bit:     10  RAMACERI Clear                     */
    uint32_t :21;              /*!< bit: 11..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPSTA0CLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPSTA0CLR_OFFSET       0x560        /**< \brief (USBC_UPSTA0CLR offset) Pipe Status Clear Register */
#define USBC_UPSTA0CLR_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UPSTA0CLR reset_value) Pipe Status Clear Register */

#define USBC_UPSTA0CLR_RXINIC_Pos   0            /**< \brief (USBC_UPSTA0CLR) RXINI Clear */
#define USBC_UPSTA0CLR_RXINIC       (_U_(0x1) << USBC_UPSTA0CLR_RXINIC_Pos)
#define USBC_UPSTA0CLR_TXOUTIC_Pos  1            /**< \brief (USBC_UPSTA0CLR) TXOUTI Clear */
#define USBC_UPSTA0CLR_TXOUTIC      (_U_(0x1) << USBC_UPSTA0CLR_TXOUTIC_Pos)
#define USBC_UPSTA0CLR_TXSTPIC_Pos  2            /**< \brief (USBC_UPSTA0CLR) TXSTPI Clear */
#define USBC_UPSTA0CLR_TXSTPIC      (_U_(0x1) << USBC_UPSTA0CLR_TXSTPIC_Pos)
#define USBC_UPSTA0CLR_PERRIC_Pos   3            /**< \brief (USBC_UPSTA0CLR) PERRI Clear */
#define USBC_UPSTA0CLR_PERRIC       (_U_(0x1) << USBC_UPSTA0CLR_PERRIC_Pos)
#define USBC_UPSTA0CLR_NAKEDIC_Pos  4            /**< \brief (USBC_UPSTA0CLR) NAKEDI Clear */
#define USBC_UPSTA0CLR_NAKEDIC      (_U_(0x1) << USBC_UPSTA0CLR_NAKEDIC_Pos)
#define USBC_UPSTA0CLR_ERRORFIC_Pos 5            /**< \brief (USBC_UPSTA0CLR) ERRORFI Clear */
#define USBC_UPSTA0CLR_ERRORFIC     (_U_(0x1) << USBC_UPSTA0CLR_ERRORFIC_Pos)
#define USBC_UPSTA0CLR_RXSTALLDIC_Pos 6            /**< \brief (USBC_UPSTA0CLR) RXSTALLDI Clear */
#define USBC_UPSTA0CLR_RXSTALLDIC   (_U_(0x1) << USBC_UPSTA0CLR_RXSTALLDIC_Pos)
#define USBC_UPSTA0CLR_RAMACERIC_Pos 10           /**< \brief (USBC_UPSTA0CLR) RAMACERI Clear */
#define USBC_UPSTA0CLR_RAMACERIC    (_U_(0x1) << USBC_UPSTA0CLR_RAMACERIC_Pos)
#define USBC_UPSTA0CLR_MASK         _U_(0x0000047F) /**< \brief (USBC_UPSTA0CLR) MASK Register */

/* -------- USBC_UPSTA1CLR : (USBC Offset: 0x564) ( /W 32) Pipe Status Clear Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXINIC:1;         /*!< bit:      0  RXINI Clear                        */
    uint32_t TXOUTIC:1;        /*!< bit:      1  TXOUTI Clear                       */
    uint32_t TXSTPIC:1;        /*!< bit:      2  TXSTPI Clear                       */
    uint32_t PERRIC:1;         /*!< bit:      3  PERRI Clear                        */
    uint32_t NAKEDIC:1;        /*!< bit:      4  NAKEDI Clear                       */
    uint32_t ERRORFIC:1;       /*!< bit:      5  ERRORFI Clear                      */
    uint32_t RXSTALLDIC:1;     /*!< bit:      6  RXSTALLDI Clear                    */
    uint32_t :3;               /*!< bit:  7.. 9  Reserved                           */
    uint32_t RAMACERIC:1;      /*!< bit:     10  RAMACERI Clear                     */
    uint32_t :21;              /*!< bit: 11..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPSTA1CLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPSTA1CLR_OFFSET       0x564        /**< \brief (USBC_UPSTA1CLR offset) Pipe Status Clear Register */
#define USBC_UPSTA1CLR_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UPSTA1CLR reset_value) Pipe Status Clear Register */

#define USBC_UPSTA1CLR_RXINIC_Pos   0            /**< \brief (USBC_UPSTA1CLR) RXINI Clear */
#define USBC_UPSTA1CLR_RXINIC       (_U_(0x1) << USBC_UPSTA1CLR_RXINIC_Pos)
#define USBC_UPSTA1CLR_TXOUTIC_Pos  1            /**< \brief (USBC_UPSTA1CLR) TXOUTI Clear */
#define USBC_UPSTA1CLR_TXOUTIC      (_U_(0x1) << USBC_UPSTA1CLR_TXOUTIC_Pos)
#define USBC_UPSTA1CLR_TXSTPIC_Pos  2            /**< \brief (USBC_UPSTA1CLR) TXSTPI Clear */
#define USBC_UPSTA1CLR_TXSTPIC      (_U_(0x1) << USBC_UPSTA1CLR_TXSTPIC_Pos)
#define USBC_UPSTA1CLR_PERRIC_Pos   3            /**< \brief (USBC_UPSTA1CLR) PERRI Clear */
#define USBC_UPSTA1CLR_PERRIC       (_U_(0x1) << USBC_UPSTA1CLR_PERRIC_Pos)
#define USBC_UPSTA1CLR_NAKEDIC_Pos  4            /**< \brief (USBC_UPSTA1CLR) NAKEDI Clear */
#define USBC_UPSTA1CLR_NAKEDIC      (_U_(0x1) << USBC_UPSTA1CLR_NAKEDIC_Pos)
#define USBC_UPSTA1CLR_ERRORFIC_Pos 5            /**< \brief (USBC_UPSTA1CLR) ERRORFI Clear */
#define USBC_UPSTA1CLR_ERRORFIC     (_U_(0x1) << USBC_UPSTA1CLR_ERRORFIC_Pos)
#define USBC_UPSTA1CLR_RXSTALLDIC_Pos 6            /**< \brief (USBC_UPSTA1CLR) RXSTALLDI Clear */
#define USBC_UPSTA1CLR_RXSTALLDIC   (_U_(0x1) << USBC_UPSTA1CLR_RXSTALLDIC_Pos)
#define USBC_UPSTA1CLR_RAMACERIC_Pos 10           /**< \brief (USBC_UPSTA1CLR) RAMACERI Clear */
#define USBC_UPSTA1CLR_RAMACERIC    (_U_(0x1) << USBC_UPSTA1CLR_RAMACERIC_Pos)
#define USBC_UPSTA1CLR_MASK         _U_(0x0000047F) /**< \brief (USBC_UPSTA1CLR) MASK Register */

/* -------- USBC_UPSTA2CLR : (USBC Offset: 0x568) ( /W 32) Pipe Status Clear Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXINIC:1;         /*!< bit:      0  RXINI Clear                        */
    uint32_t TXOUTIC:1;        /*!< bit:      1  TXOUTI Clear                       */
    uint32_t TXSTPIC:1;        /*!< bit:      2  TXSTPI Clear                       */
    uint32_t PERRIC:1;         /*!< bit:      3  PERRI Clear                        */
    uint32_t NAKEDIC:1;        /*!< bit:      4  NAKEDI Clear                       */
    uint32_t ERRORFIC:1;       /*!< bit:      5  ERRORFI Clear                      */
    uint32_t RXSTALLDIC:1;     /*!< bit:      6  RXSTALLDI Clear                    */
    uint32_t :3;               /*!< bit:  7.. 9  Reserved                           */
    uint32_t RAMACERIC:1;      /*!< bit:     10  RAMACERI Clear                     */
    uint32_t :21;              /*!< bit: 11..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPSTA2CLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPSTA2CLR_OFFSET       0x568        /**< \brief (USBC_UPSTA2CLR offset) Pipe Status Clear Register */
#define USBC_UPSTA2CLR_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UPSTA2CLR reset_value) Pipe Status Clear Register */

#define USBC_UPSTA2CLR_RXINIC_Pos   0            /**< \brief (USBC_UPSTA2CLR) RXINI Clear */
#define USBC_UPSTA2CLR_RXINIC       (_U_(0x1) << USBC_UPSTA2CLR_RXINIC_Pos)
#define USBC_UPSTA2CLR_TXOUTIC_Pos  1            /**< \brief (USBC_UPSTA2CLR) TXOUTI Clear */
#define USBC_UPSTA2CLR_TXOUTIC      (_U_(0x1) << USBC_UPSTA2CLR_TXOUTIC_Pos)
#define USBC_UPSTA2CLR_TXSTPIC_Pos  2            /**< \brief (USBC_UPSTA2CLR) TXSTPI Clear */
#define USBC_UPSTA2CLR_TXSTPIC      (_U_(0x1) << USBC_UPSTA2CLR_TXSTPIC_Pos)
#define USBC_UPSTA2CLR_PERRIC_Pos   3            /**< \brief (USBC_UPSTA2CLR) PERRI Clear */
#define USBC_UPSTA2CLR_PERRIC       (_U_(0x1) << USBC_UPSTA2CLR_PERRIC_Pos)
#define USBC_UPSTA2CLR_NAKEDIC_Pos  4            /**< \brief (USBC_UPSTA2CLR) NAKEDI Clear */
#define USBC_UPSTA2CLR_NAKEDIC      (_U_(0x1) << USBC_UPSTA2CLR_NAKEDIC_Pos)
#define USBC_UPSTA2CLR_ERRORFIC_Pos 5            /**< \brief (USBC_UPSTA2CLR) ERRORFI Clear */
#define USBC_UPSTA2CLR_ERRORFIC     (_U_(0x1) << USBC_UPSTA2CLR_ERRORFIC_Pos)
#define USBC_UPSTA2CLR_RXSTALLDIC_Pos 6            /**< \brief (USBC_UPSTA2CLR) RXSTALLDI Clear */
#define USBC_UPSTA2CLR_RXSTALLDIC   (_U_(0x1) << USBC_UPSTA2CLR_RXSTALLDIC_Pos)
#define USBC_UPSTA2CLR_RAMACERIC_Pos 10           /**< \brief (USBC_UPSTA2CLR) RAMACERI Clear */
#define USBC_UPSTA2CLR_RAMACERIC    (_U_(0x1) << USBC_UPSTA2CLR_RAMACERIC_Pos)
#define USBC_UPSTA2CLR_MASK         _U_(0x0000047F) /**< \brief (USBC_UPSTA2CLR) MASK Register */

/* -------- USBC_UPSTA3CLR : (USBC Offset: 0x56C) ( /W 32) Pipe Status Clear Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXINIC:1;         /*!< bit:      0  RXINI Clear                        */
    uint32_t TXOUTIC:1;        /*!< bit:      1  TXOUTI Clear                       */
    uint32_t TXSTPIC:1;        /*!< bit:      2  TXSTPI Clear                       */
    uint32_t PERRIC:1;         /*!< bit:      3  PERRI Clear                        */
    uint32_t NAKEDIC:1;        /*!< bit:      4  NAKEDI Clear                       */
    uint32_t ERRORFIC:1;       /*!< bit:      5  ERRORFI Clear                      */
    uint32_t RXSTALLDIC:1;     /*!< bit:      6  RXSTALLDI Clear                    */
    uint32_t :3;               /*!< bit:  7.. 9  Reserved                           */
    uint32_t RAMACERIC:1;      /*!< bit:     10  RAMACERI Clear                     */
    uint32_t :21;              /*!< bit: 11..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPSTA3CLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPSTA3CLR_OFFSET       0x56C        /**< \brief (USBC_UPSTA3CLR offset) Pipe Status Clear Register */
#define USBC_UPSTA3CLR_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UPSTA3CLR reset_value) Pipe Status Clear Register */

#define USBC_UPSTA3CLR_RXINIC_Pos   0            /**< \brief (USBC_UPSTA3CLR) RXINI Clear */
#define USBC_UPSTA3CLR_RXINIC       (_U_(0x1) << USBC_UPSTA3CLR_RXINIC_Pos)
#define USBC_UPSTA3CLR_TXOUTIC_Pos  1            /**< \brief (USBC_UPSTA3CLR) TXOUTI Clear */
#define USBC_UPSTA3CLR_TXOUTIC      (_U_(0x1) << USBC_UPSTA3CLR_TXOUTIC_Pos)
#define USBC_UPSTA3CLR_TXSTPIC_Pos  2            /**< \brief (USBC_UPSTA3CLR) TXSTPI Clear */
#define USBC_UPSTA3CLR_TXSTPIC      (_U_(0x1) << USBC_UPSTA3CLR_TXSTPIC_Pos)
#define USBC_UPSTA3CLR_PERRIC_Pos   3            /**< \brief (USBC_UPSTA3CLR) PERRI Clear */
#define USBC_UPSTA3CLR_PERRIC       (_U_(0x1) << USBC_UPSTA3CLR_PERRIC_Pos)
#define USBC_UPSTA3CLR_NAKEDIC_Pos  4            /**< \brief (USBC_UPSTA3CLR) NAKEDI Clear */
#define USBC_UPSTA3CLR_NAKEDIC      (_U_(0x1) << USBC_UPSTA3CLR_NAKEDIC_Pos)
#define USBC_UPSTA3CLR_ERRORFIC_Pos 5            /**< \brief (USBC_UPSTA3CLR) ERRORFI Clear */
#define USBC_UPSTA3CLR_ERRORFIC     (_U_(0x1) << USBC_UPSTA3CLR_ERRORFIC_Pos)
#define USBC_UPSTA3CLR_RXSTALLDIC_Pos 6            /**< \brief (USBC_UPSTA3CLR) RXSTALLDI Clear */
#define USBC_UPSTA3CLR_RXSTALLDIC   (_U_(0x1) << USBC_UPSTA3CLR_RXSTALLDIC_Pos)
#define USBC_UPSTA3CLR_RAMACERIC_Pos 10           /**< \brief (USBC_UPSTA3CLR) RAMACERI Clear */
#define USBC_UPSTA3CLR_RAMACERIC    (_U_(0x1) << USBC_UPSTA3CLR_RAMACERIC_Pos)
#define USBC_UPSTA3CLR_MASK         _U_(0x0000047F) /**< \brief (USBC_UPSTA3CLR) MASK Register */

/* -------- USBC_UPSTA4CLR : (USBC Offset: 0x570) ( /W 32) Pipe Status Clear Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXINIC:1;         /*!< bit:      0  RXINI Clear                        */
    uint32_t TXOUTIC:1;        /*!< bit:      1  TXOUTI Clear                       */
    uint32_t TXSTPIC:1;        /*!< bit:      2  TXSTPI Clear                       */
    uint32_t PERRIC:1;         /*!< bit:      3  PERRI Clear                        */
    uint32_t NAKEDIC:1;        /*!< bit:      4  NAKEDI Clear                       */
    uint32_t ERRORFIC:1;       /*!< bit:      5  ERRORFI Clear                      */
    uint32_t RXSTALLDIC:1;     /*!< bit:      6  RXSTALLDI Clear                    */
    uint32_t :3;               /*!< bit:  7.. 9  Reserved                           */
    uint32_t RAMACERIC:1;      /*!< bit:     10  RAMACERI Clear                     */
    uint32_t :21;              /*!< bit: 11..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPSTA4CLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPSTA4CLR_OFFSET       0x570        /**< \brief (USBC_UPSTA4CLR offset) Pipe Status Clear Register */
#define USBC_UPSTA4CLR_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UPSTA4CLR reset_value) Pipe Status Clear Register */

#define USBC_UPSTA4CLR_RXINIC_Pos   0            /**< \brief (USBC_UPSTA4CLR) RXINI Clear */
#define USBC_UPSTA4CLR_RXINIC       (_U_(0x1) << USBC_UPSTA4CLR_RXINIC_Pos)
#define USBC_UPSTA4CLR_TXOUTIC_Pos  1            /**< \brief (USBC_UPSTA4CLR) TXOUTI Clear */
#define USBC_UPSTA4CLR_TXOUTIC      (_U_(0x1) << USBC_UPSTA4CLR_TXOUTIC_Pos)
#define USBC_UPSTA4CLR_TXSTPIC_Pos  2            /**< \brief (USBC_UPSTA4CLR) TXSTPI Clear */
#define USBC_UPSTA4CLR_TXSTPIC      (_U_(0x1) << USBC_UPSTA4CLR_TXSTPIC_Pos)
#define USBC_UPSTA4CLR_PERRIC_Pos   3            /**< \brief (USBC_UPSTA4CLR) PERRI Clear */
#define USBC_UPSTA4CLR_PERRIC       (_U_(0x1) << USBC_UPSTA4CLR_PERRIC_Pos)
#define USBC_UPSTA4CLR_NAKEDIC_Pos  4            /**< \brief (USBC_UPSTA4CLR) NAKEDI Clear */
#define USBC_UPSTA4CLR_NAKEDIC      (_U_(0x1) << USBC_UPSTA4CLR_NAKEDIC_Pos)
#define USBC_UPSTA4CLR_ERRORFIC_Pos 5            /**< \brief (USBC_UPSTA4CLR) ERRORFI Clear */
#define USBC_UPSTA4CLR_ERRORFIC     (_U_(0x1) << USBC_UPSTA4CLR_ERRORFIC_Pos)
#define USBC_UPSTA4CLR_RXSTALLDIC_Pos 6            /**< \brief (USBC_UPSTA4CLR) RXSTALLDI Clear */
#define USBC_UPSTA4CLR_RXSTALLDIC   (_U_(0x1) << USBC_UPSTA4CLR_RXSTALLDIC_Pos)
#define USBC_UPSTA4CLR_RAMACERIC_Pos 10           /**< \brief (USBC_UPSTA4CLR) RAMACERI Clear */
#define USBC_UPSTA4CLR_RAMACERIC    (_U_(0x1) << USBC_UPSTA4CLR_RAMACERIC_Pos)
#define USBC_UPSTA4CLR_MASK         _U_(0x0000047F) /**< \brief (USBC_UPSTA4CLR) MASK Register */

/* -------- USBC_UPSTA5CLR : (USBC Offset: 0x574) ( /W 32) Pipe Status Clear Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXINIC:1;         /*!< bit:      0  RXINI Clear                        */
    uint32_t TXOUTIC:1;        /*!< bit:      1  TXOUTI Clear                       */
    uint32_t TXSTPIC:1;        /*!< bit:      2  TXSTPI Clear                       */
    uint32_t PERRIC:1;         /*!< bit:      3  PERRI Clear                        */
    uint32_t NAKEDIC:1;        /*!< bit:      4  NAKEDI Clear                       */
    uint32_t ERRORFIC:1;       /*!< bit:      5  ERRORFI Clear                      */
    uint32_t RXSTALLDIC:1;     /*!< bit:      6  RXSTALLDI Clear                    */
    uint32_t :3;               /*!< bit:  7.. 9  Reserved                           */
    uint32_t RAMACERIC:1;      /*!< bit:     10  RAMACERI Clear                     */
    uint32_t :21;              /*!< bit: 11..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPSTA5CLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPSTA5CLR_OFFSET       0x574        /**< \brief (USBC_UPSTA5CLR offset) Pipe Status Clear Register */
#define USBC_UPSTA5CLR_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UPSTA5CLR reset_value) Pipe Status Clear Register */

#define USBC_UPSTA5CLR_RXINIC_Pos   0            /**< \brief (USBC_UPSTA5CLR) RXINI Clear */
#define USBC_UPSTA5CLR_RXINIC       (_U_(0x1) << USBC_UPSTA5CLR_RXINIC_Pos)
#define USBC_UPSTA5CLR_TXOUTIC_Pos  1            /**< \brief (USBC_UPSTA5CLR) TXOUTI Clear */
#define USBC_UPSTA5CLR_TXOUTIC      (_U_(0x1) << USBC_UPSTA5CLR_TXOUTIC_Pos)
#define USBC_UPSTA5CLR_TXSTPIC_Pos  2            /**< \brief (USBC_UPSTA5CLR) TXSTPI Clear */
#define USBC_UPSTA5CLR_TXSTPIC      (_U_(0x1) << USBC_UPSTA5CLR_TXSTPIC_Pos)
#define USBC_UPSTA5CLR_PERRIC_Pos   3            /**< \brief (USBC_UPSTA5CLR) PERRI Clear */
#define USBC_UPSTA5CLR_PERRIC       (_U_(0x1) << USBC_UPSTA5CLR_PERRIC_Pos)
#define USBC_UPSTA5CLR_NAKEDIC_Pos  4            /**< \brief (USBC_UPSTA5CLR) NAKEDI Clear */
#define USBC_UPSTA5CLR_NAKEDIC      (_U_(0x1) << USBC_UPSTA5CLR_NAKEDIC_Pos)
#define USBC_UPSTA5CLR_ERRORFIC_Pos 5            /**< \brief (USBC_UPSTA5CLR) ERRORFI Clear */
#define USBC_UPSTA5CLR_ERRORFIC     (_U_(0x1) << USBC_UPSTA5CLR_ERRORFIC_Pos)
#define USBC_UPSTA5CLR_RXSTALLDIC_Pos 6            /**< \brief (USBC_UPSTA5CLR) RXSTALLDI Clear */
#define USBC_UPSTA5CLR_RXSTALLDIC   (_U_(0x1) << USBC_UPSTA5CLR_RXSTALLDIC_Pos)
#define USBC_UPSTA5CLR_RAMACERIC_Pos 10           /**< \brief (USBC_UPSTA5CLR) RAMACERI Clear */
#define USBC_UPSTA5CLR_RAMACERIC    (_U_(0x1) << USBC_UPSTA5CLR_RAMACERIC_Pos)
#define USBC_UPSTA5CLR_MASK         _U_(0x0000047F) /**< \brief (USBC_UPSTA5CLR) MASK Register */

/* -------- USBC_UPSTA6CLR : (USBC Offset: 0x578) ( /W 32) Pipe Status Clear Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXINIC:1;         /*!< bit:      0  RXINI Clear                        */
    uint32_t TXOUTIC:1;        /*!< bit:      1  TXOUTI Clear                       */
    uint32_t TXSTPIC:1;        /*!< bit:      2  TXSTPI Clear                       */
    uint32_t PERRIC:1;         /*!< bit:      3  PERRI Clear                        */
    uint32_t NAKEDIC:1;        /*!< bit:      4  NAKEDI Clear                       */
    uint32_t ERRORFIC:1;       /*!< bit:      5  ERRORFI Clear                      */
    uint32_t RXSTALLDIC:1;     /*!< bit:      6  RXSTALLDI Clear                    */
    uint32_t :3;               /*!< bit:  7.. 9  Reserved                           */
    uint32_t RAMACERIC:1;      /*!< bit:     10  RAMACERI Clear                     */
    uint32_t :21;              /*!< bit: 11..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPSTA6CLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPSTA6CLR_OFFSET       0x578        /**< \brief (USBC_UPSTA6CLR offset) Pipe Status Clear Register */
#define USBC_UPSTA6CLR_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UPSTA6CLR reset_value) Pipe Status Clear Register */

#define USBC_UPSTA6CLR_RXINIC_Pos   0            /**< \brief (USBC_UPSTA6CLR) RXINI Clear */
#define USBC_UPSTA6CLR_RXINIC       (_U_(0x1) << USBC_UPSTA6CLR_RXINIC_Pos)
#define USBC_UPSTA6CLR_TXOUTIC_Pos  1            /**< \brief (USBC_UPSTA6CLR) TXOUTI Clear */
#define USBC_UPSTA6CLR_TXOUTIC      (_U_(0x1) << USBC_UPSTA6CLR_TXOUTIC_Pos)
#define USBC_UPSTA6CLR_TXSTPIC_Pos  2            /**< \brief (USBC_UPSTA6CLR) TXSTPI Clear */
#define USBC_UPSTA6CLR_TXSTPIC      (_U_(0x1) << USBC_UPSTA6CLR_TXSTPIC_Pos)
#define USBC_UPSTA6CLR_PERRIC_Pos   3            /**< \brief (USBC_UPSTA6CLR) PERRI Clear */
#define USBC_UPSTA6CLR_PERRIC       (_U_(0x1) << USBC_UPSTA6CLR_PERRIC_Pos)
#define USBC_UPSTA6CLR_NAKEDIC_Pos  4            /**< \brief (USBC_UPSTA6CLR) NAKEDI Clear */
#define USBC_UPSTA6CLR_NAKEDIC      (_U_(0x1) << USBC_UPSTA6CLR_NAKEDIC_Pos)
#define USBC_UPSTA6CLR_ERRORFIC_Pos 5            /**< \brief (USBC_UPSTA6CLR) ERRORFI Clear */
#define USBC_UPSTA6CLR_ERRORFIC     (_U_(0x1) << USBC_UPSTA6CLR_ERRORFIC_Pos)
#define USBC_UPSTA6CLR_RXSTALLDIC_Pos 6            /**< \brief (USBC_UPSTA6CLR) RXSTALLDI Clear */
#define USBC_UPSTA6CLR_RXSTALLDIC   (_U_(0x1) << USBC_UPSTA6CLR_RXSTALLDIC_Pos)
#define USBC_UPSTA6CLR_RAMACERIC_Pos 10           /**< \brief (USBC_UPSTA6CLR) RAMACERI Clear */
#define USBC_UPSTA6CLR_RAMACERIC    (_U_(0x1) << USBC_UPSTA6CLR_RAMACERIC_Pos)
#define USBC_UPSTA6CLR_MASK         _U_(0x0000047F) /**< \brief (USBC_UPSTA6CLR) MASK Register */

/* -------- USBC_UPSTA7CLR : (USBC Offset: 0x57C) ( /W 32) Pipe Status Clear Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXINIC:1;         /*!< bit:      0  RXINI Clear                        */
    uint32_t TXOUTIC:1;        /*!< bit:      1  TXOUTI Clear                       */
    uint32_t TXSTPIC:1;        /*!< bit:      2  TXSTPI Clear                       */
    uint32_t PERRIC:1;         /*!< bit:      3  PERRI Clear                        */
    uint32_t NAKEDIC:1;        /*!< bit:      4  NAKEDI Clear                       */
    uint32_t ERRORFIC:1;       /*!< bit:      5  ERRORFI Clear                      */
    uint32_t RXSTALLDIC:1;     /*!< bit:      6  RXSTALLDI Clear                    */
    uint32_t :3;               /*!< bit:  7.. 9  Reserved                           */
    uint32_t RAMACERIC:1;      /*!< bit:     10  RAMACERI Clear                     */
    uint32_t :21;              /*!< bit: 11..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPSTA7CLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPSTA7CLR_OFFSET       0x57C        /**< \brief (USBC_UPSTA7CLR offset) Pipe Status Clear Register */
#define USBC_UPSTA7CLR_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UPSTA7CLR reset_value) Pipe Status Clear Register */

#define USBC_UPSTA7CLR_RXINIC_Pos   0            /**< \brief (USBC_UPSTA7CLR) RXINI Clear */
#define USBC_UPSTA7CLR_RXINIC       (_U_(0x1) << USBC_UPSTA7CLR_RXINIC_Pos)
#define USBC_UPSTA7CLR_TXOUTIC_Pos  1            /**< \brief (USBC_UPSTA7CLR) TXOUTI Clear */
#define USBC_UPSTA7CLR_TXOUTIC      (_U_(0x1) << USBC_UPSTA7CLR_TXOUTIC_Pos)
#define USBC_UPSTA7CLR_TXSTPIC_Pos  2            /**< \brief (USBC_UPSTA7CLR) TXSTPI Clear */
#define USBC_UPSTA7CLR_TXSTPIC      (_U_(0x1) << USBC_UPSTA7CLR_TXSTPIC_Pos)
#define USBC_UPSTA7CLR_PERRIC_Pos   3            /**< \brief (USBC_UPSTA7CLR) PERRI Clear */
#define USBC_UPSTA7CLR_PERRIC       (_U_(0x1) << USBC_UPSTA7CLR_PERRIC_Pos)
#define USBC_UPSTA7CLR_NAKEDIC_Pos  4            /**< \brief (USBC_UPSTA7CLR) NAKEDI Clear */
#define USBC_UPSTA7CLR_NAKEDIC      (_U_(0x1) << USBC_UPSTA7CLR_NAKEDIC_Pos)
#define USBC_UPSTA7CLR_ERRORFIC_Pos 5            /**< \brief (USBC_UPSTA7CLR) ERRORFI Clear */
#define USBC_UPSTA7CLR_ERRORFIC     (_U_(0x1) << USBC_UPSTA7CLR_ERRORFIC_Pos)
#define USBC_UPSTA7CLR_RXSTALLDIC_Pos 6            /**< \brief (USBC_UPSTA7CLR) RXSTALLDI Clear */
#define USBC_UPSTA7CLR_RXSTALLDIC   (_U_(0x1) << USBC_UPSTA7CLR_RXSTALLDIC_Pos)
#define USBC_UPSTA7CLR_RAMACERIC_Pos 10           /**< \brief (USBC_UPSTA7CLR) RAMACERI Clear */
#define USBC_UPSTA7CLR_RAMACERIC    (_U_(0x1) << USBC_UPSTA7CLR_RAMACERIC_Pos)
#define USBC_UPSTA7CLR_MASK         _U_(0x0000047F) /**< \brief (USBC_UPSTA7CLR) MASK Register */

/* -------- USBC_UPSTA0SET : (USBC Offset: 0x590) ( /W 32) Pipe Status Set Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXINIS:1;         /*!< bit:      0  RXINI Set                          */
    uint32_t TXOUTIS:1;        /*!< bit:      1  TXOUTI Set                         */
    uint32_t TXSTPIS:1;        /*!< bit:      2  TXSTPI Set                         */
    uint32_t PERRIS:1;         /*!< bit:      3  PERRI Set                          */
    uint32_t NAKEDIS:1;        /*!< bit:      4  NAKEDI Set                         */
    uint32_t ERRORFIS:1;       /*!< bit:      5  ERRORFI Set                        */
    uint32_t RXSTALLDIS:1;     /*!< bit:      6  RXSTALLDI Set                      */
    uint32_t :3;               /*!< bit:  7.. 9  Reserved                           */
    uint32_t RAMACERIS:1;      /*!< bit:     10  RAMACERI Set                       */
    uint32_t :21;              /*!< bit: 11..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPSTA0SET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPSTA0SET_OFFSET       0x590        /**< \brief (USBC_UPSTA0SET offset) Pipe Status Set Register */
#define USBC_UPSTA0SET_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UPSTA0SET reset_value) Pipe Status Set Register */

#define USBC_UPSTA0SET_RXINIS_Pos   0            /**< \brief (USBC_UPSTA0SET) RXINI Set */
#define USBC_UPSTA0SET_RXINIS       (_U_(0x1) << USBC_UPSTA0SET_RXINIS_Pos)
#define USBC_UPSTA0SET_TXOUTIS_Pos  1            /**< \brief (USBC_UPSTA0SET) TXOUTI Set */
#define USBC_UPSTA0SET_TXOUTIS      (_U_(0x1) << USBC_UPSTA0SET_TXOUTIS_Pos)
#define USBC_UPSTA0SET_TXSTPIS_Pos  2            /**< \brief (USBC_UPSTA0SET) TXSTPI Set */
#define USBC_UPSTA0SET_TXSTPIS      (_U_(0x1) << USBC_UPSTA0SET_TXSTPIS_Pos)
#define USBC_UPSTA0SET_PERRIS_Pos   3            /**< \brief (USBC_UPSTA0SET) PERRI Set */
#define USBC_UPSTA0SET_PERRIS       (_U_(0x1) << USBC_UPSTA0SET_PERRIS_Pos)
#define USBC_UPSTA0SET_NAKEDIS_Pos  4            /**< \brief (USBC_UPSTA0SET) NAKEDI Set */
#define USBC_UPSTA0SET_NAKEDIS      (_U_(0x1) << USBC_UPSTA0SET_NAKEDIS_Pos)
#define USBC_UPSTA0SET_ERRORFIS_Pos 5            /**< \brief (USBC_UPSTA0SET) ERRORFI Set */
#define USBC_UPSTA0SET_ERRORFIS     (_U_(0x1) << USBC_UPSTA0SET_ERRORFIS_Pos)
#define USBC_UPSTA0SET_RXSTALLDIS_Pos 6            /**< \brief (USBC_UPSTA0SET) RXSTALLDI Set */
#define USBC_UPSTA0SET_RXSTALLDIS   (_U_(0x1) << USBC_UPSTA0SET_RXSTALLDIS_Pos)
#define USBC_UPSTA0SET_RAMACERIS_Pos 10           /**< \brief (USBC_UPSTA0SET) RAMACERI Set */
#define USBC_UPSTA0SET_RAMACERIS    (_U_(0x1) << USBC_UPSTA0SET_RAMACERIS_Pos)
#define USBC_UPSTA0SET_MASK         _U_(0x0000047F) /**< \brief (USBC_UPSTA0SET) MASK Register */

/* -------- USBC_UPSTA1SET : (USBC Offset: 0x594) ( /W 32) Pipe Status Set Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXINIS:1;         /*!< bit:      0  RXINI Set                          */
    uint32_t TXOUTIS:1;        /*!< bit:      1  TXOUTI Set                         */
    uint32_t TXSTPIS:1;        /*!< bit:      2  TXSTPI Set                         */
    uint32_t PERRIS:1;         /*!< bit:      3  PERRI Set                          */
    uint32_t NAKEDIS:1;        /*!< bit:      4  NAKEDI Set                         */
    uint32_t ERRORFIS:1;       /*!< bit:      5  ERRORFI Set                        */
    uint32_t RXSTALLDIS:1;     /*!< bit:      6  RXSTALLDI Set                      */
    uint32_t :3;               /*!< bit:  7.. 9  Reserved                           */
    uint32_t RAMACERIS:1;      /*!< bit:     10  RAMACERI Set                       */
    uint32_t :21;              /*!< bit: 11..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPSTA1SET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPSTA1SET_OFFSET       0x594        /**< \brief (USBC_UPSTA1SET offset) Pipe Status Set Register */
#define USBC_UPSTA1SET_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UPSTA1SET reset_value) Pipe Status Set Register */

#define USBC_UPSTA1SET_RXINIS_Pos   0            /**< \brief (USBC_UPSTA1SET) RXINI Set */
#define USBC_UPSTA1SET_RXINIS       (_U_(0x1) << USBC_UPSTA1SET_RXINIS_Pos)
#define USBC_UPSTA1SET_TXOUTIS_Pos  1            /**< \brief (USBC_UPSTA1SET) TXOUTI Set */
#define USBC_UPSTA1SET_TXOUTIS      (_U_(0x1) << USBC_UPSTA1SET_TXOUTIS_Pos)
#define USBC_UPSTA1SET_TXSTPIS_Pos  2            /**< \brief (USBC_UPSTA1SET) TXSTPI Set */
#define USBC_UPSTA1SET_TXSTPIS      (_U_(0x1) << USBC_UPSTA1SET_TXSTPIS_Pos)
#define USBC_UPSTA1SET_PERRIS_Pos   3            /**< \brief (USBC_UPSTA1SET) PERRI Set */
#define USBC_UPSTA1SET_PERRIS       (_U_(0x1) << USBC_UPSTA1SET_PERRIS_Pos)
#define USBC_UPSTA1SET_NAKEDIS_Pos  4            /**< \brief (USBC_UPSTA1SET) NAKEDI Set */
#define USBC_UPSTA1SET_NAKEDIS      (_U_(0x1) << USBC_UPSTA1SET_NAKEDIS_Pos)
#define USBC_UPSTA1SET_ERRORFIS_Pos 5            /**< \brief (USBC_UPSTA1SET) ERRORFI Set */
#define USBC_UPSTA1SET_ERRORFIS     (_U_(0x1) << USBC_UPSTA1SET_ERRORFIS_Pos)
#define USBC_UPSTA1SET_RXSTALLDIS_Pos 6            /**< \brief (USBC_UPSTA1SET) RXSTALLDI Set */
#define USBC_UPSTA1SET_RXSTALLDIS   (_U_(0x1) << USBC_UPSTA1SET_RXSTALLDIS_Pos)
#define USBC_UPSTA1SET_RAMACERIS_Pos 10           /**< \brief (USBC_UPSTA1SET) RAMACERI Set */
#define USBC_UPSTA1SET_RAMACERIS    (_U_(0x1) << USBC_UPSTA1SET_RAMACERIS_Pos)
#define USBC_UPSTA1SET_MASK         _U_(0x0000047F) /**< \brief (USBC_UPSTA1SET) MASK Register */

/* -------- USBC_UPSTA2SET : (USBC Offset: 0x598) ( /W 32) Pipe Status Set Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXINIS:1;         /*!< bit:      0  RXINI Set                          */
    uint32_t TXOUTIS:1;        /*!< bit:      1  TXOUTI Set                         */
    uint32_t TXSTPIS:1;        /*!< bit:      2  TXSTPI Set                         */
    uint32_t PERRIS:1;         /*!< bit:      3  PERRI Set                          */
    uint32_t NAKEDIS:1;        /*!< bit:      4  NAKEDI Set                         */
    uint32_t ERRORFIS:1;       /*!< bit:      5  ERRORFI Set                        */
    uint32_t RXSTALLDIS:1;     /*!< bit:      6  RXSTALLDI Set                      */
    uint32_t :3;               /*!< bit:  7.. 9  Reserved                           */
    uint32_t RAMACERIS:1;      /*!< bit:     10  RAMACERI Set                       */
    uint32_t :21;              /*!< bit: 11..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPSTA2SET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPSTA2SET_OFFSET       0x598        /**< \brief (USBC_UPSTA2SET offset) Pipe Status Set Register */
#define USBC_UPSTA2SET_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UPSTA2SET reset_value) Pipe Status Set Register */

#define USBC_UPSTA2SET_RXINIS_Pos   0            /**< \brief (USBC_UPSTA2SET) RXINI Set */
#define USBC_UPSTA2SET_RXINIS       (_U_(0x1) << USBC_UPSTA2SET_RXINIS_Pos)
#define USBC_UPSTA2SET_TXOUTIS_Pos  1            /**< \brief (USBC_UPSTA2SET) TXOUTI Set */
#define USBC_UPSTA2SET_TXOUTIS      (_U_(0x1) << USBC_UPSTA2SET_TXOUTIS_Pos)
#define USBC_UPSTA2SET_TXSTPIS_Pos  2            /**< \brief (USBC_UPSTA2SET) TXSTPI Set */
#define USBC_UPSTA2SET_TXSTPIS      (_U_(0x1) << USBC_UPSTA2SET_TXSTPIS_Pos)
#define USBC_UPSTA2SET_PERRIS_Pos   3            /**< \brief (USBC_UPSTA2SET) PERRI Set */
#define USBC_UPSTA2SET_PERRIS       (_U_(0x1) << USBC_UPSTA2SET_PERRIS_Pos)
#define USBC_UPSTA2SET_NAKEDIS_Pos  4            /**< \brief (USBC_UPSTA2SET) NAKEDI Set */
#define USBC_UPSTA2SET_NAKEDIS      (_U_(0x1) << USBC_UPSTA2SET_NAKEDIS_Pos)
#define USBC_UPSTA2SET_ERRORFIS_Pos 5            /**< \brief (USBC_UPSTA2SET) ERRORFI Set */
#define USBC_UPSTA2SET_ERRORFIS     (_U_(0x1) << USBC_UPSTA2SET_ERRORFIS_Pos)
#define USBC_UPSTA2SET_RXSTALLDIS_Pos 6            /**< \brief (USBC_UPSTA2SET) RXSTALLDI Set */
#define USBC_UPSTA2SET_RXSTALLDIS   (_U_(0x1) << USBC_UPSTA2SET_RXSTALLDIS_Pos)
#define USBC_UPSTA2SET_RAMACERIS_Pos 10           /**< \brief (USBC_UPSTA2SET) RAMACERI Set */
#define USBC_UPSTA2SET_RAMACERIS    (_U_(0x1) << USBC_UPSTA2SET_RAMACERIS_Pos)
#define USBC_UPSTA2SET_MASK         _U_(0x0000047F) /**< \brief (USBC_UPSTA2SET) MASK Register */

/* -------- USBC_UPSTA3SET : (USBC Offset: 0x59C) ( /W 32) Pipe Status Set Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXINIS:1;         /*!< bit:      0  RXINI Set                          */
    uint32_t TXOUTIS:1;        /*!< bit:      1  TXOUTI Set                         */
    uint32_t TXSTPIS:1;        /*!< bit:      2  TXSTPI Set                         */
    uint32_t PERRIS:1;         /*!< bit:      3  PERRI Set                          */
    uint32_t NAKEDIS:1;        /*!< bit:      4  NAKEDI Set                         */
    uint32_t ERRORFIS:1;       /*!< bit:      5  ERRORFI Set                        */
    uint32_t RXSTALLDIS:1;     /*!< bit:      6  RXSTALLDI Set                      */
    uint32_t :3;               /*!< bit:  7.. 9  Reserved                           */
    uint32_t RAMACERIS:1;      /*!< bit:     10  RAMACERI Set                       */
    uint32_t :21;              /*!< bit: 11..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPSTA3SET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPSTA3SET_OFFSET       0x59C        /**< \brief (USBC_UPSTA3SET offset) Pipe Status Set Register */
#define USBC_UPSTA3SET_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UPSTA3SET reset_value) Pipe Status Set Register */

#define USBC_UPSTA3SET_RXINIS_Pos   0            /**< \brief (USBC_UPSTA3SET) RXINI Set */
#define USBC_UPSTA3SET_RXINIS       (_U_(0x1) << USBC_UPSTA3SET_RXINIS_Pos)
#define USBC_UPSTA3SET_TXOUTIS_Pos  1            /**< \brief (USBC_UPSTA3SET) TXOUTI Set */
#define USBC_UPSTA3SET_TXOUTIS      (_U_(0x1) << USBC_UPSTA3SET_TXOUTIS_Pos)
#define USBC_UPSTA3SET_TXSTPIS_Pos  2            /**< \brief (USBC_UPSTA3SET) TXSTPI Set */
#define USBC_UPSTA3SET_TXSTPIS      (_U_(0x1) << USBC_UPSTA3SET_TXSTPIS_Pos)
#define USBC_UPSTA3SET_PERRIS_Pos   3            /**< \brief (USBC_UPSTA3SET) PERRI Set */
#define USBC_UPSTA3SET_PERRIS       (_U_(0x1) << USBC_UPSTA3SET_PERRIS_Pos)
#define USBC_UPSTA3SET_NAKEDIS_Pos  4            /**< \brief (USBC_UPSTA3SET) NAKEDI Set */
#define USBC_UPSTA3SET_NAKEDIS      (_U_(0x1) << USBC_UPSTA3SET_NAKEDIS_Pos)
#define USBC_UPSTA3SET_ERRORFIS_Pos 5            /**< \brief (USBC_UPSTA3SET) ERRORFI Set */
#define USBC_UPSTA3SET_ERRORFIS     (_U_(0x1) << USBC_UPSTA3SET_ERRORFIS_Pos)
#define USBC_UPSTA3SET_RXSTALLDIS_Pos 6            /**< \brief (USBC_UPSTA3SET) RXSTALLDI Set */
#define USBC_UPSTA3SET_RXSTALLDIS   (_U_(0x1) << USBC_UPSTA3SET_RXSTALLDIS_Pos)
#define USBC_UPSTA3SET_RAMACERIS_Pos 10           /**< \brief (USBC_UPSTA3SET) RAMACERI Set */
#define USBC_UPSTA3SET_RAMACERIS    (_U_(0x1) << USBC_UPSTA3SET_RAMACERIS_Pos)
#define USBC_UPSTA3SET_MASK         _U_(0x0000047F) /**< \brief (USBC_UPSTA3SET) MASK Register */

/* -------- USBC_UPSTA4SET : (USBC Offset: 0x5A0) ( /W 32) Pipe Status Set Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXINIS:1;         /*!< bit:      0  RXINI Set                          */
    uint32_t TXOUTIS:1;        /*!< bit:      1  TXOUTI Set                         */
    uint32_t TXSTPIS:1;        /*!< bit:      2  TXSTPI Set                         */
    uint32_t PERRIS:1;         /*!< bit:      3  PERRI Set                          */
    uint32_t NAKEDIS:1;        /*!< bit:      4  NAKEDI Set                         */
    uint32_t ERRORFIS:1;       /*!< bit:      5  ERRORFI Set                        */
    uint32_t RXSTALLDIS:1;     /*!< bit:      6  RXSTALLDI Set                      */
    uint32_t :3;               /*!< bit:  7.. 9  Reserved                           */
    uint32_t RAMACERIS:1;      /*!< bit:     10  RAMACERI Set                       */
    uint32_t :21;              /*!< bit: 11..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPSTA4SET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPSTA4SET_OFFSET       0x5A0        /**< \brief (USBC_UPSTA4SET offset) Pipe Status Set Register */
#define USBC_UPSTA4SET_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UPSTA4SET reset_value) Pipe Status Set Register */

#define USBC_UPSTA4SET_RXINIS_Pos   0            /**< \brief (USBC_UPSTA4SET) RXINI Set */
#define USBC_UPSTA4SET_RXINIS       (_U_(0x1) << USBC_UPSTA4SET_RXINIS_Pos)
#define USBC_UPSTA4SET_TXOUTIS_Pos  1            /**< \brief (USBC_UPSTA4SET) TXOUTI Set */
#define USBC_UPSTA4SET_TXOUTIS      (_U_(0x1) << USBC_UPSTA4SET_TXOUTIS_Pos)
#define USBC_UPSTA4SET_TXSTPIS_Pos  2            /**< \brief (USBC_UPSTA4SET) TXSTPI Set */
#define USBC_UPSTA4SET_TXSTPIS      (_U_(0x1) << USBC_UPSTA4SET_TXSTPIS_Pos)
#define USBC_UPSTA4SET_PERRIS_Pos   3            /**< \brief (USBC_UPSTA4SET) PERRI Set */
#define USBC_UPSTA4SET_PERRIS       (_U_(0x1) << USBC_UPSTA4SET_PERRIS_Pos)
#define USBC_UPSTA4SET_NAKEDIS_Pos  4            /**< \brief (USBC_UPSTA4SET) NAKEDI Set */
#define USBC_UPSTA4SET_NAKEDIS      (_U_(0x1) << USBC_UPSTA4SET_NAKEDIS_Pos)
#define USBC_UPSTA4SET_ERRORFIS_Pos 5            /**< \brief (USBC_UPSTA4SET) ERRORFI Set */
#define USBC_UPSTA4SET_ERRORFIS     (_U_(0x1) << USBC_UPSTA4SET_ERRORFIS_Pos)
#define USBC_UPSTA4SET_RXSTALLDIS_Pos 6            /**< \brief (USBC_UPSTA4SET) RXSTALLDI Set */
#define USBC_UPSTA4SET_RXSTALLDIS   (_U_(0x1) << USBC_UPSTA4SET_RXSTALLDIS_Pos)
#define USBC_UPSTA4SET_RAMACERIS_Pos 10           /**< \brief (USBC_UPSTA4SET) RAMACERI Set */
#define USBC_UPSTA4SET_RAMACERIS    (_U_(0x1) << USBC_UPSTA4SET_RAMACERIS_Pos)
#define USBC_UPSTA4SET_MASK         _U_(0x0000047F) /**< \brief (USBC_UPSTA4SET) MASK Register */

/* -------- USBC_UPSTA5SET : (USBC Offset: 0x5A4) ( /W 32) Pipe Status Set Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXINIS:1;         /*!< bit:      0  RXINI Set                          */
    uint32_t TXOUTIS:1;        /*!< bit:      1  TXOUTI Set                         */
    uint32_t TXSTPIS:1;        /*!< bit:      2  TXSTPI Set                         */
    uint32_t PERRIS:1;         /*!< bit:      3  PERRI Set                          */
    uint32_t NAKEDIS:1;        /*!< bit:      4  NAKEDI Set                         */
    uint32_t ERRORFIS:1;       /*!< bit:      5  ERRORFI Set                        */
    uint32_t RXSTALLDIS:1;     /*!< bit:      6  RXSTALLDI Set                      */
    uint32_t :3;               /*!< bit:  7.. 9  Reserved                           */
    uint32_t RAMACERIS:1;      /*!< bit:     10  RAMACERI Set                       */
    uint32_t :21;              /*!< bit: 11..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPSTA5SET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPSTA5SET_OFFSET       0x5A4        /**< \brief (USBC_UPSTA5SET offset) Pipe Status Set Register */
#define USBC_UPSTA5SET_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UPSTA5SET reset_value) Pipe Status Set Register */

#define USBC_UPSTA5SET_RXINIS_Pos   0            /**< \brief (USBC_UPSTA5SET) RXINI Set */
#define USBC_UPSTA5SET_RXINIS       (_U_(0x1) << USBC_UPSTA5SET_RXINIS_Pos)
#define USBC_UPSTA5SET_TXOUTIS_Pos  1            /**< \brief (USBC_UPSTA5SET) TXOUTI Set */
#define USBC_UPSTA5SET_TXOUTIS      (_U_(0x1) << USBC_UPSTA5SET_TXOUTIS_Pos)
#define USBC_UPSTA5SET_TXSTPIS_Pos  2            /**< \brief (USBC_UPSTA5SET) TXSTPI Set */
#define USBC_UPSTA5SET_TXSTPIS      (_U_(0x1) << USBC_UPSTA5SET_TXSTPIS_Pos)
#define USBC_UPSTA5SET_PERRIS_Pos   3            /**< \brief (USBC_UPSTA5SET) PERRI Set */
#define USBC_UPSTA5SET_PERRIS       (_U_(0x1) << USBC_UPSTA5SET_PERRIS_Pos)
#define USBC_UPSTA5SET_NAKEDIS_Pos  4            /**< \brief (USBC_UPSTA5SET) NAKEDI Set */
#define USBC_UPSTA5SET_NAKEDIS      (_U_(0x1) << USBC_UPSTA5SET_NAKEDIS_Pos)
#define USBC_UPSTA5SET_ERRORFIS_Pos 5            /**< \brief (USBC_UPSTA5SET) ERRORFI Set */
#define USBC_UPSTA5SET_ERRORFIS     (_U_(0x1) << USBC_UPSTA5SET_ERRORFIS_Pos)
#define USBC_UPSTA5SET_RXSTALLDIS_Pos 6            /**< \brief (USBC_UPSTA5SET) RXSTALLDI Set */
#define USBC_UPSTA5SET_RXSTALLDIS   (_U_(0x1) << USBC_UPSTA5SET_RXSTALLDIS_Pos)
#define USBC_UPSTA5SET_RAMACERIS_Pos 10           /**< \brief (USBC_UPSTA5SET) RAMACERI Set */
#define USBC_UPSTA5SET_RAMACERIS    (_U_(0x1) << USBC_UPSTA5SET_RAMACERIS_Pos)
#define USBC_UPSTA5SET_MASK         _U_(0x0000047F) /**< \brief (USBC_UPSTA5SET) MASK Register */

/* -------- USBC_UPSTA6SET : (USBC Offset: 0x5A8) ( /W 32) Pipe Status Set Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXINIS:1;         /*!< bit:      0  RXINI Set                          */
    uint32_t TXOUTIS:1;        /*!< bit:      1  TXOUTI Set                         */
    uint32_t TXSTPIS:1;        /*!< bit:      2  TXSTPI Set                         */
    uint32_t PERRIS:1;         /*!< bit:      3  PERRI Set                          */
    uint32_t NAKEDIS:1;        /*!< bit:      4  NAKEDI Set                         */
    uint32_t ERRORFIS:1;       /*!< bit:      5  ERRORFI Set                        */
    uint32_t RXSTALLDIS:1;     /*!< bit:      6  RXSTALLDI Set                      */
    uint32_t :3;               /*!< bit:  7.. 9  Reserved                           */
    uint32_t RAMACERIS:1;      /*!< bit:     10  RAMACERI Set                       */
    uint32_t :21;              /*!< bit: 11..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPSTA6SET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPSTA6SET_OFFSET       0x5A8        /**< \brief (USBC_UPSTA6SET offset) Pipe Status Set Register */
#define USBC_UPSTA6SET_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UPSTA6SET reset_value) Pipe Status Set Register */

#define USBC_UPSTA6SET_RXINIS_Pos   0            /**< \brief (USBC_UPSTA6SET) RXINI Set */
#define USBC_UPSTA6SET_RXINIS       (_U_(0x1) << USBC_UPSTA6SET_RXINIS_Pos)
#define USBC_UPSTA6SET_TXOUTIS_Pos  1            /**< \brief (USBC_UPSTA6SET) TXOUTI Set */
#define USBC_UPSTA6SET_TXOUTIS      (_U_(0x1) << USBC_UPSTA6SET_TXOUTIS_Pos)
#define USBC_UPSTA6SET_TXSTPIS_Pos  2            /**< \brief (USBC_UPSTA6SET) TXSTPI Set */
#define USBC_UPSTA6SET_TXSTPIS      (_U_(0x1) << USBC_UPSTA6SET_TXSTPIS_Pos)
#define USBC_UPSTA6SET_PERRIS_Pos   3            /**< \brief (USBC_UPSTA6SET) PERRI Set */
#define USBC_UPSTA6SET_PERRIS       (_U_(0x1) << USBC_UPSTA6SET_PERRIS_Pos)
#define USBC_UPSTA6SET_NAKEDIS_Pos  4            /**< \brief (USBC_UPSTA6SET) NAKEDI Set */
#define USBC_UPSTA6SET_NAKEDIS      (_U_(0x1) << USBC_UPSTA6SET_NAKEDIS_Pos)
#define USBC_UPSTA6SET_ERRORFIS_Pos 5            /**< \brief (USBC_UPSTA6SET) ERRORFI Set */
#define USBC_UPSTA6SET_ERRORFIS     (_U_(0x1) << USBC_UPSTA6SET_ERRORFIS_Pos)
#define USBC_UPSTA6SET_RXSTALLDIS_Pos 6            /**< \brief (USBC_UPSTA6SET) RXSTALLDI Set */
#define USBC_UPSTA6SET_RXSTALLDIS   (_U_(0x1) << USBC_UPSTA6SET_RXSTALLDIS_Pos)
#define USBC_UPSTA6SET_RAMACERIS_Pos 10           /**< \brief (USBC_UPSTA6SET) RAMACERI Set */
#define USBC_UPSTA6SET_RAMACERIS    (_U_(0x1) << USBC_UPSTA6SET_RAMACERIS_Pos)
#define USBC_UPSTA6SET_MASK         _U_(0x0000047F) /**< \brief (USBC_UPSTA6SET) MASK Register */

/* -------- USBC_UPSTA7SET : (USBC Offset: 0x5AC) ( /W 32) Pipe Status Set Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXINIS:1;         /*!< bit:      0  RXINI Set                          */
    uint32_t TXOUTIS:1;        /*!< bit:      1  TXOUTI Set                         */
    uint32_t TXSTPIS:1;        /*!< bit:      2  TXSTPI Set                         */
    uint32_t PERRIS:1;         /*!< bit:      3  PERRI Set                          */
    uint32_t NAKEDIS:1;        /*!< bit:      4  NAKEDI Set                         */
    uint32_t ERRORFIS:1;       /*!< bit:      5  ERRORFI Set                        */
    uint32_t RXSTALLDIS:1;     /*!< bit:      6  RXSTALLDI Set                      */
    uint32_t :3;               /*!< bit:  7.. 9  Reserved                           */
    uint32_t RAMACERIS:1;      /*!< bit:     10  RAMACERI Set                       */
    uint32_t :21;              /*!< bit: 11..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPSTA7SET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPSTA7SET_OFFSET       0x5AC        /**< \brief (USBC_UPSTA7SET offset) Pipe Status Set Register */
#define USBC_UPSTA7SET_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UPSTA7SET reset_value) Pipe Status Set Register */

#define USBC_UPSTA7SET_RXINIS_Pos   0            /**< \brief (USBC_UPSTA7SET) RXINI Set */
#define USBC_UPSTA7SET_RXINIS       (_U_(0x1) << USBC_UPSTA7SET_RXINIS_Pos)
#define USBC_UPSTA7SET_TXOUTIS_Pos  1            /**< \brief (USBC_UPSTA7SET) TXOUTI Set */
#define USBC_UPSTA7SET_TXOUTIS      (_U_(0x1) << USBC_UPSTA7SET_TXOUTIS_Pos)
#define USBC_UPSTA7SET_TXSTPIS_Pos  2            /**< \brief (USBC_UPSTA7SET) TXSTPI Set */
#define USBC_UPSTA7SET_TXSTPIS      (_U_(0x1) << USBC_UPSTA7SET_TXSTPIS_Pos)
#define USBC_UPSTA7SET_PERRIS_Pos   3            /**< \brief (USBC_UPSTA7SET) PERRI Set */
#define USBC_UPSTA7SET_PERRIS       (_U_(0x1) << USBC_UPSTA7SET_PERRIS_Pos)
#define USBC_UPSTA7SET_NAKEDIS_Pos  4            /**< \brief (USBC_UPSTA7SET) NAKEDI Set */
#define USBC_UPSTA7SET_NAKEDIS      (_U_(0x1) << USBC_UPSTA7SET_NAKEDIS_Pos)
#define USBC_UPSTA7SET_ERRORFIS_Pos 5            /**< \brief (USBC_UPSTA7SET) ERRORFI Set */
#define USBC_UPSTA7SET_ERRORFIS     (_U_(0x1) << USBC_UPSTA7SET_ERRORFIS_Pos)
#define USBC_UPSTA7SET_RXSTALLDIS_Pos 6            /**< \brief (USBC_UPSTA7SET) RXSTALLDI Set */
#define USBC_UPSTA7SET_RXSTALLDIS   (_U_(0x1) << USBC_UPSTA7SET_RXSTALLDIS_Pos)
#define USBC_UPSTA7SET_RAMACERIS_Pos 10           /**< \brief (USBC_UPSTA7SET) RAMACERI Set */
#define USBC_UPSTA7SET_RAMACERIS    (_U_(0x1) << USBC_UPSTA7SET_RAMACERIS_Pos)
#define USBC_UPSTA7SET_MASK         _U_(0x0000047F) /**< \brief (USBC_UPSTA7SET) MASK Register */

/* -------- USBC_UPCON0 : (USBC Offset: 0x5C0) (R/  32) Pipe Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXINE:1;          /*!< bit:      0  RXIN Interrupt Enable              */
    uint32_t TXOUTE:1;         /*!< bit:      1  TXOUT Interrupt Enable             */
    uint32_t TXSTPE:1;         /*!< bit:      2  TXSTP Interrupt Enable             */
    uint32_t PERRE:1;          /*!< bit:      3  PERR Interrupt Enable              */
    uint32_t NAKEDE:1;         /*!< bit:      4  NAKED Interrupt Enable             */
    uint32_t ERRORFIE:1;       /*!< bit:      5  ERRORFI Interrupt Enable           */
    uint32_t RXSTALLDE:1;      /*!< bit:      6  RXTALLD Interrupt Enable           */
    uint32_t :3;               /*!< bit:  7.. 9  Reserved                           */
    uint32_t RAMACERE:1;       /*!< bit:     10  RAMACER Interrupt Enable           */
    uint32_t :1;               /*!< bit:     11  Reserved                           */
    uint32_t NBUSYBKE:1;       /*!< bit:     12  NBUSYBKInterrupt Enable            */
    uint32_t :1;               /*!< bit:     13  Reserved                           */
    uint32_t FIFOCON:1;        /*!< bit:     14  FIFO Control                       */
    uint32_t :2;               /*!< bit: 15..16  Reserved                           */
    uint32_t PFREEZE:1;        /*!< bit:     17  Pipe Freeze                        */
    uint32_t INITDTGL:1;       /*!< bit:     18  Data Toggle Initialization         */
    uint32_t INITBK:1;         /*!< bit:     19  Bank Initialization                */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPCON0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPCON0_OFFSET          0x5C0        /**< \brief (USBC_UPCON0 offset) Pipe Control Register */
#define USBC_UPCON0_RESETVALUE      _U_(0x00000000); /**< \brief (USBC_UPCON0 reset_value) Pipe Control Register */

#define USBC_UPCON0_RXINE_Pos       0            /**< \brief (USBC_UPCON0) RXIN Interrupt Enable */
#define USBC_UPCON0_RXINE           (_U_(0x1) << USBC_UPCON0_RXINE_Pos)
#define USBC_UPCON0_TXOUTE_Pos      1            /**< \brief (USBC_UPCON0) TXOUT Interrupt Enable */
#define USBC_UPCON0_TXOUTE          (_U_(0x1) << USBC_UPCON0_TXOUTE_Pos)
#define USBC_UPCON0_TXSTPE_Pos      2            /**< \brief (USBC_UPCON0) TXSTP Interrupt Enable */
#define USBC_UPCON0_TXSTPE          (_U_(0x1) << USBC_UPCON0_TXSTPE_Pos)
#define USBC_UPCON0_PERRE_Pos       3            /**< \brief (USBC_UPCON0) PERR Interrupt Enable */
#define USBC_UPCON0_PERRE           (_U_(0x1) << USBC_UPCON0_PERRE_Pos)
#define USBC_UPCON0_NAKEDE_Pos      4            /**< \brief (USBC_UPCON0) NAKED Interrupt Enable */
#define USBC_UPCON0_NAKEDE          (_U_(0x1) << USBC_UPCON0_NAKEDE_Pos)
#define USBC_UPCON0_ERRORFIE_Pos    5            /**< \brief (USBC_UPCON0) ERRORFI Interrupt Enable */
#define USBC_UPCON0_ERRORFIE        (_U_(0x1) << USBC_UPCON0_ERRORFIE_Pos)
#define USBC_UPCON0_RXSTALLDE_Pos   6            /**< \brief (USBC_UPCON0) RXTALLD Interrupt Enable */
#define USBC_UPCON0_RXSTALLDE       (_U_(0x1) << USBC_UPCON0_RXSTALLDE_Pos)
#define USBC_UPCON0_RAMACERE_Pos    10           /**< \brief (USBC_UPCON0) RAMACER Interrupt Enable */
#define USBC_UPCON0_RAMACERE        (_U_(0x1) << USBC_UPCON0_RAMACERE_Pos)
#define USBC_UPCON0_NBUSYBKE_Pos    12           /**< \brief (USBC_UPCON0) NBUSYBKInterrupt Enable */
#define USBC_UPCON0_NBUSYBKE        (_U_(0x1) << USBC_UPCON0_NBUSYBKE_Pos)
#define USBC_UPCON0_FIFOCON_Pos     14           /**< \brief (USBC_UPCON0) FIFO Control */
#define USBC_UPCON0_FIFOCON         (_U_(0x1) << USBC_UPCON0_FIFOCON_Pos)
#define USBC_UPCON0_PFREEZE_Pos     17           /**< \brief (USBC_UPCON0) Pipe Freeze */
#define USBC_UPCON0_PFREEZE         (_U_(0x1) << USBC_UPCON0_PFREEZE_Pos)
#define USBC_UPCON0_INITDTGL_Pos    18           /**< \brief (USBC_UPCON0) Data Toggle Initialization */
#define USBC_UPCON0_INITDTGL        (_U_(0x1) << USBC_UPCON0_INITDTGL_Pos)
#define USBC_UPCON0_INITBK_Pos      19           /**< \brief (USBC_UPCON0) Bank Initialization */
#define USBC_UPCON0_INITBK          (_U_(0x1) << USBC_UPCON0_INITBK_Pos)
#define USBC_UPCON0_MASK            _U_(0x000E547F) /**< \brief (USBC_UPCON0) MASK Register */

/* -------- USBC_UPCON1 : (USBC Offset: 0x5C4) (R/  32) Pipe Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXINE:1;          /*!< bit:      0  RXIN Interrupt Enable              */
    uint32_t TXOUTE:1;         /*!< bit:      1  TXOUT Interrupt Enable             */
    uint32_t TXSTPE:1;         /*!< bit:      2  TXSTP Interrupt Enable             */
    uint32_t PERRE:1;          /*!< bit:      3  PERR Interrupt Enable              */
    uint32_t NAKEDE:1;         /*!< bit:      4  NAKED Interrupt Enable             */
    uint32_t ERRORFIE:1;       /*!< bit:      5  ERRORFI Interrupt Enable           */
    uint32_t RXSTALLDE:1;      /*!< bit:      6  RXTALLD Interrupt Enable           */
    uint32_t :3;               /*!< bit:  7.. 9  Reserved                           */
    uint32_t RAMACERE:1;       /*!< bit:     10  RAMACER Interrupt Enable           */
    uint32_t :1;               /*!< bit:     11  Reserved                           */
    uint32_t NBUSYBKE:1;       /*!< bit:     12  NBUSYBKInterrupt Enable            */
    uint32_t :1;               /*!< bit:     13  Reserved                           */
    uint32_t FIFOCON:1;        /*!< bit:     14  FIFO Control                       */
    uint32_t :2;               /*!< bit: 15..16  Reserved                           */
    uint32_t PFREEZE:1;        /*!< bit:     17  Pipe Freeze                        */
    uint32_t INITDTGL:1;       /*!< bit:     18  Data Toggle Initialization         */
    uint32_t INITBK:1;         /*!< bit:     19  Bank Initialization                */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPCON1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPCON1_OFFSET          0x5C4        /**< \brief (USBC_UPCON1 offset) Pipe Control Register */
#define USBC_UPCON1_RESETVALUE      _U_(0x00000000); /**< \brief (USBC_UPCON1 reset_value) Pipe Control Register */

#define USBC_UPCON1_RXINE_Pos       0            /**< \brief (USBC_UPCON1) RXIN Interrupt Enable */
#define USBC_UPCON1_RXINE           (_U_(0x1) << USBC_UPCON1_RXINE_Pos)
#define USBC_UPCON1_TXOUTE_Pos      1            /**< \brief (USBC_UPCON1) TXOUT Interrupt Enable */
#define USBC_UPCON1_TXOUTE          (_U_(0x1) << USBC_UPCON1_TXOUTE_Pos)
#define USBC_UPCON1_TXSTPE_Pos      2            /**< \brief (USBC_UPCON1) TXSTP Interrupt Enable */
#define USBC_UPCON1_TXSTPE          (_U_(0x1) << USBC_UPCON1_TXSTPE_Pos)
#define USBC_UPCON1_PERRE_Pos       3            /**< \brief (USBC_UPCON1) PERR Interrupt Enable */
#define USBC_UPCON1_PERRE           (_U_(0x1) << USBC_UPCON1_PERRE_Pos)
#define USBC_UPCON1_NAKEDE_Pos      4            /**< \brief (USBC_UPCON1) NAKED Interrupt Enable */
#define USBC_UPCON1_NAKEDE          (_U_(0x1) << USBC_UPCON1_NAKEDE_Pos)
#define USBC_UPCON1_ERRORFIE_Pos    5            /**< \brief (USBC_UPCON1) ERRORFI Interrupt Enable */
#define USBC_UPCON1_ERRORFIE        (_U_(0x1) << USBC_UPCON1_ERRORFIE_Pos)
#define USBC_UPCON1_RXSTALLDE_Pos   6            /**< \brief (USBC_UPCON1) RXTALLD Interrupt Enable */
#define USBC_UPCON1_RXSTALLDE       (_U_(0x1) << USBC_UPCON1_RXSTALLDE_Pos)
#define USBC_UPCON1_RAMACERE_Pos    10           /**< \brief (USBC_UPCON1) RAMACER Interrupt Enable */
#define USBC_UPCON1_RAMACERE        (_U_(0x1) << USBC_UPCON1_RAMACERE_Pos)
#define USBC_UPCON1_NBUSYBKE_Pos    12           /**< \brief (USBC_UPCON1) NBUSYBKInterrupt Enable */
#define USBC_UPCON1_NBUSYBKE        (_U_(0x1) << USBC_UPCON1_NBUSYBKE_Pos)
#define USBC_UPCON1_FIFOCON_Pos     14           /**< \brief (USBC_UPCON1) FIFO Control */
#define USBC_UPCON1_FIFOCON         (_U_(0x1) << USBC_UPCON1_FIFOCON_Pos)
#define USBC_UPCON1_PFREEZE_Pos     17           /**< \brief (USBC_UPCON1) Pipe Freeze */
#define USBC_UPCON1_PFREEZE         (_U_(0x1) << USBC_UPCON1_PFREEZE_Pos)
#define USBC_UPCON1_INITDTGL_Pos    18           /**< \brief (USBC_UPCON1) Data Toggle Initialization */
#define USBC_UPCON1_INITDTGL        (_U_(0x1) << USBC_UPCON1_INITDTGL_Pos)
#define USBC_UPCON1_INITBK_Pos      19           /**< \brief (USBC_UPCON1) Bank Initialization */
#define USBC_UPCON1_INITBK          (_U_(0x1) << USBC_UPCON1_INITBK_Pos)
#define USBC_UPCON1_MASK            _U_(0x000E547F) /**< \brief (USBC_UPCON1) MASK Register */

/* -------- USBC_UPCON2 : (USBC Offset: 0x5C8) (R/  32) Pipe Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXINE:1;          /*!< bit:      0  RXIN Interrupt Enable              */
    uint32_t TXOUTE:1;         /*!< bit:      1  TXOUT Interrupt Enable             */
    uint32_t TXSTPE:1;         /*!< bit:      2  TXSTP Interrupt Enable             */
    uint32_t PERRE:1;          /*!< bit:      3  PERR Interrupt Enable              */
    uint32_t NAKEDE:1;         /*!< bit:      4  NAKED Interrupt Enable             */
    uint32_t ERRORFIE:1;       /*!< bit:      5  ERRORFI Interrupt Enable           */
    uint32_t RXSTALLDE:1;      /*!< bit:      6  RXTALLD Interrupt Enable           */
    uint32_t :3;               /*!< bit:  7.. 9  Reserved                           */
    uint32_t RAMACERE:1;       /*!< bit:     10  RAMACER Interrupt Enable           */
    uint32_t :1;               /*!< bit:     11  Reserved                           */
    uint32_t NBUSYBKE:1;       /*!< bit:     12  NBUSYBKInterrupt Enable            */
    uint32_t :1;               /*!< bit:     13  Reserved                           */
    uint32_t FIFOCON:1;        /*!< bit:     14  FIFO Control                       */
    uint32_t :2;               /*!< bit: 15..16  Reserved                           */
    uint32_t PFREEZE:1;        /*!< bit:     17  Pipe Freeze                        */
    uint32_t INITDTGL:1;       /*!< bit:     18  Data Toggle Initialization         */
    uint32_t INITBK:1;         /*!< bit:     19  Bank Initialization                */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPCON2_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPCON2_OFFSET          0x5C8        /**< \brief (USBC_UPCON2 offset) Pipe Control Register */
#define USBC_UPCON2_RESETVALUE      _U_(0x00000000); /**< \brief (USBC_UPCON2 reset_value) Pipe Control Register */

#define USBC_UPCON2_RXINE_Pos       0            /**< \brief (USBC_UPCON2) RXIN Interrupt Enable */
#define USBC_UPCON2_RXINE           (_U_(0x1) << USBC_UPCON2_RXINE_Pos)
#define USBC_UPCON2_TXOUTE_Pos      1            /**< \brief (USBC_UPCON2) TXOUT Interrupt Enable */
#define USBC_UPCON2_TXOUTE          (_U_(0x1) << USBC_UPCON2_TXOUTE_Pos)
#define USBC_UPCON2_TXSTPE_Pos      2            /**< \brief (USBC_UPCON2) TXSTP Interrupt Enable */
#define USBC_UPCON2_TXSTPE          (_U_(0x1) << USBC_UPCON2_TXSTPE_Pos)
#define USBC_UPCON2_PERRE_Pos       3            /**< \brief (USBC_UPCON2) PERR Interrupt Enable */
#define USBC_UPCON2_PERRE           (_U_(0x1) << USBC_UPCON2_PERRE_Pos)
#define USBC_UPCON2_NAKEDE_Pos      4            /**< \brief (USBC_UPCON2) NAKED Interrupt Enable */
#define USBC_UPCON2_NAKEDE          (_U_(0x1) << USBC_UPCON2_NAKEDE_Pos)
#define USBC_UPCON2_ERRORFIE_Pos    5            /**< \brief (USBC_UPCON2) ERRORFI Interrupt Enable */
#define USBC_UPCON2_ERRORFIE        (_U_(0x1) << USBC_UPCON2_ERRORFIE_Pos)
#define USBC_UPCON2_RXSTALLDE_Pos   6            /**< \brief (USBC_UPCON2) RXTALLD Interrupt Enable */
#define USBC_UPCON2_RXSTALLDE       (_U_(0x1) << USBC_UPCON2_RXSTALLDE_Pos)
#define USBC_UPCON2_RAMACERE_Pos    10           /**< \brief (USBC_UPCON2) RAMACER Interrupt Enable */
#define USBC_UPCON2_RAMACERE        (_U_(0x1) << USBC_UPCON2_RAMACERE_Pos)
#define USBC_UPCON2_NBUSYBKE_Pos    12           /**< \brief (USBC_UPCON2) NBUSYBKInterrupt Enable */
#define USBC_UPCON2_NBUSYBKE        (_U_(0x1) << USBC_UPCON2_NBUSYBKE_Pos)
#define USBC_UPCON2_FIFOCON_Pos     14           /**< \brief (USBC_UPCON2) FIFO Control */
#define USBC_UPCON2_FIFOCON         (_U_(0x1) << USBC_UPCON2_FIFOCON_Pos)
#define USBC_UPCON2_PFREEZE_Pos     17           /**< \brief (USBC_UPCON2) Pipe Freeze */
#define USBC_UPCON2_PFREEZE         (_U_(0x1) << USBC_UPCON2_PFREEZE_Pos)
#define USBC_UPCON2_INITDTGL_Pos    18           /**< \brief (USBC_UPCON2) Data Toggle Initialization */
#define USBC_UPCON2_INITDTGL        (_U_(0x1) << USBC_UPCON2_INITDTGL_Pos)
#define USBC_UPCON2_INITBK_Pos      19           /**< \brief (USBC_UPCON2) Bank Initialization */
#define USBC_UPCON2_INITBK          (_U_(0x1) << USBC_UPCON2_INITBK_Pos)
#define USBC_UPCON2_MASK            _U_(0x000E547F) /**< \brief (USBC_UPCON2) MASK Register */

/* -------- USBC_UPCON3 : (USBC Offset: 0x5CC) (R/  32) Pipe Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXINE:1;          /*!< bit:      0  RXIN Interrupt Enable              */
    uint32_t TXOUTE:1;         /*!< bit:      1  TXOUT Interrupt Enable             */
    uint32_t TXSTPE:1;         /*!< bit:      2  TXSTP Interrupt Enable             */
    uint32_t PERRE:1;          /*!< bit:      3  PERR Interrupt Enable              */
    uint32_t NAKEDE:1;         /*!< bit:      4  NAKED Interrupt Enable             */
    uint32_t ERRORFIE:1;       /*!< bit:      5  ERRORFI Interrupt Enable           */
    uint32_t RXSTALLDE:1;      /*!< bit:      6  RXTALLD Interrupt Enable           */
    uint32_t :3;               /*!< bit:  7.. 9  Reserved                           */
    uint32_t RAMACERE:1;       /*!< bit:     10  RAMACER Interrupt Enable           */
    uint32_t :1;               /*!< bit:     11  Reserved                           */
    uint32_t NBUSYBKE:1;       /*!< bit:     12  NBUSYBKInterrupt Enable            */
    uint32_t :1;               /*!< bit:     13  Reserved                           */
    uint32_t FIFOCON:1;        /*!< bit:     14  FIFO Control                       */
    uint32_t :2;               /*!< bit: 15..16  Reserved                           */
    uint32_t PFREEZE:1;        /*!< bit:     17  Pipe Freeze                        */
    uint32_t INITDTGL:1;       /*!< bit:     18  Data Toggle Initialization         */
    uint32_t INITBK:1;         /*!< bit:     19  Bank Initialization                */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPCON3_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPCON3_OFFSET          0x5CC        /**< \brief (USBC_UPCON3 offset) Pipe Control Register */
#define USBC_UPCON3_RESETVALUE      _U_(0x00000000); /**< \brief (USBC_UPCON3 reset_value) Pipe Control Register */

#define USBC_UPCON3_RXINE_Pos       0            /**< \brief (USBC_UPCON3) RXIN Interrupt Enable */
#define USBC_UPCON3_RXINE           (_U_(0x1) << USBC_UPCON3_RXINE_Pos)
#define USBC_UPCON3_TXOUTE_Pos      1            /**< \brief (USBC_UPCON3) TXOUT Interrupt Enable */
#define USBC_UPCON3_TXOUTE          (_U_(0x1) << USBC_UPCON3_TXOUTE_Pos)
#define USBC_UPCON3_TXSTPE_Pos      2            /**< \brief (USBC_UPCON3) TXSTP Interrupt Enable */
#define USBC_UPCON3_TXSTPE          (_U_(0x1) << USBC_UPCON3_TXSTPE_Pos)
#define USBC_UPCON3_PERRE_Pos       3            /**< \brief (USBC_UPCON3) PERR Interrupt Enable */
#define USBC_UPCON3_PERRE           (_U_(0x1) << USBC_UPCON3_PERRE_Pos)
#define USBC_UPCON3_NAKEDE_Pos      4            /**< \brief (USBC_UPCON3) NAKED Interrupt Enable */
#define USBC_UPCON3_NAKEDE          (_U_(0x1) << USBC_UPCON3_NAKEDE_Pos)
#define USBC_UPCON3_ERRORFIE_Pos    5            /**< \brief (USBC_UPCON3) ERRORFI Interrupt Enable */
#define USBC_UPCON3_ERRORFIE        (_U_(0x1) << USBC_UPCON3_ERRORFIE_Pos)
#define USBC_UPCON3_RXSTALLDE_Pos   6            /**< \brief (USBC_UPCON3) RXTALLD Interrupt Enable */
#define USBC_UPCON3_RXSTALLDE       (_U_(0x1) << USBC_UPCON3_RXSTALLDE_Pos)
#define USBC_UPCON3_RAMACERE_Pos    10           /**< \brief (USBC_UPCON3) RAMACER Interrupt Enable */
#define USBC_UPCON3_RAMACERE        (_U_(0x1) << USBC_UPCON3_RAMACERE_Pos)
#define USBC_UPCON3_NBUSYBKE_Pos    12           /**< \brief (USBC_UPCON3) NBUSYBKInterrupt Enable */
#define USBC_UPCON3_NBUSYBKE        (_U_(0x1) << USBC_UPCON3_NBUSYBKE_Pos)
#define USBC_UPCON3_FIFOCON_Pos     14           /**< \brief (USBC_UPCON3) FIFO Control */
#define USBC_UPCON3_FIFOCON         (_U_(0x1) << USBC_UPCON3_FIFOCON_Pos)
#define USBC_UPCON3_PFREEZE_Pos     17           /**< \brief (USBC_UPCON3) Pipe Freeze */
#define USBC_UPCON3_PFREEZE         (_U_(0x1) << USBC_UPCON3_PFREEZE_Pos)
#define USBC_UPCON3_INITDTGL_Pos    18           /**< \brief (USBC_UPCON3) Data Toggle Initialization */
#define USBC_UPCON3_INITDTGL        (_U_(0x1) << USBC_UPCON3_INITDTGL_Pos)
#define USBC_UPCON3_INITBK_Pos      19           /**< \brief (USBC_UPCON3) Bank Initialization */
#define USBC_UPCON3_INITBK          (_U_(0x1) << USBC_UPCON3_INITBK_Pos)
#define USBC_UPCON3_MASK            _U_(0x000E547F) /**< \brief (USBC_UPCON3) MASK Register */

/* -------- USBC_UPCON4 : (USBC Offset: 0x5D0) (R/  32) Pipe Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXINE:1;          /*!< bit:      0  RXIN Interrupt Enable              */
    uint32_t TXOUTE:1;         /*!< bit:      1  TXOUT Interrupt Enable             */
    uint32_t TXSTPE:1;         /*!< bit:      2  TXSTP Interrupt Enable             */
    uint32_t PERRE:1;          /*!< bit:      3  PERR Interrupt Enable              */
    uint32_t NAKEDE:1;         /*!< bit:      4  NAKED Interrupt Enable             */
    uint32_t ERRORFIE:1;       /*!< bit:      5  ERRORFI Interrupt Enable           */
    uint32_t RXSTALLDE:1;      /*!< bit:      6  RXTALLD Interrupt Enable           */
    uint32_t :3;               /*!< bit:  7.. 9  Reserved                           */
    uint32_t RAMACERE:1;       /*!< bit:     10  RAMACER Interrupt Enable           */
    uint32_t :1;               /*!< bit:     11  Reserved                           */
    uint32_t NBUSYBKE:1;       /*!< bit:     12  NBUSYBKInterrupt Enable            */
    uint32_t :1;               /*!< bit:     13  Reserved                           */
    uint32_t FIFOCON:1;        /*!< bit:     14  FIFO Control                       */
    uint32_t :2;               /*!< bit: 15..16  Reserved                           */
    uint32_t PFREEZE:1;        /*!< bit:     17  Pipe Freeze                        */
    uint32_t INITDTGL:1;       /*!< bit:     18  Data Toggle Initialization         */
    uint32_t INITBK:1;         /*!< bit:     19  Bank Initialization                */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPCON4_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPCON4_OFFSET          0x5D0        /**< \brief (USBC_UPCON4 offset) Pipe Control Register */
#define USBC_UPCON4_RESETVALUE      _U_(0x00000000); /**< \brief (USBC_UPCON4 reset_value) Pipe Control Register */

#define USBC_UPCON4_RXINE_Pos       0            /**< \brief (USBC_UPCON4) RXIN Interrupt Enable */
#define USBC_UPCON4_RXINE           (_U_(0x1) << USBC_UPCON4_RXINE_Pos)
#define USBC_UPCON4_TXOUTE_Pos      1            /**< \brief (USBC_UPCON4) TXOUT Interrupt Enable */
#define USBC_UPCON4_TXOUTE          (_U_(0x1) << USBC_UPCON4_TXOUTE_Pos)
#define USBC_UPCON4_TXSTPE_Pos      2            /**< \brief (USBC_UPCON4) TXSTP Interrupt Enable */
#define USBC_UPCON4_TXSTPE          (_U_(0x1) << USBC_UPCON4_TXSTPE_Pos)
#define USBC_UPCON4_PERRE_Pos       3            /**< \brief (USBC_UPCON4) PERR Interrupt Enable */
#define USBC_UPCON4_PERRE           (_U_(0x1) << USBC_UPCON4_PERRE_Pos)
#define USBC_UPCON4_NAKEDE_Pos      4            /**< \brief (USBC_UPCON4) NAKED Interrupt Enable */
#define USBC_UPCON4_NAKEDE          (_U_(0x1) << USBC_UPCON4_NAKEDE_Pos)
#define USBC_UPCON4_ERRORFIE_Pos    5            /**< \brief (USBC_UPCON4) ERRORFI Interrupt Enable */
#define USBC_UPCON4_ERRORFIE        (_U_(0x1) << USBC_UPCON4_ERRORFIE_Pos)
#define USBC_UPCON4_RXSTALLDE_Pos   6            /**< \brief (USBC_UPCON4) RXTALLD Interrupt Enable */
#define USBC_UPCON4_RXSTALLDE       (_U_(0x1) << USBC_UPCON4_RXSTALLDE_Pos)
#define USBC_UPCON4_RAMACERE_Pos    10           /**< \brief (USBC_UPCON4) RAMACER Interrupt Enable */
#define USBC_UPCON4_RAMACERE        (_U_(0x1) << USBC_UPCON4_RAMACERE_Pos)
#define USBC_UPCON4_NBUSYBKE_Pos    12           /**< \brief (USBC_UPCON4) NBUSYBKInterrupt Enable */
#define USBC_UPCON4_NBUSYBKE        (_U_(0x1) << USBC_UPCON4_NBUSYBKE_Pos)
#define USBC_UPCON4_FIFOCON_Pos     14           /**< \brief (USBC_UPCON4) FIFO Control */
#define USBC_UPCON4_FIFOCON         (_U_(0x1) << USBC_UPCON4_FIFOCON_Pos)
#define USBC_UPCON4_PFREEZE_Pos     17           /**< \brief (USBC_UPCON4) Pipe Freeze */
#define USBC_UPCON4_PFREEZE         (_U_(0x1) << USBC_UPCON4_PFREEZE_Pos)
#define USBC_UPCON4_INITDTGL_Pos    18           /**< \brief (USBC_UPCON4) Data Toggle Initialization */
#define USBC_UPCON4_INITDTGL        (_U_(0x1) << USBC_UPCON4_INITDTGL_Pos)
#define USBC_UPCON4_INITBK_Pos      19           /**< \brief (USBC_UPCON4) Bank Initialization */
#define USBC_UPCON4_INITBK          (_U_(0x1) << USBC_UPCON4_INITBK_Pos)
#define USBC_UPCON4_MASK            _U_(0x000E547F) /**< \brief (USBC_UPCON4) MASK Register */

/* -------- USBC_UPCON5 : (USBC Offset: 0x5D4) (R/  32) Pipe Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXINE:1;          /*!< bit:      0  RXIN Interrupt Enable              */
    uint32_t TXOUTE:1;         /*!< bit:      1  TXOUT Interrupt Enable             */
    uint32_t TXSTPE:1;         /*!< bit:      2  TXSTP Interrupt Enable             */
    uint32_t PERRE:1;          /*!< bit:      3  PERR Interrupt Enable              */
    uint32_t NAKEDE:1;         /*!< bit:      4  NAKED Interrupt Enable             */
    uint32_t ERRORFIE:1;       /*!< bit:      5  ERRORFI Interrupt Enable           */
    uint32_t RXSTALLDE:1;      /*!< bit:      6  RXTALLD Interrupt Enable           */
    uint32_t :3;               /*!< bit:  7.. 9  Reserved                           */
    uint32_t RAMACERE:1;       /*!< bit:     10  RAMACER Interrupt Enable           */
    uint32_t :1;               /*!< bit:     11  Reserved                           */
    uint32_t NBUSYBKE:1;       /*!< bit:     12  NBUSYBKInterrupt Enable            */
    uint32_t :1;               /*!< bit:     13  Reserved                           */
    uint32_t FIFOCON:1;        /*!< bit:     14  FIFO Control                       */
    uint32_t :2;               /*!< bit: 15..16  Reserved                           */
    uint32_t PFREEZE:1;        /*!< bit:     17  Pipe Freeze                        */
    uint32_t INITDTGL:1;       /*!< bit:     18  Data Toggle Initialization         */
    uint32_t INITBK:1;         /*!< bit:     19  Bank Initialization                */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPCON5_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPCON5_OFFSET          0x5D4        /**< \brief (USBC_UPCON5 offset) Pipe Control Register */
#define USBC_UPCON5_RESETVALUE      _U_(0x00000000); /**< \brief (USBC_UPCON5 reset_value) Pipe Control Register */

#define USBC_UPCON5_RXINE_Pos       0            /**< \brief (USBC_UPCON5) RXIN Interrupt Enable */
#define USBC_UPCON5_RXINE           (_U_(0x1) << USBC_UPCON5_RXINE_Pos)
#define USBC_UPCON5_TXOUTE_Pos      1            /**< \brief (USBC_UPCON5) TXOUT Interrupt Enable */
#define USBC_UPCON5_TXOUTE          (_U_(0x1) << USBC_UPCON5_TXOUTE_Pos)
#define USBC_UPCON5_TXSTPE_Pos      2            /**< \brief (USBC_UPCON5) TXSTP Interrupt Enable */
#define USBC_UPCON5_TXSTPE          (_U_(0x1) << USBC_UPCON5_TXSTPE_Pos)
#define USBC_UPCON5_PERRE_Pos       3            /**< \brief (USBC_UPCON5) PERR Interrupt Enable */
#define USBC_UPCON5_PERRE           (_U_(0x1) << USBC_UPCON5_PERRE_Pos)
#define USBC_UPCON5_NAKEDE_Pos      4            /**< \brief (USBC_UPCON5) NAKED Interrupt Enable */
#define USBC_UPCON5_NAKEDE          (_U_(0x1) << USBC_UPCON5_NAKEDE_Pos)
#define USBC_UPCON5_ERRORFIE_Pos    5            /**< \brief (USBC_UPCON5) ERRORFI Interrupt Enable */
#define USBC_UPCON5_ERRORFIE        (_U_(0x1) << USBC_UPCON5_ERRORFIE_Pos)
#define USBC_UPCON5_RXSTALLDE_Pos   6            /**< \brief (USBC_UPCON5) RXTALLD Interrupt Enable */
#define USBC_UPCON5_RXSTALLDE       (_U_(0x1) << USBC_UPCON5_RXSTALLDE_Pos)
#define USBC_UPCON5_RAMACERE_Pos    10           /**< \brief (USBC_UPCON5) RAMACER Interrupt Enable */
#define USBC_UPCON5_RAMACERE        (_U_(0x1) << USBC_UPCON5_RAMACERE_Pos)
#define USBC_UPCON5_NBUSYBKE_Pos    12           /**< \brief (USBC_UPCON5) NBUSYBKInterrupt Enable */
#define USBC_UPCON5_NBUSYBKE        (_U_(0x1) << USBC_UPCON5_NBUSYBKE_Pos)
#define USBC_UPCON5_FIFOCON_Pos     14           /**< \brief (USBC_UPCON5) FIFO Control */
#define USBC_UPCON5_FIFOCON         (_U_(0x1) << USBC_UPCON5_FIFOCON_Pos)
#define USBC_UPCON5_PFREEZE_Pos     17           /**< \brief (USBC_UPCON5) Pipe Freeze */
#define USBC_UPCON5_PFREEZE         (_U_(0x1) << USBC_UPCON5_PFREEZE_Pos)
#define USBC_UPCON5_INITDTGL_Pos    18           /**< \brief (USBC_UPCON5) Data Toggle Initialization */
#define USBC_UPCON5_INITDTGL        (_U_(0x1) << USBC_UPCON5_INITDTGL_Pos)
#define USBC_UPCON5_INITBK_Pos      19           /**< \brief (USBC_UPCON5) Bank Initialization */
#define USBC_UPCON5_INITBK          (_U_(0x1) << USBC_UPCON5_INITBK_Pos)
#define USBC_UPCON5_MASK            _U_(0x000E547F) /**< \brief (USBC_UPCON5) MASK Register */

/* -------- USBC_UPCON6 : (USBC Offset: 0x5D8) (R/  32) Pipe Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXINE:1;          /*!< bit:      0  RXIN Interrupt Enable              */
    uint32_t TXOUTE:1;         /*!< bit:      1  TXOUT Interrupt Enable             */
    uint32_t TXSTPE:1;         /*!< bit:      2  TXSTP Interrupt Enable             */
    uint32_t PERRE:1;          /*!< bit:      3  PERR Interrupt Enable              */
    uint32_t NAKEDE:1;         /*!< bit:      4  NAKED Interrupt Enable             */
    uint32_t ERRORFIE:1;       /*!< bit:      5  ERRORFI Interrupt Enable           */
    uint32_t RXSTALLDE:1;      /*!< bit:      6  RXTALLD Interrupt Enable           */
    uint32_t :3;               /*!< bit:  7.. 9  Reserved                           */
    uint32_t RAMACERE:1;       /*!< bit:     10  RAMACER Interrupt Enable           */
    uint32_t :1;               /*!< bit:     11  Reserved                           */
    uint32_t NBUSYBKE:1;       /*!< bit:     12  NBUSYBKInterrupt Enable            */
    uint32_t :1;               /*!< bit:     13  Reserved                           */
    uint32_t FIFOCON:1;        /*!< bit:     14  FIFO Control                       */
    uint32_t :2;               /*!< bit: 15..16  Reserved                           */
    uint32_t PFREEZE:1;        /*!< bit:     17  Pipe Freeze                        */
    uint32_t INITDTGL:1;       /*!< bit:     18  Data Toggle Initialization         */
    uint32_t INITBK:1;         /*!< bit:     19  Bank Initialization                */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPCON6_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPCON6_OFFSET          0x5D8        /**< \brief (USBC_UPCON6 offset) Pipe Control Register */
#define USBC_UPCON6_RESETVALUE      _U_(0x00000000); /**< \brief (USBC_UPCON6 reset_value) Pipe Control Register */

#define USBC_UPCON6_RXINE_Pos       0            /**< \brief (USBC_UPCON6) RXIN Interrupt Enable */
#define USBC_UPCON6_RXINE           (_U_(0x1) << USBC_UPCON6_RXINE_Pos)
#define USBC_UPCON6_TXOUTE_Pos      1            /**< \brief (USBC_UPCON6) TXOUT Interrupt Enable */
#define USBC_UPCON6_TXOUTE          (_U_(0x1) << USBC_UPCON6_TXOUTE_Pos)
#define USBC_UPCON6_TXSTPE_Pos      2            /**< \brief (USBC_UPCON6) TXSTP Interrupt Enable */
#define USBC_UPCON6_TXSTPE          (_U_(0x1) << USBC_UPCON6_TXSTPE_Pos)
#define USBC_UPCON6_PERRE_Pos       3            /**< \brief (USBC_UPCON6) PERR Interrupt Enable */
#define USBC_UPCON6_PERRE           (_U_(0x1) << USBC_UPCON6_PERRE_Pos)
#define USBC_UPCON6_NAKEDE_Pos      4            /**< \brief (USBC_UPCON6) NAKED Interrupt Enable */
#define USBC_UPCON6_NAKEDE          (_U_(0x1) << USBC_UPCON6_NAKEDE_Pos)
#define USBC_UPCON6_ERRORFIE_Pos    5            /**< \brief (USBC_UPCON6) ERRORFI Interrupt Enable */
#define USBC_UPCON6_ERRORFIE        (_U_(0x1) << USBC_UPCON6_ERRORFIE_Pos)
#define USBC_UPCON6_RXSTALLDE_Pos   6            /**< \brief (USBC_UPCON6) RXTALLD Interrupt Enable */
#define USBC_UPCON6_RXSTALLDE       (_U_(0x1) << USBC_UPCON6_RXSTALLDE_Pos)
#define USBC_UPCON6_RAMACERE_Pos    10           /**< \brief (USBC_UPCON6) RAMACER Interrupt Enable */
#define USBC_UPCON6_RAMACERE        (_U_(0x1) << USBC_UPCON6_RAMACERE_Pos)
#define USBC_UPCON6_NBUSYBKE_Pos    12           /**< \brief (USBC_UPCON6) NBUSYBKInterrupt Enable */
#define USBC_UPCON6_NBUSYBKE        (_U_(0x1) << USBC_UPCON6_NBUSYBKE_Pos)
#define USBC_UPCON6_FIFOCON_Pos     14           /**< \brief (USBC_UPCON6) FIFO Control */
#define USBC_UPCON6_FIFOCON         (_U_(0x1) << USBC_UPCON6_FIFOCON_Pos)
#define USBC_UPCON6_PFREEZE_Pos     17           /**< \brief (USBC_UPCON6) Pipe Freeze */
#define USBC_UPCON6_PFREEZE         (_U_(0x1) << USBC_UPCON6_PFREEZE_Pos)
#define USBC_UPCON6_INITDTGL_Pos    18           /**< \brief (USBC_UPCON6) Data Toggle Initialization */
#define USBC_UPCON6_INITDTGL        (_U_(0x1) << USBC_UPCON6_INITDTGL_Pos)
#define USBC_UPCON6_INITBK_Pos      19           /**< \brief (USBC_UPCON6) Bank Initialization */
#define USBC_UPCON6_INITBK          (_U_(0x1) << USBC_UPCON6_INITBK_Pos)
#define USBC_UPCON6_MASK            _U_(0x000E547F) /**< \brief (USBC_UPCON6) MASK Register */

/* -------- USBC_UPCON7 : (USBC Offset: 0x5DC) (R/  32) Pipe Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXINE:1;          /*!< bit:      0  RXIN Interrupt Enable              */
    uint32_t TXOUTE:1;         /*!< bit:      1  TXOUT Interrupt Enable             */
    uint32_t TXSTPE:1;         /*!< bit:      2  TXSTP Interrupt Enable             */
    uint32_t PERRE:1;          /*!< bit:      3  PERR Interrupt Enable              */
    uint32_t NAKEDE:1;         /*!< bit:      4  NAKED Interrupt Enable             */
    uint32_t ERRORFIE:1;       /*!< bit:      5  ERRORFI Interrupt Enable           */
    uint32_t RXSTALLDE:1;      /*!< bit:      6  RXTALLD Interrupt Enable           */
    uint32_t :3;               /*!< bit:  7.. 9  Reserved                           */
    uint32_t RAMACERE:1;       /*!< bit:     10  RAMACER Interrupt Enable           */
    uint32_t :1;               /*!< bit:     11  Reserved                           */
    uint32_t NBUSYBKE:1;       /*!< bit:     12  NBUSYBKInterrupt Enable            */
    uint32_t :1;               /*!< bit:     13  Reserved                           */
    uint32_t FIFOCON:1;        /*!< bit:     14  FIFO Control                       */
    uint32_t :2;               /*!< bit: 15..16  Reserved                           */
    uint32_t PFREEZE:1;        /*!< bit:     17  Pipe Freeze                        */
    uint32_t INITDTGL:1;       /*!< bit:     18  Data Toggle Initialization         */
    uint32_t INITBK:1;         /*!< bit:     19  Bank Initialization                */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPCON7_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPCON7_OFFSET          0x5DC        /**< \brief (USBC_UPCON7 offset) Pipe Control Register */
#define USBC_UPCON7_RESETVALUE      _U_(0x00000000); /**< \brief (USBC_UPCON7 reset_value) Pipe Control Register */

#define USBC_UPCON7_RXINE_Pos       0            /**< \brief (USBC_UPCON7) RXIN Interrupt Enable */
#define USBC_UPCON7_RXINE           (_U_(0x1) << USBC_UPCON7_RXINE_Pos)
#define USBC_UPCON7_TXOUTE_Pos      1            /**< \brief (USBC_UPCON7) TXOUT Interrupt Enable */
#define USBC_UPCON7_TXOUTE          (_U_(0x1) << USBC_UPCON7_TXOUTE_Pos)
#define USBC_UPCON7_TXSTPE_Pos      2            /**< \brief (USBC_UPCON7) TXSTP Interrupt Enable */
#define USBC_UPCON7_TXSTPE          (_U_(0x1) << USBC_UPCON7_TXSTPE_Pos)
#define USBC_UPCON7_PERRE_Pos       3            /**< \brief (USBC_UPCON7) PERR Interrupt Enable */
#define USBC_UPCON7_PERRE           (_U_(0x1) << USBC_UPCON7_PERRE_Pos)
#define USBC_UPCON7_NAKEDE_Pos      4            /**< \brief (USBC_UPCON7) NAKED Interrupt Enable */
#define USBC_UPCON7_NAKEDE          (_U_(0x1) << USBC_UPCON7_NAKEDE_Pos)
#define USBC_UPCON7_ERRORFIE_Pos    5            /**< \brief (USBC_UPCON7) ERRORFI Interrupt Enable */
#define USBC_UPCON7_ERRORFIE        (_U_(0x1) << USBC_UPCON7_ERRORFIE_Pos)
#define USBC_UPCON7_RXSTALLDE_Pos   6            /**< \brief (USBC_UPCON7) RXTALLD Interrupt Enable */
#define USBC_UPCON7_RXSTALLDE       (_U_(0x1) << USBC_UPCON7_RXSTALLDE_Pos)
#define USBC_UPCON7_RAMACERE_Pos    10           /**< \brief (USBC_UPCON7) RAMACER Interrupt Enable */
#define USBC_UPCON7_RAMACERE        (_U_(0x1) << USBC_UPCON7_RAMACERE_Pos)
#define USBC_UPCON7_NBUSYBKE_Pos    12           /**< \brief (USBC_UPCON7) NBUSYBKInterrupt Enable */
#define USBC_UPCON7_NBUSYBKE        (_U_(0x1) << USBC_UPCON7_NBUSYBKE_Pos)
#define USBC_UPCON7_FIFOCON_Pos     14           /**< \brief (USBC_UPCON7) FIFO Control */
#define USBC_UPCON7_FIFOCON         (_U_(0x1) << USBC_UPCON7_FIFOCON_Pos)
#define USBC_UPCON7_PFREEZE_Pos     17           /**< \brief (USBC_UPCON7) Pipe Freeze */
#define USBC_UPCON7_PFREEZE         (_U_(0x1) << USBC_UPCON7_PFREEZE_Pos)
#define USBC_UPCON7_INITDTGL_Pos    18           /**< \brief (USBC_UPCON7) Data Toggle Initialization */
#define USBC_UPCON7_INITDTGL        (_U_(0x1) << USBC_UPCON7_INITDTGL_Pos)
#define USBC_UPCON7_INITBK_Pos      19           /**< \brief (USBC_UPCON7) Bank Initialization */
#define USBC_UPCON7_INITBK          (_U_(0x1) << USBC_UPCON7_INITBK_Pos)
#define USBC_UPCON7_MASK            _U_(0x000E547F) /**< \brief (USBC_UPCON7) MASK Register */

/* -------- USBC_UPCON0SET : (USBC Offset: 0x5F0) ( /W 32) Pipe Control Set Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXINES:1;         /*!< bit:      0  RXINE Set                          */
    uint32_t TXOUTES:1;        /*!< bit:      1  TXOUTE Set                         */
    uint32_t TXSTPES:1;        /*!< bit:      2  TXSTPE Set                         */
    uint32_t PERRES:1;         /*!< bit:      3  PERRE Set                          */
    uint32_t NAKEDES:1;        /*!< bit:      4  NAKEDE Set                         */
    uint32_t ERRORFIES:1;      /*!< bit:      5  ERRORFIE Set                       */
    uint32_t RXSTALLDES:1;     /*!< bit:      6  RXSTALLDE Set                      */
    uint32_t :3;               /*!< bit:  7.. 9  Reserved                           */
    uint32_t RAMACERES:1;      /*!< bit:     10  RAMACERE Set                       */
    uint32_t :1;               /*!< bit:     11  Reserved                           */
    uint32_t NBUSYBKES:1;      /*!< bit:     12  NBUSYBKE Set                       */
    uint32_t :1;               /*!< bit:     13  Reserved                           */
    uint32_t FIFOCONS:1;       /*!< bit:     14  FIFOCON Set                        */
    uint32_t :2;               /*!< bit: 15..16  Reserved                           */
    uint32_t PFREEZES:1;       /*!< bit:     17  PFREEZE Set                        */
    uint32_t INITDTGLS:1;      /*!< bit:     18  INITDTGL Set                       */
    uint32_t INITBKS:1;        /*!< bit:     19  INITBK Set                         */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPCON0SET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPCON0SET_OFFSET       0x5F0        /**< \brief (USBC_UPCON0SET offset) Pipe Control Set Register */
#define USBC_UPCON0SET_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UPCON0SET reset_value) Pipe Control Set Register */

#define USBC_UPCON0SET_RXINES_Pos   0            /**< \brief (USBC_UPCON0SET) RXINE Set */
#define USBC_UPCON0SET_RXINES       (_U_(0x1) << USBC_UPCON0SET_RXINES_Pos)
#define USBC_UPCON0SET_TXOUTES_Pos  1            /**< \brief (USBC_UPCON0SET) TXOUTE Set */
#define USBC_UPCON0SET_TXOUTES      (_U_(0x1) << USBC_UPCON0SET_TXOUTES_Pos)
#define USBC_UPCON0SET_TXSTPES_Pos  2            /**< \brief (USBC_UPCON0SET) TXSTPE Set */
#define USBC_UPCON0SET_TXSTPES      (_U_(0x1) << USBC_UPCON0SET_TXSTPES_Pos)
#define USBC_UPCON0SET_PERRES_Pos   3            /**< \brief (USBC_UPCON0SET) PERRE Set */
#define USBC_UPCON0SET_PERRES       (_U_(0x1) << USBC_UPCON0SET_PERRES_Pos)
#define USBC_UPCON0SET_NAKEDES_Pos  4            /**< \brief (USBC_UPCON0SET) NAKEDE Set */
#define USBC_UPCON0SET_NAKEDES      (_U_(0x1) << USBC_UPCON0SET_NAKEDES_Pos)
#define USBC_UPCON0SET_ERRORFIES_Pos 5            /**< \brief (USBC_UPCON0SET) ERRORFIE Set */
#define USBC_UPCON0SET_ERRORFIES    (_U_(0x1) << USBC_UPCON0SET_ERRORFIES_Pos)
#define USBC_UPCON0SET_RXSTALLDES_Pos 6            /**< \brief (USBC_UPCON0SET) RXSTALLDE Set */
#define USBC_UPCON0SET_RXSTALLDES   (_U_(0x1) << USBC_UPCON0SET_RXSTALLDES_Pos)
#define USBC_UPCON0SET_RAMACERES_Pos 10           /**< \brief (USBC_UPCON0SET) RAMACERE Set */
#define USBC_UPCON0SET_RAMACERES    (_U_(0x1) << USBC_UPCON0SET_RAMACERES_Pos)
#define USBC_UPCON0SET_NBUSYBKES_Pos 12           /**< \brief (USBC_UPCON0SET) NBUSYBKE Set */
#define USBC_UPCON0SET_NBUSYBKES    (_U_(0x1) << USBC_UPCON0SET_NBUSYBKES_Pos)
#define USBC_UPCON0SET_FIFOCONS_Pos 14           /**< \brief (USBC_UPCON0SET) FIFOCON Set */
#define USBC_UPCON0SET_FIFOCONS     (_U_(0x1) << USBC_UPCON0SET_FIFOCONS_Pos)
#define USBC_UPCON0SET_PFREEZES_Pos 17           /**< \brief (USBC_UPCON0SET) PFREEZE Set */
#define USBC_UPCON0SET_PFREEZES     (_U_(0x1) << USBC_UPCON0SET_PFREEZES_Pos)
#define USBC_UPCON0SET_INITDTGLS_Pos 18           /**< \brief (USBC_UPCON0SET) INITDTGL Set */
#define USBC_UPCON0SET_INITDTGLS    (_U_(0x1) << USBC_UPCON0SET_INITDTGLS_Pos)
#define USBC_UPCON0SET_INITBKS_Pos  19           /**< \brief (USBC_UPCON0SET) INITBK Set */
#define USBC_UPCON0SET_INITBKS      (_U_(0x1) << USBC_UPCON0SET_INITBKS_Pos)
#define USBC_UPCON0SET_MASK         _U_(0x000E547F) /**< \brief (USBC_UPCON0SET) MASK Register */

/* -------- USBC_UPCON1SET : (USBC Offset: 0x5F4) ( /W 32) Pipe Control Set Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXINES:1;         /*!< bit:      0  RXINE Set                          */
    uint32_t TXOUTES:1;        /*!< bit:      1  TXOUTE Set                         */
    uint32_t TXSTPES:1;        /*!< bit:      2  TXSTPE Set                         */
    uint32_t PERRES:1;         /*!< bit:      3  PERRE Set                          */
    uint32_t NAKEDES:1;        /*!< bit:      4  NAKEDE Set                         */
    uint32_t ERRORFIES:1;      /*!< bit:      5  ERRORFIE Set                       */
    uint32_t RXSTALLDES:1;     /*!< bit:      6  RXSTALLDE Set                      */
    uint32_t :3;               /*!< bit:  7.. 9  Reserved                           */
    uint32_t RAMACERES:1;      /*!< bit:     10  RAMACERE Set                       */
    uint32_t :1;               /*!< bit:     11  Reserved                           */
    uint32_t NBUSYBKES:1;      /*!< bit:     12  NBUSYBKE Set                       */
    uint32_t :1;               /*!< bit:     13  Reserved                           */
    uint32_t FIFOCONS:1;       /*!< bit:     14  FIFOCON Set                        */
    uint32_t :2;               /*!< bit: 15..16  Reserved                           */
    uint32_t PFREEZES:1;       /*!< bit:     17  PFREEZE Set                        */
    uint32_t INITDTGLS:1;      /*!< bit:     18  INITDTGL Set                       */
    uint32_t INITBKS:1;        /*!< bit:     19  INITBK Set                         */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPCON1SET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPCON1SET_OFFSET       0x5F4        /**< \brief (USBC_UPCON1SET offset) Pipe Control Set Register */
#define USBC_UPCON1SET_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UPCON1SET reset_value) Pipe Control Set Register */

#define USBC_UPCON1SET_RXINES_Pos   0            /**< \brief (USBC_UPCON1SET) RXINE Set */
#define USBC_UPCON1SET_RXINES       (_U_(0x1) << USBC_UPCON1SET_RXINES_Pos)
#define USBC_UPCON1SET_TXOUTES_Pos  1            /**< \brief (USBC_UPCON1SET) TXOUTE Set */
#define USBC_UPCON1SET_TXOUTES      (_U_(0x1) << USBC_UPCON1SET_TXOUTES_Pos)
#define USBC_UPCON1SET_TXSTPES_Pos  2            /**< \brief (USBC_UPCON1SET) TXSTPE Set */
#define USBC_UPCON1SET_TXSTPES      (_U_(0x1) << USBC_UPCON1SET_TXSTPES_Pos)
#define USBC_UPCON1SET_PERRES_Pos   3            /**< \brief (USBC_UPCON1SET) PERRE Set */
#define USBC_UPCON1SET_PERRES       (_U_(0x1) << USBC_UPCON1SET_PERRES_Pos)
#define USBC_UPCON1SET_NAKEDES_Pos  4            /**< \brief (USBC_UPCON1SET) NAKEDE Set */
#define USBC_UPCON1SET_NAKEDES      (_U_(0x1) << USBC_UPCON1SET_NAKEDES_Pos)
#define USBC_UPCON1SET_ERRORFIES_Pos 5            /**< \brief (USBC_UPCON1SET) ERRORFIE Set */
#define USBC_UPCON1SET_ERRORFIES    (_U_(0x1) << USBC_UPCON1SET_ERRORFIES_Pos)
#define USBC_UPCON1SET_RXSTALLDES_Pos 6            /**< \brief (USBC_UPCON1SET) RXSTALLDE Set */
#define USBC_UPCON1SET_RXSTALLDES   (_U_(0x1) << USBC_UPCON1SET_RXSTALLDES_Pos)
#define USBC_UPCON1SET_RAMACERES_Pos 10           /**< \brief (USBC_UPCON1SET) RAMACERE Set */
#define USBC_UPCON1SET_RAMACERES    (_U_(0x1) << USBC_UPCON1SET_RAMACERES_Pos)
#define USBC_UPCON1SET_NBUSYBKES_Pos 12           /**< \brief (USBC_UPCON1SET) NBUSYBKE Set */
#define USBC_UPCON1SET_NBUSYBKES    (_U_(0x1) << USBC_UPCON1SET_NBUSYBKES_Pos)
#define USBC_UPCON1SET_FIFOCONS_Pos 14           /**< \brief (USBC_UPCON1SET) FIFOCON Set */
#define USBC_UPCON1SET_FIFOCONS     (_U_(0x1) << USBC_UPCON1SET_FIFOCONS_Pos)
#define USBC_UPCON1SET_PFREEZES_Pos 17           /**< \brief (USBC_UPCON1SET) PFREEZE Set */
#define USBC_UPCON1SET_PFREEZES     (_U_(0x1) << USBC_UPCON1SET_PFREEZES_Pos)
#define USBC_UPCON1SET_INITDTGLS_Pos 18           /**< \brief (USBC_UPCON1SET) INITDTGL Set */
#define USBC_UPCON1SET_INITDTGLS    (_U_(0x1) << USBC_UPCON1SET_INITDTGLS_Pos)
#define USBC_UPCON1SET_INITBKS_Pos  19           /**< \brief (USBC_UPCON1SET) INITBK Set */
#define USBC_UPCON1SET_INITBKS      (_U_(0x1) << USBC_UPCON1SET_INITBKS_Pos)
#define USBC_UPCON1SET_MASK         _U_(0x000E547F) /**< \brief (USBC_UPCON1SET) MASK Register */

/* -------- USBC_UPCON2SET : (USBC Offset: 0x5F8) ( /W 32) Pipe Control Set Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXINES:1;         /*!< bit:      0  RXINE Set                          */
    uint32_t TXOUTES:1;        /*!< bit:      1  TXOUTE Set                         */
    uint32_t TXSTPES:1;        /*!< bit:      2  TXSTPE Set                         */
    uint32_t PERRES:1;         /*!< bit:      3  PERRE Set                          */
    uint32_t NAKEDES:1;        /*!< bit:      4  NAKEDE Set                         */
    uint32_t ERRORFIES:1;      /*!< bit:      5  ERRORFIE Set                       */
    uint32_t RXSTALLDES:1;     /*!< bit:      6  RXSTALLDE Set                      */
    uint32_t :3;               /*!< bit:  7.. 9  Reserved                           */
    uint32_t RAMACERES:1;      /*!< bit:     10  RAMACERE Set                       */
    uint32_t :1;               /*!< bit:     11  Reserved                           */
    uint32_t NBUSYBKES:1;      /*!< bit:     12  NBUSYBKE Set                       */
    uint32_t :1;               /*!< bit:     13  Reserved                           */
    uint32_t FIFOCONS:1;       /*!< bit:     14  FIFOCON Set                        */
    uint32_t :2;               /*!< bit: 15..16  Reserved                           */
    uint32_t PFREEZES:1;       /*!< bit:     17  PFREEZE Set                        */
    uint32_t INITDTGLS:1;      /*!< bit:     18  INITDTGL Set                       */
    uint32_t INITBKS:1;        /*!< bit:     19  INITBK Set                         */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPCON2SET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPCON2SET_OFFSET       0x5F8        /**< \brief (USBC_UPCON2SET offset) Pipe Control Set Register */
#define USBC_UPCON2SET_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UPCON2SET reset_value) Pipe Control Set Register */

#define USBC_UPCON2SET_RXINES_Pos   0            /**< \brief (USBC_UPCON2SET) RXINE Set */
#define USBC_UPCON2SET_RXINES       (_U_(0x1) << USBC_UPCON2SET_RXINES_Pos)
#define USBC_UPCON2SET_TXOUTES_Pos  1            /**< \brief (USBC_UPCON2SET) TXOUTE Set */
#define USBC_UPCON2SET_TXOUTES      (_U_(0x1) << USBC_UPCON2SET_TXOUTES_Pos)
#define USBC_UPCON2SET_TXSTPES_Pos  2            /**< \brief (USBC_UPCON2SET) TXSTPE Set */
#define USBC_UPCON2SET_TXSTPES      (_U_(0x1) << USBC_UPCON2SET_TXSTPES_Pos)
#define USBC_UPCON2SET_PERRES_Pos   3            /**< \brief (USBC_UPCON2SET) PERRE Set */
#define USBC_UPCON2SET_PERRES       (_U_(0x1) << USBC_UPCON2SET_PERRES_Pos)
#define USBC_UPCON2SET_NAKEDES_Pos  4            /**< \brief (USBC_UPCON2SET) NAKEDE Set */
#define USBC_UPCON2SET_NAKEDES      (_U_(0x1) << USBC_UPCON2SET_NAKEDES_Pos)
#define USBC_UPCON2SET_ERRORFIES_Pos 5            /**< \brief (USBC_UPCON2SET) ERRORFIE Set */
#define USBC_UPCON2SET_ERRORFIES    (_U_(0x1) << USBC_UPCON2SET_ERRORFIES_Pos)
#define USBC_UPCON2SET_RXSTALLDES_Pos 6            /**< \brief (USBC_UPCON2SET) RXSTALLDE Set */
#define USBC_UPCON2SET_RXSTALLDES   (_U_(0x1) << USBC_UPCON2SET_RXSTALLDES_Pos)
#define USBC_UPCON2SET_RAMACERES_Pos 10           /**< \brief (USBC_UPCON2SET) RAMACERE Set */
#define USBC_UPCON2SET_RAMACERES    (_U_(0x1) << USBC_UPCON2SET_RAMACERES_Pos)
#define USBC_UPCON2SET_NBUSYBKES_Pos 12           /**< \brief (USBC_UPCON2SET) NBUSYBKE Set */
#define USBC_UPCON2SET_NBUSYBKES    (_U_(0x1) << USBC_UPCON2SET_NBUSYBKES_Pos)
#define USBC_UPCON2SET_FIFOCONS_Pos 14           /**< \brief (USBC_UPCON2SET) FIFOCON Set */
#define USBC_UPCON2SET_FIFOCONS     (_U_(0x1) << USBC_UPCON2SET_FIFOCONS_Pos)
#define USBC_UPCON2SET_PFREEZES_Pos 17           /**< \brief (USBC_UPCON2SET) PFREEZE Set */
#define USBC_UPCON2SET_PFREEZES     (_U_(0x1) << USBC_UPCON2SET_PFREEZES_Pos)
#define USBC_UPCON2SET_INITDTGLS_Pos 18           /**< \brief (USBC_UPCON2SET) INITDTGL Set */
#define USBC_UPCON2SET_INITDTGLS    (_U_(0x1) << USBC_UPCON2SET_INITDTGLS_Pos)
#define USBC_UPCON2SET_INITBKS_Pos  19           /**< \brief (USBC_UPCON2SET) INITBK Set */
#define USBC_UPCON2SET_INITBKS      (_U_(0x1) << USBC_UPCON2SET_INITBKS_Pos)
#define USBC_UPCON2SET_MASK         _U_(0x000E547F) /**< \brief (USBC_UPCON2SET) MASK Register */

/* -------- USBC_UPCON3SET : (USBC Offset: 0x5FC) ( /W 32) Pipe Control Set Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXINES:1;         /*!< bit:      0  RXINE Set                          */
    uint32_t TXOUTES:1;        /*!< bit:      1  TXOUTE Set                         */
    uint32_t TXSTPES:1;        /*!< bit:      2  TXSTPE Set                         */
    uint32_t PERRES:1;         /*!< bit:      3  PERRE Set                          */
    uint32_t NAKEDES:1;        /*!< bit:      4  NAKEDE Set                         */
    uint32_t ERRORFIES:1;      /*!< bit:      5  ERRORFIE Set                       */
    uint32_t RXSTALLDES:1;     /*!< bit:      6  RXSTALLDE Set                      */
    uint32_t :3;               /*!< bit:  7.. 9  Reserved                           */
    uint32_t RAMACERES:1;      /*!< bit:     10  RAMACERE Set                       */
    uint32_t :1;               /*!< bit:     11  Reserved                           */
    uint32_t NBUSYBKES:1;      /*!< bit:     12  NBUSYBKE Set                       */
    uint32_t :1;               /*!< bit:     13  Reserved                           */
    uint32_t FIFOCONS:1;       /*!< bit:     14  FIFOCON Set                        */
    uint32_t :2;               /*!< bit: 15..16  Reserved                           */
    uint32_t PFREEZES:1;       /*!< bit:     17  PFREEZE Set                        */
    uint32_t INITDTGLS:1;      /*!< bit:     18  INITDTGL Set                       */
    uint32_t INITBKS:1;        /*!< bit:     19  INITBK Set                         */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPCON3SET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPCON3SET_OFFSET       0x5FC        /**< \brief (USBC_UPCON3SET offset) Pipe Control Set Register */
#define USBC_UPCON3SET_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UPCON3SET reset_value) Pipe Control Set Register */

#define USBC_UPCON3SET_RXINES_Pos   0            /**< \brief (USBC_UPCON3SET) RXINE Set */
#define USBC_UPCON3SET_RXINES       (_U_(0x1) << USBC_UPCON3SET_RXINES_Pos)
#define USBC_UPCON3SET_TXOUTES_Pos  1            /**< \brief (USBC_UPCON3SET) TXOUTE Set */
#define USBC_UPCON3SET_TXOUTES      (_U_(0x1) << USBC_UPCON3SET_TXOUTES_Pos)
#define USBC_UPCON3SET_TXSTPES_Pos  2            /**< \brief (USBC_UPCON3SET) TXSTPE Set */
#define USBC_UPCON3SET_TXSTPES      (_U_(0x1) << USBC_UPCON3SET_TXSTPES_Pos)
#define USBC_UPCON3SET_PERRES_Pos   3            /**< \brief (USBC_UPCON3SET) PERRE Set */
#define USBC_UPCON3SET_PERRES       (_U_(0x1) << USBC_UPCON3SET_PERRES_Pos)
#define USBC_UPCON3SET_NAKEDES_Pos  4            /**< \brief (USBC_UPCON3SET) NAKEDE Set */
#define USBC_UPCON3SET_NAKEDES      (_U_(0x1) << USBC_UPCON3SET_NAKEDES_Pos)
#define USBC_UPCON3SET_ERRORFIES_Pos 5            /**< \brief (USBC_UPCON3SET) ERRORFIE Set */
#define USBC_UPCON3SET_ERRORFIES    (_U_(0x1) << USBC_UPCON3SET_ERRORFIES_Pos)
#define USBC_UPCON3SET_RXSTALLDES_Pos 6            /**< \brief (USBC_UPCON3SET) RXSTALLDE Set */
#define USBC_UPCON3SET_RXSTALLDES   (_U_(0x1) << USBC_UPCON3SET_RXSTALLDES_Pos)
#define USBC_UPCON3SET_RAMACERES_Pos 10           /**< \brief (USBC_UPCON3SET) RAMACERE Set */
#define USBC_UPCON3SET_RAMACERES    (_U_(0x1) << USBC_UPCON3SET_RAMACERES_Pos)
#define USBC_UPCON3SET_NBUSYBKES_Pos 12           /**< \brief (USBC_UPCON3SET) NBUSYBKE Set */
#define USBC_UPCON3SET_NBUSYBKES    (_U_(0x1) << USBC_UPCON3SET_NBUSYBKES_Pos)
#define USBC_UPCON3SET_FIFOCONS_Pos 14           /**< \brief (USBC_UPCON3SET) FIFOCON Set */
#define USBC_UPCON3SET_FIFOCONS     (_U_(0x1) << USBC_UPCON3SET_FIFOCONS_Pos)
#define USBC_UPCON3SET_PFREEZES_Pos 17           /**< \brief (USBC_UPCON3SET) PFREEZE Set */
#define USBC_UPCON3SET_PFREEZES     (_U_(0x1) << USBC_UPCON3SET_PFREEZES_Pos)
#define USBC_UPCON3SET_INITDTGLS_Pos 18           /**< \brief (USBC_UPCON3SET) INITDTGL Set */
#define USBC_UPCON3SET_INITDTGLS    (_U_(0x1) << USBC_UPCON3SET_INITDTGLS_Pos)
#define USBC_UPCON3SET_INITBKS_Pos  19           /**< \brief (USBC_UPCON3SET) INITBK Set */
#define USBC_UPCON3SET_INITBKS      (_U_(0x1) << USBC_UPCON3SET_INITBKS_Pos)
#define USBC_UPCON3SET_MASK         _U_(0x000E547F) /**< \brief (USBC_UPCON3SET) MASK Register */

/* -------- USBC_UPCON4SET : (USBC Offset: 0x600) ( /W 32) Pipe Control Set Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXINES:1;         /*!< bit:      0  RXINE Set                          */
    uint32_t TXOUTES:1;        /*!< bit:      1  TXOUTE Set                         */
    uint32_t TXSTPES:1;        /*!< bit:      2  TXSTPE Set                         */
    uint32_t PERRES:1;         /*!< bit:      3  PERRE Set                          */
    uint32_t NAKEDES:1;        /*!< bit:      4  NAKEDE Set                         */
    uint32_t ERRORFIES:1;      /*!< bit:      5  ERRORFIE Set                       */
    uint32_t RXSTALLDES:1;     /*!< bit:      6  RXSTALLDE Set                      */
    uint32_t :3;               /*!< bit:  7.. 9  Reserved                           */
    uint32_t RAMACERES:1;      /*!< bit:     10  RAMACERE Set                       */
    uint32_t :1;               /*!< bit:     11  Reserved                           */
    uint32_t NBUSYBKES:1;      /*!< bit:     12  NBUSYBKE Set                       */
    uint32_t :1;               /*!< bit:     13  Reserved                           */
    uint32_t FIFOCONS:1;       /*!< bit:     14  FIFOCON Set                        */
    uint32_t :2;               /*!< bit: 15..16  Reserved                           */
    uint32_t PFREEZES:1;       /*!< bit:     17  PFREEZE Set                        */
    uint32_t INITDTGLS:1;      /*!< bit:     18  INITDTGL Set                       */
    uint32_t INITBKS:1;        /*!< bit:     19  INITBK Set                         */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPCON4SET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPCON4SET_OFFSET       0x600        /**< \brief (USBC_UPCON4SET offset) Pipe Control Set Register */
#define USBC_UPCON4SET_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UPCON4SET reset_value) Pipe Control Set Register */

#define USBC_UPCON4SET_RXINES_Pos   0            /**< \brief (USBC_UPCON4SET) RXINE Set */
#define USBC_UPCON4SET_RXINES       (_U_(0x1) << USBC_UPCON4SET_RXINES_Pos)
#define USBC_UPCON4SET_TXOUTES_Pos  1            /**< \brief (USBC_UPCON4SET) TXOUTE Set */
#define USBC_UPCON4SET_TXOUTES      (_U_(0x1) << USBC_UPCON4SET_TXOUTES_Pos)
#define USBC_UPCON4SET_TXSTPES_Pos  2            /**< \brief (USBC_UPCON4SET) TXSTPE Set */
#define USBC_UPCON4SET_TXSTPES      (_U_(0x1) << USBC_UPCON4SET_TXSTPES_Pos)
#define USBC_UPCON4SET_PERRES_Pos   3            /**< \brief (USBC_UPCON4SET) PERRE Set */
#define USBC_UPCON4SET_PERRES       (_U_(0x1) << USBC_UPCON4SET_PERRES_Pos)
#define USBC_UPCON4SET_NAKEDES_Pos  4            /**< \brief (USBC_UPCON4SET) NAKEDE Set */
#define USBC_UPCON4SET_NAKEDES      (_U_(0x1) << USBC_UPCON4SET_NAKEDES_Pos)
#define USBC_UPCON4SET_ERRORFIES_Pos 5            /**< \brief (USBC_UPCON4SET) ERRORFIE Set */
#define USBC_UPCON4SET_ERRORFIES    (_U_(0x1) << USBC_UPCON4SET_ERRORFIES_Pos)
#define USBC_UPCON4SET_RXSTALLDES_Pos 6            /**< \brief (USBC_UPCON4SET) RXSTALLDE Set */
#define USBC_UPCON4SET_RXSTALLDES   (_U_(0x1) << USBC_UPCON4SET_RXSTALLDES_Pos)
#define USBC_UPCON4SET_RAMACERES_Pos 10           /**< \brief (USBC_UPCON4SET) RAMACERE Set */
#define USBC_UPCON4SET_RAMACERES    (_U_(0x1) << USBC_UPCON4SET_RAMACERES_Pos)
#define USBC_UPCON4SET_NBUSYBKES_Pos 12           /**< \brief (USBC_UPCON4SET) NBUSYBKE Set */
#define USBC_UPCON4SET_NBUSYBKES    (_U_(0x1) << USBC_UPCON4SET_NBUSYBKES_Pos)
#define USBC_UPCON4SET_FIFOCONS_Pos 14           /**< \brief (USBC_UPCON4SET) FIFOCON Set */
#define USBC_UPCON4SET_FIFOCONS     (_U_(0x1) << USBC_UPCON4SET_FIFOCONS_Pos)
#define USBC_UPCON4SET_PFREEZES_Pos 17           /**< \brief (USBC_UPCON4SET) PFREEZE Set */
#define USBC_UPCON4SET_PFREEZES     (_U_(0x1) << USBC_UPCON4SET_PFREEZES_Pos)
#define USBC_UPCON4SET_INITDTGLS_Pos 18           /**< \brief (USBC_UPCON4SET) INITDTGL Set */
#define USBC_UPCON4SET_INITDTGLS    (_U_(0x1) << USBC_UPCON4SET_INITDTGLS_Pos)
#define USBC_UPCON4SET_INITBKS_Pos  19           /**< \brief (USBC_UPCON4SET) INITBK Set */
#define USBC_UPCON4SET_INITBKS      (_U_(0x1) << USBC_UPCON4SET_INITBKS_Pos)
#define USBC_UPCON4SET_MASK         _U_(0x000E547F) /**< \brief (USBC_UPCON4SET) MASK Register */

/* -------- USBC_UPCON5SET : (USBC Offset: 0x604) ( /W 32) Pipe Control Set Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXINES:1;         /*!< bit:      0  RXINE Set                          */
    uint32_t TXOUTES:1;        /*!< bit:      1  TXOUTE Set                         */
    uint32_t TXSTPES:1;        /*!< bit:      2  TXSTPE Set                         */
    uint32_t PERRES:1;         /*!< bit:      3  PERRE Set                          */
    uint32_t NAKEDES:1;        /*!< bit:      4  NAKEDE Set                         */
    uint32_t ERRORFIES:1;      /*!< bit:      5  ERRORFIE Set                       */
    uint32_t RXSTALLDES:1;     /*!< bit:      6  RXSTALLDE Set                      */
    uint32_t :3;               /*!< bit:  7.. 9  Reserved                           */
    uint32_t RAMACERES:1;      /*!< bit:     10  RAMACERE Set                       */
    uint32_t :1;               /*!< bit:     11  Reserved                           */
    uint32_t NBUSYBKES:1;      /*!< bit:     12  NBUSYBKE Set                       */
    uint32_t :1;               /*!< bit:     13  Reserved                           */
    uint32_t FIFOCONS:1;       /*!< bit:     14  FIFOCON Set                        */
    uint32_t :2;               /*!< bit: 15..16  Reserved                           */
    uint32_t PFREEZES:1;       /*!< bit:     17  PFREEZE Set                        */
    uint32_t INITDTGLS:1;      /*!< bit:     18  INITDTGL Set                       */
    uint32_t INITBKS:1;        /*!< bit:     19  INITBK Set                         */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPCON5SET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPCON5SET_OFFSET       0x604        /**< \brief (USBC_UPCON5SET offset) Pipe Control Set Register */
#define USBC_UPCON5SET_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UPCON5SET reset_value) Pipe Control Set Register */

#define USBC_UPCON5SET_RXINES_Pos   0            /**< \brief (USBC_UPCON5SET) RXINE Set */
#define USBC_UPCON5SET_RXINES       (_U_(0x1) << USBC_UPCON5SET_RXINES_Pos)
#define USBC_UPCON5SET_TXOUTES_Pos  1            /**< \brief (USBC_UPCON5SET) TXOUTE Set */
#define USBC_UPCON5SET_TXOUTES      (_U_(0x1) << USBC_UPCON5SET_TXOUTES_Pos)
#define USBC_UPCON5SET_TXSTPES_Pos  2            /**< \brief (USBC_UPCON5SET) TXSTPE Set */
#define USBC_UPCON5SET_TXSTPES      (_U_(0x1) << USBC_UPCON5SET_TXSTPES_Pos)
#define USBC_UPCON5SET_PERRES_Pos   3            /**< \brief (USBC_UPCON5SET) PERRE Set */
#define USBC_UPCON5SET_PERRES       (_U_(0x1) << USBC_UPCON5SET_PERRES_Pos)
#define USBC_UPCON5SET_NAKEDES_Pos  4            /**< \brief (USBC_UPCON5SET) NAKEDE Set */
#define USBC_UPCON5SET_NAKEDES      (_U_(0x1) << USBC_UPCON5SET_NAKEDES_Pos)
#define USBC_UPCON5SET_ERRORFIES_Pos 5            /**< \brief (USBC_UPCON5SET) ERRORFIE Set */
#define USBC_UPCON5SET_ERRORFIES    (_U_(0x1) << USBC_UPCON5SET_ERRORFIES_Pos)
#define USBC_UPCON5SET_RXSTALLDES_Pos 6            /**< \brief (USBC_UPCON5SET) RXSTALLDE Set */
#define USBC_UPCON5SET_RXSTALLDES   (_U_(0x1) << USBC_UPCON5SET_RXSTALLDES_Pos)
#define USBC_UPCON5SET_RAMACERES_Pos 10           /**< \brief (USBC_UPCON5SET) RAMACERE Set */
#define USBC_UPCON5SET_RAMACERES    (_U_(0x1) << USBC_UPCON5SET_RAMACERES_Pos)
#define USBC_UPCON5SET_NBUSYBKES_Pos 12           /**< \brief (USBC_UPCON5SET) NBUSYBKE Set */
#define USBC_UPCON5SET_NBUSYBKES    (_U_(0x1) << USBC_UPCON5SET_NBUSYBKES_Pos)
#define USBC_UPCON5SET_FIFOCONS_Pos 14           /**< \brief (USBC_UPCON5SET) FIFOCON Set */
#define USBC_UPCON5SET_FIFOCONS     (_U_(0x1) << USBC_UPCON5SET_FIFOCONS_Pos)
#define USBC_UPCON5SET_PFREEZES_Pos 17           /**< \brief (USBC_UPCON5SET) PFREEZE Set */
#define USBC_UPCON5SET_PFREEZES     (_U_(0x1) << USBC_UPCON5SET_PFREEZES_Pos)
#define USBC_UPCON5SET_INITDTGLS_Pos 18           /**< \brief (USBC_UPCON5SET) INITDTGL Set */
#define USBC_UPCON5SET_INITDTGLS    (_U_(0x1) << USBC_UPCON5SET_INITDTGLS_Pos)
#define USBC_UPCON5SET_INITBKS_Pos  19           /**< \brief (USBC_UPCON5SET) INITBK Set */
#define USBC_UPCON5SET_INITBKS      (_U_(0x1) << USBC_UPCON5SET_INITBKS_Pos)
#define USBC_UPCON5SET_MASK         _U_(0x000E547F) /**< \brief (USBC_UPCON5SET) MASK Register */

/* -------- USBC_UPCON6SET : (USBC Offset: 0x608) ( /W 32) Pipe Control Set Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXINES:1;         /*!< bit:      0  RXINE Set                          */
    uint32_t TXOUTES:1;        /*!< bit:      1  TXOUTE Set                         */
    uint32_t TXSTPES:1;        /*!< bit:      2  TXSTPE Set                         */
    uint32_t PERRES:1;         /*!< bit:      3  PERRE Set                          */
    uint32_t NAKEDES:1;        /*!< bit:      4  NAKEDE Set                         */
    uint32_t ERRORFIES:1;      /*!< bit:      5  ERRORFIE Set                       */
    uint32_t RXSTALLDES:1;     /*!< bit:      6  RXSTALLDE Set                      */
    uint32_t :3;               /*!< bit:  7.. 9  Reserved                           */
    uint32_t RAMACERES:1;      /*!< bit:     10  RAMACERE Set                       */
    uint32_t :1;               /*!< bit:     11  Reserved                           */
    uint32_t NBUSYBKES:1;      /*!< bit:     12  NBUSYBKE Set                       */
    uint32_t :1;               /*!< bit:     13  Reserved                           */
    uint32_t FIFOCONS:1;       /*!< bit:     14  FIFOCON Set                        */
    uint32_t :2;               /*!< bit: 15..16  Reserved                           */
    uint32_t PFREEZES:1;       /*!< bit:     17  PFREEZE Set                        */
    uint32_t INITDTGLS:1;      /*!< bit:     18  INITDTGL Set                       */
    uint32_t INITBKS:1;        /*!< bit:     19  INITBK Set                         */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPCON6SET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPCON6SET_OFFSET       0x608        /**< \brief (USBC_UPCON6SET offset) Pipe Control Set Register */
#define USBC_UPCON6SET_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UPCON6SET reset_value) Pipe Control Set Register */

#define USBC_UPCON6SET_RXINES_Pos   0            /**< \brief (USBC_UPCON6SET) RXINE Set */
#define USBC_UPCON6SET_RXINES       (_U_(0x1) << USBC_UPCON6SET_RXINES_Pos)
#define USBC_UPCON6SET_TXOUTES_Pos  1            /**< \brief (USBC_UPCON6SET) TXOUTE Set */
#define USBC_UPCON6SET_TXOUTES      (_U_(0x1) << USBC_UPCON6SET_TXOUTES_Pos)
#define USBC_UPCON6SET_TXSTPES_Pos  2            /**< \brief (USBC_UPCON6SET) TXSTPE Set */
#define USBC_UPCON6SET_TXSTPES      (_U_(0x1) << USBC_UPCON6SET_TXSTPES_Pos)
#define USBC_UPCON6SET_PERRES_Pos   3            /**< \brief (USBC_UPCON6SET) PERRE Set */
#define USBC_UPCON6SET_PERRES       (_U_(0x1) << USBC_UPCON6SET_PERRES_Pos)
#define USBC_UPCON6SET_NAKEDES_Pos  4            /**< \brief (USBC_UPCON6SET) NAKEDE Set */
#define USBC_UPCON6SET_NAKEDES      (_U_(0x1) << USBC_UPCON6SET_NAKEDES_Pos)
#define USBC_UPCON6SET_ERRORFIES_Pos 5            /**< \brief (USBC_UPCON6SET) ERRORFIE Set */
#define USBC_UPCON6SET_ERRORFIES    (_U_(0x1) << USBC_UPCON6SET_ERRORFIES_Pos)
#define USBC_UPCON6SET_RXSTALLDES_Pos 6            /**< \brief (USBC_UPCON6SET) RXSTALLDE Set */
#define USBC_UPCON6SET_RXSTALLDES   (_U_(0x1) << USBC_UPCON6SET_RXSTALLDES_Pos)
#define USBC_UPCON6SET_RAMACERES_Pos 10           /**< \brief (USBC_UPCON6SET) RAMACERE Set */
#define USBC_UPCON6SET_RAMACERES    (_U_(0x1) << USBC_UPCON6SET_RAMACERES_Pos)
#define USBC_UPCON6SET_NBUSYBKES_Pos 12           /**< \brief (USBC_UPCON6SET) NBUSYBKE Set */
#define USBC_UPCON6SET_NBUSYBKES    (_U_(0x1) << USBC_UPCON6SET_NBUSYBKES_Pos)
#define USBC_UPCON6SET_FIFOCONS_Pos 14           /**< \brief (USBC_UPCON6SET) FIFOCON Set */
#define USBC_UPCON6SET_FIFOCONS     (_U_(0x1) << USBC_UPCON6SET_FIFOCONS_Pos)
#define USBC_UPCON6SET_PFREEZES_Pos 17           /**< \brief (USBC_UPCON6SET) PFREEZE Set */
#define USBC_UPCON6SET_PFREEZES     (_U_(0x1) << USBC_UPCON6SET_PFREEZES_Pos)
#define USBC_UPCON6SET_INITDTGLS_Pos 18           /**< \brief (USBC_UPCON6SET) INITDTGL Set */
#define USBC_UPCON6SET_INITDTGLS    (_U_(0x1) << USBC_UPCON6SET_INITDTGLS_Pos)
#define USBC_UPCON6SET_INITBKS_Pos  19           /**< \brief (USBC_UPCON6SET) INITBK Set */
#define USBC_UPCON6SET_INITBKS      (_U_(0x1) << USBC_UPCON6SET_INITBKS_Pos)
#define USBC_UPCON6SET_MASK         _U_(0x000E547F) /**< \brief (USBC_UPCON6SET) MASK Register */

/* -------- USBC_UPCON7SET : (USBC Offset: 0x60C) ( /W 32) Pipe Control Set Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXINES:1;         /*!< bit:      0  RXINE Set                          */
    uint32_t TXOUTES:1;        /*!< bit:      1  TXOUTE Set                         */
    uint32_t TXSTPES:1;        /*!< bit:      2  TXSTPE Set                         */
    uint32_t PERRES:1;         /*!< bit:      3  PERRE Set                          */
    uint32_t NAKEDES:1;        /*!< bit:      4  NAKEDE Set                         */
    uint32_t ERRORFIES:1;      /*!< bit:      5  ERRORFIE Set                       */
    uint32_t RXSTALLDES:1;     /*!< bit:      6  RXSTALLDE Set                      */
    uint32_t :3;               /*!< bit:  7.. 9  Reserved                           */
    uint32_t RAMACERES:1;      /*!< bit:     10  RAMACERE Set                       */
    uint32_t :1;               /*!< bit:     11  Reserved                           */
    uint32_t NBUSYBKES:1;      /*!< bit:     12  NBUSYBKE Set                       */
    uint32_t :1;               /*!< bit:     13  Reserved                           */
    uint32_t FIFOCONS:1;       /*!< bit:     14  FIFOCON Set                        */
    uint32_t :2;               /*!< bit: 15..16  Reserved                           */
    uint32_t PFREEZES:1;       /*!< bit:     17  PFREEZE Set                        */
    uint32_t INITDTGLS:1;      /*!< bit:     18  INITDTGL Set                       */
    uint32_t INITBKS:1;        /*!< bit:     19  INITBK Set                         */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPCON7SET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPCON7SET_OFFSET       0x60C        /**< \brief (USBC_UPCON7SET offset) Pipe Control Set Register */
#define USBC_UPCON7SET_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UPCON7SET reset_value) Pipe Control Set Register */

#define USBC_UPCON7SET_RXINES_Pos   0            /**< \brief (USBC_UPCON7SET) RXINE Set */
#define USBC_UPCON7SET_RXINES       (_U_(0x1) << USBC_UPCON7SET_RXINES_Pos)
#define USBC_UPCON7SET_TXOUTES_Pos  1            /**< \brief (USBC_UPCON7SET) TXOUTE Set */
#define USBC_UPCON7SET_TXOUTES      (_U_(0x1) << USBC_UPCON7SET_TXOUTES_Pos)
#define USBC_UPCON7SET_TXSTPES_Pos  2            /**< \brief (USBC_UPCON7SET) TXSTPE Set */
#define USBC_UPCON7SET_TXSTPES      (_U_(0x1) << USBC_UPCON7SET_TXSTPES_Pos)
#define USBC_UPCON7SET_PERRES_Pos   3            /**< \brief (USBC_UPCON7SET) PERRE Set */
#define USBC_UPCON7SET_PERRES       (_U_(0x1) << USBC_UPCON7SET_PERRES_Pos)
#define USBC_UPCON7SET_NAKEDES_Pos  4            /**< \brief (USBC_UPCON7SET) NAKEDE Set */
#define USBC_UPCON7SET_NAKEDES      (_U_(0x1) << USBC_UPCON7SET_NAKEDES_Pos)
#define USBC_UPCON7SET_ERRORFIES_Pos 5            /**< \brief (USBC_UPCON7SET) ERRORFIE Set */
#define USBC_UPCON7SET_ERRORFIES    (_U_(0x1) << USBC_UPCON7SET_ERRORFIES_Pos)
#define USBC_UPCON7SET_RXSTALLDES_Pos 6            /**< \brief (USBC_UPCON7SET) RXSTALLDE Set */
#define USBC_UPCON7SET_RXSTALLDES   (_U_(0x1) << USBC_UPCON7SET_RXSTALLDES_Pos)
#define USBC_UPCON7SET_RAMACERES_Pos 10           /**< \brief (USBC_UPCON7SET) RAMACERE Set */
#define USBC_UPCON7SET_RAMACERES    (_U_(0x1) << USBC_UPCON7SET_RAMACERES_Pos)
#define USBC_UPCON7SET_NBUSYBKES_Pos 12           /**< \brief (USBC_UPCON7SET) NBUSYBKE Set */
#define USBC_UPCON7SET_NBUSYBKES    (_U_(0x1) << USBC_UPCON7SET_NBUSYBKES_Pos)
#define USBC_UPCON7SET_FIFOCONS_Pos 14           /**< \brief (USBC_UPCON7SET) FIFOCON Set */
#define USBC_UPCON7SET_FIFOCONS     (_U_(0x1) << USBC_UPCON7SET_FIFOCONS_Pos)
#define USBC_UPCON7SET_PFREEZES_Pos 17           /**< \brief (USBC_UPCON7SET) PFREEZE Set */
#define USBC_UPCON7SET_PFREEZES     (_U_(0x1) << USBC_UPCON7SET_PFREEZES_Pos)
#define USBC_UPCON7SET_INITDTGLS_Pos 18           /**< \brief (USBC_UPCON7SET) INITDTGL Set */
#define USBC_UPCON7SET_INITDTGLS    (_U_(0x1) << USBC_UPCON7SET_INITDTGLS_Pos)
#define USBC_UPCON7SET_INITBKS_Pos  19           /**< \brief (USBC_UPCON7SET) INITBK Set */
#define USBC_UPCON7SET_INITBKS      (_U_(0x1) << USBC_UPCON7SET_INITBKS_Pos)
#define USBC_UPCON7SET_MASK         _U_(0x000E547F) /**< \brief (USBC_UPCON7SET) MASK Register */

/* -------- USBC_UPCON0CLR : (USBC Offset: 0x620) ( /W 32) Pipe Control Clear Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXINEC:1;         /*!< bit:      0  RXINE Clear                        */
    uint32_t TXOUTEC:1;        /*!< bit:      1  TXOUTE Clear                       */
    uint32_t TXSTPEC:1;        /*!< bit:      2  TXSTPE Clear                       */
    uint32_t PERREC:1;         /*!< bit:      3  PERRE Clear                        */
    uint32_t NAKEDEC:1;        /*!< bit:      4  NAKEDE Clear                       */
    uint32_t ERRORFIEC:1;      /*!< bit:      5  ERRORFIE Clear                     */
    uint32_t RXSTALLDEC:1;     /*!< bit:      6  RXTALLDE Clear                     */
    uint32_t :3;               /*!< bit:  7.. 9  Reserved                           */
    uint32_t RAMACEREC:1;      /*!< bit:     10  RAMACERE Clear                     */
    uint32_t :1;               /*!< bit:     11  Reserved                           */
    uint32_t NBUSYBKEC:1;      /*!< bit:     12  NBUSYBKE Clear                     */
    uint32_t :1;               /*!< bit:     13  Reserved                           */
    uint32_t FIFOCONC:1;       /*!< bit:     14  FIFOCON Clear                      */
    uint32_t :2;               /*!< bit: 15..16  Reserved                           */
    uint32_t PFREEZEC:1;       /*!< bit:     17  PFREEZE Clear                      */
    uint32_t INITDTGLC:1;      /*!< bit:     18  INITDTGL Clear                     */
    uint32_t INITBKC:1;        /*!< bit:     19  INITBK Clear                       */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPCON0CLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPCON0CLR_OFFSET       0x620        /**< \brief (USBC_UPCON0CLR offset) Pipe Control Clear Register */
#define USBC_UPCON0CLR_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UPCON0CLR reset_value) Pipe Control Clear Register */

#define USBC_UPCON0CLR_RXINEC_Pos   0            /**< \brief (USBC_UPCON0CLR) RXINE Clear */
#define USBC_UPCON0CLR_RXINEC       (_U_(0x1) << USBC_UPCON0CLR_RXINEC_Pos)
#define USBC_UPCON0CLR_TXOUTEC_Pos  1            /**< \brief (USBC_UPCON0CLR) TXOUTE Clear */
#define USBC_UPCON0CLR_TXOUTEC      (_U_(0x1) << USBC_UPCON0CLR_TXOUTEC_Pos)
#define USBC_UPCON0CLR_TXSTPEC_Pos  2            /**< \brief (USBC_UPCON0CLR) TXSTPE Clear */
#define USBC_UPCON0CLR_TXSTPEC      (_U_(0x1) << USBC_UPCON0CLR_TXSTPEC_Pos)
#define USBC_UPCON0CLR_PERREC_Pos   3            /**< \brief (USBC_UPCON0CLR) PERRE Clear */
#define USBC_UPCON0CLR_PERREC       (_U_(0x1) << USBC_UPCON0CLR_PERREC_Pos)
#define USBC_UPCON0CLR_NAKEDEC_Pos  4            /**< \brief (USBC_UPCON0CLR) NAKEDE Clear */
#define USBC_UPCON0CLR_NAKEDEC      (_U_(0x1) << USBC_UPCON0CLR_NAKEDEC_Pos)
#define USBC_UPCON0CLR_ERRORFIEC_Pos 5            /**< \brief (USBC_UPCON0CLR) ERRORFIE Clear */
#define USBC_UPCON0CLR_ERRORFIEC    (_U_(0x1) << USBC_UPCON0CLR_ERRORFIEC_Pos)
#define USBC_UPCON0CLR_RXSTALLDEC_Pos 6            /**< \brief (USBC_UPCON0CLR) RXTALLDE Clear */
#define USBC_UPCON0CLR_RXSTALLDEC   (_U_(0x1) << USBC_UPCON0CLR_RXSTALLDEC_Pos)
#define USBC_UPCON0CLR_RAMACEREC_Pos 10           /**< \brief (USBC_UPCON0CLR) RAMACERE Clear */
#define USBC_UPCON0CLR_RAMACEREC    (_U_(0x1) << USBC_UPCON0CLR_RAMACEREC_Pos)
#define USBC_UPCON0CLR_NBUSYBKEC_Pos 12           /**< \brief (USBC_UPCON0CLR) NBUSYBKE Clear */
#define USBC_UPCON0CLR_NBUSYBKEC    (_U_(0x1) << USBC_UPCON0CLR_NBUSYBKEC_Pos)
#define USBC_UPCON0CLR_FIFOCONC_Pos 14           /**< \brief (USBC_UPCON0CLR) FIFOCON Clear */
#define USBC_UPCON0CLR_FIFOCONC     (_U_(0x1) << USBC_UPCON0CLR_FIFOCONC_Pos)
#define USBC_UPCON0CLR_PFREEZEC_Pos 17           /**< \brief (USBC_UPCON0CLR) PFREEZE Clear */
#define USBC_UPCON0CLR_PFREEZEC     (_U_(0x1) << USBC_UPCON0CLR_PFREEZEC_Pos)
#define USBC_UPCON0CLR_INITDTGLC_Pos 18           /**< \brief (USBC_UPCON0CLR) INITDTGL Clear */
#define USBC_UPCON0CLR_INITDTGLC    (_U_(0x1) << USBC_UPCON0CLR_INITDTGLC_Pos)
#define USBC_UPCON0CLR_INITBKC_Pos  19           /**< \brief (USBC_UPCON0CLR) INITBK Clear */
#define USBC_UPCON0CLR_INITBKC      (_U_(0x1) << USBC_UPCON0CLR_INITBKC_Pos)
#define USBC_UPCON0CLR_MASK         _U_(0x000E547F) /**< \brief (USBC_UPCON0CLR) MASK Register */

/* -------- USBC_UPCON1CLR : (USBC Offset: 0x624) ( /W 32) Pipe Control Clear Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXINEC:1;         /*!< bit:      0  RXINE Clear                        */
    uint32_t TXOUTEC:1;        /*!< bit:      1  TXOUTE Clear                       */
    uint32_t TXSTPEC:1;        /*!< bit:      2  TXSTPE Clear                       */
    uint32_t PERREC:1;         /*!< bit:      3  PERRE Clear                        */
    uint32_t NAKEDEC:1;        /*!< bit:      4  NAKEDE Clear                       */
    uint32_t ERRORFIEC:1;      /*!< bit:      5  ERRORFIE Clear                     */
    uint32_t RXSTALLDEC:1;     /*!< bit:      6  RXTALLDE Clear                     */
    uint32_t :3;               /*!< bit:  7.. 9  Reserved                           */
    uint32_t RAMACEREC:1;      /*!< bit:     10  RAMACERE Clear                     */
    uint32_t :1;               /*!< bit:     11  Reserved                           */
    uint32_t NBUSYBKEC:1;      /*!< bit:     12  NBUSYBKE Clear                     */
    uint32_t :1;               /*!< bit:     13  Reserved                           */
    uint32_t FIFOCONC:1;       /*!< bit:     14  FIFOCON Clear                      */
    uint32_t :2;               /*!< bit: 15..16  Reserved                           */
    uint32_t PFREEZEC:1;       /*!< bit:     17  PFREEZE Clear                      */
    uint32_t INITDTGLC:1;      /*!< bit:     18  INITDTGL Clear                     */
    uint32_t INITBKC:1;        /*!< bit:     19  INITBK Clear                       */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPCON1CLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPCON1CLR_OFFSET       0x624        /**< \brief (USBC_UPCON1CLR offset) Pipe Control Clear Register */
#define USBC_UPCON1CLR_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UPCON1CLR reset_value) Pipe Control Clear Register */

#define USBC_UPCON1CLR_RXINEC_Pos   0            /**< \brief (USBC_UPCON1CLR) RXINE Clear */
#define USBC_UPCON1CLR_RXINEC       (_U_(0x1) << USBC_UPCON1CLR_RXINEC_Pos)
#define USBC_UPCON1CLR_TXOUTEC_Pos  1            /**< \brief (USBC_UPCON1CLR) TXOUTE Clear */
#define USBC_UPCON1CLR_TXOUTEC      (_U_(0x1) << USBC_UPCON1CLR_TXOUTEC_Pos)
#define USBC_UPCON1CLR_TXSTPEC_Pos  2            /**< \brief (USBC_UPCON1CLR) TXSTPE Clear */
#define USBC_UPCON1CLR_TXSTPEC      (_U_(0x1) << USBC_UPCON1CLR_TXSTPEC_Pos)
#define USBC_UPCON1CLR_PERREC_Pos   3            /**< \brief (USBC_UPCON1CLR) PERRE Clear */
#define USBC_UPCON1CLR_PERREC       (_U_(0x1) << USBC_UPCON1CLR_PERREC_Pos)
#define USBC_UPCON1CLR_NAKEDEC_Pos  4            /**< \brief (USBC_UPCON1CLR) NAKEDE Clear */
#define USBC_UPCON1CLR_NAKEDEC      (_U_(0x1) << USBC_UPCON1CLR_NAKEDEC_Pos)
#define USBC_UPCON1CLR_ERRORFIEC_Pos 5            /**< \brief (USBC_UPCON1CLR) ERRORFIE Clear */
#define USBC_UPCON1CLR_ERRORFIEC    (_U_(0x1) << USBC_UPCON1CLR_ERRORFIEC_Pos)
#define USBC_UPCON1CLR_RXSTALLDEC_Pos 6            /**< \brief (USBC_UPCON1CLR) RXTALLDE Clear */
#define USBC_UPCON1CLR_RXSTALLDEC   (_U_(0x1) << USBC_UPCON1CLR_RXSTALLDEC_Pos)
#define USBC_UPCON1CLR_RAMACEREC_Pos 10           /**< \brief (USBC_UPCON1CLR) RAMACERE Clear */
#define USBC_UPCON1CLR_RAMACEREC    (_U_(0x1) << USBC_UPCON1CLR_RAMACEREC_Pos)
#define USBC_UPCON1CLR_NBUSYBKEC_Pos 12           /**< \brief (USBC_UPCON1CLR) NBUSYBKE Clear */
#define USBC_UPCON1CLR_NBUSYBKEC    (_U_(0x1) << USBC_UPCON1CLR_NBUSYBKEC_Pos)
#define USBC_UPCON1CLR_FIFOCONC_Pos 14           /**< \brief (USBC_UPCON1CLR) FIFOCON Clear */
#define USBC_UPCON1CLR_FIFOCONC     (_U_(0x1) << USBC_UPCON1CLR_FIFOCONC_Pos)
#define USBC_UPCON1CLR_PFREEZEC_Pos 17           /**< \brief (USBC_UPCON1CLR) PFREEZE Clear */
#define USBC_UPCON1CLR_PFREEZEC     (_U_(0x1) << USBC_UPCON1CLR_PFREEZEC_Pos)
#define USBC_UPCON1CLR_INITDTGLC_Pos 18           /**< \brief (USBC_UPCON1CLR) INITDTGL Clear */
#define USBC_UPCON1CLR_INITDTGLC    (_U_(0x1) << USBC_UPCON1CLR_INITDTGLC_Pos)
#define USBC_UPCON1CLR_INITBKC_Pos  19           /**< \brief (USBC_UPCON1CLR) INITBK Clear */
#define USBC_UPCON1CLR_INITBKC      (_U_(0x1) << USBC_UPCON1CLR_INITBKC_Pos)
#define USBC_UPCON1CLR_MASK         _U_(0x000E547F) /**< \brief (USBC_UPCON1CLR) MASK Register */

/* -------- USBC_UPCON2CLR : (USBC Offset: 0x628) ( /W 32) Pipe Control Clear Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXINEC:1;         /*!< bit:      0  RXINE Clear                        */
    uint32_t TXOUTEC:1;        /*!< bit:      1  TXOUTE Clear                       */
    uint32_t TXSTPEC:1;        /*!< bit:      2  TXSTPE Clear                       */
    uint32_t PERREC:1;         /*!< bit:      3  PERRE Clear                        */
    uint32_t NAKEDEC:1;        /*!< bit:      4  NAKEDE Clear                       */
    uint32_t ERRORFIEC:1;      /*!< bit:      5  ERRORFIE Clear                     */
    uint32_t RXSTALLDEC:1;     /*!< bit:      6  RXTALLDE Clear                     */
    uint32_t :3;               /*!< bit:  7.. 9  Reserved                           */
    uint32_t RAMACEREC:1;      /*!< bit:     10  RAMACERE Clear                     */
    uint32_t :1;               /*!< bit:     11  Reserved                           */
    uint32_t NBUSYBKEC:1;      /*!< bit:     12  NBUSYBKE Clear                     */
    uint32_t :1;               /*!< bit:     13  Reserved                           */
    uint32_t FIFOCONC:1;       /*!< bit:     14  FIFOCON Clear                      */
    uint32_t :2;               /*!< bit: 15..16  Reserved                           */
    uint32_t PFREEZEC:1;       /*!< bit:     17  PFREEZE Clear                      */
    uint32_t INITDTGLC:1;      /*!< bit:     18  INITDTGL Clear                     */
    uint32_t INITBKC:1;        /*!< bit:     19  INITBK Clear                       */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPCON2CLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPCON2CLR_OFFSET       0x628        /**< \brief (USBC_UPCON2CLR offset) Pipe Control Clear Register */
#define USBC_UPCON2CLR_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UPCON2CLR reset_value) Pipe Control Clear Register */

#define USBC_UPCON2CLR_RXINEC_Pos   0            /**< \brief (USBC_UPCON2CLR) RXINE Clear */
#define USBC_UPCON2CLR_RXINEC       (_U_(0x1) << USBC_UPCON2CLR_RXINEC_Pos)
#define USBC_UPCON2CLR_TXOUTEC_Pos  1            /**< \brief (USBC_UPCON2CLR) TXOUTE Clear */
#define USBC_UPCON2CLR_TXOUTEC      (_U_(0x1) << USBC_UPCON2CLR_TXOUTEC_Pos)
#define USBC_UPCON2CLR_TXSTPEC_Pos  2            /**< \brief (USBC_UPCON2CLR) TXSTPE Clear */
#define USBC_UPCON2CLR_TXSTPEC      (_U_(0x1) << USBC_UPCON2CLR_TXSTPEC_Pos)
#define USBC_UPCON2CLR_PERREC_Pos   3            /**< \brief (USBC_UPCON2CLR) PERRE Clear */
#define USBC_UPCON2CLR_PERREC       (_U_(0x1) << USBC_UPCON2CLR_PERREC_Pos)
#define USBC_UPCON2CLR_NAKEDEC_Pos  4            /**< \brief (USBC_UPCON2CLR) NAKEDE Clear */
#define USBC_UPCON2CLR_NAKEDEC      (_U_(0x1) << USBC_UPCON2CLR_NAKEDEC_Pos)
#define USBC_UPCON2CLR_ERRORFIEC_Pos 5            /**< \brief (USBC_UPCON2CLR) ERRORFIE Clear */
#define USBC_UPCON2CLR_ERRORFIEC    (_U_(0x1) << USBC_UPCON2CLR_ERRORFIEC_Pos)
#define USBC_UPCON2CLR_RXSTALLDEC_Pos 6            /**< \brief (USBC_UPCON2CLR) RXTALLDE Clear */
#define USBC_UPCON2CLR_RXSTALLDEC   (_U_(0x1) << USBC_UPCON2CLR_RXSTALLDEC_Pos)
#define USBC_UPCON2CLR_RAMACEREC_Pos 10           /**< \brief (USBC_UPCON2CLR) RAMACERE Clear */
#define USBC_UPCON2CLR_RAMACEREC    (_U_(0x1) << USBC_UPCON2CLR_RAMACEREC_Pos)
#define USBC_UPCON2CLR_NBUSYBKEC_Pos 12           /**< \brief (USBC_UPCON2CLR) NBUSYBKE Clear */
#define USBC_UPCON2CLR_NBUSYBKEC    (_U_(0x1) << USBC_UPCON2CLR_NBUSYBKEC_Pos)
#define USBC_UPCON2CLR_FIFOCONC_Pos 14           /**< \brief (USBC_UPCON2CLR) FIFOCON Clear */
#define USBC_UPCON2CLR_FIFOCONC     (_U_(0x1) << USBC_UPCON2CLR_FIFOCONC_Pos)
#define USBC_UPCON2CLR_PFREEZEC_Pos 17           /**< \brief (USBC_UPCON2CLR) PFREEZE Clear */
#define USBC_UPCON2CLR_PFREEZEC     (_U_(0x1) << USBC_UPCON2CLR_PFREEZEC_Pos)
#define USBC_UPCON2CLR_INITDTGLC_Pos 18           /**< \brief (USBC_UPCON2CLR) INITDTGL Clear */
#define USBC_UPCON2CLR_INITDTGLC    (_U_(0x1) << USBC_UPCON2CLR_INITDTGLC_Pos)
#define USBC_UPCON2CLR_INITBKC_Pos  19           /**< \brief (USBC_UPCON2CLR) INITBK Clear */
#define USBC_UPCON2CLR_INITBKC      (_U_(0x1) << USBC_UPCON2CLR_INITBKC_Pos)
#define USBC_UPCON2CLR_MASK         _U_(0x000E547F) /**< \brief (USBC_UPCON2CLR) MASK Register */

/* -------- USBC_UPCON3CLR : (USBC Offset: 0x62C) ( /W 32) Pipe Control Clear Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXINEC:1;         /*!< bit:      0  RXINE Clear                        */
    uint32_t TXOUTEC:1;        /*!< bit:      1  TXOUTE Clear                       */
    uint32_t TXSTPEC:1;        /*!< bit:      2  TXSTPE Clear                       */
    uint32_t PERREC:1;         /*!< bit:      3  PERRE Clear                        */
    uint32_t NAKEDEC:1;        /*!< bit:      4  NAKEDE Clear                       */
    uint32_t ERRORFIEC:1;      /*!< bit:      5  ERRORFIE Clear                     */
    uint32_t RXSTALLDEC:1;     /*!< bit:      6  RXTALLDE Clear                     */
    uint32_t :3;               /*!< bit:  7.. 9  Reserved                           */
    uint32_t RAMACEREC:1;      /*!< bit:     10  RAMACERE Clear                     */
    uint32_t :1;               /*!< bit:     11  Reserved                           */
    uint32_t NBUSYBKEC:1;      /*!< bit:     12  NBUSYBKE Clear                     */
    uint32_t :1;               /*!< bit:     13  Reserved                           */
    uint32_t FIFOCONC:1;       /*!< bit:     14  FIFOCON Clear                      */
    uint32_t :2;               /*!< bit: 15..16  Reserved                           */
    uint32_t PFREEZEC:1;       /*!< bit:     17  PFREEZE Clear                      */
    uint32_t INITDTGLC:1;      /*!< bit:     18  INITDTGL Clear                     */
    uint32_t INITBKC:1;        /*!< bit:     19  INITBK Clear                       */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPCON3CLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPCON3CLR_OFFSET       0x62C        /**< \brief (USBC_UPCON3CLR offset) Pipe Control Clear Register */
#define USBC_UPCON3CLR_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UPCON3CLR reset_value) Pipe Control Clear Register */

#define USBC_UPCON3CLR_RXINEC_Pos   0            /**< \brief (USBC_UPCON3CLR) RXINE Clear */
#define USBC_UPCON3CLR_RXINEC       (_U_(0x1) << USBC_UPCON3CLR_RXINEC_Pos)
#define USBC_UPCON3CLR_TXOUTEC_Pos  1            /**< \brief (USBC_UPCON3CLR) TXOUTE Clear */
#define USBC_UPCON3CLR_TXOUTEC      (_U_(0x1) << USBC_UPCON3CLR_TXOUTEC_Pos)
#define USBC_UPCON3CLR_TXSTPEC_Pos  2            /**< \brief (USBC_UPCON3CLR) TXSTPE Clear */
#define USBC_UPCON3CLR_TXSTPEC      (_U_(0x1) << USBC_UPCON3CLR_TXSTPEC_Pos)
#define USBC_UPCON3CLR_PERREC_Pos   3            /**< \brief (USBC_UPCON3CLR) PERRE Clear */
#define USBC_UPCON3CLR_PERREC       (_U_(0x1) << USBC_UPCON3CLR_PERREC_Pos)
#define USBC_UPCON3CLR_NAKEDEC_Pos  4            /**< \brief (USBC_UPCON3CLR) NAKEDE Clear */
#define USBC_UPCON3CLR_NAKEDEC      (_U_(0x1) << USBC_UPCON3CLR_NAKEDEC_Pos)
#define USBC_UPCON3CLR_ERRORFIEC_Pos 5            /**< \brief (USBC_UPCON3CLR) ERRORFIE Clear */
#define USBC_UPCON3CLR_ERRORFIEC    (_U_(0x1) << USBC_UPCON3CLR_ERRORFIEC_Pos)
#define USBC_UPCON3CLR_RXSTALLDEC_Pos 6            /**< \brief (USBC_UPCON3CLR) RXTALLDE Clear */
#define USBC_UPCON3CLR_RXSTALLDEC   (_U_(0x1) << USBC_UPCON3CLR_RXSTALLDEC_Pos)
#define USBC_UPCON3CLR_RAMACEREC_Pos 10           /**< \brief (USBC_UPCON3CLR) RAMACERE Clear */
#define USBC_UPCON3CLR_RAMACEREC    (_U_(0x1) << USBC_UPCON3CLR_RAMACEREC_Pos)
#define USBC_UPCON3CLR_NBUSYBKEC_Pos 12           /**< \brief (USBC_UPCON3CLR) NBUSYBKE Clear */
#define USBC_UPCON3CLR_NBUSYBKEC    (_U_(0x1) << USBC_UPCON3CLR_NBUSYBKEC_Pos)
#define USBC_UPCON3CLR_FIFOCONC_Pos 14           /**< \brief (USBC_UPCON3CLR) FIFOCON Clear */
#define USBC_UPCON3CLR_FIFOCONC     (_U_(0x1) << USBC_UPCON3CLR_FIFOCONC_Pos)
#define USBC_UPCON3CLR_PFREEZEC_Pos 17           /**< \brief (USBC_UPCON3CLR) PFREEZE Clear */
#define USBC_UPCON3CLR_PFREEZEC     (_U_(0x1) << USBC_UPCON3CLR_PFREEZEC_Pos)
#define USBC_UPCON3CLR_INITDTGLC_Pos 18           /**< \brief (USBC_UPCON3CLR) INITDTGL Clear */
#define USBC_UPCON3CLR_INITDTGLC    (_U_(0x1) << USBC_UPCON3CLR_INITDTGLC_Pos)
#define USBC_UPCON3CLR_INITBKC_Pos  19           /**< \brief (USBC_UPCON3CLR) INITBK Clear */
#define USBC_UPCON3CLR_INITBKC      (_U_(0x1) << USBC_UPCON3CLR_INITBKC_Pos)
#define USBC_UPCON3CLR_MASK         _U_(0x000E547F) /**< \brief (USBC_UPCON3CLR) MASK Register */

/* -------- USBC_UPCON4CLR : (USBC Offset: 0x630) ( /W 32) Pipe Control Clear Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXINEC:1;         /*!< bit:      0  RXINE Clear                        */
    uint32_t TXOUTEC:1;        /*!< bit:      1  TXOUTE Clear                       */
    uint32_t TXSTPEC:1;        /*!< bit:      2  TXSTPE Clear                       */
    uint32_t PERREC:1;         /*!< bit:      3  PERRE Clear                        */
    uint32_t NAKEDEC:1;        /*!< bit:      4  NAKEDE Clear                       */
    uint32_t ERRORFIEC:1;      /*!< bit:      5  ERRORFIE Clear                     */
    uint32_t RXSTALLDEC:1;     /*!< bit:      6  RXTALLDE Clear                     */
    uint32_t :3;               /*!< bit:  7.. 9  Reserved                           */
    uint32_t RAMACEREC:1;      /*!< bit:     10  RAMACERE Clear                     */
    uint32_t :1;               /*!< bit:     11  Reserved                           */
    uint32_t NBUSYBKEC:1;      /*!< bit:     12  NBUSYBKE Clear                     */
    uint32_t :1;               /*!< bit:     13  Reserved                           */
    uint32_t FIFOCONC:1;       /*!< bit:     14  FIFOCON Clear                      */
    uint32_t :2;               /*!< bit: 15..16  Reserved                           */
    uint32_t PFREEZEC:1;       /*!< bit:     17  PFREEZE Clear                      */
    uint32_t INITDTGLC:1;      /*!< bit:     18  INITDTGL Clear                     */
    uint32_t INITBKC:1;        /*!< bit:     19  INITBK Clear                       */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPCON4CLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPCON4CLR_OFFSET       0x630        /**< \brief (USBC_UPCON4CLR offset) Pipe Control Clear Register */
#define USBC_UPCON4CLR_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UPCON4CLR reset_value) Pipe Control Clear Register */

#define USBC_UPCON4CLR_RXINEC_Pos   0            /**< \brief (USBC_UPCON4CLR) RXINE Clear */
#define USBC_UPCON4CLR_RXINEC       (_U_(0x1) << USBC_UPCON4CLR_RXINEC_Pos)
#define USBC_UPCON4CLR_TXOUTEC_Pos  1            /**< \brief (USBC_UPCON4CLR) TXOUTE Clear */
#define USBC_UPCON4CLR_TXOUTEC      (_U_(0x1) << USBC_UPCON4CLR_TXOUTEC_Pos)
#define USBC_UPCON4CLR_TXSTPEC_Pos  2            /**< \brief (USBC_UPCON4CLR) TXSTPE Clear */
#define USBC_UPCON4CLR_TXSTPEC      (_U_(0x1) << USBC_UPCON4CLR_TXSTPEC_Pos)
#define USBC_UPCON4CLR_PERREC_Pos   3            /**< \brief (USBC_UPCON4CLR) PERRE Clear */
#define USBC_UPCON4CLR_PERREC       (_U_(0x1) << USBC_UPCON4CLR_PERREC_Pos)
#define USBC_UPCON4CLR_NAKEDEC_Pos  4            /**< \brief (USBC_UPCON4CLR) NAKEDE Clear */
#define USBC_UPCON4CLR_NAKEDEC      (_U_(0x1) << USBC_UPCON4CLR_NAKEDEC_Pos)
#define USBC_UPCON4CLR_ERRORFIEC_Pos 5            /**< \brief (USBC_UPCON4CLR) ERRORFIE Clear */
#define USBC_UPCON4CLR_ERRORFIEC    (_U_(0x1) << USBC_UPCON4CLR_ERRORFIEC_Pos)
#define USBC_UPCON4CLR_RXSTALLDEC_Pos 6            /**< \brief (USBC_UPCON4CLR) RXTALLDE Clear */
#define USBC_UPCON4CLR_RXSTALLDEC   (_U_(0x1) << USBC_UPCON4CLR_RXSTALLDEC_Pos)
#define USBC_UPCON4CLR_RAMACEREC_Pos 10           /**< \brief (USBC_UPCON4CLR) RAMACERE Clear */
#define USBC_UPCON4CLR_RAMACEREC    (_U_(0x1) << USBC_UPCON4CLR_RAMACEREC_Pos)
#define USBC_UPCON4CLR_NBUSYBKEC_Pos 12           /**< \brief (USBC_UPCON4CLR) NBUSYBKE Clear */
#define USBC_UPCON4CLR_NBUSYBKEC    (_U_(0x1) << USBC_UPCON4CLR_NBUSYBKEC_Pos)
#define USBC_UPCON4CLR_FIFOCONC_Pos 14           /**< \brief (USBC_UPCON4CLR) FIFOCON Clear */
#define USBC_UPCON4CLR_FIFOCONC     (_U_(0x1) << USBC_UPCON4CLR_FIFOCONC_Pos)
#define USBC_UPCON4CLR_PFREEZEC_Pos 17           /**< \brief (USBC_UPCON4CLR) PFREEZE Clear */
#define USBC_UPCON4CLR_PFREEZEC     (_U_(0x1) << USBC_UPCON4CLR_PFREEZEC_Pos)
#define USBC_UPCON4CLR_INITDTGLC_Pos 18           /**< \brief (USBC_UPCON4CLR) INITDTGL Clear */
#define USBC_UPCON4CLR_INITDTGLC    (_U_(0x1) << USBC_UPCON4CLR_INITDTGLC_Pos)
#define USBC_UPCON4CLR_INITBKC_Pos  19           /**< \brief (USBC_UPCON4CLR) INITBK Clear */
#define USBC_UPCON4CLR_INITBKC      (_U_(0x1) << USBC_UPCON4CLR_INITBKC_Pos)
#define USBC_UPCON4CLR_MASK         _U_(0x000E547F) /**< \brief (USBC_UPCON4CLR) MASK Register */

/* -------- USBC_UPCON5CLR : (USBC Offset: 0x634) ( /W 32) Pipe Control Clear Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXINEC:1;         /*!< bit:      0  RXINE Clear                        */
    uint32_t TXOUTEC:1;        /*!< bit:      1  TXOUTE Clear                       */
    uint32_t TXSTPEC:1;        /*!< bit:      2  TXSTPE Clear                       */
    uint32_t PERREC:1;         /*!< bit:      3  PERRE Clear                        */
    uint32_t NAKEDEC:1;        /*!< bit:      4  NAKEDE Clear                       */
    uint32_t ERRORFIEC:1;      /*!< bit:      5  ERRORFIE Clear                     */
    uint32_t RXSTALLDEC:1;     /*!< bit:      6  RXTALLDE Clear                     */
    uint32_t :3;               /*!< bit:  7.. 9  Reserved                           */
    uint32_t RAMACEREC:1;      /*!< bit:     10  RAMACERE Clear                     */
    uint32_t :1;               /*!< bit:     11  Reserved                           */
    uint32_t NBUSYBKEC:1;      /*!< bit:     12  NBUSYBKE Clear                     */
    uint32_t :1;               /*!< bit:     13  Reserved                           */
    uint32_t FIFOCONC:1;       /*!< bit:     14  FIFOCON Clear                      */
    uint32_t :2;               /*!< bit: 15..16  Reserved                           */
    uint32_t PFREEZEC:1;       /*!< bit:     17  PFREEZE Clear                      */
    uint32_t INITDTGLC:1;      /*!< bit:     18  INITDTGL Clear                     */
    uint32_t INITBKC:1;        /*!< bit:     19  INITBK Clear                       */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPCON5CLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPCON5CLR_OFFSET       0x634        /**< \brief (USBC_UPCON5CLR offset) Pipe Control Clear Register */
#define USBC_UPCON5CLR_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UPCON5CLR reset_value) Pipe Control Clear Register */

#define USBC_UPCON5CLR_RXINEC_Pos   0            /**< \brief (USBC_UPCON5CLR) RXINE Clear */
#define USBC_UPCON5CLR_RXINEC       (_U_(0x1) << USBC_UPCON5CLR_RXINEC_Pos)
#define USBC_UPCON5CLR_TXOUTEC_Pos  1            /**< \brief (USBC_UPCON5CLR) TXOUTE Clear */
#define USBC_UPCON5CLR_TXOUTEC      (_U_(0x1) << USBC_UPCON5CLR_TXOUTEC_Pos)
#define USBC_UPCON5CLR_TXSTPEC_Pos  2            /**< \brief (USBC_UPCON5CLR) TXSTPE Clear */
#define USBC_UPCON5CLR_TXSTPEC      (_U_(0x1) << USBC_UPCON5CLR_TXSTPEC_Pos)
#define USBC_UPCON5CLR_PERREC_Pos   3            /**< \brief (USBC_UPCON5CLR) PERRE Clear */
#define USBC_UPCON5CLR_PERREC       (_U_(0x1) << USBC_UPCON5CLR_PERREC_Pos)
#define USBC_UPCON5CLR_NAKEDEC_Pos  4            /**< \brief (USBC_UPCON5CLR) NAKEDE Clear */
#define USBC_UPCON5CLR_NAKEDEC      (_U_(0x1) << USBC_UPCON5CLR_NAKEDEC_Pos)
#define USBC_UPCON5CLR_ERRORFIEC_Pos 5            /**< \brief (USBC_UPCON5CLR) ERRORFIE Clear */
#define USBC_UPCON5CLR_ERRORFIEC    (_U_(0x1) << USBC_UPCON5CLR_ERRORFIEC_Pos)
#define USBC_UPCON5CLR_RXSTALLDEC_Pos 6            /**< \brief (USBC_UPCON5CLR) RXTALLDE Clear */
#define USBC_UPCON5CLR_RXSTALLDEC   (_U_(0x1) << USBC_UPCON5CLR_RXSTALLDEC_Pos)
#define USBC_UPCON5CLR_RAMACEREC_Pos 10           /**< \brief (USBC_UPCON5CLR) RAMACERE Clear */
#define USBC_UPCON5CLR_RAMACEREC    (_U_(0x1) << USBC_UPCON5CLR_RAMACEREC_Pos)
#define USBC_UPCON5CLR_NBUSYBKEC_Pos 12           /**< \brief (USBC_UPCON5CLR) NBUSYBKE Clear */
#define USBC_UPCON5CLR_NBUSYBKEC    (_U_(0x1) << USBC_UPCON5CLR_NBUSYBKEC_Pos)
#define USBC_UPCON5CLR_FIFOCONC_Pos 14           /**< \brief (USBC_UPCON5CLR) FIFOCON Clear */
#define USBC_UPCON5CLR_FIFOCONC     (_U_(0x1) << USBC_UPCON5CLR_FIFOCONC_Pos)
#define USBC_UPCON5CLR_PFREEZEC_Pos 17           /**< \brief (USBC_UPCON5CLR) PFREEZE Clear */
#define USBC_UPCON5CLR_PFREEZEC     (_U_(0x1) << USBC_UPCON5CLR_PFREEZEC_Pos)
#define USBC_UPCON5CLR_INITDTGLC_Pos 18           /**< \brief (USBC_UPCON5CLR) INITDTGL Clear */
#define USBC_UPCON5CLR_INITDTGLC    (_U_(0x1) << USBC_UPCON5CLR_INITDTGLC_Pos)
#define USBC_UPCON5CLR_INITBKC_Pos  19           /**< \brief (USBC_UPCON5CLR) INITBK Clear */
#define USBC_UPCON5CLR_INITBKC      (_U_(0x1) << USBC_UPCON5CLR_INITBKC_Pos)
#define USBC_UPCON5CLR_MASK         _U_(0x000E547F) /**< \brief (USBC_UPCON5CLR) MASK Register */

/* -------- USBC_UPCON6CLR : (USBC Offset: 0x638) ( /W 32) Pipe Control Clear Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXINEC:1;         /*!< bit:      0  RXINE Clear                        */
    uint32_t TXOUTEC:1;        /*!< bit:      1  TXOUTE Clear                       */
    uint32_t TXSTPEC:1;        /*!< bit:      2  TXSTPE Clear                       */
    uint32_t PERREC:1;         /*!< bit:      3  PERRE Clear                        */
    uint32_t NAKEDEC:1;        /*!< bit:      4  NAKEDE Clear                       */
    uint32_t ERRORFIEC:1;      /*!< bit:      5  ERRORFIE Clear                     */
    uint32_t RXSTALLDEC:1;     /*!< bit:      6  RXTALLDE Clear                     */
    uint32_t :3;               /*!< bit:  7.. 9  Reserved                           */
    uint32_t RAMACEREC:1;      /*!< bit:     10  RAMACERE Clear                     */
    uint32_t :1;               /*!< bit:     11  Reserved                           */
    uint32_t NBUSYBKEC:1;      /*!< bit:     12  NBUSYBKE Clear                     */
    uint32_t :1;               /*!< bit:     13  Reserved                           */
    uint32_t FIFOCONC:1;       /*!< bit:     14  FIFOCON Clear                      */
    uint32_t :2;               /*!< bit: 15..16  Reserved                           */
    uint32_t PFREEZEC:1;       /*!< bit:     17  PFREEZE Clear                      */
    uint32_t INITDTGLC:1;      /*!< bit:     18  INITDTGL Clear                     */
    uint32_t INITBKC:1;        /*!< bit:     19  INITBK Clear                       */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPCON6CLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPCON6CLR_OFFSET       0x638        /**< \brief (USBC_UPCON6CLR offset) Pipe Control Clear Register */
#define USBC_UPCON6CLR_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UPCON6CLR reset_value) Pipe Control Clear Register */

#define USBC_UPCON6CLR_RXINEC_Pos   0            /**< \brief (USBC_UPCON6CLR) RXINE Clear */
#define USBC_UPCON6CLR_RXINEC       (_U_(0x1) << USBC_UPCON6CLR_RXINEC_Pos)
#define USBC_UPCON6CLR_TXOUTEC_Pos  1            /**< \brief (USBC_UPCON6CLR) TXOUTE Clear */
#define USBC_UPCON6CLR_TXOUTEC      (_U_(0x1) << USBC_UPCON6CLR_TXOUTEC_Pos)
#define USBC_UPCON6CLR_TXSTPEC_Pos  2            /**< \brief (USBC_UPCON6CLR) TXSTPE Clear */
#define USBC_UPCON6CLR_TXSTPEC      (_U_(0x1) << USBC_UPCON6CLR_TXSTPEC_Pos)
#define USBC_UPCON6CLR_PERREC_Pos   3            /**< \brief (USBC_UPCON6CLR) PERRE Clear */
#define USBC_UPCON6CLR_PERREC       (_U_(0x1) << USBC_UPCON6CLR_PERREC_Pos)
#define USBC_UPCON6CLR_NAKEDEC_Pos  4            /**< \brief (USBC_UPCON6CLR) NAKEDE Clear */
#define USBC_UPCON6CLR_NAKEDEC      (_U_(0x1) << USBC_UPCON6CLR_NAKEDEC_Pos)
#define USBC_UPCON6CLR_ERRORFIEC_Pos 5            /**< \brief (USBC_UPCON6CLR) ERRORFIE Clear */
#define USBC_UPCON6CLR_ERRORFIEC    (_U_(0x1) << USBC_UPCON6CLR_ERRORFIEC_Pos)
#define USBC_UPCON6CLR_RXSTALLDEC_Pos 6            /**< \brief (USBC_UPCON6CLR) RXTALLDE Clear */
#define USBC_UPCON6CLR_RXSTALLDEC   (_U_(0x1) << USBC_UPCON6CLR_RXSTALLDEC_Pos)
#define USBC_UPCON6CLR_RAMACEREC_Pos 10           /**< \brief (USBC_UPCON6CLR) RAMACERE Clear */
#define USBC_UPCON6CLR_RAMACEREC    (_U_(0x1) << USBC_UPCON6CLR_RAMACEREC_Pos)
#define USBC_UPCON6CLR_NBUSYBKEC_Pos 12           /**< \brief (USBC_UPCON6CLR) NBUSYBKE Clear */
#define USBC_UPCON6CLR_NBUSYBKEC    (_U_(0x1) << USBC_UPCON6CLR_NBUSYBKEC_Pos)
#define USBC_UPCON6CLR_FIFOCONC_Pos 14           /**< \brief (USBC_UPCON6CLR) FIFOCON Clear */
#define USBC_UPCON6CLR_FIFOCONC     (_U_(0x1) << USBC_UPCON6CLR_FIFOCONC_Pos)
#define USBC_UPCON6CLR_PFREEZEC_Pos 17           /**< \brief (USBC_UPCON6CLR) PFREEZE Clear */
#define USBC_UPCON6CLR_PFREEZEC     (_U_(0x1) << USBC_UPCON6CLR_PFREEZEC_Pos)
#define USBC_UPCON6CLR_INITDTGLC_Pos 18           /**< \brief (USBC_UPCON6CLR) INITDTGL Clear */
#define USBC_UPCON6CLR_INITDTGLC    (_U_(0x1) << USBC_UPCON6CLR_INITDTGLC_Pos)
#define USBC_UPCON6CLR_INITBKC_Pos  19           /**< \brief (USBC_UPCON6CLR) INITBK Clear */
#define USBC_UPCON6CLR_INITBKC      (_U_(0x1) << USBC_UPCON6CLR_INITBKC_Pos)
#define USBC_UPCON6CLR_MASK         _U_(0x000E547F) /**< \brief (USBC_UPCON6CLR) MASK Register */

/* -------- USBC_UPCON7CLR : (USBC Offset: 0x63C) ( /W 32) Pipe Control Clear Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXINEC:1;         /*!< bit:      0  RXINE Clear                        */
    uint32_t TXOUTEC:1;        /*!< bit:      1  TXOUTE Clear                       */
    uint32_t TXSTPEC:1;        /*!< bit:      2  TXSTPE Clear                       */
    uint32_t PERREC:1;         /*!< bit:      3  PERRE Clear                        */
    uint32_t NAKEDEC:1;        /*!< bit:      4  NAKEDE Clear                       */
    uint32_t ERRORFIEC:1;      /*!< bit:      5  ERRORFIE Clear                     */
    uint32_t RXSTALLDEC:1;     /*!< bit:      6  RXTALLDE Clear                     */
    uint32_t :3;               /*!< bit:  7.. 9  Reserved                           */
    uint32_t RAMACEREC:1;      /*!< bit:     10  RAMACERE Clear                     */
    uint32_t :1;               /*!< bit:     11  Reserved                           */
    uint32_t NBUSYBKEC:1;      /*!< bit:     12  NBUSYBKE Clear                     */
    uint32_t :1;               /*!< bit:     13  Reserved                           */
    uint32_t FIFOCONC:1;       /*!< bit:     14  FIFOCON Clear                      */
    uint32_t :2;               /*!< bit: 15..16  Reserved                           */
    uint32_t PFREEZEC:1;       /*!< bit:     17  PFREEZE Clear                      */
    uint32_t INITDTGLC:1;      /*!< bit:     18  INITDTGL Clear                     */
    uint32_t INITBKC:1;        /*!< bit:     19  INITBK Clear                       */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPCON7CLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPCON7CLR_OFFSET       0x63C        /**< \brief (USBC_UPCON7CLR offset) Pipe Control Clear Register */
#define USBC_UPCON7CLR_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_UPCON7CLR reset_value) Pipe Control Clear Register */

#define USBC_UPCON7CLR_RXINEC_Pos   0            /**< \brief (USBC_UPCON7CLR) RXINE Clear */
#define USBC_UPCON7CLR_RXINEC       (_U_(0x1) << USBC_UPCON7CLR_RXINEC_Pos)
#define USBC_UPCON7CLR_TXOUTEC_Pos  1            /**< \brief (USBC_UPCON7CLR) TXOUTE Clear */
#define USBC_UPCON7CLR_TXOUTEC      (_U_(0x1) << USBC_UPCON7CLR_TXOUTEC_Pos)
#define USBC_UPCON7CLR_TXSTPEC_Pos  2            /**< \brief (USBC_UPCON7CLR) TXSTPE Clear */
#define USBC_UPCON7CLR_TXSTPEC      (_U_(0x1) << USBC_UPCON7CLR_TXSTPEC_Pos)
#define USBC_UPCON7CLR_PERREC_Pos   3            /**< \brief (USBC_UPCON7CLR) PERRE Clear */
#define USBC_UPCON7CLR_PERREC       (_U_(0x1) << USBC_UPCON7CLR_PERREC_Pos)
#define USBC_UPCON7CLR_NAKEDEC_Pos  4            /**< \brief (USBC_UPCON7CLR) NAKEDE Clear */
#define USBC_UPCON7CLR_NAKEDEC      (_U_(0x1) << USBC_UPCON7CLR_NAKEDEC_Pos)
#define USBC_UPCON7CLR_ERRORFIEC_Pos 5            /**< \brief (USBC_UPCON7CLR) ERRORFIE Clear */
#define USBC_UPCON7CLR_ERRORFIEC    (_U_(0x1) << USBC_UPCON7CLR_ERRORFIEC_Pos)
#define USBC_UPCON7CLR_RXSTALLDEC_Pos 6            /**< \brief (USBC_UPCON7CLR) RXTALLDE Clear */
#define USBC_UPCON7CLR_RXSTALLDEC   (_U_(0x1) << USBC_UPCON7CLR_RXSTALLDEC_Pos)
#define USBC_UPCON7CLR_RAMACEREC_Pos 10           /**< \brief (USBC_UPCON7CLR) RAMACERE Clear */
#define USBC_UPCON7CLR_RAMACEREC    (_U_(0x1) << USBC_UPCON7CLR_RAMACEREC_Pos)
#define USBC_UPCON7CLR_NBUSYBKEC_Pos 12           /**< \brief (USBC_UPCON7CLR) NBUSYBKE Clear */
#define USBC_UPCON7CLR_NBUSYBKEC    (_U_(0x1) << USBC_UPCON7CLR_NBUSYBKEC_Pos)
#define USBC_UPCON7CLR_FIFOCONC_Pos 14           /**< \brief (USBC_UPCON7CLR) FIFOCON Clear */
#define USBC_UPCON7CLR_FIFOCONC     (_U_(0x1) << USBC_UPCON7CLR_FIFOCONC_Pos)
#define USBC_UPCON7CLR_PFREEZEC_Pos 17           /**< \brief (USBC_UPCON7CLR) PFREEZE Clear */
#define USBC_UPCON7CLR_PFREEZEC     (_U_(0x1) << USBC_UPCON7CLR_PFREEZEC_Pos)
#define USBC_UPCON7CLR_INITDTGLC_Pos 18           /**< \brief (USBC_UPCON7CLR) INITDTGL Clear */
#define USBC_UPCON7CLR_INITDTGLC    (_U_(0x1) << USBC_UPCON7CLR_INITDTGLC_Pos)
#define USBC_UPCON7CLR_INITBKC_Pos  19           /**< \brief (USBC_UPCON7CLR) INITBK Clear */
#define USBC_UPCON7CLR_INITBKC      (_U_(0x1) << USBC_UPCON7CLR_INITBKC_Pos)
#define USBC_UPCON7CLR_MASK         _U_(0x000E547F) /**< \brief (USBC_UPCON7CLR) MASK Register */

/* -------- USBC_UPINRQ0 : (USBC Offset: 0x650) (R/W 32) Pipe In Request -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t INRQ:8;           /*!< bit:  0.. 7  IN Request Number before Freeze    */
    uint32_t INMODE:1;         /*!< bit:      8  IN Request Mode                    */
    uint32_t :23;              /*!< bit:  9..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPINRQ0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPINRQ0_OFFSET         0x650        /**< \brief (USBC_UPINRQ0 offset) Pipe In Request */
#define USBC_UPINRQ0_RESETVALUE     _U_(0x00000001); /**< \brief (USBC_UPINRQ0 reset_value) Pipe In Request */

#define USBC_UPINRQ0_INRQ_Pos       0            /**< \brief (USBC_UPINRQ0) IN Request Number before Freeze */
#define USBC_UPINRQ0_INRQ_Msk       (_U_(0xFF) << USBC_UPINRQ0_INRQ_Pos)
#define USBC_UPINRQ0_INRQ(value)    (USBC_UPINRQ0_INRQ_Msk & ((value) << USBC_UPINRQ0_INRQ_Pos))
#define USBC_UPINRQ0_INMODE_Pos     8            /**< \brief (USBC_UPINRQ0) IN Request Mode */
#define USBC_UPINRQ0_INMODE         (_U_(0x1) << USBC_UPINRQ0_INMODE_Pos)
#define USBC_UPINRQ0_MASK           _U_(0x000001FF) /**< \brief (USBC_UPINRQ0) MASK Register */

/* -------- USBC_UPINRQ1 : (USBC Offset: 0x654) (R/W 32) Pipe In Request -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t INRQ:8;           /*!< bit:  0.. 7  IN Request Number before Freeze    */
    uint32_t INMODE:1;         /*!< bit:      8  IN Request Mode                    */
    uint32_t :23;              /*!< bit:  9..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPINRQ1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPINRQ1_OFFSET         0x654        /**< \brief (USBC_UPINRQ1 offset) Pipe In Request */
#define USBC_UPINRQ1_RESETVALUE     _U_(0x00000001); /**< \brief (USBC_UPINRQ1 reset_value) Pipe In Request */

#define USBC_UPINRQ1_INRQ_Pos       0            /**< \brief (USBC_UPINRQ1) IN Request Number before Freeze */
#define USBC_UPINRQ1_INRQ_Msk       (_U_(0xFF) << USBC_UPINRQ1_INRQ_Pos)
#define USBC_UPINRQ1_INRQ(value)    (USBC_UPINRQ1_INRQ_Msk & ((value) << USBC_UPINRQ1_INRQ_Pos))
#define USBC_UPINRQ1_INMODE_Pos     8            /**< \brief (USBC_UPINRQ1) IN Request Mode */
#define USBC_UPINRQ1_INMODE         (_U_(0x1) << USBC_UPINRQ1_INMODE_Pos)
#define USBC_UPINRQ1_MASK           _U_(0x000001FF) /**< \brief (USBC_UPINRQ1) MASK Register */

/* -------- USBC_UPINRQ2 : (USBC Offset: 0x658) (R/W 32) Pipe In Request -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t INRQ:8;           /*!< bit:  0.. 7  IN Request Number before Freeze    */
    uint32_t INMODE:1;         /*!< bit:      8  IN Request Mode                    */
    uint32_t :23;              /*!< bit:  9..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPINRQ2_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPINRQ2_OFFSET         0x658        /**< \brief (USBC_UPINRQ2 offset) Pipe In Request */
#define USBC_UPINRQ2_RESETVALUE     _U_(0x00000001); /**< \brief (USBC_UPINRQ2 reset_value) Pipe In Request */

#define USBC_UPINRQ2_INRQ_Pos       0            /**< \brief (USBC_UPINRQ2) IN Request Number before Freeze */
#define USBC_UPINRQ2_INRQ_Msk       (_U_(0xFF) << USBC_UPINRQ2_INRQ_Pos)
#define USBC_UPINRQ2_INRQ(value)    (USBC_UPINRQ2_INRQ_Msk & ((value) << USBC_UPINRQ2_INRQ_Pos))
#define USBC_UPINRQ2_INMODE_Pos     8            /**< \brief (USBC_UPINRQ2) IN Request Mode */
#define USBC_UPINRQ2_INMODE         (_U_(0x1) << USBC_UPINRQ2_INMODE_Pos)
#define USBC_UPINRQ2_MASK           _U_(0x000001FF) /**< \brief (USBC_UPINRQ2) MASK Register */

/* -------- USBC_UPINRQ3 : (USBC Offset: 0x65C) (R/W 32) Pipe In Request -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t INRQ:8;           /*!< bit:  0.. 7  IN Request Number before Freeze    */
    uint32_t INMODE:1;         /*!< bit:      8  IN Request Mode                    */
    uint32_t :23;              /*!< bit:  9..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPINRQ3_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPINRQ3_OFFSET         0x65C        /**< \brief (USBC_UPINRQ3 offset) Pipe In Request */
#define USBC_UPINRQ3_RESETVALUE     _U_(0x00000001); /**< \brief (USBC_UPINRQ3 reset_value) Pipe In Request */

#define USBC_UPINRQ3_INRQ_Pos       0            /**< \brief (USBC_UPINRQ3) IN Request Number before Freeze */
#define USBC_UPINRQ3_INRQ_Msk       (_U_(0xFF) << USBC_UPINRQ3_INRQ_Pos)
#define USBC_UPINRQ3_INRQ(value)    (USBC_UPINRQ3_INRQ_Msk & ((value) << USBC_UPINRQ3_INRQ_Pos))
#define USBC_UPINRQ3_INMODE_Pos     8            /**< \brief (USBC_UPINRQ3) IN Request Mode */
#define USBC_UPINRQ3_INMODE         (_U_(0x1) << USBC_UPINRQ3_INMODE_Pos)
#define USBC_UPINRQ3_MASK           _U_(0x000001FF) /**< \brief (USBC_UPINRQ3) MASK Register */

/* -------- USBC_UPINRQ4 : (USBC Offset: 0x660) (R/W 32) Pipe In Request -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t INRQ:8;           /*!< bit:  0.. 7  IN Request Number before Freeze    */
    uint32_t INMODE:1;         /*!< bit:      8  IN Request Mode                    */
    uint32_t :23;              /*!< bit:  9..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPINRQ4_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPINRQ4_OFFSET         0x660        /**< \brief (USBC_UPINRQ4 offset) Pipe In Request */
#define USBC_UPINRQ4_RESETVALUE     _U_(0x00000001); /**< \brief (USBC_UPINRQ4 reset_value) Pipe In Request */

#define USBC_UPINRQ4_INRQ_Pos       0            /**< \brief (USBC_UPINRQ4) IN Request Number before Freeze */
#define USBC_UPINRQ4_INRQ_Msk       (_U_(0xFF) << USBC_UPINRQ4_INRQ_Pos)
#define USBC_UPINRQ4_INRQ(value)    (USBC_UPINRQ4_INRQ_Msk & ((value) << USBC_UPINRQ4_INRQ_Pos))
#define USBC_UPINRQ4_INMODE_Pos     8            /**< \brief (USBC_UPINRQ4) IN Request Mode */
#define USBC_UPINRQ4_INMODE         (_U_(0x1) << USBC_UPINRQ4_INMODE_Pos)
#define USBC_UPINRQ4_MASK           _U_(0x000001FF) /**< \brief (USBC_UPINRQ4) MASK Register */

/* -------- USBC_UPINRQ5 : (USBC Offset: 0x664) (R/W 32) Pipe In Request -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t INRQ:8;           /*!< bit:  0.. 7  IN Request Number before Freeze    */
    uint32_t INMODE:1;         /*!< bit:      8  IN Request Mode                    */
    uint32_t :23;              /*!< bit:  9..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPINRQ5_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPINRQ5_OFFSET         0x664        /**< \brief (USBC_UPINRQ5 offset) Pipe In Request */
#define USBC_UPINRQ5_RESETVALUE     _U_(0x00000001); /**< \brief (USBC_UPINRQ5 reset_value) Pipe In Request */

#define USBC_UPINRQ5_INRQ_Pos       0            /**< \brief (USBC_UPINRQ5) IN Request Number before Freeze */
#define USBC_UPINRQ5_INRQ_Msk       (_U_(0xFF) << USBC_UPINRQ5_INRQ_Pos)
#define USBC_UPINRQ5_INRQ(value)    (USBC_UPINRQ5_INRQ_Msk & ((value) << USBC_UPINRQ5_INRQ_Pos))
#define USBC_UPINRQ5_INMODE_Pos     8            /**< \brief (USBC_UPINRQ5) IN Request Mode */
#define USBC_UPINRQ5_INMODE         (_U_(0x1) << USBC_UPINRQ5_INMODE_Pos)
#define USBC_UPINRQ5_MASK           _U_(0x000001FF) /**< \brief (USBC_UPINRQ5) MASK Register */

/* -------- USBC_UPINRQ6 : (USBC Offset: 0x668) (R/W 32) Pipe In Request -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t INRQ:8;           /*!< bit:  0.. 7  IN Request Number before Freeze    */
    uint32_t INMODE:1;         /*!< bit:      8  IN Request Mode                    */
    uint32_t :23;              /*!< bit:  9..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPINRQ6_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPINRQ6_OFFSET         0x668        /**< \brief (USBC_UPINRQ6 offset) Pipe In Request */
#define USBC_UPINRQ6_RESETVALUE     _U_(0x00000001); /**< \brief (USBC_UPINRQ6 reset_value) Pipe In Request */

#define USBC_UPINRQ6_INRQ_Pos       0            /**< \brief (USBC_UPINRQ6) IN Request Number before Freeze */
#define USBC_UPINRQ6_INRQ_Msk       (_U_(0xFF) << USBC_UPINRQ6_INRQ_Pos)
#define USBC_UPINRQ6_INRQ(value)    (USBC_UPINRQ6_INRQ_Msk & ((value) << USBC_UPINRQ6_INRQ_Pos))
#define USBC_UPINRQ6_INMODE_Pos     8            /**< \brief (USBC_UPINRQ6) IN Request Mode */
#define USBC_UPINRQ6_INMODE         (_U_(0x1) << USBC_UPINRQ6_INMODE_Pos)
#define USBC_UPINRQ6_MASK           _U_(0x000001FF) /**< \brief (USBC_UPINRQ6) MASK Register */

/* -------- USBC_UPINRQ7 : (USBC Offset: 0x66C) (R/W 32) Pipe In Request -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t INRQ:8;           /*!< bit:  0.. 7  IN Request Number before Freeze    */
    uint32_t INMODE:1;         /*!< bit:      8  IN Request Mode                    */
    uint32_t :23;              /*!< bit:  9..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UPINRQ7_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UPINRQ7_OFFSET         0x66C        /**< \brief (USBC_UPINRQ7 offset) Pipe In Request */
#define USBC_UPINRQ7_RESETVALUE     _U_(0x00000001); /**< \brief (USBC_UPINRQ7 reset_value) Pipe In Request */

#define USBC_UPINRQ7_INRQ_Pos       0            /**< \brief (USBC_UPINRQ7) IN Request Number before Freeze */
#define USBC_UPINRQ7_INRQ_Msk       (_U_(0xFF) << USBC_UPINRQ7_INRQ_Pos)
#define USBC_UPINRQ7_INRQ(value)    (USBC_UPINRQ7_INRQ_Msk & ((value) << USBC_UPINRQ7_INRQ_Pos))
#define USBC_UPINRQ7_INMODE_Pos     8            /**< \brief (USBC_UPINRQ7) IN Request Mode */
#define USBC_UPINRQ7_INMODE         (_U_(0x1) << USBC_UPINRQ7_INMODE_Pos)
#define USBC_UPINRQ7_MASK           _U_(0x000001FF) /**< \brief (USBC_UPINRQ7) MASK Register */

/* -------- USBC_USBCON : (USBC Offset: 0x800) (R/W 32) General Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t :14;              /*!< bit:  0..13  Reserved                           */
    uint32_t FRZCLK:1;         /*!< bit:     14  Freeze USB Clock                   */
    uint32_t USBE:1;           /*!< bit:     15  USBC Enable                        */
    uint32_t :8;               /*!< bit: 16..23  Reserved                           */
    uint32_t UIMOD:1;          /*!< bit:     24  USBC Mode                          */
    uint32_t :7;               /*!< bit: 25..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_USBCON_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_USBCON_OFFSET          0x800        /**< \brief (USBC_USBCON offset) General Control Register */
#define USBC_USBCON_RESETVALUE      _U_(0x01004000); /**< \brief (USBC_USBCON reset_value) General Control Register */

#define USBC_USBCON_FRZCLK_Pos      14           /**< \brief (USBC_USBCON) Freeze USB Clock */
#define USBC_USBCON_FRZCLK          (_U_(0x1) << USBC_USBCON_FRZCLK_Pos)
#define USBC_USBCON_USBE_Pos        15           /**< \brief (USBC_USBCON) USBC Enable */
#define USBC_USBCON_USBE            (_U_(0x1) << USBC_USBCON_USBE_Pos)
#define USBC_USBCON_UIMOD_Pos       24           /**< \brief (USBC_USBCON) USBC Mode */
#define USBC_USBCON_UIMOD           (_U_(0x1) << USBC_USBCON_UIMOD_Pos)
#define USBC_USBCON_MASK            _U_(0x0100C000) /**< \brief (USBC_USBCON) MASK Register */

/* -------- USBC_USBSTA : (USBC Offset: 0x804) (R/  32) General Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t :9;               /*!< bit:  0.. 8  Reserved                           */
    uint32_t VBUSRQ:1;         /*!< bit:      9  VBus Request                       */
    uint32_t :2;               /*!< bit: 10..11  Reserved                           */
    uint32_t SPEED:2;          /*!< bit: 12..13  Speed Status                       */
    uint32_t CLKUSABLE:1;      /*!< bit:     14  USB Clock Usable                   */
    uint32_t :1;               /*!< bit:     15  Reserved                           */
    uint32_t SUSPEND:1;        /*!< bit:     16  Suspend module state               */
    uint32_t :15;              /*!< bit: 17..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_USBSTA_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_USBSTA_OFFSET          0x804        /**< \brief (USBC_USBSTA offset) General Status Register */
#define USBC_USBSTA_RESETVALUE      _U_(0x00010000); /**< \brief (USBC_USBSTA reset_value) General Status Register */

#define USBC_USBSTA_VBUSRQ_Pos      9            /**< \brief (USBC_USBSTA) VBus Request */
#define USBC_USBSTA_VBUSRQ          (_U_(0x1) << USBC_USBSTA_VBUSRQ_Pos)
#define USBC_USBSTA_SPEED_Pos       12           /**< \brief (USBC_USBSTA) Speed Status */
#define USBC_USBSTA_SPEED_Msk       (_U_(0x3) << USBC_USBSTA_SPEED_Pos)
#define USBC_USBSTA_SPEED(value)    (USBC_USBSTA_SPEED_Msk & ((value) << USBC_USBSTA_SPEED_Pos))
#define   USBC_USBSTA_SPEED_FULL_Val      _U_(0x0)   /**< \brief (USBC_USBSTA)  */
#define   USBC_USBSTA_SPEED_HIGH_Val      _U_(0x1)   /**< \brief (USBC_USBSTA)  */
#define   USBC_USBSTA_SPEED_LOW_Val       _U_(0x2)   /**< \brief (USBC_USBSTA)  */
#define USBC_USBSTA_SPEED_FULL      (USBC_USBSTA_SPEED_FULL_Val    << USBC_USBSTA_SPEED_Pos)
#define USBC_USBSTA_SPEED_HIGH      (USBC_USBSTA_SPEED_HIGH_Val    << USBC_USBSTA_SPEED_Pos)
#define USBC_USBSTA_SPEED_LOW       (USBC_USBSTA_SPEED_LOW_Val     << USBC_USBSTA_SPEED_Pos)
#define USBC_USBSTA_CLKUSABLE_Pos   14           /**< \brief (USBC_USBSTA) USB Clock Usable */
#define USBC_USBSTA_CLKUSABLE       (_U_(0x1) << USBC_USBSTA_CLKUSABLE_Pos)
#define USBC_USBSTA_SUSPEND_Pos     16           /**< \brief (USBC_USBSTA) Suspend module state */
#define USBC_USBSTA_SUSPEND         (_U_(0x1) << USBC_USBSTA_SUSPEND_Pos)
#define USBC_USBSTA_MASK            _U_(0x00017200) /**< \brief (USBC_USBSTA) MASK Register */

/* -------- USBC_USBSTACLR : (USBC Offset: 0x808) ( /W 32) General Status Clear Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t :8;               /*!< bit:  0.. 7  Reserved                           */
    uint32_t RAMACERIC:1;      /*!< bit:      8  RAMACERI Clear                     */
    uint32_t VBUSRQC:1;        /*!< bit:      9  VBUSRQ Clear                       */
    uint32_t :22;              /*!< bit: 10..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_USBSTACLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_USBSTACLR_OFFSET       0x808        /**< \brief (USBC_USBSTACLR offset) General Status Clear Register */
#define USBC_USBSTACLR_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_USBSTACLR reset_value) General Status Clear Register */

#define USBC_USBSTACLR_RAMACERIC_Pos 8            /**< \brief (USBC_USBSTACLR) RAMACERI Clear */
#define USBC_USBSTACLR_RAMACERIC    (_U_(0x1) << USBC_USBSTACLR_RAMACERIC_Pos)
#define USBC_USBSTACLR_VBUSRQC_Pos  9            /**< \brief (USBC_USBSTACLR) VBUSRQ Clear */
#define USBC_USBSTACLR_VBUSRQC      (_U_(0x1) << USBC_USBSTACLR_VBUSRQC_Pos)
#define USBC_USBSTACLR_MASK         _U_(0x00000300) /**< \brief (USBC_USBSTACLR) MASK Register */

/* -------- USBC_USBSTASET : (USBC Offset: 0x80C) ( /W 32) General Status Set Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t :8;               /*!< bit:  0.. 7  Reserved                           */
    uint32_t RAMACERIS:1;      /*!< bit:      8  RAMACERI Set                       */
    uint32_t VBUSRQS:1;        /*!< bit:      9  VBUSRQ Set                         */
    uint32_t :22;              /*!< bit: 10..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_USBSTASET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_USBSTASET_OFFSET       0x80C        /**< \brief (USBC_USBSTASET offset) General Status Set Register */
#define USBC_USBSTASET_RESETVALUE   _U_(0x00000000); /**< \brief (USBC_USBSTASET reset_value) General Status Set Register */

#define USBC_USBSTASET_RAMACERIS_Pos 8            /**< \brief (USBC_USBSTASET) RAMACERI Set */
#define USBC_USBSTASET_RAMACERIS    (_U_(0x1) << USBC_USBSTASET_RAMACERIS_Pos)
#define USBC_USBSTASET_VBUSRQS_Pos  9            /**< \brief (USBC_USBSTASET) VBUSRQ Set */
#define USBC_USBSTASET_VBUSRQS      (_U_(0x1) << USBC_USBSTASET_VBUSRQS_Pos)
#define USBC_USBSTASET_MASK         _U_(0x00000300) /**< \brief (USBC_USBSTASET) MASK Register */

/* -------- USBC_UVERS : (USBC Offset: 0x818) (R/  32) IP Version Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t VERSION:12;       /*!< bit:  0..11  Version Number                     */
    uint32_t :4;               /*!< bit: 12..15  Reserved                           */
    uint32_t VARIANT:3;        /*!< bit: 16..18  Variant Number                     */
    uint32_t :13;              /*!< bit: 19..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UVERS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UVERS_OFFSET           0x818        /**< \brief (USBC_UVERS offset) IP Version Register */
#define USBC_UVERS_RESETVALUE       _U_(0x00000310); /**< \brief (USBC_UVERS reset_value) IP Version Register */

#define USBC_UVERS_VERSION_Pos      0            /**< \brief (USBC_UVERS) Version Number */
#define USBC_UVERS_VERSION_Msk      (_U_(0xFFF) << USBC_UVERS_VERSION_Pos)
#define USBC_UVERS_VERSION(value)   (USBC_UVERS_VERSION_Msk & ((value) << USBC_UVERS_VERSION_Pos))
#define USBC_UVERS_VARIANT_Pos      16           /**< \brief (USBC_UVERS) Variant Number */
#define USBC_UVERS_VARIANT_Msk      (_U_(0x7) << USBC_UVERS_VARIANT_Pos)
#define USBC_UVERS_VARIANT(value)   (USBC_UVERS_VARIANT_Msk & ((value) << USBC_UVERS_VARIANT_Pos))
#define USBC_UVERS_MASK             _U_(0x00070FFF) /**< \brief (USBC_UVERS) MASK Register */

/* -------- USBC_UFEATURES : (USBC Offset: 0x81C) (R/  32) IP Features Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t EPTNBRMAX:4;      /*!< bit:  0.. 3  Maximum Number of Pipes/Endpints   */
    uint32_t :4;               /*!< bit:  4.. 7  Reserved                           */
    uint32_t UTMIMODE:1;       /*!< bit:      8  UTMI Mode                          */
    uint32_t :23;              /*!< bit:  9..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UFEATURES_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UFEATURES_OFFSET       0x81C        /**< \brief (USBC_UFEATURES offset) IP Features Register */
#define USBC_UFEATURES_RESETVALUE   _U_(0x00000007); /**< \brief (USBC_UFEATURES reset_value) IP Features Register */

#define USBC_UFEATURES_EPTNBRMAX_Pos 0            /**< \brief (USBC_UFEATURES) Maximum Number of Pipes/Endpints */
#define USBC_UFEATURES_EPTNBRMAX_Msk (_U_(0xF) << USBC_UFEATURES_EPTNBRMAX_Pos)
#define USBC_UFEATURES_EPTNBRMAX(value) (USBC_UFEATURES_EPTNBRMAX_Msk & ((value) << USBC_UFEATURES_EPTNBRMAX_Pos))
#define USBC_UFEATURES_UTMIMODE_Pos 8            /**< \brief (USBC_UFEATURES) UTMI Mode */
#define USBC_UFEATURES_UTMIMODE     (_U_(0x1) << USBC_UFEATURES_UTMIMODE_Pos)
#define USBC_UFEATURES_MASK         _U_(0x0000010F) /**< \brief (USBC_UFEATURES) MASK Register */

/* -------- USBC_UADDRSIZE : (USBC Offset: 0x820) (R/  32) IP PB address size Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t UADDRSIZE:32;     /*!< bit:  0..31  IP PB Address Size                 */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UADDRSIZE_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UADDRSIZE_OFFSET       0x820        /**< \brief (USBC_UADDRSIZE offset) IP PB address size Register */
#define USBC_UADDRSIZE_RESETVALUE   _U_(0x00001000); /**< \brief (USBC_UADDRSIZE reset_value) IP PB address size Register */

#define USBC_UADDRSIZE_UADDRSIZE_Pos 0            /**< \brief (USBC_UADDRSIZE) IP PB Address Size */
#define USBC_UADDRSIZE_UADDRSIZE_Msk (_U_(0xFFFFFFFF) << USBC_UADDRSIZE_UADDRSIZE_Pos)
#define USBC_UADDRSIZE_UADDRSIZE(value) (USBC_UADDRSIZE_UADDRSIZE_Msk & ((value) << USBC_UADDRSIZE_UADDRSIZE_Pos))
#define USBC_UADDRSIZE_MASK         _U_(0xFFFFFFFF) /**< \brief (USBC_UADDRSIZE) MASK Register */

/* -------- USBC_UNAME1 : (USBC Offset: 0x824) (R/  32) IP Name Part One: HUSB -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t UNAME1:32;        /*!< bit:  0..31  IP Name Part One                   */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UNAME1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UNAME1_OFFSET          0x824        /**< \brief (USBC_UNAME1 offset) IP Name Part One: HUSB */
#define USBC_UNAME1_RESETVALUE      _U_(0x48555342); /**< \brief (USBC_UNAME1 reset_value) IP Name Part One: HUSB */

#define USBC_UNAME1_UNAME1_Pos      0            /**< \brief (USBC_UNAME1) IP Name Part One */
#define USBC_UNAME1_UNAME1_Msk      (_U_(0xFFFFFFFF) << USBC_UNAME1_UNAME1_Pos)
#define USBC_UNAME1_UNAME1(value)   (USBC_UNAME1_UNAME1_Msk & ((value) << USBC_UNAME1_UNAME1_Pos))
#define USBC_UNAME1_MASK            _U_(0xFFFFFFFF) /**< \brief (USBC_UNAME1) MASK Register */

/* -------- USBC_UNAME2 : (USBC Offset: 0x828) (R/  32) IP Name Part Two: HOST -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t UNAME2:32;        /*!< bit:  0..31  IP Name Part Two                   */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UNAME2_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UNAME2_OFFSET          0x828        /**< \brief (USBC_UNAME2 offset) IP Name Part Two: HOST */
#define USBC_UNAME2_RESETVALUE      _U_(0x484F5354); /**< \brief (USBC_UNAME2 reset_value) IP Name Part Two: HOST */

#define USBC_UNAME2_UNAME2_Pos      0            /**< \brief (USBC_UNAME2) IP Name Part Two */
#define USBC_UNAME2_UNAME2_Msk      (_U_(0xFFFFFFFF) << USBC_UNAME2_UNAME2_Pos)
#define USBC_UNAME2_UNAME2(value)   (USBC_UNAME2_UNAME2_Msk & ((value) << USBC_UNAME2_UNAME2_Pos))
#define USBC_UNAME2_MASK            _U_(0xFFFFFFFF) /**< \brief (USBC_UNAME2) MASK Register */

/* -------- USBC_USBFSM : (USBC Offset: 0x82C) (R/  32) USB internal finite state machine -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DRDSTATE:4;       /*!< bit:  0.. 3  DualRoleDevice state               */
    uint32_t :28;              /*!< bit:  4..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_USBFSM_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_USBFSM_OFFSET          0x82C        /**< \brief (USBC_USBFSM offset) USB internal finite state machine */
#define USBC_USBFSM_RESETVALUE      _U_(0x00000009); /**< \brief (USBC_USBFSM reset_value) USB internal finite state machine */

#define USBC_USBFSM_DRDSTATE_Pos    0            /**< \brief (USBC_USBFSM) DualRoleDevice state */
#define USBC_USBFSM_DRDSTATE_Msk    (_U_(0xF) << USBC_USBFSM_DRDSTATE_Pos)
#define USBC_USBFSM_DRDSTATE(value) (USBC_USBFSM_DRDSTATE_Msk & ((value) << USBC_USBFSM_DRDSTATE_Pos))
#define   USBC_USBFSM_DRDSTATE_A_IDLE_Val _U_(0x0)   /**< \brief (USBC_USBFSM)  */
#define   USBC_USBFSM_DRDSTATE_A_WAIT_VRISE_Val _U_(0x1)   /**< \brief (USBC_USBFSM)  */
#define   USBC_USBFSM_DRDSTATE_A_WAIT_BCON_Val _U_(0x2)   /**< \brief (USBC_USBFSM)  */
#define   USBC_USBFSM_DRDSTATE_A_HOST_Val _U_(0x3)   /**< \brief (USBC_USBFSM)  */
#define   USBC_USBFSM_DRDSTATE_A_SUSPEND_Val _U_(0x4)   /**< \brief (USBC_USBFSM)  */
#define   USBC_USBFSM_DRDSTATE_A_PERIPHERAL_Val _U_(0x5)   /**< \brief (USBC_USBFSM)  */
#define   USBC_USBFSM_DRDSTATE_A_WAIT_VFALL_Val _U_(0x6)   /**< \brief (USBC_USBFSM)  */
#define   USBC_USBFSM_DRDSTATE_A_VBUS_ERR_Val _U_(0x7)   /**< \brief (USBC_USBFSM)  */
#define   USBC_USBFSM_DRDSTATE_A_WAIT_DISCHARGE_Val _U_(0x8)   /**< \brief (USBC_USBFSM)  */
#define   USBC_USBFSM_DRDSTATE_B_IDLE_Val _U_(0x9)   /**< \brief (USBC_USBFSM)  */
#define   USBC_USBFSM_DRDSTATE_B_PERIPHERAL_Val _U_(0xA)   /**< \brief (USBC_USBFSM)  */
#define   USBC_USBFSM_DRDSTATE_B_WAIT_BEGIN_HNP_Val _U_(0xB)   /**< \brief (USBC_USBFSM)  */
#define   USBC_USBFSM_DRDSTATE_B_WAIT_DISCHARGE_Val _U_(0xC)   /**< \brief (USBC_USBFSM)  */
#define   USBC_USBFSM_DRDSTATE_B_WAIT_ACON_Val _U_(0xD)   /**< \brief (USBC_USBFSM)  */
#define   USBC_USBFSM_DRDSTATE_B_HOST_Val _U_(0xE)   /**< \brief (USBC_USBFSM)  */
#define   USBC_USBFSM_DRDSTATE_B_SRP_INIT_Val _U_(0xF)   /**< \brief (USBC_USBFSM)  */
#define USBC_USBFSM_DRDSTATE_A_IDLE (USBC_USBFSM_DRDSTATE_A_IDLE_Val << USBC_USBFSM_DRDSTATE_Pos)
#define USBC_USBFSM_DRDSTATE_A_WAIT_VRISE (USBC_USBFSM_DRDSTATE_A_WAIT_VRISE_Val << USBC_USBFSM_DRDSTATE_Pos)
#define USBC_USBFSM_DRDSTATE_A_WAIT_BCON (USBC_USBFSM_DRDSTATE_A_WAIT_BCON_Val << USBC_USBFSM_DRDSTATE_Pos)
#define USBC_USBFSM_DRDSTATE_A_HOST (USBC_USBFSM_DRDSTATE_A_HOST_Val << USBC_USBFSM_DRDSTATE_Pos)
#define USBC_USBFSM_DRDSTATE_A_SUSPEND (USBC_USBFSM_DRDSTATE_A_SUSPEND_Val << USBC_USBFSM_DRDSTATE_Pos)
#define USBC_USBFSM_DRDSTATE_A_PERIPHERAL (USBC_USBFSM_DRDSTATE_A_PERIPHERAL_Val << USBC_USBFSM_DRDSTATE_Pos)
#define USBC_USBFSM_DRDSTATE_A_WAIT_VFALL (USBC_USBFSM_DRDSTATE_A_WAIT_VFALL_Val << USBC_USBFSM_DRDSTATE_Pos)
#define USBC_USBFSM_DRDSTATE_A_VBUS_ERR (USBC_USBFSM_DRDSTATE_A_VBUS_ERR_Val << USBC_USBFSM_DRDSTATE_Pos)
#define USBC_USBFSM_DRDSTATE_A_WAIT_DISCHARGE (USBC_USBFSM_DRDSTATE_A_WAIT_DISCHARGE_Val << USBC_USBFSM_DRDSTATE_Pos)
#define USBC_USBFSM_DRDSTATE_B_IDLE (USBC_USBFSM_DRDSTATE_B_IDLE_Val << USBC_USBFSM_DRDSTATE_Pos)
#define USBC_USBFSM_DRDSTATE_B_PERIPHERAL (USBC_USBFSM_DRDSTATE_B_PERIPHERAL_Val << USBC_USBFSM_DRDSTATE_Pos)
#define USBC_USBFSM_DRDSTATE_B_WAIT_BEGIN_HNP (USBC_USBFSM_DRDSTATE_B_WAIT_BEGIN_HNP_Val << USBC_USBFSM_DRDSTATE_Pos)
#define USBC_USBFSM_DRDSTATE_B_WAIT_DISCHARGE (USBC_USBFSM_DRDSTATE_B_WAIT_DISCHARGE_Val << USBC_USBFSM_DRDSTATE_Pos)
#define USBC_USBFSM_DRDSTATE_B_WAIT_ACON (USBC_USBFSM_DRDSTATE_B_WAIT_ACON_Val << USBC_USBFSM_DRDSTATE_Pos)
#define USBC_USBFSM_DRDSTATE_B_HOST (USBC_USBFSM_DRDSTATE_B_HOST_Val << USBC_USBFSM_DRDSTATE_Pos)
#define USBC_USBFSM_DRDSTATE_B_SRP_INIT (USBC_USBFSM_DRDSTATE_B_SRP_INIT_Val << USBC_USBFSM_DRDSTATE_Pos)
#define USBC_USBFSM_MASK            _U_(0x0000000F) /**< \brief (USBC_USBFSM) MASK Register */

/* -------- USBC_UDESC : (USBC Offset: 0x830) (R/W 32) Endpoint descriptor table -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t UDESCA:32;        /*!< bit:  0..31  USB Descriptor Address             */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} USBC_UDESC_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define USBC_UDESC_OFFSET           0x830        /**< \brief (USBC_UDESC offset) Endpoint descriptor table */
#define USBC_UDESC_RESETVALUE       _U_(0x00000000); /**< \brief (USBC_UDESC reset_value) Endpoint descriptor table */

#define USBC_UDESC_UDESCA_Pos       0            /**< \brief (USBC_UDESC) USB Descriptor Address */
#define USBC_UDESC_UDESCA_Msk       (_U_(0xFFFFFFFF) << USBC_UDESC_UDESCA_Pos)
#define USBC_UDESC_UDESCA(value)    (USBC_UDESC_UDESCA_Msk & ((value) << USBC_UDESC_UDESCA_Pos))
#define USBC_UDESC_MASK             _U_(0xFFFFFFFF) /**< \brief (USBC_UDESC) MASK Register */

/** \brief USBC hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {
  __IO uint32_t UDCON;       /**< \brief Offset: 0x000 (R/W 32) Device General Control Register */
  __I  uint32_t UDINT;       /**< \brief Offset: 0x004 (R/  32) Device Global Interupt Register */
  __O  uint32_t UDINTCLR;    /**< \brief Offset: 0x008 ( /W 32) Device Global Interrupt Clear Register */
  __O  uint32_t UDINTSET;    /**< \brief Offset: 0x00C ( /W 32) Device Global Interrupt Set Regsiter */
  __I  uint32_t UDINTE;      /**< \brief Offset: 0x010 (R/  32) Device Global Interrupt Enable Register */
  __O  uint32_t UDINTECLR;   /**< \brief Offset: 0x014 ( /W 32) Device Global Interrupt Enable Clear Register */
  __O  uint32_t UDINTESET;   /**< \brief Offset: 0x018 ( /W 32) Device Global Interrupt Enable Set Register */
  __IO uint32_t UERST;       /**< \brief Offset: 0x01C (R/W 32) Endpoint Enable/Reset Register */
  __I  uint32_t UDFNUM;      /**< \brief Offset: 0x020 (R/  32) Device Frame Number Register */
       RoReg8   Reserved1[0xDC];
  __IO uint32_t UECFG[8];    /**< \brief Offset: 0x100 (R/W 32) Endpoint Configuration Register */
       RoReg8   Reserved2[0x10];
  __I  uint32_t UESTA[8];    /**< \brief Offset: 0x130 (R/  32) Endpoint Status Register */
       RoReg8   Reserved3[0x10];
  __O  uint32_t UESTACLR[8]; /**< \brief Offset: 0x160 ( /W 32) Endpoint Status Clear Register */
       RoReg8   Reserved4[0x10];
  __O  uint32_t UESTASET[8]; /**< \brief Offset: 0x190 ( /W 32) Endpoint Status Set Register */
       RoReg8   Reserved5[0x10];
  __I  uint32_t UECON[8];    /**< \brief Offset: 0x1C0 (R/  32) Endpoint Control Register */
       RoReg8   Reserved6[0x10];
  __O  uint32_t UECONSET[8]; /**< \brief Offset: 0x1F0 ( /W 32) Endpoint Control Set Register */
       RoReg8   Reserved7[0x10];
  __O  uint32_t UECONCLR[8]; /**< \brief Offset: 0x220 ( /W 32) Endpoint Control Clear Register */
       RoReg8   Reserved8[0x1C0];
  __IO uint32_t UHCON;       /**< \brief Offset: 0x400 (R/W 32) Host General Control Register */
  __I  uint32_t UHINT;       /**< \brief Offset: 0x404 (R/  32) Host Global Interrupt Register */
  __O  uint32_t UHINTCLR;    /**< \brief Offset: 0x408 ( /W 32) Host Global Interrrupt Clear Register */
  __O  uint32_t UHINTSET;    /**< \brief Offset: 0x40C ( /W 32) Host Global Interrupt Set Register */
  __I  uint32_t UHINTE;      /**< \brief Offset: 0x410 (R/  32) Host Global Interrupt Enable Register */
  __O  uint32_t UHINTECLR;   /**< \brief Offset: 0x414 ( /W 32) Host Global Interrupt Enable Clear Register */
  __O  uint32_t UHINTESET;   /**< \brief Offset: 0x418 ( /W 32) Host Global Interrupt Enable Set Register */
  __IO uint32_t UPRST;       /**< \brief Offset: 0x41C (R/W 32) Pipe Reset Register */
  __IO uint32_t UHFNUM;      /**< \brief Offset: 0x420 (R/W 32) Host Frame Number Register */
  __IO uint32_t UHSOFC;      /**< \brief Offset: 0x424 (R/W 32) Host Start of Frame Control Register */
       RoReg8   Reserved9[0xD8];
  __IO uint32_t UPCFG[8];    /**< \brief Offset: 0x500 (R/W 32) Pipe Configuration Register */
       RoReg8   Reserved10[0x10];
  __I  uint32_t UPSTA[8];    /**< \brief Offset: 0x530 (R/  32) Pipe Status Register */
       RoReg8   Reserved11[0x10];
  __O  uint32_t UPSTACLR[8]; /**< \brief Offset: 0x560 ( /W 32) Pipe Status Clear Register */
       RoReg8   Reserved12[0x10];
  __O  uint32_t UPSTASET[8]; /**< \brief Offset: 0x590 ( /W 32) Pipe Status Set Register */
       RoReg8   Reserved13[0x10];
  __I  uint32_t UPCON[8];    /**< \brief Offset: 0x5C0 (R/  32) Pipe Control Register */
       RoReg8   Reserved14[0x10];
  __O  uint32_t UPCONSET[8]; /**< \brief Offset: 0x5F0 ( /W 32) Pipe Control Set Register */
       RoReg8   Reserved15[0x10];
  __O  uint32_t UPCONCLR[8]; /**< \brief Offset: 0x620 ( /W 32) Pipe Control Clear Register */
       RoReg8   Reserved16[0x10];
  __IO uint32_t UPINRQ[8];   /**< \brief Offset: 0x650 (R/W 32) Pipe In Request */
       RoReg8   Reserved17[0x190];
  __IO uint32_t USBCON;      /**< \brief Offset: 0x800 (R/W 32) General Control Register */
  __I  uint32_t USBSTA;      /**< \brief Offset: 0x804 (R/  32) General Status Register */
  __O  uint32_t USBSTACLR;   /**< \brief Offset: 0x808 ( /W 32) General Status Clear Register */
  __O  uint32_t USBSTASET;   /**< \brief Offset: 0x80C ( /W 32) General Status Set Register */
       RoReg8   Reserved18[0x8];
  __I  uint32_t UVERS;       /**< \brief Offset: 0x818 (R/  32) IP Version Register */
  __I  uint32_t UFEATURES;   /**< \brief Offset: 0x81C (R/  32) IP Features Register */
  __I  uint32_t UADDRSIZE;   /**< \brief Offset: 0x820 (R/  32) IP PB address size Register */
  __I  uint32_t UNAME1;      /**< \brief Offset: 0x824 (R/  32) IP Name Part One: HUSB */
  __I  uint32_t UNAME2;      /**< \brief Offset: 0x828 (R/  32) IP Name Part Two: HOST */
  __I  uint32_t USBFSM;      /**< \brief Offset: 0x82C (R/  32) USB internal finite state machine */
  __IO uint32_t UDESC;       /**< \brief Offset: 0x830 (R/W 32) Endpoint descriptor table */
} Usbc;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAM4L_USBC_COMPONENT_ */
