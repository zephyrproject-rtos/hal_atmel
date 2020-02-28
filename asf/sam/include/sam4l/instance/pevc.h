/**
 * \file
 *
 * \brief Instance description for PEVC
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

#ifndef _SAM4L_PEVC_INSTANCE_
#define _SAM4L_PEVC_INSTANCE_

/* ========== Register definition for PEVC peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_PEVC_CHSR              (0x400A6000) /**< \brief (PEVC) Channel Status Register */
#define REG_PEVC_CHER              (0x400A6004) /**< \brief (PEVC) Channel Enable Register */
#define REG_PEVC_CHDR              (0x400A6008) /**< \brief (PEVC) Channel Disable Register */
#define REG_PEVC_SEV               (0x400A6010) /**< \brief (PEVC) Software Event */
#define REG_PEVC_BUSY              (0x400A6014) /**< \brief (PEVC) Channel / User Busy */
#define REG_PEVC_TRIER             (0x400A6020) /**< \brief (PEVC) Trigger Interrupt Mask Enable Register */
#define REG_PEVC_TRIDR             (0x400A6024) /**< \brief (PEVC) Trigger Interrupt Mask Disable Register */
#define REG_PEVC_TRIMR             (0x400A6028) /**< \brief (PEVC) Trigger Interrupt Mask Register */
#define REG_PEVC_TRSR              (0x400A6030) /**< \brief (PEVC) Trigger Status Register */
#define REG_PEVC_TRSCR             (0x400A6034) /**< \brief (PEVC) Trigger Status Clear Register */
#define REG_PEVC_OVIER             (0x400A6040) /**< \brief (PEVC) Overrun Interrupt Mask Enable Register */
#define REG_PEVC_OVIDR             (0x400A6044) /**< \brief (PEVC) Overrun Interrupt Mask Disable Register */
#define REG_PEVC_OVIMR             (0x400A6048) /**< \brief (PEVC) Overrun Interrupt Mask Register */
#define REG_PEVC_OVSR              (0x400A6050) /**< \brief (PEVC) Overrun Status Register */
#define REG_PEVC_OVSCR             (0x400A6054) /**< \brief (PEVC) Overrun Status Clear Register */
#define REG_PEVC_CHMX0             (0x400A6100) /**< \brief (PEVC) Channel Multiplexer 0 */
#define REG_PEVC_CHMX1             (0x400A6104) /**< \brief (PEVC) Channel Multiplexer 1 */
#define REG_PEVC_CHMX2             (0x400A6108) /**< \brief (PEVC) Channel Multiplexer 2 */
#define REG_PEVC_CHMX3             (0x400A610C) /**< \brief (PEVC) Channel Multiplexer 3 */
#define REG_PEVC_CHMX4             (0x400A6110) /**< \brief (PEVC) Channel Multiplexer 4 */
#define REG_PEVC_CHMX5             (0x400A6114) /**< \brief (PEVC) Channel Multiplexer 5 */
#define REG_PEVC_CHMX6             (0x400A6118) /**< \brief (PEVC) Channel Multiplexer 6 */
#define REG_PEVC_CHMX7             (0x400A611C) /**< \brief (PEVC) Channel Multiplexer 7 */
#define REG_PEVC_CHMX8             (0x400A6120) /**< \brief (PEVC) Channel Multiplexer 8 */
#define REG_PEVC_CHMX9             (0x400A6124) /**< \brief (PEVC) Channel Multiplexer 9 */
#define REG_PEVC_CHMX10            (0x400A6128) /**< \brief (PEVC) Channel Multiplexer 10 */
#define REG_PEVC_CHMX11            (0x400A612C) /**< \brief (PEVC) Channel Multiplexer 11 */
#define REG_PEVC_CHMX12            (0x400A6130) /**< \brief (PEVC) Channel Multiplexer 12 */
#define REG_PEVC_CHMX13            (0x400A6134) /**< \brief (PEVC) Channel Multiplexer 13 */
#define REG_PEVC_CHMX14            (0x400A6138) /**< \brief (PEVC) Channel Multiplexer 14 */
#define REG_PEVC_CHMX15            (0x400A613C) /**< \brief (PEVC) Channel Multiplexer 15 */
#define REG_PEVC_CHMX16            (0x400A6140) /**< \brief (PEVC) Channel Multiplexer 16 */
#define REG_PEVC_CHMX17            (0x400A6144) /**< \brief (PEVC) Channel Multiplexer 17 */
#define REG_PEVC_CHMX18            (0x400A6148) /**< \brief (PEVC) Channel Multiplexer 18 */
#define REG_PEVC_EVS0              (0x400A6200) /**< \brief (PEVC) Event Shaper 0 */
#define REG_PEVC_EVS1              (0x400A6204) /**< \brief (PEVC) Event Shaper 1 */
#define REG_PEVC_EVS2              (0x400A6208) /**< \brief (PEVC) Event Shaper 2 */
#define REG_PEVC_EVS3              (0x400A620C) /**< \brief (PEVC) Event Shaper 3 */
#define REG_PEVC_EVS4              (0x400A6210) /**< \brief (PEVC) Event Shaper 4 */
#define REG_PEVC_EVS5              (0x400A6214) /**< \brief (PEVC) Event Shaper 5 */
#define REG_PEVC_EVS6              (0x400A6218) /**< \brief (PEVC) Event Shaper 6 */
#define REG_PEVC_EVS7              (0x400A621C) /**< \brief (PEVC) Event Shaper 7 */
#define REG_PEVC_EVS8              (0x400A6220) /**< \brief (PEVC) Event Shaper 8 */
#define REG_PEVC_EVS9              (0x400A6224) /**< \brief (PEVC) Event Shaper 9 */
#define REG_PEVC_EVS10             (0x400A6228) /**< \brief (PEVC) Event Shaper 10 */
#define REG_PEVC_EVS11             (0x400A622C) /**< \brief (PEVC) Event Shaper 11 */
#define REG_PEVC_EVS12             (0x400A6230) /**< \brief (PEVC) Event Shaper 12 */
#define REG_PEVC_EVS13             (0x400A6234) /**< \brief (PEVC) Event Shaper 13 */
#define REG_PEVC_EVS14             (0x400A6238) /**< \brief (PEVC) Event Shaper 14 */
#define REG_PEVC_EVS15             (0x400A623C) /**< \brief (PEVC) Event Shaper 15 */
#define REG_PEVC_EVS16             (0x400A6240) /**< \brief (PEVC) Event Shaper 16 */
#define REG_PEVC_EVS17             (0x400A6244) /**< \brief (PEVC) Event Shaper 17 */
#define REG_PEVC_EVS18             (0x400A6248) /**< \brief (PEVC) Event Shaper 18 */
#define REG_PEVC_EVS19             (0x400A624C) /**< \brief (PEVC) Event Shaper 19 */
#define REG_PEVC_EVS20             (0x400A6250) /**< \brief (PEVC) Event Shaper 20 */
#define REG_PEVC_EVS21             (0x400A6254) /**< \brief (PEVC) Event Shaper 21 */
#define REG_PEVC_EVS22             (0x400A6258) /**< \brief (PEVC) Event Shaper 22 */
#define REG_PEVC_EVS23             (0x400A625C) /**< \brief (PEVC) Event Shaper 23 */
#define REG_PEVC_EVS24             (0x400A6260) /**< \brief (PEVC) Event Shaper 24 */
#define REG_PEVC_EVS25             (0x400A6264) /**< \brief (PEVC) Event Shaper 25 */
#define REG_PEVC_EVS26             (0x400A6268) /**< \brief (PEVC) Event Shaper 26 */
#define REG_PEVC_EVS27             (0x400A626C) /**< \brief (PEVC) Event Shaper 27 */
#define REG_PEVC_EVS28             (0x400A6270) /**< \brief (PEVC) Event Shaper 28 */
#define REG_PEVC_EVS29             (0x400A6274) /**< \brief (PEVC) Event Shaper 29 */
#define REG_PEVC_EVS30             (0x400A6278) /**< \brief (PEVC) Event Shaper 30 */
#define REG_PEVC_IGFDR             (0x400A6300) /**< \brief (PEVC) Input Glitch Filter Divider Register */
#define REG_PEVC_PARAMETER         (0x400A63F8) /**< \brief (PEVC) Parameter */
#define REG_PEVC_VERSION           (0x400A63FC) /**< \brief (PEVC) Version */
#else
#define REG_PEVC_CHSR              (*(RoReg  *)0x400A6000UL) /**< \brief (PEVC) Channel Status Register */
#define REG_PEVC_CHER              (*(WoReg  *)0x400A6004UL) /**< \brief (PEVC) Channel Enable Register */
#define REG_PEVC_CHDR              (*(WoReg  *)0x400A6008UL) /**< \brief (PEVC) Channel Disable Register */
#define REG_PEVC_SEV               (*(WoReg  *)0x400A6010UL) /**< \brief (PEVC) Software Event */
#define REG_PEVC_BUSY              (*(RoReg  *)0x400A6014UL) /**< \brief (PEVC) Channel / User Busy */
#define REG_PEVC_TRIER             (*(WoReg  *)0x400A6020UL) /**< \brief (PEVC) Trigger Interrupt Mask Enable Register */
#define REG_PEVC_TRIDR             (*(WoReg  *)0x400A6024UL) /**< \brief (PEVC) Trigger Interrupt Mask Disable Register */
#define REG_PEVC_TRIMR             (*(RoReg  *)0x400A6028UL) /**< \brief (PEVC) Trigger Interrupt Mask Register */
#define REG_PEVC_TRSR              (*(RoReg  *)0x400A6030UL) /**< \brief (PEVC) Trigger Status Register */
#define REG_PEVC_TRSCR             (*(WoReg  *)0x400A6034UL) /**< \brief (PEVC) Trigger Status Clear Register */
#define REG_PEVC_OVIER             (*(WoReg  *)0x400A6040UL) /**< \brief (PEVC) Overrun Interrupt Mask Enable Register */
#define REG_PEVC_OVIDR             (*(WoReg  *)0x400A6044UL) /**< \brief (PEVC) Overrun Interrupt Mask Disable Register */
#define REG_PEVC_OVIMR             (*(RoReg  *)0x400A6048UL) /**< \brief (PEVC) Overrun Interrupt Mask Register */
#define REG_PEVC_OVSR              (*(RoReg  *)0x400A6050UL) /**< \brief (PEVC) Overrun Status Register */
#define REG_PEVC_OVSCR             (*(WoReg  *)0x400A6054UL) /**< \brief (PEVC) Overrun Status Clear Register */
#define REG_PEVC_CHMX0             (*(RwReg  *)0x400A6100UL) /**< \brief (PEVC) Channel Multiplexer 0 */
#define REG_PEVC_CHMX1             (*(RwReg  *)0x400A6104UL) /**< \brief (PEVC) Channel Multiplexer 1 */
#define REG_PEVC_CHMX2             (*(RwReg  *)0x400A6108UL) /**< \brief (PEVC) Channel Multiplexer 2 */
#define REG_PEVC_CHMX3             (*(RwReg  *)0x400A610CUL) /**< \brief (PEVC) Channel Multiplexer 3 */
#define REG_PEVC_CHMX4             (*(RwReg  *)0x400A6110UL) /**< \brief (PEVC) Channel Multiplexer 4 */
#define REG_PEVC_CHMX5             (*(RwReg  *)0x400A6114UL) /**< \brief (PEVC) Channel Multiplexer 5 */
#define REG_PEVC_CHMX6             (*(RwReg  *)0x400A6118UL) /**< \brief (PEVC) Channel Multiplexer 6 */
#define REG_PEVC_CHMX7             (*(RwReg  *)0x400A611CUL) /**< \brief (PEVC) Channel Multiplexer 7 */
#define REG_PEVC_CHMX8             (*(RwReg  *)0x400A6120UL) /**< \brief (PEVC) Channel Multiplexer 8 */
#define REG_PEVC_CHMX9             (*(RwReg  *)0x400A6124UL) /**< \brief (PEVC) Channel Multiplexer 9 */
#define REG_PEVC_CHMX10            (*(RwReg  *)0x400A6128UL) /**< \brief (PEVC) Channel Multiplexer 10 */
#define REG_PEVC_CHMX11            (*(RwReg  *)0x400A612CUL) /**< \brief (PEVC) Channel Multiplexer 11 */
#define REG_PEVC_CHMX12            (*(RwReg  *)0x400A6130UL) /**< \brief (PEVC) Channel Multiplexer 12 */
#define REG_PEVC_CHMX13            (*(RwReg  *)0x400A6134UL) /**< \brief (PEVC) Channel Multiplexer 13 */
#define REG_PEVC_CHMX14            (*(RwReg  *)0x400A6138UL) /**< \brief (PEVC) Channel Multiplexer 14 */
#define REG_PEVC_CHMX15            (*(RwReg  *)0x400A613CUL) /**< \brief (PEVC) Channel Multiplexer 15 */
#define REG_PEVC_CHMX16            (*(RwReg  *)0x400A6140UL) /**< \brief (PEVC) Channel Multiplexer 16 */
#define REG_PEVC_CHMX17            (*(RwReg  *)0x400A6144UL) /**< \brief (PEVC) Channel Multiplexer 17 */
#define REG_PEVC_CHMX18            (*(RwReg  *)0x400A6148UL) /**< \brief (PEVC) Channel Multiplexer 18 */
#define REG_PEVC_EVS0              (*(RwReg  *)0x400A6200UL) /**< \brief (PEVC) Event Shaper 0 */
#define REG_PEVC_EVS1              (*(RwReg  *)0x400A6204UL) /**< \brief (PEVC) Event Shaper 1 */
#define REG_PEVC_EVS2              (*(RwReg  *)0x400A6208UL) /**< \brief (PEVC) Event Shaper 2 */
#define REG_PEVC_EVS3              (*(RwReg  *)0x400A620CUL) /**< \brief (PEVC) Event Shaper 3 */
#define REG_PEVC_EVS4              (*(RwReg  *)0x400A6210UL) /**< \brief (PEVC) Event Shaper 4 */
#define REG_PEVC_EVS5              (*(RwReg  *)0x400A6214UL) /**< \brief (PEVC) Event Shaper 5 */
#define REG_PEVC_EVS6              (*(RwReg  *)0x400A6218UL) /**< \brief (PEVC) Event Shaper 6 */
#define REG_PEVC_EVS7              (*(RwReg  *)0x400A621CUL) /**< \brief (PEVC) Event Shaper 7 */
#define REG_PEVC_EVS8              (*(RwReg  *)0x400A6220UL) /**< \brief (PEVC) Event Shaper 8 */
#define REG_PEVC_EVS9              (*(RwReg  *)0x400A6224UL) /**< \brief (PEVC) Event Shaper 9 */
#define REG_PEVC_EVS10             (*(RwReg  *)0x400A6228UL) /**< \brief (PEVC) Event Shaper 10 */
#define REG_PEVC_EVS11             (*(RwReg  *)0x400A622CUL) /**< \brief (PEVC) Event Shaper 11 */
#define REG_PEVC_EVS12             (*(RwReg  *)0x400A6230UL) /**< \brief (PEVC) Event Shaper 12 */
#define REG_PEVC_EVS13             (*(RwReg  *)0x400A6234UL) /**< \brief (PEVC) Event Shaper 13 */
#define REG_PEVC_EVS14             (*(RwReg  *)0x400A6238UL) /**< \brief (PEVC) Event Shaper 14 */
#define REG_PEVC_EVS15             (*(RwReg  *)0x400A623CUL) /**< \brief (PEVC) Event Shaper 15 */
#define REG_PEVC_EVS16             (*(RwReg  *)0x400A6240UL) /**< \brief (PEVC) Event Shaper 16 */
#define REG_PEVC_EVS17             (*(RwReg  *)0x400A6244UL) /**< \brief (PEVC) Event Shaper 17 */
#define REG_PEVC_EVS18             (*(RwReg  *)0x400A6248UL) /**< \brief (PEVC) Event Shaper 18 */
#define REG_PEVC_EVS19             (*(RwReg  *)0x400A624CUL) /**< \brief (PEVC) Event Shaper 19 */
#define REG_PEVC_EVS20             (*(RwReg  *)0x400A6250UL) /**< \brief (PEVC) Event Shaper 20 */
#define REG_PEVC_EVS21             (*(RwReg  *)0x400A6254UL) /**< \brief (PEVC) Event Shaper 21 */
#define REG_PEVC_EVS22             (*(RwReg  *)0x400A6258UL) /**< \brief (PEVC) Event Shaper 22 */
#define REG_PEVC_EVS23             (*(RwReg  *)0x400A625CUL) /**< \brief (PEVC) Event Shaper 23 */
#define REG_PEVC_EVS24             (*(RwReg  *)0x400A6260UL) /**< \brief (PEVC) Event Shaper 24 */
#define REG_PEVC_EVS25             (*(RwReg  *)0x400A6264UL) /**< \brief (PEVC) Event Shaper 25 */
#define REG_PEVC_EVS26             (*(RwReg  *)0x400A6268UL) /**< \brief (PEVC) Event Shaper 26 */
#define REG_PEVC_EVS27             (*(RwReg  *)0x400A626CUL) /**< \brief (PEVC) Event Shaper 27 */
#define REG_PEVC_EVS28             (*(RwReg  *)0x400A6270UL) /**< \brief (PEVC) Event Shaper 28 */
#define REG_PEVC_EVS29             (*(RwReg  *)0x400A6274UL) /**< \brief (PEVC) Event Shaper 29 */
#define REG_PEVC_EVS30             (*(RwReg  *)0x400A6278UL) /**< \brief (PEVC) Event Shaper 30 */
#define REG_PEVC_IGFDR             (*(RwReg  *)0x400A6300UL) /**< \brief (PEVC) Input Glitch Filter Divider Register */
#define REG_PEVC_PARAMETER         (*(RoReg  *)0x400A63F8UL) /**< \brief (PEVC) Parameter */
#define REG_PEVC_VERSION           (*(RoReg  *)0x400A63FCUL) /**< \brief (PEVC) Version */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for PEVC peripheral ========== */
#define PEVC_EVIN_BITS              31      
#define PEVC_GCLK_NUM_0             8
#define PEVC_GCLK_NUM_1             9
#define PEVC_GCLK_NUM_LSB           8
#define PEVC_GCLK_NUM_MSB           9
#define PEVC_GCLK_NUM_SIZE          2
#define PEVC_PADS_BITS              4       
#define PEVC_TRIGOUT_BITS           19      

// GENERATORS
#define PEVC_ID_GEN_PAD_0          0 /* EVS IGF */
#define PEVC_ID_GEN_PAD_1          1 /* EVS IGF */
#define PEVC_ID_GEN_PAD_2          2 /* EVS IGF */
#define PEVC_ID_GEN_PAD_3          3 /* EVS IGF */
#define PEVC_ID_GEN_GCLK_0         4 /* EVS */
#define PEVC_ID_GEN_GCLK_1         5 /* EVS */
#define PEVC_ID_GEN_AST_0          6 /* EVS */
#define PEVC_ID_GEN_AST_1          7 /* EVS */
#define PEVC_ID_GEN_AST_2          8 /* EVS */
#define PEVC_ID_GEN_AST_3          9 /* EVS */
#define PEVC_ID_GEN_AST_4          10 /* EVS */
#define PEVC_ID_GEN_ACIFC_CHANNEL_POSITIVE_0 11
#define PEVC_ID_GEN_ACIFC_CHANNEL_POSITIVE_1 12
#define PEVC_ID_GEN_ACIFC_CHANNEL_POSITIVE_2 13
#define PEVC_ID_GEN_ACIFC_CHANNEL_POSITIVE_3 14
#define PEVC_ID_GEN_ACIFC_CHANNEL_NEGATIVE_0 15
#define PEVC_ID_GEN_ACIFC_CHANNEL_NEGATIVE_1 16
#define PEVC_ID_GEN_ACIFC_CHANNEL_NEGATIVE_2 17
#define PEVC_ID_GEN_ACIFC_CHANNEL_NEGATIVE_3 18
#define PEVC_ID_GEN_ACIFC_WINDOW_0 19
#define PEVC_ID_GEN_ACIFC_WINDOW_1 20
#define PEVC_ID_GEN_TC0_A0         21 /* EVS */
#define PEVC_ID_GEN_TC0_A1         22 /* EVS */
#define PEVC_ID_GEN_TC0_A2         23 /* EVS */
#define PEVC_ID_GEN_TC0_B0         24 /* EVS */
#define PEVC_ID_GEN_TC0_B1         25 /* EVS */
#define PEVC_ID_GEN_TC0_B2         26 /* EVS */
#define PEVC_ID_GEN_ADCIFE_WM      27
#define PEVC_ID_GEN_ADCIFE_EOC     28
#define PEVC_ID_GEN_VREGIFG_SSWRDY 29
#define PEVC_ID_GEN_PICOUART       30 /* EVS */

#define PEVC_CHMX0_EVMX_SIZE_IMPL 5
#define PEVC_CHMX0_EVMX_MASK_IMPL 0x0000001F

#define PEVC_EVS_IMPL 0b1000111111000000000011111111111
#define PEVC_IGF_IMPL 0b0000000000000000000000000001111

// USERS / CHANNELS
#define PEVC_ID_USER_PDCA_0        0
#define PEVC_ID_USER_PDCA_1        1
#define PEVC_ID_USER_PDCA_2        2
#define PEVC_ID_USER_PDCA_3        3
#define PEVC_ID_USER_ADCIFE_SOC    4
#define PEVC_ID_USER_DACC_CONV     5
#define PEVC_ID_USER_CATB          6
#define PEVC_ID_USER_TC1_A0        8
#define PEVC_ID_USER_TC1_A1        9
#define PEVC_ID_USER_TC1_A2        10
#define PEVC_ID_USER_TC1_B0        11
#define PEVC_ID_USER_TC1_B1        12
#define PEVC_ID_USER_TC1_B2        13
#define PEVC_ID_USER_ACIFC         14
#define PEVC_ID_USER_PARC_START    15
#define PEVC_ID_USER_PARC_STOP     16
#define PEVC_ID_USER_VREGIFG_SSWREQ 17
#define PEVC_ID_USER_VREGIFG_SSWDIS 18

#endif /* _SAM4L_PEVC_INSTANCE_ */
