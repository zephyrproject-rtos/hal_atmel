/**
 * \file
 *
 * \brief Instance description for GPIO
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

#ifndef _SAM4L_GPIO_INSTANCE_
#define _SAM4L_GPIO_INSTANCE_

/* ========== Register definition for GPIO peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_GPIO_GPER0             (0x400E1000) /**< \brief (GPIO) GPIO Enable Register 0 */
#define REG_GPIO_GPERS0            (0x400E1004) /**< \brief (GPIO) GPIO Enable Register - Set 0 */
#define REG_GPIO_GPERC0            (0x400E1008) /**< \brief (GPIO) GPIO Enable Register - Clear 0 */
#define REG_GPIO_GPERT0            (0x400E100C) /**< \brief (GPIO) GPIO Enable Register - Toggle 0 */
#define REG_GPIO_PMR00             (0x400E1010) /**< \brief (GPIO) Peripheral Mux Register 0 0 */
#define REG_GPIO_PMR0S0            (0x400E1014) /**< \brief (GPIO) Peripheral Mux Register 0 - Set 0 */
#define REG_GPIO_PMR0C0            (0x400E1018) /**< \brief (GPIO) Peripheral Mux Register 0 - Clear 0 */
#define REG_GPIO_PMR0T0            (0x400E101C) /**< \brief (GPIO) Peripheral Mux Register 0 - Toggle 0 */
#define REG_GPIO_PMR10             (0x400E1020) /**< \brief (GPIO) Peripheral Mux Register 1 0 */
#define REG_GPIO_PMR1S0            (0x400E1024) /**< \brief (GPIO) Peripheral Mux Register 1 - Set 0 */
#define REG_GPIO_PMR1C0            (0x400E1028) /**< \brief (GPIO) Peripheral Mux Register 1 - Clear 0 */
#define REG_GPIO_PMR1T0            (0x400E102C) /**< \brief (GPIO) Peripheral Mux Register 1 - Toggle 0 */
#define REG_GPIO_PMR20             (0x400E1030) /**< \brief (GPIO) Peripheral Mux Register 2 0 */
#define REG_GPIO_PMR2S0            (0x400E1034) /**< \brief (GPIO) Peripheral Mux Register 2 - Set 0 */
#define REG_GPIO_PMR2C0            (0x400E1038) /**< \brief (GPIO) Peripheral Mux Register 2 - Clear 0 */
#define REG_GPIO_PMR2T0            (0x400E103C) /**< \brief (GPIO) Peripheral Mux Register 2 - Toggle 0 */
#define REG_GPIO_ODER0             (0x400E1040) /**< \brief (GPIO) Output Driver Enable Register 0 */
#define REG_GPIO_ODERS0            (0x400E1044) /**< \brief (GPIO) Output Driver Enable Register - Set 0 */
#define REG_GPIO_ODERC0            (0x400E1048) /**< \brief (GPIO) Output Driver Enable Register - Clear 0 */
#define REG_GPIO_ODERT0            (0x400E104C) /**< \brief (GPIO) Output Driver Enable Register - Toggle 0 */
#define REG_GPIO_OVR0              (0x400E1050) /**< \brief (GPIO) Output Value Register 0 */
#define REG_GPIO_OVRS0             (0x400E1054) /**< \brief (GPIO) Output Value Register - Set 0 */
#define REG_GPIO_OVRC0             (0x400E1058) /**< \brief (GPIO) Output Value Register - Clear 0 */
#define REG_GPIO_OVRT0             (0x400E105C) /**< \brief (GPIO) Output Value Register - Toggle 0 */
#define REG_GPIO_PVR0              (0x400E1060) /**< \brief (GPIO) Pin Value Register 0 */
#define REG_GPIO_PUER0             (0x400E1070) /**< \brief (GPIO) Pull-up Enable Register 0 */
#define REG_GPIO_PUERS0            (0x400E1074) /**< \brief (GPIO) Pull-up Enable Register - Set 0 */
#define REG_GPIO_PUERC0            (0x400E1078) /**< \brief (GPIO) Pull-up Enable Register - Clear 0 */
#define REG_GPIO_PUERT0            (0x400E107C) /**< \brief (GPIO) Pull-up Enable Register - Toggle 0 */
#define REG_GPIO_PDER0             (0x400E1080) /**< \brief (GPIO) Pull-down Enable Register 0 */
#define REG_GPIO_PDERS0            (0x400E1084) /**< \brief (GPIO) Pull-down Enable Register - Set 0 */
#define REG_GPIO_PDERC0            (0x400E1088) /**< \brief (GPIO) Pull-down Enable Register - Clear 0 */
#define REG_GPIO_PDERT0            (0x400E108C) /**< \brief (GPIO) Pull-down Enable Register - Toggle 0 */
#define REG_GPIO_IER0              (0x400E1090) /**< \brief (GPIO) Interrupt Enable Register 0 */
#define REG_GPIO_IERS0             (0x400E1094) /**< \brief (GPIO) Interrupt Enable Register - Set 0 */
#define REG_GPIO_IERC0             (0x400E1098) /**< \brief (GPIO) Interrupt Enable Register - Clear 0 */
#define REG_GPIO_IERT0             (0x400E109C) /**< \brief (GPIO) Interrupt Enable Register - Toggle 0 */
#define REG_GPIO_IMR00             (0x400E10A0) /**< \brief (GPIO) Interrupt Mode Register 0 0 */
#define REG_GPIO_IMR0S0            (0x400E10A4) /**< \brief (GPIO) Interrupt Mode Register 0 - Set 0 */
#define REG_GPIO_IMR0C0            (0x400E10A8) /**< \brief (GPIO) Interrupt Mode Register 0 - Clear 0 */
#define REG_GPIO_IMR0T0            (0x400E10AC) /**< \brief (GPIO) Interrupt Mode Register 0 - Toggle 0 */
#define REG_GPIO_IMR10             (0x400E10B0) /**< \brief (GPIO) Interrupt Mode Register 1 0 */
#define REG_GPIO_IMR1S0            (0x400E10B4) /**< \brief (GPIO) Interrupt Mode Register 1 - Set 0 */
#define REG_GPIO_IMR1C0            (0x400E10B8) /**< \brief (GPIO) Interrupt Mode Register 1 - Clear 0 */
#define REG_GPIO_IMR1T0            (0x400E10BC) /**< \brief (GPIO) Interrupt Mode Register 1 - Toggle 0 */
#define REG_GPIO_GFER0             (0x400E10C0) /**< \brief (GPIO) Glitch Filter Enable Register 0 */
#define REG_GPIO_GFERS0            (0x400E10C4) /**< \brief (GPIO) Glitch Filter Enable Register - Set 0 */
#define REG_GPIO_GFERC0            (0x400E10C8) /**< \brief (GPIO) Glitch Filter Enable Register - Clear 0 */
#define REG_GPIO_GFERT0            (0x400E10CC) /**< \brief (GPIO) Glitch Filter Enable Register - Toggle 0 */
#define REG_GPIO_IFR0              (0x400E10D0) /**< \brief (GPIO) Interrupt Flag Register 0 */
#define REG_GPIO_IFRC0             (0x400E10D8) /**< \brief (GPIO) Interrupt Flag Register - Clear 0 */
#define REG_GPIO_ODMER0            (0x400E10E0) /**< \brief (GPIO) Open Drain Mode Register 0 */
#define REG_GPIO_ODMERS0           (0x400E10E4) /**< \brief (GPIO) Open Drain Mode Register - Set 0 */
#define REG_GPIO_ODMERC0           (0x400E10E8) /**< \brief (GPIO) Open Drain Mode Register - Clear 0 */
#define REG_GPIO_ODMERT0           (0x400E10EC) /**< \brief (GPIO) Open Drain Mode Register - Toggle 0 */
#define REG_GPIO_ODCR00            (0x400E1100) /**< \brief (GPIO) Output Driving Capability Register 0 0 */
#define REG_GPIO_ODCR0S0           (0x400E1104) /**< \brief (GPIO) Output Driving Capability Register 0 - Set 0 */
#define REG_GPIO_ODCR0C0           (0x400E1108) /**< \brief (GPIO) Output Driving Capability Register 0 - Clear 0 */
#define REG_GPIO_ODCR0T0           (0x400E110C) /**< \brief (GPIO) Output Driving Capability Register 0 - Toggle 0 */
#define REG_GPIO_ODCR10            (0x400E1110) /**< \brief (GPIO) Output Driving Capability Register 1 0 */
#define REG_GPIO_ODCR1S0           (0x400E1114) /**< \brief (GPIO) Output Driving Capability Register 1 - Set 0 */
#define REG_GPIO_ODCR1C0           (0x400E1118) /**< \brief (GPIO) Output Driving Capability Register 1 - Clear 0 */
#define REG_GPIO_ODCR1T0           (0x400E111C) /**< \brief (GPIO) Output Driving Capability Register 1 - Toggle 0 */
#define REG_GPIO_OSRR00            (0x400E1130) /**< \brief (GPIO) Output Slew Rate Register 0 0 */
#define REG_GPIO_OSRR0S0           (0x400E1134) /**< \brief (GPIO) Output Slew Rate Register 0 - Set 0 */
#define REG_GPIO_OSRR0C0           (0x400E1138) /**< \brief (GPIO) Output Slew Rate Register 0 - Clear 0 */
#define REG_GPIO_OSRR0T0           (0x400E113C) /**< \brief (GPIO) Output Slew Rate Register 0 - Toggle 0 */
#define REG_GPIO_STER0             (0x400E1160) /**< \brief (GPIO) Schmitt Trigger Enable Register 0 */
#define REG_GPIO_STERS0            (0x400E1164) /**< \brief (GPIO) Schmitt Trigger Enable Register - Set 0 */
#define REG_GPIO_STERC0            (0x400E1168) /**< \brief (GPIO) Schmitt Trigger Enable Register - Clear 0 */
#define REG_GPIO_STERT0            (0x400E116C) /**< \brief (GPIO) Schmitt Trigger Enable Register - Toggle 0 */
#define REG_GPIO_EVER0             (0x400E1180) /**< \brief (GPIO) Event Enable Register 0 */
#define REG_GPIO_EVERS0            (0x400E1184) /**< \brief (GPIO) Event Enable Register - Set 0 */
#define REG_GPIO_EVERC0            (0x400E1188) /**< \brief (GPIO) Event Enable Register - Clear 0 */
#define REG_GPIO_EVERT0            (0x400E118C) /**< \brief (GPIO) Event Enable Register - Toggle 0 */
#define REG_GPIO_LOCK0             (0x400E11A0) /**< \brief (GPIO) Lock Register 0 */
#define REG_GPIO_LOCKS0            (0x400E11A4) /**< \brief (GPIO) Lock Register - Set 0 */
#define REG_GPIO_LOCKC0            (0x400E11A8) /**< \brief (GPIO) Lock Register - Clear 0 */
#define REG_GPIO_LOCKT0            (0x400E11AC) /**< \brief (GPIO) Lock Register - Toggle 0 */
#define REG_GPIO_UNLOCK0           (0x400E11E0) /**< \brief (GPIO) Unlock Register 0 */
#define REG_GPIO_ASR0              (0x400E11E4) /**< \brief (GPIO) Access Status Register 0 */
#define REG_GPIO_PARAMETER0        (0x400E11F8) /**< \brief (GPIO) Parameter Register 0 */
#define REG_GPIO_VERSION0          (0x400E11FC) /**< \brief (GPIO) Version Register 0 */
#define REG_GPIO_GPER1             (0x400E1200) /**< \brief (GPIO) GPIO Enable Register 1 */
#define REG_GPIO_GPERS1            (0x400E1204) /**< \brief (GPIO) GPIO Enable Register - Set 1 */
#define REG_GPIO_GPERC1            (0x400E1208) /**< \brief (GPIO) GPIO Enable Register - Clear 1 */
#define REG_GPIO_GPERT1            (0x400E120C) /**< \brief (GPIO) GPIO Enable Register - Toggle 1 */
#define REG_GPIO_PMR01             (0x400E1210) /**< \brief (GPIO) Peripheral Mux Register 0 1 */
#define REG_GPIO_PMR0S1            (0x400E1214) /**< \brief (GPIO) Peripheral Mux Register 0 - Set 1 */
#define REG_GPIO_PMR0C1            (0x400E1218) /**< \brief (GPIO) Peripheral Mux Register 0 - Clear 1 */
#define REG_GPIO_PMR0T1            (0x400E121C) /**< \brief (GPIO) Peripheral Mux Register 0 - Toggle 1 */
#define REG_GPIO_PMR11             (0x400E1220) /**< \brief (GPIO) Peripheral Mux Register 1 1 */
#define REG_GPIO_PMR1S1            (0x400E1224) /**< \brief (GPIO) Peripheral Mux Register 1 - Set 1 */
#define REG_GPIO_PMR1C1            (0x400E1228) /**< \brief (GPIO) Peripheral Mux Register 1 - Clear 1 */
#define REG_GPIO_PMR1T1            (0x400E122C) /**< \brief (GPIO) Peripheral Mux Register 1 - Toggle 1 */
#define REG_GPIO_PMR21             (0x400E1230) /**< \brief (GPIO) Peripheral Mux Register 2 1 */
#define REG_GPIO_PMR2S1            (0x400E1234) /**< \brief (GPIO) Peripheral Mux Register 2 - Set 1 */
#define REG_GPIO_PMR2C1            (0x400E1238) /**< \brief (GPIO) Peripheral Mux Register 2 - Clear 1 */
#define REG_GPIO_PMR2T1            (0x400E123C) /**< \brief (GPIO) Peripheral Mux Register 2 - Toggle 1 */
#define REG_GPIO_ODER1             (0x400E1240) /**< \brief (GPIO) Output Driver Enable Register 1 */
#define REG_GPIO_ODERS1            (0x400E1244) /**< \brief (GPIO) Output Driver Enable Register - Set 1 */
#define REG_GPIO_ODERC1            (0x400E1248) /**< \brief (GPIO) Output Driver Enable Register - Clear 1 */
#define REG_GPIO_ODERT1            (0x400E124C) /**< \brief (GPIO) Output Driver Enable Register - Toggle 1 */
#define REG_GPIO_OVR1              (0x400E1250) /**< \brief (GPIO) Output Value Register 1 */
#define REG_GPIO_OVRS1             (0x400E1254) /**< \brief (GPIO) Output Value Register - Set 1 */
#define REG_GPIO_OVRC1             (0x400E1258) /**< \brief (GPIO) Output Value Register - Clear 1 */
#define REG_GPIO_OVRT1             (0x400E125C) /**< \brief (GPIO) Output Value Register - Toggle 1 */
#define REG_GPIO_PVR1              (0x400E1260) /**< \brief (GPIO) Pin Value Register 1 */
#define REG_GPIO_PUER1             (0x400E1270) /**< \brief (GPIO) Pull-up Enable Register 1 */
#define REG_GPIO_PUERS1            (0x400E1274) /**< \brief (GPIO) Pull-up Enable Register - Set 1 */
#define REG_GPIO_PUERC1            (0x400E1278) /**< \brief (GPIO) Pull-up Enable Register - Clear 1 */
#define REG_GPIO_PUERT1            (0x400E127C) /**< \brief (GPIO) Pull-up Enable Register - Toggle 1 */
#define REG_GPIO_PDER1             (0x400E1280) /**< \brief (GPIO) Pull-down Enable Register 1 */
#define REG_GPIO_PDERS1            (0x400E1284) /**< \brief (GPIO) Pull-down Enable Register - Set 1 */
#define REG_GPIO_PDERC1            (0x400E1288) /**< \brief (GPIO) Pull-down Enable Register - Clear 1 */
#define REG_GPIO_PDERT1            (0x400E128C) /**< \brief (GPIO) Pull-down Enable Register - Toggle 1 */
#define REG_GPIO_IER1              (0x400E1290) /**< \brief (GPIO) Interrupt Enable Register 1 */
#define REG_GPIO_IERS1             (0x400E1294) /**< \brief (GPIO) Interrupt Enable Register - Set 1 */
#define REG_GPIO_IERC1             (0x400E1298) /**< \brief (GPIO) Interrupt Enable Register - Clear 1 */
#define REG_GPIO_IERT1             (0x400E129C) /**< \brief (GPIO) Interrupt Enable Register - Toggle 1 */
#define REG_GPIO_IMR01             (0x400E12A0) /**< \brief (GPIO) Interrupt Mode Register 0 1 */
#define REG_GPIO_IMR0S1            (0x400E12A4) /**< \brief (GPIO) Interrupt Mode Register 0 - Set 1 */
#define REG_GPIO_IMR0C1            (0x400E12A8) /**< \brief (GPIO) Interrupt Mode Register 0 - Clear 1 */
#define REG_GPIO_IMR0T1            (0x400E12AC) /**< \brief (GPIO) Interrupt Mode Register 0 - Toggle 1 */
#define REG_GPIO_IMR11             (0x400E12B0) /**< \brief (GPIO) Interrupt Mode Register 1 1 */
#define REG_GPIO_IMR1S1            (0x400E12B4) /**< \brief (GPIO) Interrupt Mode Register 1 - Set 1 */
#define REG_GPIO_IMR1C1            (0x400E12B8) /**< \brief (GPIO) Interrupt Mode Register 1 - Clear 1 */
#define REG_GPIO_IMR1T1            (0x400E12BC) /**< \brief (GPIO) Interrupt Mode Register 1 - Toggle 1 */
#define REG_GPIO_GFER1             (0x400E12C0) /**< \brief (GPIO) Glitch Filter Enable Register 1 */
#define REG_GPIO_GFERS1            (0x400E12C4) /**< \brief (GPIO) Glitch Filter Enable Register - Set 1 */
#define REG_GPIO_GFERC1            (0x400E12C8) /**< \brief (GPIO) Glitch Filter Enable Register - Clear 1 */
#define REG_GPIO_GFERT1            (0x400E12CC) /**< \brief (GPIO) Glitch Filter Enable Register - Toggle 1 */
#define REG_GPIO_IFR1              (0x400E12D0) /**< \brief (GPIO) Interrupt Flag Register 1 */
#define REG_GPIO_IFRC1             (0x400E12D8) /**< \brief (GPIO) Interrupt Flag Register - Clear 1 */
#define REG_GPIO_ODMER1            (0x400E12E0) /**< \brief (GPIO) Open Drain Mode Register 1 */
#define REG_GPIO_ODMERS1           (0x400E12E4) /**< \brief (GPIO) Open Drain Mode Register - Set 1 */
#define REG_GPIO_ODMERC1           (0x400E12E8) /**< \brief (GPIO) Open Drain Mode Register - Clear 1 */
#define REG_GPIO_ODMERT1           (0x400E12EC) /**< \brief (GPIO) Open Drain Mode Register - Toggle 1 */
#define REG_GPIO_ODCR01            (0x400E1300) /**< \brief (GPIO) Output Driving Capability Register 0 1 */
#define REG_GPIO_ODCR0S1           (0x400E1304) /**< \brief (GPIO) Output Driving Capability Register 0 - Set 1 */
#define REG_GPIO_ODCR0C1           (0x400E1308) /**< \brief (GPIO) Output Driving Capability Register 0 - Clear 1 */
#define REG_GPIO_ODCR0T1           (0x400E130C) /**< \brief (GPIO) Output Driving Capability Register 0 - Toggle 1 */
#define REG_GPIO_ODCR11            (0x400E1310) /**< \brief (GPIO) Output Driving Capability Register 1 1 */
#define REG_GPIO_ODCR1S1           (0x400E1314) /**< \brief (GPIO) Output Driving Capability Register 1 - Set 1 */
#define REG_GPIO_ODCR1C1           (0x400E1318) /**< \brief (GPIO) Output Driving Capability Register 1 - Clear 1 */
#define REG_GPIO_ODCR1T1           (0x400E131C) /**< \brief (GPIO) Output Driving Capability Register 1 - Toggle 1 */
#define REG_GPIO_OSRR01            (0x400E1330) /**< \brief (GPIO) Output Slew Rate Register 0 1 */
#define REG_GPIO_OSRR0S1           (0x400E1334) /**< \brief (GPIO) Output Slew Rate Register 0 - Set 1 */
#define REG_GPIO_OSRR0C1           (0x400E1338) /**< \brief (GPIO) Output Slew Rate Register 0 - Clear 1 */
#define REG_GPIO_OSRR0T1           (0x400E133C) /**< \brief (GPIO) Output Slew Rate Register 0 - Toggle 1 */
#define REG_GPIO_STER1             (0x400E1360) /**< \brief (GPIO) Schmitt Trigger Enable Register 1 */
#define REG_GPIO_STERS1            (0x400E1364) /**< \brief (GPIO) Schmitt Trigger Enable Register - Set 1 */
#define REG_GPIO_STERC1            (0x400E1368) /**< \brief (GPIO) Schmitt Trigger Enable Register - Clear 1 */
#define REG_GPIO_STERT1            (0x400E136C) /**< \brief (GPIO) Schmitt Trigger Enable Register - Toggle 1 */
#define REG_GPIO_EVER1             (0x400E1380) /**< \brief (GPIO) Event Enable Register 1 */
#define REG_GPIO_EVERS1            (0x400E1384) /**< \brief (GPIO) Event Enable Register - Set 1 */
#define REG_GPIO_EVERC1            (0x400E1388) /**< \brief (GPIO) Event Enable Register - Clear 1 */
#define REG_GPIO_EVERT1            (0x400E138C) /**< \brief (GPIO) Event Enable Register - Toggle 1 */
#define REG_GPIO_LOCK1             (0x400E13A0) /**< \brief (GPIO) Lock Register 1 */
#define REG_GPIO_LOCKS1            (0x400E13A4) /**< \brief (GPIO) Lock Register - Set 1 */
#define REG_GPIO_LOCKC1            (0x400E13A8) /**< \brief (GPIO) Lock Register - Clear 1 */
#define REG_GPIO_LOCKT1            (0x400E13AC) /**< \brief (GPIO) Lock Register - Toggle 1 */
#define REG_GPIO_UNLOCK1           (0x400E13E0) /**< \brief (GPIO) Unlock Register 1 */
#define REG_GPIO_ASR1              (0x400E13E4) /**< \brief (GPIO) Access Status Register 1 */
#define REG_GPIO_PARAMETER1        (0x400E13F8) /**< \brief (GPIO) Parameter Register 1 */
#define REG_GPIO_VERSION1          (0x400E13FC) /**< \brief (GPIO) Version Register 1 */
#define REG_GPIO_GPER2             (0x400E1400) /**< \brief (GPIO) GPIO Enable Register 2 */
#define REG_GPIO_GPERS2            (0x400E1404) /**< \brief (GPIO) GPIO Enable Register - Set 2 */
#define REG_GPIO_GPERC2            (0x400E1408) /**< \brief (GPIO) GPIO Enable Register - Clear 2 */
#define REG_GPIO_GPERT2            (0x400E140C) /**< \brief (GPIO) GPIO Enable Register - Toggle 2 */
#define REG_GPIO_PMR02             (0x400E1410) /**< \brief (GPIO) Peripheral Mux Register 0 2 */
#define REG_GPIO_PMR0S2            (0x400E1414) /**< \brief (GPIO) Peripheral Mux Register 0 - Set 2 */
#define REG_GPIO_PMR0C2            (0x400E1418) /**< \brief (GPIO) Peripheral Mux Register 0 - Clear 2 */
#define REG_GPIO_PMR0T2            (0x400E141C) /**< \brief (GPIO) Peripheral Mux Register 0 - Toggle 2 */
#define REG_GPIO_PMR12             (0x400E1420) /**< \brief (GPIO) Peripheral Mux Register 1 2 */
#define REG_GPIO_PMR1S2            (0x400E1424) /**< \brief (GPIO) Peripheral Mux Register 1 - Set 2 */
#define REG_GPIO_PMR1C2            (0x400E1428) /**< \brief (GPIO) Peripheral Mux Register 1 - Clear 2 */
#define REG_GPIO_PMR1T2            (0x400E142C) /**< \brief (GPIO) Peripheral Mux Register 1 - Toggle 2 */
#define REG_GPIO_PMR22             (0x400E1430) /**< \brief (GPIO) Peripheral Mux Register 2 2 */
#define REG_GPIO_PMR2S2            (0x400E1434) /**< \brief (GPIO) Peripheral Mux Register 2 - Set 2 */
#define REG_GPIO_PMR2C2            (0x400E1438) /**< \brief (GPIO) Peripheral Mux Register 2 - Clear 2 */
#define REG_GPIO_PMR2T2            (0x400E143C) /**< \brief (GPIO) Peripheral Mux Register 2 - Toggle 2 */
#define REG_GPIO_ODER2             (0x400E1440) /**< \brief (GPIO) Output Driver Enable Register 2 */
#define REG_GPIO_ODERS2            (0x400E1444) /**< \brief (GPIO) Output Driver Enable Register - Set 2 */
#define REG_GPIO_ODERC2            (0x400E1448) /**< \brief (GPIO) Output Driver Enable Register - Clear 2 */
#define REG_GPIO_ODERT2            (0x400E144C) /**< \brief (GPIO) Output Driver Enable Register - Toggle 2 */
#define REG_GPIO_OVR2              (0x400E1450) /**< \brief (GPIO) Output Value Register 2 */
#define REG_GPIO_OVRS2             (0x400E1454) /**< \brief (GPIO) Output Value Register - Set 2 */
#define REG_GPIO_OVRC2             (0x400E1458) /**< \brief (GPIO) Output Value Register - Clear 2 */
#define REG_GPIO_OVRT2             (0x400E145C) /**< \brief (GPIO) Output Value Register - Toggle 2 */
#define REG_GPIO_PVR2              (0x400E1460) /**< \brief (GPIO) Pin Value Register 2 */
#define REG_GPIO_PUER2             (0x400E1470) /**< \brief (GPIO) Pull-up Enable Register 2 */
#define REG_GPIO_PUERS2            (0x400E1474) /**< \brief (GPIO) Pull-up Enable Register - Set 2 */
#define REG_GPIO_PUERC2            (0x400E1478) /**< \brief (GPIO) Pull-up Enable Register - Clear 2 */
#define REG_GPIO_PUERT2            (0x400E147C) /**< \brief (GPIO) Pull-up Enable Register - Toggle 2 */
#define REG_GPIO_PDER2             (0x400E1480) /**< \brief (GPIO) Pull-down Enable Register 2 */
#define REG_GPIO_PDERS2            (0x400E1484) /**< \brief (GPIO) Pull-down Enable Register - Set 2 */
#define REG_GPIO_PDERC2            (0x400E1488) /**< \brief (GPIO) Pull-down Enable Register - Clear 2 */
#define REG_GPIO_PDERT2            (0x400E148C) /**< \brief (GPIO) Pull-down Enable Register - Toggle 2 */
#define REG_GPIO_IER2              (0x400E1490) /**< \brief (GPIO) Interrupt Enable Register 2 */
#define REG_GPIO_IERS2             (0x400E1494) /**< \brief (GPIO) Interrupt Enable Register - Set 2 */
#define REG_GPIO_IERC2             (0x400E1498) /**< \brief (GPIO) Interrupt Enable Register - Clear 2 */
#define REG_GPIO_IERT2             (0x400E149C) /**< \brief (GPIO) Interrupt Enable Register - Toggle 2 */
#define REG_GPIO_IMR02             (0x400E14A0) /**< \brief (GPIO) Interrupt Mode Register 0 2 */
#define REG_GPIO_IMR0S2            (0x400E14A4) /**< \brief (GPIO) Interrupt Mode Register 0 - Set 2 */
#define REG_GPIO_IMR0C2            (0x400E14A8) /**< \brief (GPIO) Interrupt Mode Register 0 - Clear 2 */
#define REG_GPIO_IMR0T2            (0x400E14AC) /**< \brief (GPIO) Interrupt Mode Register 0 - Toggle 2 */
#define REG_GPIO_IMR12             (0x400E14B0) /**< \brief (GPIO) Interrupt Mode Register 1 2 */
#define REG_GPIO_IMR1S2            (0x400E14B4) /**< \brief (GPIO) Interrupt Mode Register 1 - Set 2 */
#define REG_GPIO_IMR1C2            (0x400E14B8) /**< \brief (GPIO) Interrupt Mode Register 1 - Clear 2 */
#define REG_GPIO_IMR1T2            (0x400E14BC) /**< \brief (GPIO) Interrupt Mode Register 1 - Toggle 2 */
#define REG_GPIO_GFER2             (0x400E14C0) /**< \brief (GPIO) Glitch Filter Enable Register 2 */
#define REG_GPIO_GFERS2            (0x400E14C4) /**< \brief (GPIO) Glitch Filter Enable Register - Set 2 */
#define REG_GPIO_GFERC2            (0x400E14C8) /**< \brief (GPIO) Glitch Filter Enable Register - Clear 2 */
#define REG_GPIO_GFERT2            (0x400E14CC) /**< \brief (GPIO) Glitch Filter Enable Register - Toggle 2 */
#define REG_GPIO_IFR2              (0x400E14D0) /**< \brief (GPIO) Interrupt Flag Register 2 */
#define REG_GPIO_IFRC2             (0x400E14D8) /**< \brief (GPIO) Interrupt Flag Register - Clear 2 */
#define REG_GPIO_ODMER2            (0x400E14E0) /**< \brief (GPIO) Open Drain Mode Register 2 */
#define REG_GPIO_ODMERS2           (0x400E14E4) /**< \brief (GPIO) Open Drain Mode Register - Set 2 */
#define REG_GPIO_ODMERC2           (0x400E14E8) /**< \brief (GPIO) Open Drain Mode Register - Clear 2 */
#define REG_GPIO_ODMERT2           (0x400E14EC) /**< \brief (GPIO) Open Drain Mode Register - Toggle 2 */
#define REG_GPIO_ODCR02            (0x400E1500) /**< \brief (GPIO) Output Driving Capability Register 0 2 */
#define REG_GPIO_ODCR0S2           (0x400E1504) /**< \brief (GPIO) Output Driving Capability Register 0 - Set 2 */
#define REG_GPIO_ODCR0C2           (0x400E1508) /**< \brief (GPIO) Output Driving Capability Register 0 - Clear 2 */
#define REG_GPIO_ODCR0T2           (0x400E150C) /**< \brief (GPIO) Output Driving Capability Register 0 - Toggle 2 */
#define REG_GPIO_ODCR12            (0x400E1510) /**< \brief (GPIO) Output Driving Capability Register 1 2 */
#define REG_GPIO_ODCR1S2           (0x400E1514) /**< \brief (GPIO) Output Driving Capability Register 1 - Set 2 */
#define REG_GPIO_ODCR1C2           (0x400E1518) /**< \brief (GPIO) Output Driving Capability Register 1 - Clear 2 */
#define REG_GPIO_ODCR1T2           (0x400E151C) /**< \brief (GPIO) Output Driving Capability Register 1 - Toggle 2 */
#define REG_GPIO_OSRR02            (0x400E1530) /**< \brief (GPIO) Output Slew Rate Register 0 2 */
#define REG_GPIO_OSRR0S2           (0x400E1534) /**< \brief (GPIO) Output Slew Rate Register 0 - Set 2 */
#define REG_GPIO_OSRR0C2           (0x400E1538) /**< \brief (GPIO) Output Slew Rate Register 0 - Clear 2 */
#define REG_GPIO_OSRR0T2           (0x400E153C) /**< \brief (GPIO) Output Slew Rate Register 0 - Toggle 2 */
#define REG_GPIO_STER2             (0x400E1560) /**< \brief (GPIO) Schmitt Trigger Enable Register 2 */
#define REG_GPIO_STERS2            (0x400E1564) /**< \brief (GPIO) Schmitt Trigger Enable Register - Set 2 */
#define REG_GPIO_STERC2            (0x400E1568) /**< \brief (GPIO) Schmitt Trigger Enable Register - Clear 2 */
#define REG_GPIO_STERT2            (0x400E156C) /**< \brief (GPIO) Schmitt Trigger Enable Register - Toggle 2 */
#define REG_GPIO_EVER2             (0x400E1580) /**< \brief (GPIO) Event Enable Register 2 */
#define REG_GPIO_EVERS2            (0x400E1584) /**< \brief (GPIO) Event Enable Register - Set 2 */
#define REG_GPIO_EVERC2            (0x400E1588) /**< \brief (GPIO) Event Enable Register - Clear 2 */
#define REG_GPIO_EVERT2            (0x400E158C) /**< \brief (GPIO) Event Enable Register - Toggle 2 */
#define REG_GPIO_LOCK2             (0x400E15A0) /**< \brief (GPIO) Lock Register 2 */
#define REG_GPIO_LOCKS2            (0x400E15A4) /**< \brief (GPIO) Lock Register - Set 2 */
#define REG_GPIO_LOCKC2            (0x400E15A8) /**< \brief (GPIO) Lock Register - Clear 2 */
#define REG_GPIO_LOCKT2            (0x400E15AC) /**< \brief (GPIO) Lock Register - Toggle 2 */
#define REG_GPIO_UNLOCK2           (0x400E15E0) /**< \brief (GPIO) Unlock Register 2 */
#define REG_GPIO_ASR2              (0x400E15E4) /**< \brief (GPIO) Access Status Register 2 */
#define REG_GPIO_PARAMETER2        (0x400E15F8) /**< \brief (GPIO) Parameter Register 2 */
#define REG_GPIO_VERSION2          (0x400E15FC) /**< \brief (GPIO) Version Register 2 */
#else
#define REG_GPIO_GPER0             (*(RwReg  *)0x400E1000UL) /**< \brief (GPIO) GPIO Enable Register 0 */
#define REG_GPIO_GPERS0            (*(WoReg  *)0x400E1004UL) /**< \brief (GPIO) GPIO Enable Register - Set 0 */
#define REG_GPIO_GPERC0            (*(WoReg  *)0x400E1008UL) /**< \brief (GPIO) GPIO Enable Register - Clear 0 */
#define REG_GPIO_GPERT0            (*(WoReg  *)0x400E100CUL) /**< \brief (GPIO) GPIO Enable Register - Toggle 0 */
#define REG_GPIO_PMR00             (*(RwReg  *)0x400E1010UL) /**< \brief (GPIO) Peripheral Mux Register 0 0 */
#define REG_GPIO_PMR0S0            (*(WoReg  *)0x400E1014UL) /**< \brief (GPIO) Peripheral Mux Register 0 - Set 0 */
#define REG_GPIO_PMR0C0            (*(WoReg  *)0x400E1018UL) /**< \brief (GPIO) Peripheral Mux Register 0 - Clear 0 */
#define REG_GPIO_PMR0T0            (*(WoReg  *)0x400E101CUL) /**< \brief (GPIO) Peripheral Mux Register 0 - Toggle 0 */
#define REG_GPIO_PMR10             (*(RwReg  *)0x400E1020UL) /**< \brief (GPIO) Peripheral Mux Register 1 0 */
#define REG_GPIO_PMR1S0            (*(WoReg  *)0x400E1024UL) /**< \brief (GPIO) Peripheral Mux Register 1 - Set 0 */
#define REG_GPIO_PMR1C0            (*(WoReg  *)0x400E1028UL) /**< \brief (GPIO) Peripheral Mux Register 1 - Clear 0 */
#define REG_GPIO_PMR1T0            (*(WoReg  *)0x400E102CUL) /**< \brief (GPIO) Peripheral Mux Register 1 - Toggle 0 */
#define REG_GPIO_PMR20             (*(RwReg  *)0x400E1030UL) /**< \brief (GPIO) Peripheral Mux Register 2 0 */
#define REG_GPIO_PMR2S0            (*(WoReg  *)0x400E1034UL) /**< \brief (GPIO) Peripheral Mux Register 2 - Set 0 */
#define REG_GPIO_PMR2C0            (*(WoReg  *)0x400E1038UL) /**< \brief (GPIO) Peripheral Mux Register 2 - Clear 0 */
#define REG_GPIO_PMR2T0            (*(WoReg  *)0x400E103CUL) /**< \brief (GPIO) Peripheral Mux Register 2 - Toggle 0 */
#define REG_GPIO_ODER0             (*(RwReg  *)0x400E1040UL) /**< \brief (GPIO) Output Driver Enable Register 0 */
#define REG_GPIO_ODERS0            (*(WoReg  *)0x400E1044UL) /**< \brief (GPIO) Output Driver Enable Register - Set 0 */
#define REG_GPIO_ODERC0            (*(WoReg  *)0x400E1048UL) /**< \brief (GPIO) Output Driver Enable Register - Clear 0 */
#define REG_GPIO_ODERT0            (*(WoReg  *)0x400E104CUL) /**< \brief (GPIO) Output Driver Enable Register - Toggle 0 */
#define REG_GPIO_OVR0              (*(RwReg  *)0x400E1050UL) /**< \brief (GPIO) Output Value Register 0 */
#define REG_GPIO_OVRS0             (*(WoReg  *)0x400E1054UL) /**< \brief (GPIO) Output Value Register - Set 0 */
#define REG_GPIO_OVRC0             (*(WoReg  *)0x400E1058UL) /**< \brief (GPIO) Output Value Register - Clear 0 */
#define REG_GPIO_OVRT0             (*(WoReg  *)0x400E105CUL) /**< \brief (GPIO) Output Value Register - Toggle 0 */
#define REG_GPIO_PVR0              (*(RoReg  *)0x400E1060UL) /**< \brief (GPIO) Pin Value Register 0 */
#define REG_GPIO_PUER0             (*(RwReg  *)0x400E1070UL) /**< \brief (GPIO) Pull-up Enable Register 0 */
#define REG_GPIO_PUERS0            (*(WoReg  *)0x400E1074UL) /**< \brief (GPIO) Pull-up Enable Register - Set 0 */
#define REG_GPIO_PUERC0            (*(WoReg  *)0x400E1078UL) /**< \brief (GPIO) Pull-up Enable Register - Clear 0 */
#define REG_GPIO_PUERT0            (*(WoReg  *)0x400E107CUL) /**< \brief (GPIO) Pull-up Enable Register - Toggle 0 */
#define REG_GPIO_PDER0             (*(RwReg  *)0x400E1080UL) /**< \brief (GPIO) Pull-down Enable Register 0 */
#define REG_GPIO_PDERS0            (*(WoReg  *)0x400E1084UL) /**< \brief (GPIO) Pull-down Enable Register - Set 0 */
#define REG_GPIO_PDERC0            (*(WoReg  *)0x400E1088UL) /**< \brief (GPIO) Pull-down Enable Register - Clear 0 */
#define REG_GPIO_PDERT0            (*(WoReg  *)0x400E108CUL) /**< \brief (GPIO) Pull-down Enable Register - Toggle 0 */
#define REG_GPIO_IER0              (*(RwReg  *)0x400E1090UL) /**< \brief (GPIO) Interrupt Enable Register 0 */
#define REG_GPIO_IERS0             (*(WoReg  *)0x400E1094UL) /**< \brief (GPIO) Interrupt Enable Register - Set 0 */
#define REG_GPIO_IERC0             (*(WoReg  *)0x400E1098UL) /**< \brief (GPIO) Interrupt Enable Register - Clear 0 */
#define REG_GPIO_IERT0             (*(WoReg  *)0x400E109CUL) /**< \brief (GPIO) Interrupt Enable Register - Toggle 0 */
#define REG_GPIO_IMR00             (*(RwReg  *)0x400E10A0UL) /**< \brief (GPIO) Interrupt Mode Register 0 0 */
#define REG_GPIO_IMR0S0            (*(WoReg  *)0x400E10A4UL) /**< \brief (GPIO) Interrupt Mode Register 0 - Set 0 */
#define REG_GPIO_IMR0C0            (*(WoReg  *)0x400E10A8UL) /**< \brief (GPIO) Interrupt Mode Register 0 - Clear 0 */
#define REG_GPIO_IMR0T0            (*(WoReg  *)0x400E10ACUL) /**< \brief (GPIO) Interrupt Mode Register 0 - Toggle 0 */
#define REG_GPIO_IMR10             (*(RwReg  *)0x400E10B0UL) /**< \brief (GPIO) Interrupt Mode Register 1 0 */
#define REG_GPIO_IMR1S0            (*(WoReg  *)0x400E10B4UL) /**< \brief (GPIO) Interrupt Mode Register 1 - Set 0 */
#define REG_GPIO_IMR1C0            (*(WoReg  *)0x400E10B8UL) /**< \brief (GPIO) Interrupt Mode Register 1 - Clear 0 */
#define REG_GPIO_IMR1T0            (*(WoReg  *)0x400E10BCUL) /**< \brief (GPIO) Interrupt Mode Register 1 - Toggle 0 */
#define REG_GPIO_GFER0             (*(RwReg  *)0x400E10C0UL) /**< \brief (GPIO) Glitch Filter Enable Register 0 */
#define REG_GPIO_GFERS0            (*(WoReg  *)0x400E10C4UL) /**< \brief (GPIO) Glitch Filter Enable Register - Set 0 */
#define REG_GPIO_GFERC0            (*(WoReg  *)0x400E10C8UL) /**< \brief (GPIO) Glitch Filter Enable Register - Clear 0 */
#define REG_GPIO_GFERT0            (*(WoReg  *)0x400E10CCUL) /**< \brief (GPIO) Glitch Filter Enable Register - Toggle 0 */
#define REG_GPIO_IFR0              (*(RoReg  *)0x400E10D0UL) /**< \brief (GPIO) Interrupt Flag Register 0 */
#define REG_GPIO_IFRC0             (*(WoReg  *)0x400E10D8UL) /**< \brief (GPIO) Interrupt Flag Register - Clear 0 */
#define REG_GPIO_ODMER0            (*(RwReg  *)0x400E10E0UL) /**< \brief (GPIO) Open Drain Mode Register 0 */
#define REG_GPIO_ODMERS0           (*(WoReg  *)0x400E10E4UL) /**< \brief (GPIO) Open Drain Mode Register - Set 0 */
#define REG_GPIO_ODMERC0           (*(WoReg  *)0x400E10E8UL) /**< \brief (GPIO) Open Drain Mode Register - Clear 0 */
#define REG_GPIO_ODMERT0           (*(WoReg  *)0x400E10ECUL) /**< \brief (GPIO) Open Drain Mode Register - Toggle 0 */
#define REG_GPIO_ODCR00            (*(RwReg  *)0x400E1100UL) /**< \brief (GPIO) Output Driving Capability Register 0 0 */
#define REG_GPIO_ODCR0S0           (*(RwReg  *)0x400E1104UL) /**< \brief (GPIO) Output Driving Capability Register 0 - Set 0 */
#define REG_GPIO_ODCR0C0           (*(RwReg  *)0x400E1108UL) /**< \brief (GPIO) Output Driving Capability Register 0 - Clear 0 */
#define REG_GPIO_ODCR0T0           (*(RwReg  *)0x400E110CUL) /**< \brief (GPIO) Output Driving Capability Register 0 - Toggle 0 */
#define REG_GPIO_ODCR10            (*(RwReg  *)0x400E1110UL) /**< \brief (GPIO) Output Driving Capability Register 1 0 */
#define REG_GPIO_ODCR1S0           (*(RwReg  *)0x400E1114UL) /**< \brief (GPIO) Output Driving Capability Register 1 - Set 0 */
#define REG_GPIO_ODCR1C0           (*(RwReg  *)0x400E1118UL) /**< \brief (GPIO) Output Driving Capability Register 1 - Clear 0 */
#define REG_GPIO_ODCR1T0           (*(RwReg  *)0x400E111CUL) /**< \brief (GPIO) Output Driving Capability Register 1 - Toggle 0 */
#define REG_GPIO_OSRR00            (*(RwReg  *)0x400E1130UL) /**< \brief (GPIO) Output Slew Rate Register 0 0 */
#define REG_GPIO_OSRR0S0           (*(RwReg  *)0x400E1134UL) /**< \brief (GPIO) Output Slew Rate Register 0 - Set 0 */
#define REG_GPIO_OSRR0C0           (*(RwReg  *)0x400E1138UL) /**< \brief (GPIO) Output Slew Rate Register 0 - Clear 0 */
#define REG_GPIO_OSRR0T0           (*(RwReg  *)0x400E113CUL) /**< \brief (GPIO) Output Slew Rate Register 0 - Toggle 0 */
#define REG_GPIO_STER0             (*(RwReg  *)0x400E1160UL) /**< \brief (GPIO) Schmitt Trigger Enable Register 0 */
#define REG_GPIO_STERS0            (*(RwReg  *)0x400E1164UL) /**< \brief (GPIO) Schmitt Trigger Enable Register - Set 0 */
#define REG_GPIO_STERC0            (*(RwReg  *)0x400E1168UL) /**< \brief (GPIO) Schmitt Trigger Enable Register - Clear 0 */
#define REG_GPIO_STERT0            (*(RwReg  *)0x400E116CUL) /**< \brief (GPIO) Schmitt Trigger Enable Register - Toggle 0 */
#define REG_GPIO_EVER0             (*(RwReg  *)0x400E1180UL) /**< \brief (GPIO) Event Enable Register 0 */
#define REG_GPIO_EVERS0            (*(WoReg  *)0x400E1184UL) /**< \brief (GPIO) Event Enable Register - Set 0 */
#define REG_GPIO_EVERC0            (*(WoReg  *)0x400E1188UL) /**< \brief (GPIO) Event Enable Register - Clear 0 */
#define REG_GPIO_EVERT0            (*(WoReg  *)0x400E118CUL) /**< \brief (GPIO) Event Enable Register - Toggle 0 */
#define REG_GPIO_LOCK0             (*(RwReg  *)0x400E11A0UL) /**< \brief (GPIO) Lock Register 0 */
#define REG_GPIO_LOCKS0            (*(WoReg  *)0x400E11A4UL) /**< \brief (GPIO) Lock Register - Set 0 */
#define REG_GPIO_LOCKC0            (*(WoReg  *)0x400E11A8UL) /**< \brief (GPIO) Lock Register - Clear 0 */
#define REG_GPIO_LOCKT0            (*(WoReg  *)0x400E11ACUL) /**< \brief (GPIO) Lock Register - Toggle 0 */
#define REG_GPIO_UNLOCK0           (*(WoReg  *)0x400E11E0UL) /**< \brief (GPIO) Unlock Register 0 */
#define REG_GPIO_ASR0              (*(RwReg  *)0x400E11E4UL) /**< \brief (GPIO) Access Status Register 0 */
#define REG_GPIO_PARAMETER0        (*(RoReg  *)0x400E11F8UL) /**< \brief (GPIO) Parameter Register 0 */
#define REG_GPIO_VERSION0          (*(RoReg  *)0x400E11FCUL) /**< \brief (GPIO) Version Register 0 */
#define REG_GPIO_GPER1             (*(RwReg  *)0x400E1200UL) /**< \brief (GPIO) GPIO Enable Register 1 */
#define REG_GPIO_GPERS1            (*(WoReg  *)0x400E1204UL) /**< \brief (GPIO) GPIO Enable Register - Set 1 */
#define REG_GPIO_GPERC1            (*(WoReg  *)0x400E1208UL) /**< \brief (GPIO) GPIO Enable Register - Clear 1 */
#define REG_GPIO_GPERT1            (*(WoReg  *)0x400E120CUL) /**< \brief (GPIO) GPIO Enable Register - Toggle 1 */
#define REG_GPIO_PMR01             (*(RwReg  *)0x400E1210UL) /**< \brief (GPIO) Peripheral Mux Register 0 1 */
#define REG_GPIO_PMR0S1            (*(WoReg  *)0x400E1214UL) /**< \brief (GPIO) Peripheral Mux Register 0 - Set 1 */
#define REG_GPIO_PMR0C1            (*(WoReg  *)0x400E1218UL) /**< \brief (GPIO) Peripheral Mux Register 0 - Clear 1 */
#define REG_GPIO_PMR0T1            (*(WoReg  *)0x400E121CUL) /**< \brief (GPIO) Peripheral Mux Register 0 - Toggle 1 */
#define REG_GPIO_PMR11             (*(RwReg  *)0x400E1220UL) /**< \brief (GPIO) Peripheral Mux Register 1 1 */
#define REG_GPIO_PMR1S1            (*(WoReg  *)0x400E1224UL) /**< \brief (GPIO) Peripheral Mux Register 1 - Set 1 */
#define REG_GPIO_PMR1C1            (*(WoReg  *)0x400E1228UL) /**< \brief (GPIO) Peripheral Mux Register 1 - Clear 1 */
#define REG_GPIO_PMR1T1            (*(WoReg  *)0x400E122CUL) /**< \brief (GPIO) Peripheral Mux Register 1 - Toggle 1 */
#define REG_GPIO_PMR21             (*(RwReg  *)0x400E1230UL) /**< \brief (GPIO) Peripheral Mux Register 2 1 */
#define REG_GPIO_PMR2S1            (*(WoReg  *)0x400E1234UL) /**< \brief (GPIO) Peripheral Mux Register 2 - Set 1 */
#define REG_GPIO_PMR2C1            (*(WoReg  *)0x400E1238UL) /**< \brief (GPIO) Peripheral Mux Register 2 - Clear 1 */
#define REG_GPIO_PMR2T1            (*(WoReg  *)0x400E123CUL) /**< \brief (GPIO) Peripheral Mux Register 2 - Toggle 1 */
#define REG_GPIO_ODER1             (*(RwReg  *)0x400E1240UL) /**< \brief (GPIO) Output Driver Enable Register 1 */
#define REG_GPIO_ODERS1            (*(WoReg  *)0x400E1244UL) /**< \brief (GPIO) Output Driver Enable Register - Set 1 */
#define REG_GPIO_ODERC1            (*(WoReg  *)0x400E1248UL) /**< \brief (GPIO) Output Driver Enable Register - Clear 1 */
#define REG_GPIO_ODERT1            (*(WoReg  *)0x400E124CUL) /**< \brief (GPIO) Output Driver Enable Register - Toggle 1 */
#define REG_GPIO_OVR1              (*(RwReg  *)0x400E1250UL) /**< \brief (GPIO) Output Value Register 1 */
#define REG_GPIO_OVRS1             (*(WoReg  *)0x400E1254UL) /**< \brief (GPIO) Output Value Register - Set 1 */
#define REG_GPIO_OVRC1             (*(WoReg  *)0x400E1258UL) /**< \brief (GPIO) Output Value Register - Clear 1 */
#define REG_GPIO_OVRT1             (*(WoReg  *)0x400E125CUL) /**< \brief (GPIO) Output Value Register - Toggle 1 */
#define REG_GPIO_PVR1              (*(RoReg  *)0x400E1260UL) /**< \brief (GPIO) Pin Value Register 1 */
#define REG_GPIO_PUER1             (*(RwReg  *)0x400E1270UL) /**< \brief (GPIO) Pull-up Enable Register 1 */
#define REG_GPIO_PUERS1            (*(WoReg  *)0x400E1274UL) /**< \brief (GPIO) Pull-up Enable Register - Set 1 */
#define REG_GPIO_PUERC1            (*(WoReg  *)0x400E1278UL) /**< \brief (GPIO) Pull-up Enable Register - Clear 1 */
#define REG_GPIO_PUERT1            (*(WoReg  *)0x400E127CUL) /**< \brief (GPIO) Pull-up Enable Register - Toggle 1 */
#define REG_GPIO_PDER1             (*(RwReg  *)0x400E1280UL) /**< \brief (GPIO) Pull-down Enable Register 1 */
#define REG_GPIO_PDERS1            (*(WoReg  *)0x400E1284UL) /**< \brief (GPIO) Pull-down Enable Register - Set 1 */
#define REG_GPIO_PDERC1            (*(WoReg  *)0x400E1288UL) /**< \brief (GPIO) Pull-down Enable Register - Clear 1 */
#define REG_GPIO_PDERT1            (*(WoReg  *)0x400E128CUL) /**< \brief (GPIO) Pull-down Enable Register - Toggle 1 */
#define REG_GPIO_IER1              (*(RwReg  *)0x400E1290UL) /**< \brief (GPIO) Interrupt Enable Register 1 */
#define REG_GPIO_IERS1             (*(WoReg  *)0x400E1294UL) /**< \brief (GPIO) Interrupt Enable Register - Set 1 */
#define REG_GPIO_IERC1             (*(WoReg  *)0x400E1298UL) /**< \brief (GPIO) Interrupt Enable Register - Clear 1 */
#define REG_GPIO_IERT1             (*(WoReg  *)0x400E129CUL) /**< \brief (GPIO) Interrupt Enable Register - Toggle 1 */
#define REG_GPIO_IMR01             (*(RwReg  *)0x400E12A0UL) /**< \brief (GPIO) Interrupt Mode Register 0 1 */
#define REG_GPIO_IMR0S1            (*(WoReg  *)0x400E12A4UL) /**< \brief (GPIO) Interrupt Mode Register 0 - Set 1 */
#define REG_GPIO_IMR0C1            (*(WoReg  *)0x400E12A8UL) /**< \brief (GPIO) Interrupt Mode Register 0 - Clear 1 */
#define REG_GPIO_IMR0T1            (*(WoReg  *)0x400E12ACUL) /**< \brief (GPIO) Interrupt Mode Register 0 - Toggle 1 */
#define REG_GPIO_IMR11             (*(RwReg  *)0x400E12B0UL) /**< \brief (GPIO) Interrupt Mode Register 1 1 */
#define REG_GPIO_IMR1S1            (*(WoReg  *)0x400E12B4UL) /**< \brief (GPIO) Interrupt Mode Register 1 - Set 1 */
#define REG_GPIO_IMR1C1            (*(WoReg  *)0x400E12B8UL) /**< \brief (GPIO) Interrupt Mode Register 1 - Clear 1 */
#define REG_GPIO_IMR1T1            (*(WoReg  *)0x400E12BCUL) /**< \brief (GPIO) Interrupt Mode Register 1 - Toggle 1 */
#define REG_GPIO_GFER1             (*(RwReg  *)0x400E12C0UL) /**< \brief (GPIO) Glitch Filter Enable Register 1 */
#define REG_GPIO_GFERS1            (*(WoReg  *)0x400E12C4UL) /**< \brief (GPIO) Glitch Filter Enable Register - Set 1 */
#define REG_GPIO_GFERC1            (*(WoReg  *)0x400E12C8UL) /**< \brief (GPIO) Glitch Filter Enable Register - Clear 1 */
#define REG_GPIO_GFERT1            (*(WoReg  *)0x400E12CCUL) /**< \brief (GPIO) Glitch Filter Enable Register - Toggle 1 */
#define REG_GPIO_IFR1              (*(RoReg  *)0x400E12D0UL) /**< \brief (GPIO) Interrupt Flag Register 1 */
#define REG_GPIO_IFRC1             (*(WoReg  *)0x400E12D8UL) /**< \brief (GPIO) Interrupt Flag Register - Clear 1 */
#define REG_GPIO_ODMER1            (*(RwReg  *)0x400E12E0UL) /**< \brief (GPIO) Open Drain Mode Register 1 */
#define REG_GPIO_ODMERS1           (*(WoReg  *)0x400E12E4UL) /**< \brief (GPIO) Open Drain Mode Register - Set 1 */
#define REG_GPIO_ODMERC1           (*(WoReg  *)0x400E12E8UL) /**< \brief (GPIO) Open Drain Mode Register - Clear 1 */
#define REG_GPIO_ODMERT1           (*(WoReg  *)0x400E12ECUL) /**< \brief (GPIO) Open Drain Mode Register - Toggle 1 */
#define REG_GPIO_ODCR01            (*(RwReg  *)0x400E1300UL) /**< \brief (GPIO) Output Driving Capability Register 0 1 */
#define REG_GPIO_ODCR0S1           (*(RwReg  *)0x400E1304UL) /**< \brief (GPIO) Output Driving Capability Register 0 - Set 1 */
#define REG_GPIO_ODCR0C1           (*(RwReg  *)0x400E1308UL) /**< \brief (GPIO) Output Driving Capability Register 0 - Clear 1 */
#define REG_GPIO_ODCR0T1           (*(RwReg  *)0x400E130CUL) /**< \brief (GPIO) Output Driving Capability Register 0 - Toggle 1 */
#define REG_GPIO_ODCR11            (*(RwReg  *)0x400E1310UL) /**< \brief (GPIO) Output Driving Capability Register 1 1 */
#define REG_GPIO_ODCR1S1           (*(RwReg  *)0x400E1314UL) /**< \brief (GPIO) Output Driving Capability Register 1 - Set 1 */
#define REG_GPIO_ODCR1C1           (*(RwReg  *)0x400E1318UL) /**< \brief (GPIO) Output Driving Capability Register 1 - Clear 1 */
#define REG_GPIO_ODCR1T1           (*(RwReg  *)0x400E131CUL) /**< \brief (GPIO) Output Driving Capability Register 1 - Toggle 1 */
#define REG_GPIO_OSRR01            (*(RwReg  *)0x400E1330UL) /**< \brief (GPIO) Output Slew Rate Register 0 1 */
#define REG_GPIO_OSRR0S1           (*(RwReg  *)0x400E1334UL) /**< \brief (GPIO) Output Slew Rate Register 0 - Set 1 */
#define REG_GPIO_OSRR0C1           (*(RwReg  *)0x400E1338UL) /**< \brief (GPIO) Output Slew Rate Register 0 - Clear 1 */
#define REG_GPIO_OSRR0T1           (*(RwReg  *)0x400E133CUL) /**< \brief (GPIO) Output Slew Rate Register 0 - Toggle 1 */
#define REG_GPIO_STER1             (*(RwReg  *)0x400E1360UL) /**< \brief (GPIO) Schmitt Trigger Enable Register 1 */
#define REG_GPIO_STERS1            (*(RwReg  *)0x400E1364UL) /**< \brief (GPIO) Schmitt Trigger Enable Register - Set 1 */
#define REG_GPIO_STERC1            (*(RwReg  *)0x400E1368UL) /**< \brief (GPIO) Schmitt Trigger Enable Register - Clear 1 */
#define REG_GPIO_STERT1            (*(RwReg  *)0x400E136CUL) /**< \brief (GPIO) Schmitt Trigger Enable Register - Toggle 1 */
#define REG_GPIO_EVER1             (*(RwReg  *)0x400E1380UL) /**< \brief (GPIO) Event Enable Register 1 */
#define REG_GPIO_EVERS1            (*(WoReg  *)0x400E1384UL) /**< \brief (GPIO) Event Enable Register - Set 1 */
#define REG_GPIO_EVERC1            (*(WoReg  *)0x400E1388UL) /**< \brief (GPIO) Event Enable Register - Clear 1 */
#define REG_GPIO_EVERT1            (*(WoReg  *)0x400E138CUL) /**< \brief (GPIO) Event Enable Register - Toggle 1 */
#define REG_GPIO_LOCK1             (*(RwReg  *)0x400E13A0UL) /**< \brief (GPIO) Lock Register 1 */
#define REG_GPIO_LOCKS1            (*(WoReg  *)0x400E13A4UL) /**< \brief (GPIO) Lock Register - Set 1 */
#define REG_GPIO_LOCKC1            (*(WoReg  *)0x400E13A8UL) /**< \brief (GPIO) Lock Register - Clear 1 */
#define REG_GPIO_LOCKT1            (*(WoReg  *)0x400E13ACUL) /**< \brief (GPIO) Lock Register - Toggle 1 */
#define REG_GPIO_UNLOCK1           (*(WoReg  *)0x400E13E0UL) /**< \brief (GPIO) Unlock Register 1 */
#define REG_GPIO_ASR1              (*(RwReg  *)0x400E13E4UL) /**< \brief (GPIO) Access Status Register 1 */
#define REG_GPIO_PARAMETER1        (*(RoReg  *)0x400E13F8UL) /**< \brief (GPIO) Parameter Register 1 */
#define REG_GPIO_VERSION1          (*(RoReg  *)0x400E13FCUL) /**< \brief (GPIO) Version Register 1 */
#define REG_GPIO_GPER2             (*(RwReg  *)0x400E1400UL) /**< \brief (GPIO) GPIO Enable Register 2 */
#define REG_GPIO_GPERS2            (*(WoReg  *)0x400E1404UL) /**< \brief (GPIO) GPIO Enable Register - Set 2 */
#define REG_GPIO_GPERC2            (*(WoReg  *)0x400E1408UL) /**< \brief (GPIO) GPIO Enable Register - Clear 2 */
#define REG_GPIO_GPERT2            (*(WoReg  *)0x400E140CUL) /**< \brief (GPIO) GPIO Enable Register - Toggle 2 */
#define REG_GPIO_PMR02             (*(RwReg  *)0x400E1410UL) /**< \brief (GPIO) Peripheral Mux Register 0 2 */
#define REG_GPIO_PMR0S2            (*(WoReg  *)0x400E1414UL) /**< \brief (GPIO) Peripheral Mux Register 0 - Set 2 */
#define REG_GPIO_PMR0C2            (*(WoReg  *)0x400E1418UL) /**< \brief (GPIO) Peripheral Mux Register 0 - Clear 2 */
#define REG_GPIO_PMR0T2            (*(WoReg  *)0x400E141CUL) /**< \brief (GPIO) Peripheral Mux Register 0 - Toggle 2 */
#define REG_GPIO_PMR12             (*(RwReg  *)0x400E1420UL) /**< \brief (GPIO) Peripheral Mux Register 1 2 */
#define REG_GPIO_PMR1S2            (*(WoReg  *)0x400E1424UL) /**< \brief (GPIO) Peripheral Mux Register 1 - Set 2 */
#define REG_GPIO_PMR1C2            (*(WoReg  *)0x400E1428UL) /**< \brief (GPIO) Peripheral Mux Register 1 - Clear 2 */
#define REG_GPIO_PMR1T2            (*(WoReg  *)0x400E142CUL) /**< \brief (GPIO) Peripheral Mux Register 1 - Toggle 2 */
#define REG_GPIO_PMR22             (*(RwReg  *)0x400E1430UL) /**< \brief (GPIO) Peripheral Mux Register 2 2 */
#define REG_GPIO_PMR2S2            (*(WoReg  *)0x400E1434UL) /**< \brief (GPIO) Peripheral Mux Register 2 - Set 2 */
#define REG_GPIO_PMR2C2            (*(WoReg  *)0x400E1438UL) /**< \brief (GPIO) Peripheral Mux Register 2 - Clear 2 */
#define REG_GPIO_PMR2T2            (*(WoReg  *)0x400E143CUL) /**< \brief (GPIO) Peripheral Mux Register 2 - Toggle 2 */
#define REG_GPIO_ODER2             (*(RwReg  *)0x400E1440UL) /**< \brief (GPIO) Output Driver Enable Register 2 */
#define REG_GPIO_ODERS2            (*(WoReg  *)0x400E1444UL) /**< \brief (GPIO) Output Driver Enable Register - Set 2 */
#define REG_GPIO_ODERC2            (*(WoReg  *)0x400E1448UL) /**< \brief (GPIO) Output Driver Enable Register - Clear 2 */
#define REG_GPIO_ODERT2            (*(WoReg  *)0x400E144CUL) /**< \brief (GPIO) Output Driver Enable Register - Toggle 2 */
#define REG_GPIO_OVR2              (*(RwReg  *)0x400E1450UL) /**< \brief (GPIO) Output Value Register 2 */
#define REG_GPIO_OVRS2             (*(WoReg  *)0x400E1454UL) /**< \brief (GPIO) Output Value Register - Set 2 */
#define REG_GPIO_OVRC2             (*(WoReg  *)0x400E1458UL) /**< \brief (GPIO) Output Value Register - Clear 2 */
#define REG_GPIO_OVRT2             (*(WoReg  *)0x400E145CUL) /**< \brief (GPIO) Output Value Register - Toggle 2 */
#define REG_GPIO_PVR2              (*(RoReg  *)0x400E1460UL) /**< \brief (GPIO) Pin Value Register 2 */
#define REG_GPIO_PUER2             (*(RwReg  *)0x400E1470UL) /**< \brief (GPIO) Pull-up Enable Register 2 */
#define REG_GPIO_PUERS2            (*(WoReg  *)0x400E1474UL) /**< \brief (GPIO) Pull-up Enable Register - Set 2 */
#define REG_GPIO_PUERC2            (*(WoReg  *)0x400E1478UL) /**< \brief (GPIO) Pull-up Enable Register - Clear 2 */
#define REG_GPIO_PUERT2            (*(WoReg  *)0x400E147CUL) /**< \brief (GPIO) Pull-up Enable Register - Toggle 2 */
#define REG_GPIO_PDER2             (*(RwReg  *)0x400E1480UL) /**< \brief (GPIO) Pull-down Enable Register 2 */
#define REG_GPIO_PDERS2            (*(WoReg  *)0x400E1484UL) /**< \brief (GPIO) Pull-down Enable Register - Set 2 */
#define REG_GPIO_PDERC2            (*(WoReg  *)0x400E1488UL) /**< \brief (GPIO) Pull-down Enable Register - Clear 2 */
#define REG_GPIO_PDERT2            (*(WoReg  *)0x400E148CUL) /**< \brief (GPIO) Pull-down Enable Register - Toggle 2 */
#define REG_GPIO_IER2              (*(RwReg  *)0x400E1490UL) /**< \brief (GPIO) Interrupt Enable Register 2 */
#define REG_GPIO_IERS2             (*(WoReg  *)0x400E1494UL) /**< \brief (GPIO) Interrupt Enable Register - Set 2 */
#define REG_GPIO_IERC2             (*(WoReg  *)0x400E1498UL) /**< \brief (GPIO) Interrupt Enable Register - Clear 2 */
#define REG_GPIO_IERT2             (*(WoReg  *)0x400E149CUL) /**< \brief (GPIO) Interrupt Enable Register - Toggle 2 */
#define REG_GPIO_IMR02             (*(RwReg  *)0x400E14A0UL) /**< \brief (GPIO) Interrupt Mode Register 0 2 */
#define REG_GPIO_IMR0S2            (*(WoReg  *)0x400E14A4UL) /**< \brief (GPIO) Interrupt Mode Register 0 - Set 2 */
#define REG_GPIO_IMR0C2            (*(WoReg  *)0x400E14A8UL) /**< \brief (GPIO) Interrupt Mode Register 0 - Clear 2 */
#define REG_GPIO_IMR0T2            (*(WoReg  *)0x400E14ACUL) /**< \brief (GPIO) Interrupt Mode Register 0 - Toggle 2 */
#define REG_GPIO_IMR12             (*(RwReg  *)0x400E14B0UL) /**< \brief (GPIO) Interrupt Mode Register 1 2 */
#define REG_GPIO_IMR1S2            (*(WoReg  *)0x400E14B4UL) /**< \brief (GPIO) Interrupt Mode Register 1 - Set 2 */
#define REG_GPIO_IMR1C2            (*(WoReg  *)0x400E14B8UL) /**< \brief (GPIO) Interrupt Mode Register 1 - Clear 2 */
#define REG_GPIO_IMR1T2            (*(WoReg  *)0x400E14BCUL) /**< \brief (GPIO) Interrupt Mode Register 1 - Toggle 2 */
#define REG_GPIO_GFER2             (*(RwReg  *)0x400E14C0UL) /**< \brief (GPIO) Glitch Filter Enable Register 2 */
#define REG_GPIO_GFERS2            (*(WoReg  *)0x400E14C4UL) /**< \brief (GPIO) Glitch Filter Enable Register - Set 2 */
#define REG_GPIO_GFERC2            (*(WoReg  *)0x400E14C8UL) /**< \brief (GPIO) Glitch Filter Enable Register - Clear 2 */
#define REG_GPIO_GFERT2            (*(WoReg  *)0x400E14CCUL) /**< \brief (GPIO) Glitch Filter Enable Register - Toggle 2 */
#define REG_GPIO_IFR2              (*(RoReg  *)0x400E14D0UL) /**< \brief (GPIO) Interrupt Flag Register 2 */
#define REG_GPIO_IFRC2             (*(WoReg  *)0x400E14D8UL) /**< \brief (GPIO) Interrupt Flag Register - Clear 2 */
#define REG_GPIO_ODMER2            (*(RwReg  *)0x400E14E0UL) /**< \brief (GPIO) Open Drain Mode Register 2 */
#define REG_GPIO_ODMERS2           (*(WoReg  *)0x400E14E4UL) /**< \brief (GPIO) Open Drain Mode Register - Set 2 */
#define REG_GPIO_ODMERC2           (*(WoReg  *)0x400E14E8UL) /**< \brief (GPIO) Open Drain Mode Register - Clear 2 */
#define REG_GPIO_ODMERT2           (*(WoReg  *)0x400E14ECUL) /**< \brief (GPIO) Open Drain Mode Register - Toggle 2 */
#define REG_GPIO_ODCR02            (*(RwReg  *)0x400E1500UL) /**< \brief (GPIO) Output Driving Capability Register 0 2 */
#define REG_GPIO_ODCR0S2           (*(RwReg  *)0x400E1504UL) /**< \brief (GPIO) Output Driving Capability Register 0 - Set 2 */
#define REG_GPIO_ODCR0C2           (*(RwReg  *)0x400E1508UL) /**< \brief (GPIO) Output Driving Capability Register 0 - Clear 2 */
#define REG_GPIO_ODCR0T2           (*(RwReg  *)0x400E150CUL) /**< \brief (GPIO) Output Driving Capability Register 0 - Toggle 2 */
#define REG_GPIO_ODCR12            (*(RwReg  *)0x400E1510UL) /**< \brief (GPIO) Output Driving Capability Register 1 2 */
#define REG_GPIO_ODCR1S2           (*(RwReg  *)0x400E1514UL) /**< \brief (GPIO) Output Driving Capability Register 1 - Set 2 */
#define REG_GPIO_ODCR1C2           (*(RwReg  *)0x400E1518UL) /**< \brief (GPIO) Output Driving Capability Register 1 - Clear 2 */
#define REG_GPIO_ODCR1T2           (*(RwReg  *)0x400E151CUL) /**< \brief (GPIO) Output Driving Capability Register 1 - Toggle 2 */
#define REG_GPIO_OSRR02            (*(RwReg  *)0x400E1530UL) /**< \brief (GPIO) Output Slew Rate Register 0 2 */
#define REG_GPIO_OSRR0S2           (*(RwReg  *)0x400E1534UL) /**< \brief (GPIO) Output Slew Rate Register 0 - Set 2 */
#define REG_GPIO_OSRR0C2           (*(RwReg  *)0x400E1538UL) /**< \brief (GPIO) Output Slew Rate Register 0 - Clear 2 */
#define REG_GPIO_OSRR0T2           (*(RwReg  *)0x400E153CUL) /**< \brief (GPIO) Output Slew Rate Register 0 - Toggle 2 */
#define REG_GPIO_STER2             (*(RwReg  *)0x400E1560UL) /**< \brief (GPIO) Schmitt Trigger Enable Register 2 */
#define REG_GPIO_STERS2            (*(RwReg  *)0x400E1564UL) /**< \brief (GPIO) Schmitt Trigger Enable Register - Set 2 */
#define REG_GPIO_STERC2            (*(RwReg  *)0x400E1568UL) /**< \brief (GPIO) Schmitt Trigger Enable Register - Clear 2 */
#define REG_GPIO_STERT2            (*(RwReg  *)0x400E156CUL) /**< \brief (GPIO) Schmitt Trigger Enable Register - Toggle 2 */
#define REG_GPIO_EVER2             (*(RwReg  *)0x400E1580UL) /**< \brief (GPIO) Event Enable Register 2 */
#define REG_GPIO_EVERS2            (*(WoReg  *)0x400E1584UL) /**< \brief (GPIO) Event Enable Register - Set 2 */
#define REG_GPIO_EVERC2            (*(WoReg  *)0x400E1588UL) /**< \brief (GPIO) Event Enable Register - Clear 2 */
#define REG_GPIO_EVERT2            (*(WoReg  *)0x400E158CUL) /**< \brief (GPIO) Event Enable Register - Toggle 2 */
#define REG_GPIO_LOCK2             (*(RwReg  *)0x400E15A0UL) /**< \brief (GPIO) Lock Register 2 */
#define REG_GPIO_LOCKS2            (*(WoReg  *)0x400E15A4UL) /**< \brief (GPIO) Lock Register - Set 2 */
#define REG_GPIO_LOCKC2            (*(WoReg  *)0x400E15A8UL) /**< \brief (GPIO) Lock Register - Clear 2 */
#define REG_GPIO_LOCKT2            (*(WoReg  *)0x400E15ACUL) /**< \brief (GPIO) Lock Register - Toggle 2 */
#define REG_GPIO_UNLOCK2           (*(WoReg  *)0x400E15E0UL) /**< \brief (GPIO) Unlock Register 2 */
#define REG_GPIO_ASR2              (*(RwReg  *)0x400E15E4UL) /**< \brief (GPIO) Access Status Register 2 */
#define REG_GPIO_PARAMETER2        (*(RoReg  *)0x400E15F8UL) /**< \brief (GPIO) Parameter Register 2 */
#define REG_GPIO_VERSION2          (*(RoReg  *)0x400E15FCUL) /**< \brief (GPIO) Version Register 2 */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for GPIO peripheral ========== */
#define GPIO_GFER_DEFAULT_VAL       { 0x00000000, 0x00000000, 0x00000000 }
#define GPIO_GFER_IMPLEMENTED       { 0x00000000, 0x00000000, 0x00000000 }
#define GPIO_GFILTER_IMPLEMENTED    { 0x00000000, 0x00000000, 0x00000000 }
#define GPIO_GPER_DEFAULT_VAL       { 0xFFFFFFFF, 0x0000FFFF, 0xFFFFFFFF }
#define GPIO_GPER_IMPLEMENTED       { 0xFFFFFFFC, 0x0000FFFF, 0xFFFFFFFF }
#define GPIO_GPIO_IRQ_MSB           11      
#define GPIO_GPIO_MAX_IRQ_MSB       11      
#define GPIO_GPIO_PADDR_BITS        11      
#define GPIO_GPIO_PINS_MSB          95      
#define GPIO_IER_DEFAULT_VAL        { 0x00000000, 0x00000000, 0x00000000 }
#define GPIO_IER_IMPLEMENTED        { 0xFFFFFFFF, 0x0000FFFF, 0xFFFFFFFF }
#define GPIO_IFE_IMPLEMENTED        { 0xFFFFFFFF, 0x0000FFFF, 0xFFFFFFFF }
#define GPIO_IFR_IMPLEMENTED        { 0xFFFFFFFF, 0x0000FFFF, 0xFFFFFFFF }
#define GPIO_IMR0_DEFAULT_VAL       { 0x00000000, 0x00000000, 0x00000000 }
#define GPIO_IMR0_IMPLEMENTED       { 0xFFFFFFFF, 0x0000FFFF, 0xFFFFFFFF }
#define GPIO_IMR1_DEFAULT_VAL       { 0x00000000, 0x00000000, 0x00000000 }
#define GPIO_IMR1_IMPLEMENTED       { 0xFFFFFFFF, 0x0000FFFF, 0xFFFFFFFF }
#define GPIO_INPUT_SYNC_IMPLEMENTED { 0xFFFFFFFF, 0x0000FFFF, 0xFFFFFFFF }
#define GPIO_IRQS_PER_GROUP         8       
#define GPIO_LOCK_DEFAULT_VAL       { 0x00000000, 0x00000000, 0x00000000 }
#define GPIO_LOCK_IMPLEMENTED       { 0x00000000, 0x00000000, 0x00000000 }
#define GPIO_NUMBER_OF_PINS         96      
#define GPIO_ODCR0_DEFAULT_VAL      { 0x00000000, 0x00000000, 0x00000000 }
#define GPIO_ODCR0_IMPLEMENTED      { 0xFFFFFFFF, 0x0000FFFF, 0xFFFFFFFF }
#define GPIO_ODCR1_DEFAULT_VAL      { 0x00000000, 0x00000000, 0x00000000 }
#define GPIO_ODCR1_IMPLEMENTED      { 0x00000000, 0x00000000, 0x00000000 }
#define GPIO_ODER_DEFAULT_VAL       { 0x00000000, 0x00000000, 0x00000000 }
#define GPIO_ODER_IMPLEMENTED       { 0xFFFFFFFF, 0x0000FFFF, 0xFFFFFFFF }
#define GPIO_ODMER_DEFAULT_VAL      { 0x00000000, 0x00000000, 0x00000000 }
#define GPIO_ODMER_IMPLEMENTED      { 0x00000000, 0x00000000, 0x00000000 }
#define GPIO_OSRR0_DEFAULT_VAL      { 0xFFFFFFFF, 0x0000FFFF, 0xFFFFFFFF }
#define GPIO_OSRR0_IMPLEMENTED      { 0xFFFFFFFF, 0x0000FFFF, 0xFFFFFFFF }
#define GPIO_OVR_DEFAULT_VAL        { 0x00000000, 0x00000000, 0x00000000 }
#define GPIO_OVR_IMPLEMENTED        { 0xFFFFFFFF, 0x0000FFFF, 0xFFFFFFFF }
#define GPIO_PADDR_MSB              10      
#define GPIO_PDATA_MSB              31      
#define GPIO_PDER_DEFAULT_VAL       { 0x00000000, 0x00000000, 0x00000000 }
#define GPIO_PDER_IMPLEMENTED       { 0xFFFFFFFF, 0x0000FFFF, 0xFFFFFFFF }
#define GPIO_PMR0_DEFAULT_VAL       { 0x00000008, 0x00000000, 0x00000000 }
#define GPIO_PMR0_IMPLEMENTED       { 0xFFFFFFF4, 0x0000FFFF, 0xFFFFFFFF }
#define GPIO_PMR1_DEFAULT_VAL       { 0x00000000, 0x00000000, 0x00000000 }
#define GPIO_PMR1_IMPLEMENTED       { 0xFFFFFFF4, 0x0000FFFF, 0xFFFFFFFF }
#define GPIO_PMR2_DEFAULT_VAL       { 0x00000000, 0x00000000, 0x00000000 }
#define GPIO_PMR2_IMPLEMENTED       { 0xFFFFFFF4, 0x0000FFFF, 0xFFFFFFFF }
#define GPIO_PORT_LENGTH            3       
#define GPIO_PUER_DEFAULT_VAL       { 0x00000000, 0x00000000, 0x00000000 }
#define GPIO_PUER_IMPLEMENTED       { 0xFFFFFFFF, 0x0000FFFF, 0xFFFFFFFF }
#define GPIO_STER_DEFAULT_VAL       { 0x00000004, 0x00000000, 0x00000000 }
#define GPIO_STER_IMPLEMENTED       { 0xFFFFFFFF, 0x0000FFFF, 0xFFFFFFFF }

#endif /* _SAM4L_GPIO_INSTANCE_ */
