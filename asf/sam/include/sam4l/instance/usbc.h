/**
 * \file
 *
 * \brief Instance description for USBC
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

#ifndef _SAM4L_USBC_INSTANCE_
#define _SAM4L_USBC_INSTANCE_

/* ========== Register definition for USBC peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_USBC_UDCON             (0x400A5000) /**< \brief (USBC) Device General Control Register */
#define REG_USBC_UDINT             (0x400A5004) /**< \brief (USBC) Device Global Interupt Register */
#define REG_USBC_UDINTCLR          (0x400A5008) /**< \brief (USBC) Device Global Interrupt Clear Register */
#define REG_USBC_UDINTSET          (0x400A500C) /**< \brief (USBC) Device Global Interrupt Set Regsiter */
#define REG_USBC_UDINTE            (0x400A5010) /**< \brief (USBC) Device Global Interrupt Enable Register */
#define REG_USBC_UDINTECLR         (0x400A5014) /**< \brief (USBC) Device Global Interrupt Enable Clear Register */
#define REG_USBC_UDINTESET         (0x400A5018) /**< \brief (USBC) Device Global Interrupt Enable Set Register */
#define REG_USBC_UERST             (0x400A501C) /**< \brief (USBC) Endpoint Enable/Reset Register */
#define REG_USBC_UDFNUM            (0x400A5020) /**< \brief (USBC) Device Frame Number Register */
#define REG_USBC_UECFG0            (0x400A5100) /**< \brief (USBC) Endpoint Configuration Register */
#define REG_USBC_UECFG1            (0x400A5104) /**< \brief (USBC) Endpoint Configuration Register */
#define REG_USBC_UECFG2            (0x400A5108) /**< \brief (USBC) Endpoint Configuration Register */
#define REG_USBC_UECFG3            (0x400A510C) /**< \brief (USBC) Endpoint Configuration Register */
#define REG_USBC_UECFG4            (0x400A5110) /**< \brief (USBC) Endpoint Configuration Register */
#define REG_USBC_UECFG5            (0x400A5114) /**< \brief (USBC) Endpoint Configuration Register */
#define REG_USBC_UECFG6            (0x400A5118) /**< \brief (USBC) Endpoint Configuration Register */
#define REG_USBC_UECFG7            (0x400A511C) /**< \brief (USBC) Endpoint Configuration Register */
#define REG_USBC_UESTA0            (0x400A5130) /**< \brief (USBC) Endpoint Status Register */
#define REG_USBC_UESTA1            (0x400A5134) /**< \brief (USBC) Endpoint Status Register */
#define REG_USBC_UESTA2            (0x400A5138) /**< \brief (USBC) Endpoint Status Register */
#define REG_USBC_UESTA3            (0x400A513C) /**< \brief (USBC) Endpoint Status Register */
#define REG_USBC_UESTA4            (0x400A5140) /**< \brief (USBC) Endpoint Status Register */
#define REG_USBC_UESTA5            (0x400A5144) /**< \brief (USBC) Endpoint Status Register */
#define REG_USBC_UESTA6            (0x400A5148) /**< \brief (USBC) Endpoint Status Register */
#define REG_USBC_UESTA7            (0x400A514C) /**< \brief (USBC) Endpoint Status Register */
#define REG_USBC_UESTA0CLR         (0x400A5160) /**< \brief (USBC) Endpoint Status Clear Register */
#define REG_USBC_UESTA1CLR         (0x400A5164) /**< \brief (USBC) Endpoint Status Clear Register */
#define REG_USBC_UESTA2CLR         (0x400A5168) /**< \brief (USBC) Endpoint Status Clear Register */
#define REG_USBC_UESTA3CLR         (0x400A516C) /**< \brief (USBC) Endpoint Status Clear Register */
#define REG_USBC_UESTA4CLR         (0x400A5170) /**< \brief (USBC) Endpoint Status Clear Register */
#define REG_USBC_UESTA5CLR         (0x400A5174) /**< \brief (USBC) Endpoint Status Clear Register */
#define REG_USBC_UESTA6CLR         (0x400A5178) /**< \brief (USBC) Endpoint Status Clear Register */
#define REG_USBC_UESTA7CLR         (0x400A517C) /**< \brief (USBC) Endpoint Status Clear Register */
#define REG_USBC_UESTA0SET         (0x400A5190) /**< \brief (USBC) Endpoint Status Set Register */
#define REG_USBC_UESTA1SET         (0x400A5194) /**< \brief (USBC) Endpoint Status Set Register */
#define REG_USBC_UESTA2SET         (0x400A5198) /**< \brief (USBC) Endpoint Status Set Register */
#define REG_USBC_UESTA3SET         (0x400A519C) /**< \brief (USBC) Endpoint Status Set Register */
#define REG_USBC_UESTA4SET         (0x400A51A0) /**< \brief (USBC) Endpoint Status Set Register */
#define REG_USBC_UESTA5SET         (0x400A51A4) /**< \brief (USBC) Endpoint Status Set Register */
#define REG_USBC_UESTA6SET         (0x400A51A8) /**< \brief (USBC) Endpoint Status Set Register */
#define REG_USBC_UESTA7SET         (0x400A51AC) /**< \brief (USBC) Endpoint Status Set Register */
#define REG_USBC_UECON0            (0x400A51C0) /**< \brief (USBC) Endpoint Control Register */
#define REG_USBC_UECON1            (0x400A51C4) /**< \brief (USBC) Endpoint Control Register */
#define REG_USBC_UECON2            (0x400A51C8) /**< \brief (USBC) Endpoint Control Register */
#define REG_USBC_UECON3            (0x400A51CC) /**< \brief (USBC) Endpoint Control Register */
#define REG_USBC_UECON4            (0x400A51D0) /**< \brief (USBC) Endpoint Control Register */
#define REG_USBC_UECON5            (0x400A51D4) /**< \brief (USBC) Endpoint Control Register */
#define REG_USBC_UECON6            (0x400A51D8) /**< \brief (USBC) Endpoint Control Register */
#define REG_USBC_UECON7            (0x400A51DC) /**< \brief (USBC) Endpoint Control Register */
#define REG_USBC_UECON0SET         (0x400A51F0) /**< \brief (USBC) Endpoint Control Set Register */
#define REG_USBC_UECON1SET         (0x400A51F4) /**< \brief (USBC) Endpoint Control Set Register */
#define REG_USBC_UECON2SET         (0x400A51F8) /**< \brief (USBC) Endpoint Control Set Register */
#define REG_USBC_UECON3SET         (0x400A51FC) /**< \brief (USBC) Endpoint Control Set Register */
#define REG_USBC_UECON4SET         (0x400A5200) /**< \brief (USBC) Endpoint Control Set Register */
#define REG_USBC_UECON5SET         (0x400A5204) /**< \brief (USBC) Endpoint Control Set Register */
#define REG_USBC_UECON6SET         (0x400A5208) /**< \brief (USBC) Endpoint Control Set Register */
#define REG_USBC_UECON7SET         (0x400A520C) /**< \brief (USBC) Endpoint Control Set Register */
#define REG_USBC_UECON0CLR         (0x400A5220) /**< \brief (USBC) Endpoint Control Clear Register */
#define REG_USBC_UECON1CLR         (0x400A5224) /**< \brief (USBC) TXINE Clear */
#define REG_USBC_UECON2CLR         (0x400A5228) /**< \brief (USBC) TXINE Clear */
#define REG_USBC_UECON3CLR         (0x400A522C) /**< \brief (USBC) TXINE Clear */
#define REG_USBC_UECON4CLR         (0x400A5230) /**< \brief (USBC) TXINE Clear */
#define REG_USBC_UECON5CLR         (0x400A5234) /**< \brief (USBC) TXINE Clear */
#define REG_USBC_UECON6CLR         (0x400A5238) /**< \brief (USBC) TXINE Clear */
#define REG_USBC_UECON7CLR         (0x400A523C) /**< \brief (USBC) TXINE Clear */
#define REG_USBC_UHCON             (0x400A5400) /**< \brief (USBC) Host General Control Register */
#define REG_USBC_UHINT             (0x400A5404) /**< \brief (USBC) Host Global Interrupt Register */
#define REG_USBC_UHINTCLR          (0x400A5408) /**< \brief (USBC) Host Global Interrrupt Clear Register */
#define REG_USBC_UHINTSET          (0x400A540C) /**< \brief (USBC) Host Global Interrupt Set Register */
#define REG_USBC_UHINTE            (0x400A5410) /**< \brief (USBC) Host Global Interrupt Enable Register */
#define REG_USBC_UHINTECLR         (0x400A5414) /**< \brief (USBC) Host Global Interrupt Enable Clear Register */
#define REG_USBC_UHINTESET         (0x400A5418) /**< \brief (USBC) Host Global Interrupt Enable Set Register */
#define REG_USBC_UPRST             (0x400A541C) /**< \brief (USBC) Pipe Reset Register */
#define REG_USBC_UHFNUM            (0x400A5420) /**< \brief (USBC) Host Frame Number Register */
#define REG_USBC_UHSOFC            (0x400A5424) /**< \brief (USBC) Host Start of Frame Control Register */
#define REG_USBC_UPCFG0            (0x400A5500) /**< \brief (USBC) Pipe Configuration Register */
#define REG_USBC_UPCFG1            (0x400A5504) /**< \brief (USBC) Pipe Configuration Register */
#define REG_USBC_UPCFG2            (0x400A5508) /**< \brief (USBC) Pipe Configuration Register */
#define REG_USBC_UPCFG3            (0x400A550C) /**< \brief (USBC) Pipe Configuration Register */
#define REG_USBC_UPCFG4            (0x400A5510) /**< \brief (USBC) Pipe Configuration Register */
#define REG_USBC_UPCFG5            (0x400A5514) /**< \brief (USBC) Pipe Configuration Register */
#define REG_USBC_UPCFG6            (0x400A5518) /**< \brief (USBC) Pipe Configuration Register */
#define REG_USBC_UPCFG7            (0x400A551C) /**< \brief (USBC) Pipe Configuration Register */
#define REG_USBC_UPSTA0            (0x400A5530) /**< \brief (USBC) Pipe Status Register */
#define REG_USBC_UPSTA1            (0x400A5534) /**< \brief (USBC) Pipe Status Register */
#define REG_USBC_UPSTA2            (0x400A5538) /**< \brief (USBC) Pipe Status Register */
#define REG_USBC_UPSTA3            (0x400A553C) /**< \brief (USBC) Pipe Status Register */
#define REG_USBC_UPSTA4            (0x400A5540) /**< \brief (USBC) Pipe Status Register */
#define REG_USBC_UPSTA5            (0x400A5544) /**< \brief (USBC) Pipe Status Register */
#define REG_USBC_UPSTA6            (0x400A5548) /**< \brief (USBC) Pipe Status Register */
#define REG_USBC_UPSTA7            (0x400A554C) /**< \brief (USBC) Pipe Status Register */
#define REG_USBC_UPSTA0CLR         (0x400A5560) /**< \brief (USBC) Pipe Status Clear Register */
#define REG_USBC_UPSTA1CLR         (0x400A5564) /**< \brief (USBC) Pipe Status Clear Register */
#define REG_USBC_UPSTA2CLR         (0x400A5568) /**< \brief (USBC) Pipe Status Clear Register */
#define REG_USBC_UPSTA3CLR         (0x400A556C) /**< \brief (USBC) Pipe Status Clear Register */
#define REG_USBC_UPSTA4CLR         (0x400A5570) /**< \brief (USBC) Pipe Status Clear Register */
#define REG_USBC_UPSTA5CLR         (0x400A5574) /**< \brief (USBC) Pipe Status Clear Register */
#define REG_USBC_UPSTA6CLR         (0x400A5578) /**< \brief (USBC) Pipe Status Clear Register */
#define REG_USBC_UPSTA7CLR         (0x400A557C) /**< \brief (USBC) Pipe Status Clear Register */
#define REG_USBC_UPSTA0SET         (0x400A5590) /**< \brief (USBC) Pipe Status Set Register */
#define REG_USBC_UPSTA1SET         (0x400A5594) /**< \brief (USBC) Pipe Status Set Register */
#define REG_USBC_UPSTA2SET         (0x400A5598) /**< \brief (USBC) Pipe Status Set Register */
#define REG_USBC_UPSTA3SET         (0x400A559C) /**< \brief (USBC) Pipe Status Set Register */
#define REG_USBC_UPSTA4SET         (0x400A55A0) /**< \brief (USBC) Pipe Status Set Register */
#define REG_USBC_UPSTA5SET         (0x400A55A4) /**< \brief (USBC) Pipe Status Set Register */
#define REG_USBC_UPSTA6SET         (0x400A55A8) /**< \brief (USBC) Pipe Status Set Register */
#define REG_USBC_UPSTA7SET         (0x400A55AC) /**< \brief (USBC) Pipe Status Set Register */
#define REG_USBC_UPCON0            (0x400A55C0) /**< \brief (USBC) Pipe Control Register */
#define REG_USBC_UPCON1            (0x400A55C4) /**< \brief (USBC) Pipe Control Register */
#define REG_USBC_UPCON2            (0x400A55C8) /**< \brief (USBC) Pipe Control Register */
#define REG_USBC_UPCON3            (0x400A55CC) /**< \brief (USBC) Pipe Control Register */
#define REG_USBC_UPCON4            (0x400A55D0) /**< \brief (USBC) Pipe Control Register */
#define REG_USBC_UPCON5            (0x400A55D4) /**< \brief (USBC) Pipe Control Register */
#define REG_USBC_UPCON6            (0x400A55D8) /**< \brief (USBC) Pipe Control Register */
#define REG_USBC_UPCON7            (0x400A55DC) /**< \brief (USBC) Pipe Control Register */
#define REG_USBC_UPCON0SET         (0x400A55F0) /**< \brief (USBC) Pipe Control Set Register */
#define REG_USBC_UPCON1SET         (0x400A55F4) /**< \brief (USBC) Pipe Control Set Register */
#define REG_USBC_UPCON2SET         (0x400A55F8) /**< \brief (USBC) Pipe Control Set Register */
#define REG_USBC_UPCON3SET         (0x400A55FC) /**< \brief (USBC) Pipe Control Set Register */
#define REG_USBC_UPCON4SET         (0x400A5600) /**< \brief (USBC) Pipe Control Set Register */
#define REG_USBC_UPCON5SET         (0x400A5604) /**< \brief (USBC) Pipe Control Set Register */
#define REG_USBC_UPCON6SET         (0x400A5608) /**< \brief (USBC) Pipe Control Set Register */
#define REG_USBC_UPCON7SET         (0x400A560C) /**< \brief (USBC) Pipe Control Set Register */
#define REG_USBC_UPCON0CLR         (0x400A5620) /**< \brief (USBC) Pipe Control Clear Register */
#define REG_USBC_UPCON1CLR         (0x400A5624) /**< \brief (USBC) Pipe Control Clear Register */
#define REG_USBC_UPCON2CLR         (0x400A5628) /**< \brief (USBC) Pipe Control Clear Register */
#define REG_USBC_UPCON3CLR         (0x400A562C) /**< \brief (USBC) Pipe Control Clear Register */
#define REG_USBC_UPCON4CLR         (0x400A5630) /**< \brief (USBC) Pipe Control Clear Register */
#define REG_USBC_UPCON5CLR         (0x400A5634) /**< \brief (USBC) Pipe Control Clear Register */
#define REG_USBC_UPCON6CLR         (0x400A5638) /**< \brief (USBC) Pipe Control Clear Register */
#define REG_USBC_UPCON7CLR         (0x400A563C) /**< \brief (USBC) Pipe Control Clear Register */
#define REG_USBC_UPINRQ0           (0x400A5650) /**< \brief (USBC) Pipe In Request */
#define REG_USBC_UPINRQ1           (0x400A5654) /**< \brief (USBC) Pipe In Request */
#define REG_USBC_UPINRQ2           (0x400A5658) /**< \brief (USBC) Pipe In Request */
#define REG_USBC_UPINRQ3           (0x400A565C) /**< \brief (USBC) Pipe In Request */
#define REG_USBC_UPINRQ4           (0x400A5660) /**< \brief (USBC) Pipe In Request */
#define REG_USBC_UPINRQ5           (0x400A5664) /**< \brief (USBC) Pipe In Request */
#define REG_USBC_UPINRQ6           (0x400A5668) /**< \brief (USBC) Pipe In Request */
#define REG_USBC_UPINRQ7           (0x400A566C) /**< \brief (USBC) Pipe In Request */
#define REG_USBC_USBCON            (0x400A5800) /**< \brief (USBC) General Control Register */
#define REG_USBC_USBSTA            (0x400A5804) /**< \brief (USBC) General Status Register */
#define REG_USBC_USBSTACLR         (0x400A5808) /**< \brief (USBC) General Status Clear Register */
#define REG_USBC_USBSTASET         (0x400A580C) /**< \brief (USBC) General Status Set Register */
#define REG_USBC_UVERS             (0x400A5818) /**< \brief (USBC) IP Version Register */
#define REG_USBC_UFEATURES         (0x400A581C) /**< \brief (USBC) IP Features Register */
#define REG_USBC_UADDRSIZE         (0x400A5820) /**< \brief (USBC) IP PB address size Register */
#define REG_USBC_UNAME1            (0x400A5824) /**< \brief (USBC) IP Name Part One: HUSB */
#define REG_USBC_UNAME2            (0x400A5828) /**< \brief (USBC) IP Name Part Two: HOST */
#define REG_USBC_USBFSM            (0x400A582C) /**< \brief (USBC) USB internal finite state machine */
#define REG_USBC_UDESC             (0x400A5830) /**< \brief (USBC) Endpoint descriptor table */
#else
#define REG_USBC_UDCON             (*(RwReg  *)0x400A5000UL) /**< \brief (USBC) Device General Control Register */
#define REG_USBC_UDINT             (*(RoReg  *)0x400A5004UL) /**< \brief (USBC) Device Global Interupt Register */
#define REG_USBC_UDINTCLR          (*(WoReg  *)0x400A5008UL) /**< \brief (USBC) Device Global Interrupt Clear Register */
#define REG_USBC_UDINTSET          (*(WoReg  *)0x400A500CUL) /**< \brief (USBC) Device Global Interrupt Set Regsiter */
#define REG_USBC_UDINTE            (*(RoReg  *)0x400A5010UL) /**< \brief (USBC) Device Global Interrupt Enable Register */
#define REG_USBC_UDINTECLR         (*(WoReg  *)0x400A5014UL) /**< \brief (USBC) Device Global Interrupt Enable Clear Register */
#define REG_USBC_UDINTESET         (*(WoReg  *)0x400A5018UL) /**< \brief (USBC) Device Global Interrupt Enable Set Register */
#define REG_USBC_UERST             (*(RwReg  *)0x400A501CUL) /**< \brief (USBC) Endpoint Enable/Reset Register */
#define REG_USBC_UDFNUM            (*(RoReg  *)0x400A5020UL) /**< \brief (USBC) Device Frame Number Register */
#define REG_USBC_UECFG0            (*(RwReg  *)0x400A5100UL) /**< \brief (USBC) Endpoint Configuration Register */
#define REG_USBC_UECFG1            (*(RwReg  *)0x400A5104UL) /**< \brief (USBC) Endpoint Configuration Register */
#define REG_USBC_UECFG2            (*(RwReg  *)0x400A5108UL) /**< \brief (USBC) Endpoint Configuration Register */
#define REG_USBC_UECFG3            (*(RwReg  *)0x400A510CUL) /**< \brief (USBC) Endpoint Configuration Register */
#define REG_USBC_UECFG4            (*(RwReg  *)0x400A5110UL) /**< \brief (USBC) Endpoint Configuration Register */
#define REG_USBC_UECFG5            (*(RwReg  *)0x400A5114UL) /**< \brief (USBC) Endpoint Configuration Register */
#define REG_USBC_UECFG6            (*(RwReg  *)0x400A5118UL) /**< \brief (USBC) Endpoint Configuration Register */
#define REG_USBC_UECFG7            (*(RwReg  *)0x400A511CUL) /**< \brief (USBC) Endpoint Configuration Register */
#define REG_USBC_UESTA0            (*(RoReg  *)0x400A5130UL) /**< \brief (USBC) Endpoint Status Register */
#define REG_USBC_UESTA1            (*(RoReg  *)0x400A5134UL) /**< \brief (USBC) Endpoint Status Register */
#define REG_USBC_UESTA2            (*(RoReg  *)0x400A5138UL) /**< \brief (USBC) Endpoint Status Register */
#define REG_USBC_UESTA3            (*(RoReg  *)0x400A513CUL) /**< \brief (USBC) Endpoint Status Register */
#define REG_USBC_UESTA4            (*(RoReg  *)0x400A5140UL) /**< \brief (USBC) Endpoint Status Register */
#define REG_USBC_UESTA5            (*(RoReg  *)0x400A5144UL) /**< \brief (USBC) Endpoint Status Register */
#define REG_USBC_UESTA6            (*(RoReg  *)0x400A5148UL) /**< \brief (USBC) Endpoint Status Register */
#define REG_USBC_UESTA7            (*(RoReg  *)0x400A514CUL) /**< \brief (USBC) Endpoint Status Register */
#define REG_USBC_UESTA0CLR         (*(WoReg  *)0x400A5160UL) /**< \brief (USBC) Endpoint Status Clear Register */
#define REG_USBC_UESTA1CLR         (*(WoReg  *)0x400A5164UL) /**< \brief (USBC) Endpoint Status Clear Register */
#define REG_USBC_UESTA2CLR         (*(WoReg  *)0x400A5168UL) /**< \brief (USBC) Endpoint Status Clear Register */
#define REG_USBC_UESTA3CLR         (*(WoReg  *)0x400A516CUL) /**< \brief (USBC) Endpoint Status Clear Register */
#define REG_USBC_UESTA4CLR         (*(WoReg  *)0x400A5170UL) /**< \brief (USBC) Endpoint Status Clear Register */
#define REG_USBC_UESTA5CLR         (*(WoReg  *)0x400A5174UL) /**< \brief (USBC) Endpoint Status Clear Register */
#define REG_USBC_UESTA6CLR         (*(WoReg  *)0x400A5178UL) /**< \brief (USBC) Endpoint Status Clear Register */
#define REG_USBC_UESTA7CLR         (*(WoReg  *)0x400A517CUL) /**< \brief (USBC) Endpoint Status Clear Register */
#define REG_USBC_UESTA0SET         (*(WoReg  *)0x400A5190UL) /**< \brief (USBC) Endpoint Status Set Register */
#define REG_USBC_UESTA1SET         (*(WoReg  *)0x400A5194UL) /**< \brief (USBC) Endpoint Status Set Register */
#define REG_USBC_UESTA2SET         (*(WoReg  *)0x400A5198UL) /**< \brief (USBC) Endpoint Status Set Register */
#define REG_USBC_UESTA3SET         (*(WoReg  *)0x400A519CUL) /**< \brief (USBC) Endpoint Status Set Register */
#define REG_USBC_UESTA4SET         (*(WoReg  *)0x400A51A0UL) /**< \brief (USBC) Endpoint Status Set Register */
#define REG_USBC_UESTA5SET         (*(WoReg  *)0x400A51A4UL) /**< \brief (USBC) Endpoint Status Set Register */
#define REG_USBC_UESTA6SET         (*(WoReg  *)0x400A51A8UL) /**< \brief (USBC) Endpoint Status Set Register */
#define REG_USBC_UESTA7SET         (*(WoReg  *)0x400A51ACUL) /**< \brief (USBC) Endpoint Status Set Register */
#define REG_USBC_UECON0            (*(RoReg  *)0x400A51C0UL) /**< \brief (USBC) Endpoint Control Register */
#define REG_USBC_UECON1            (*(RoReg  *)0x400A51C4UL) /**< \brief (USBC) Endpoint Control Register */
#define REG_USBC_UECON2            (*(RoReg  *)0x400A51C8UL) /**< \brief (USBC) Endpoint Control Register */
#define REG_USBC_UECON3            (*(RoReg  *)0x400A51CCUL) /**< \brief (USBC) Endpoint Control Register */
#define REG_USBC_UECON4            (*(RoReg  *)0x400A51D0UL) /**< \brief (USBC) Endpoint Control Register */
#define REG_USBC_UECON5            (*(RoReg  *)0x400A51D4UL) /**< \brief (USBC) Endpoint Control Register */
#define REG_USBC_UECON6            (*(RoReg  *)0x400A51D8UL) /**< \brief (USBC) Endpoint Control Register */
#define REG_USBC_UECON7            (*(RoReg  *)0x400A51DCUL) /**< \brief (USBC) Endpoint Control Register */
#define REG_USBC_UECON0SET         (*(WoReg  *)0x400A51F0UL) /**< \brief (USBC) Endpoint Control Set Register */
#define REG_USBC_UECON1SET         (*(WoReg  *)0x400A51F4UL) /**< \brief (USBC) Endpoint Control Set Register */
#define REG_USBC_UECON2SET         (*(WoReg  *)0x400A51F8UL) /**< \brief (USBC) Endpoint Control Set Register */
#define REG_USBC_UECON3SET         (*(WoReg  *)0x400A51FCUL) /**< \brief (USBC) Endpoint Control Set Register */
#define REG_USBC_UECON4SET         (*(WoReg  *)0x400A5200UL) /**< \brief (USBC) Endpoint Control Set Register */
#define REG_USBC_UECON5SET         (*(WoReg  *)0x400A5204UL) /**< \brief (USBC) Endpoint Control Set Register */
#define REG_USBC_UECON6SET         (*(WoReg  *)0x400A5208UL) /**< \brief (USBC) Endpoint Control Set Register */
#define REG_USBC_UECON7SET         (*(WoReg  *)0x400A520CUL) /**< \brief (USBC) Endpoint Control Set Register */
#define REG_USBC_UECON0CLR         (*(WoReg  *)0x400A5220UL) /**< \brief (USBC) Endpoint Control Clear Register */
#define REG_USBC_UECON1CLR         (*(WoReg  *)0x400A5224UL) /**< \brief (USBC) TXINE Clear */
#define REG_USBC_UECON2CLR         (*(WoReg  *)0x400A5228UL) /**< \brief (USBC) TXINE Clear */
#define REG_USBC_UECON3CLR         (*(WoReg  *)0x400A522CUL) /**< \brief (USBC) TXINE Clear */
#define REG_USBC_UECON4CLR         (*(WoReg  *)0x400A5230UL) /**< \brief (USBC) TXINE Clear */
#define REG_USBC_UECON5CLR         (*(WoReg  *)0x400A5234UL) /**< \brief (USBC) TXINE Clear */
#define REG_USBC_UECON6CLR         (*(WoReg  *)0x400A5238UL) /**< \brief (USBC) TXINE Clear */
#define REG_USBC_UECON7CLR         (*(WoReg  *)0x400A523CUL) /**< \brief (USBC) TXINE Clear */
#define REG_USBC_UHCON             (*(RwReg  *)0x400A5400UL) /**< \brief (USBC) Host General Control Register */
#define REG_USBC_UHINT             (*(RoReg  *)0x400A5404UL) /**< \brief (USBC) Host Global Interrupt Register */
#define REG_USBC_UHINTCLR          (*(WoReg  *)0x400A5408UL) /**< \brief (USBC) Host Global Interrrupt Clear Register */
#define REG_USBC_UHINTSET          (*(WoReg  *)0x400A540CUL) /**< \brief (USBC) Host Global Interrupt Set Register */
#define REG_USBC_UHINTE            (*(RoReg  *)0x400A5410UL) /**< \brief (USBC) Host Global Interrupt Enable Register */
#define REG_USBC_UHINTECLR         (*(WoReg  *)0x400A5414UL) /**< \brief (USBC) Host Global Interrupt Enable Clear Register */
#define REG_USBC_UHINTESET         (*(WoReg  *)0x400A5418UL) /**< \brief (USBC) Host Global Interrupt Enable Set Register */
#define REG_USBC_UPRST             (*(RwReg  *)0x400A541CUL) /**< \brief (USBC) Pipe Reset Register */
#define REG_USBC_UHFNUM            (*(RwReg  *)0x400A5420UL) /**< \brief (USBC) Host Frame Number Register */
#define REG_USBC_UHSOFC            (*(RwReg  *)0x400A5424UL) /**< \brief (USBC) Host Start of Frame Control Register */
#define REG_USBC_UPCFG0            (*(RwReg  *)0x400A5500UL) /**< \brief (USBC) Pipe Configuration Register */
#define REG_USBC_UPCFG1            (*(RwReg  *)0x400A5504UL) /**< \brief (USBC) Pipe Configuration Register */
#define REG_USBC_UPCFG2            (*(RwReg  *)0x400A5508UL) /**< \brief (USBC) Pipe Configuration Register */
#define REG_USBC_UPCFG3            (*(RwReg  *)0x400A550CUL) /**< \brief (USBC) Pipe Configuration Register */
#define REG_USBC_UPCFG4            (*(RwReg  *)0x400A5510UL) /**< \brief (USBC) Pipe Configuration Register */
#define REG_USBC_UPCFG5            (*(RwReg  *)0x400A5514UL) /**< \brief (USBC) Pipe Configuration Register */
#define REG_USBC_UPCFG6            (*(RwReg  *)0x400A5518UL) /**< \brief (USBC) Pipe Configuration Register */
#define REG_USBC_UPCFG7            (*(RwReg  *)0x400A551CUL) /**< \brief (USBC) Pipe Configuration Register */
#define REG_USBC_UPSTA0            (*(RoReg  *)0x400A5530UL) /**< \brief (USBC) Pipe Status Register */
#define REG_USBC_UPSTA1            (*(RoReg  *)0x400A5534UL) /**< \brief (USBC) Pipe Status Register */
#define REG_USBC_UPSTA2            (*(RoReg  *)0x400A5538UL) /**< \brief (USBC) Pipe Status Register */
#define REG_USBC_UPSTA3            (*(RoReg  *)0x400A553CUL) /**< \brief (USBC) Pipe Status Register */
#define REG_USBC_UPSTA4            (*(RoReg  *)0x400A5540UL) /**< \brief (USBC) Pipe Status Register */
#define REG_USBC_UPSTA5            (*(RoReg  *)0x400A5544UL) /**< \brief (USBC) Pipe Status Register */
#define REG_USBC_UPSTA6            (*(RoReg  *)0x400A5548UL) /**< \brief (USBC) Pipe Status Register */
#define REG_USBC_UPSTA7            (*(RoReg  *)0x400A554CUL) /**< \brief (USBC) Pipe Status Register */
#define REG_USBC_UPSTA0CLR         (*(WoReg  *)0x400A5560UL) /**< \brief (USBC) Pipe Status Clear Register */
#define REG_USBC_UPSTA1CLR         (*(WoReg  *)0x400A5564UL) /**< \brief (USBC) Pipe Status Clear Register */
#define REG_USBC_UPSTA2CLR         (*(WoReg  *)0x400A5568UL) /**< \brief (USBC) Pipe Status Clear Register */
#define REG_USBC_UPSTA3CLR         (*(WoReg  *)0x400A556CUL) /**< \brief (USBC) Pipe Status Clear Register */
#define REG_USBC_UPSTA4CLR         (*(WoReg  *)0x400A5570UL) /**< \brief (USBC) Pipe Status Clear Register */
#define REG_USBC_UPSTA5CLR         (*(WoReg  *)0x400A5574UL) /**< \brief (USBC) Pipe Status Clear Register */
#define REG_USBC_UPSTA6CLR         (*(WoReg  *)0x400A5578UL) /**< \brief (USBC) Pipe Status Clear Register */
#define REG_USBC_UPSTA7CLR         (*(WoReg  *)0x400A557CUL) /**< \brief (USBC) Pipe Status Clear Register */
#define REG_USBC_UPSTA0SET         (*(WoReg  *)0x400A5590UL) /**< \brief (USBC) Pipe Status Set Register */
#define REG_USBC_UPSTA1SET         (*(WoReg  *)0x400A5594UL) /**< \brief (USBC) Pipe Status Set Register */
#define REG_USBC_UPSTA2SET         (*(WoReg  *)0x400A5598UL) /**< \brief (USBC) Pipe Status Set Register */
#define REG_USBC_UPSTA3SET         (*(WoReg  *)0x400A559CUL) /**< \brief (USBC) Pipe Status Set Register */
#define REG_USBC_UPSTA4SET         (*(WoReg  *)0x400A55A0UL) /**< \brief (USBC) Pipe Status Set Register */
#define REG_USBC_UPSTA5SET         (*(WoReg  *)0x400A55A4UL) /**< \brief (USBC) Pipe Status Set Register */
#define REG_USBC_UPSTA6SET         (*(WoReg  *)0x400A55A8UL) /**< \brief (USBC) Pipe Status Set Register */
#define REG_USBC_UPSTA7SET         (*(WoReg  *)0x400A55ACUL) /**< \brief (USBC) Pipe Status Set Register */
#define REG_USBC_UPCON0            (*(RoReg  *)0x400A55C0UL) /**< \brief (USBC) Pipe Control Register */
#define REG_USBC_UPCON1            (*(RoReg  *)0x400A55C4UL) /**< \brief (USBC) Pipe Control Register */
#define REG_USBC_UPCON2            (*(RoReg  *)0x400A55C8UL) /**< \brief (USBC) Pipe Control Register */
#define REG_USBC_UPCON3            (*(RoReg  *)0x400A55CCUL) /**< \brief (USBC) Pipe Control Register */
#define REG_USBC_UPCON4            (*(RoReg  *)0x400A55D0UL) /**< \brief (USBC) Pipe Control Register */
#define REG_USBC_UPCON5            (*(RoReg  *)0x400A55D4UL) /**< \brief (USBC) Pipe Control Register */
#define REG_USBC_UPCON6            (*(RoReg  *)0x400A55D8UL) /**< \brief (USBC) Pipe Control Register */
#define REG_USBC_UPCON7            (*(RoReg  *)0x400A55DCUL) /**< \brief (USBC) Pipe Control Register */
#define REG_USBC_UPCON0SET         (*(WoReg  *)0x400A55F0UL) /**< \brief (USBC) Pipe Control Set Register */
#define REG_USBC_UPCON1SET         (*(WoReg  *)0x400A55F4UL) /**< \brief (USBC) Pipe Control Set Register */
#define REG_USBC_UPCON2SET         (*(WoReg  *)0x400A55F8UL) /**< \brief (USBC) Pipe Control Set Register */
#define REG_USBC_UPCON3SET         (*(WoReg  *)0x400A55FCUL) /**< \brief (USBC) Pipe Control Set Register */
#define REG_USBC_UPCON4SET         (*(WoReg  *)0x400A5600UL) /**< \brief (USBC) Pipe Control Set Register */
#define REG_USBC_UPCON5SET         (*(WoReg  *)0x400A5604UL) /**< \brief (USBC) Pipe Control Set Register */
#define REG_USBC_UPCON6SET         (*(WoReg  *)0x400A5608UL) /**< \brief (USBC) Pipe Control Set Register */
#define REG_USBC_UPCON7SET         (*(WoReg  *)0x400A560CUL) /**< \brief (USBC) Pipe Control Set Register */
#define REG_USBC_UPCON0CLR         (*(WoReg  *)0x400A5620UL) /**< \brief (USBC) Pipe Control Clear Register */
#define REG_USBC_UPCON1CLR         (*(WoReg  *)0x400A5624UL) /**< \brief (USBC) Pipe Control Clear Register */
#define REG_USBC_UPCON2CLR         (*(WoReg  *)0x400A5628UL) /**< \brief (USBC) Pipe Control Clear Register */
#define REG_USBC_UPCON3CLR         (*(WoReg  *)0x400A562CUL) /**< \brief (USBC) Pipe Control Clear Register */
#define REG_USBC_UPCON4CLR         (*(WoReg  *)0x400A5630UL) /**< \brief (USBC) Pipe Control Clear Register */
#define REG_USBC_UPCON5CLR         (*(WoReg  *)0x400A5634UL) /**< \brief (USBC) Pipe Control Clear Register */
#define REG_USBC_UPCON6CLR         (*(WoReg  *)0x400A5638UL) /**< \brief (USBC) Pipe Control Clear Register */
#define REG_USBC_UPCON7CLR         (*(WoReg  *)0x400A563CUL) /**< \brief (USBC) Pipe Control Clear Register */
#define REG_USBC_UPINRQ0           (*(RwReg  *)0x400A5650UL) /**< \brief (USBC) Pipe In Request */
#define REG_USBC_UPINRQ1           (*(RwReg  *)0x400A5654UL) /**< \brief (USBC) Pipe In Request */
#define REG_USBC_UPINRQ2           (*(RwReg  *)0x400A5658UL) /**< \brief (USBC) Pipe In Request */
#define REG_USBC_UPINRQ3           (*(RwReg  *)0x400A565CUL) /**< \brief (USBC) Pipe In Request */
#define REG_USBC_UPINRQ4           (*(RwReg  *)0x400A5660UL) /**< \brief (USBC) Pipe In Request */
#define REG_USBC_UPINRQ5           (*(RwReg  *)0x400A5664UL) /**< \brief (USBC) Pipe In Request */
#define REG_USBC_UPINRQ6           (*(RwReg  *)0x400A5668UL) /**< \brief (USBC) Pipe In Request */
#define REG_USBC_UPINRQ7           (*(RwReg  *)0x400A566CUL) /**< \brief (USBC) Pipe In Request */
#define REG_USBC_USBCON            (*(RwReg  *)0x400A5800UL) /**< \brief (USBC) General Control Register */
#define REG_USBC_USBSTA            (*(RoReg  *)0x400A5804UL) /**< \brief (USBC) General Status Register */
#define REG_USBC_USBSTACLR         (*(WoReg  *)0x400A5808UL) /**< \brief (USBC) General Status Clear Register */
#define REG_USBC_USBSTASET         (*(WoReg  *)0x400A580CUL) /**< \brief (USBC) General Status Set Register */
#define REG_USBC_UVERS             (*(RoReg  *)0x400A5818UL) /**< \brief (USBC) IP Version Register */
#define REG_USBC_UFEATURES         (*(RoReg  *)0x400A581CUL) /**< \brief (USBC) IP Features Register */
#define REG_USBC_UADDRSIZE         (*(RoReg  *)0x400A5820UL) /**< \brief (USBC) IP PB address size Register */
#define REG_USBC_UNAME1            (*(RoReg  *)0x400A5824UL) /**< \brief (USBC) IP Name Part One: HUSB */
#define REG_USBC_UNAME2            (*(RoReg  *)0x400A5828UL) /**< \brief (USBC) IP Name Part Two: HOST */
#define REG_USBC_USBFSM            (*(RoReg  *)0x400A582CUL) /**< \brief (USBC) USB internal finite state machine */
#define REG_USBC_UDESC             (*(RwReg  *)0x400A5830UL) /**< \brief (USBC) Endpoint descriptor table */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for USBC peripheral ========== */
#define USBC_EPT_NBR                7       
#define USBC_GCLK_NUM               7       
#define USBC_HOST_IMPLEMENTED       1       
#define USBC_OTG_IMPLEMENTED                
#define USBC_USB_UTMI_IMPLEMENTED           

#endif /* _SAM4L_USBC_INSTANCE_ */
