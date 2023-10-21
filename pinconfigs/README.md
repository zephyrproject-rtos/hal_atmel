# Atmel SAM/SAM0 pin configurations

This directory contains a set of files describing valid pin configurations for
multiple Atmel Smart Arm MCUs (SAM) devices. This configuration files maps a
pin to a peripheral signal which multiplex, at end, I/O lines pins. For example,
`PWMH0` signal can be mapped to `PA0`, `PA11`, `PA23`, `PB0`, `PC18` or `PD20`
for `SAM4E` SoC. These configurations can be used to generate valid pin
mappings.

Atmel SAM devices use three distinct controllers to configure signal
multiplexing: PIO (SAM), GPIO (SAM4L) and PORT (SAM0). In general, all devices
uses similar definitions where each pin has one or more associated alternate
function. These alternate functions can be sometimes changed using especific
system functionality. The struct created to map the alternate functions is
shared between all controllers and was concepted to be more close possible to
datasheet tables.

In the following sections the expected file format is described.

## Configuration

All fields are common, independently of the pin controller, and all fields are
mandatory.

- `model`: Always defined as `atmel,sam`
- `family`: Family name like: `sam4e`, `sam4l`, `d5x-e5x`
- `map`: Define the macro that will be used to generate code for an specific
  controller. Currently `SAM_PINMUX` is used for all cases.
- `series`: The SoC series set
- `revisions` (optional): The SoC die revision which exists for sam0 series.
- `variants`: Each variant has a different set of valid pin combinations because
  of a different number of pins.
- `pins` (required): The pin map itself

Example:

The below `yaml` snip have all the common fields defined. It defines few
aleatory pins to help understand the definition schema.

```yaml
# Pin codes:
#
# - 48      pins: g
# - 64      pins: j
# - 100     pins: n
# - 120/128 pins: p (package exception)

model: atmel,sam

family: d5x-e5x

map: SAM_PINMUX

series: [d51, e51, e53, e54]

revisions:
  d51: a
  e51: ab
  d53: ab
  d54: abcd

variants:
  - pincode: g
    series: [d51, e51]
  - pincode: j
    series: [d51, e51, e53]
  - pincode: n
    series: [d51, e51, e53, e54]
  - pincode: p
    series: [d51, e54]
    exception: y

pins:
  pc00:
    pincodes: [n, p]
    periph:
      - [a, eic, extint0]
      - [b, adc1, ain10]
  pa24:
    pincodes: [g, j, n, p]
    periph:
      - [a, eic, extint8]
      - [c, sercom3, pad2]
      - [d, sercom5, pad2]
      - [e, tc5, wo0]
      - [f, tc2, wo2]
      - [g, pdec, qdi0]
      - [h, usb, dm]
      - [i, can0, tx, [d51, e53]]
      - [n, ccl, in8]
  pa25:
    pincodes: [g, j, n, p]
    periph:
      - [a, eic, extint9]
      - [c, sercom3, pad3]
      - [d, sercom5, pad3]
      - [e, tc5, wo1]
      - [g, pdec, qdi1]
      - [h, usb, dp]
      - [i, can0, rx, [d51, e53]]
      - [n, ccl, out2]
  pa19:
    pincodes: [g, j, n, p]
    periph:
      - [a, eic, extint3]
      - [b, ptc, xy13]
      - [c, sercom1, pad3]
      - [d, sercom3, pad3]
      - [e, tc3, wo1]
      - [f, tcc1, wo3]
      - [g, tcc0, wo7]
      - [k, pcc, data3]
      - [l, gmac, gtx1, [d51, e51]]
      - [m, ac, cmp1]
      - [n, ccl, out0]
  pc16:
    pincodes: [n, p]
    periph:
      - [a, eic, extint0]
      - [c, sercom6, pad0]
      - [d, sercom0, pad1]
      - [f, tcc0, wo0]
      - [g, pdec, qdi0]
      - [l, gmac, gtx2, [d51, e51]]
```

The `series` key define a list of SoC models `[d51, e51, e53, e54]`. This list
is used to generate file names and map peripherals.

Some sam0 SoC have optimized pins in some revisions. To differentiate those a
new mux table should be defined. The `revisions` help to identify correct
pinctrl files by sufix.

The `variants` key define a list of available packages by SoC series. This means
that for `pincode: g`, which is 48 pins packages, there are valid combination
of `samd51g` and `samde51g` pin mux. Note, some devices my present some
chalenges like define a part number which uses same pin code with different
pin counts. For that ones, we add `exception: y` property. The exception will
add a `WARNING` message to uses in the auto generated file asking to user look
datasheet. Any variation with exception must map all pins to allow users access
functionality.

The `pins` section is a variable length list of pin definitions. Each entry is
a pin itself composed by one mandatory properties which is `pincodes` and many
optional properties: `periph`, `extra`, `system`, `lpm`, `wakeup`. The `pincode`
instructs the engine to generate pin definitions only for those packages were
pin is, in fact, available. The `periph` is the set of multiplexed peripheral
signals. It is a variable length list where each entry is a list. Each peripheral
list entry is composed of 4 fields, where the first 3 are mandatory. The peripheral
list represents:
 - `alternate function index`
 - `peripheral [instance]`
 - `signal`
 - `SoC/pincode exclusion list` (optional)

Additionally some SoCs define special pin configuration. In the datasheet user
can find a column named `extra` and another as `systems`. The syntax is the
same as `periph`. The `lpm` is reserved for future use. Some SoCs may require
special pin configuration to allow system consume less possible power. The
special `wakeup` pin definition configure the pin to be used to wake-up the
core power supply, see Supply Controller SUPC for more details.

Example:

At below `yaml` snip code defines `pc16` pin:

```yaml
  pc16:
    pincodes: [n, p]
    periph:
      - [a, eic, extint0]
      - [c, sercom6, pad0]
      - [d, sercom0, pad1]
      - [f, tcc0, wo0]
      - [g, pdec, qdi0]
      - [l, gmac, gtx2, [d51, e51]]
```

This means, that port `C` pin 16 is available for packages `n` and `p`. The
alternate function available for these pin is that:
 - at position `a` the `eic` controller have access to signal `extint0`
 - at position `c` the signal `pad0` can be defined for `sercom6`
 - at position `d` the signal `pad1` can be defined for `sercom0`
 - at position `f` the `tcc0` can output signal `wo0`
 - at position `g` the `pdec` uses `qdi0` as quadrature input 0.
 - at position `l` the `gmac` define signal `gtx2` which won't be available for
   SoC `d51` and `e51`.

In this case, besides `n` and `p` packages tells to engine that pin `pc16` must
be generated for the entire SoC series `d51, e51, e53, e54` the engine allows
to deliberate exclude some signal combination.

The exclusion list can have both SoC `series` and `pincodes`. This allow create
less files and give better granularity. The next example shows how to drop `smc`
functionality in the `SAM4E` SoC. In this case, only one series can accomodate
all variations and the tunning is made using `pincode` at periph config.

```yaml
# Pin codes:
#
# - 100 pins: c
# - 144 pins: e

model: atmel,sam

family: sam4e

map: SAM_PINMUX

series: [4eX]

variants:
  - pincode: c
    series: [4eX]
  - pincode: e
    series: [4eX]

pins:
  pa0:
    pincodes: [c, e]
    periph:
      - [a, pwm, pwmh0]
      - [b, tc0, tioa0]
      - [c, smc, a17, [c]]
```

It is recommended use one filter at exclusion list. When necessary combine both
`series` and `pincodes` the exclusion will operate first in the series and then
will lookup by pincode.

The next example shows how to specify `extra`, `wakeup` and `system` functions.

```yaml
  pb5:
    pincodes: [c, e]
    periph:
      - [a, twi1, twck1]
      - [b, pwm, pwml0]
    extra:
      - [x, adc, ad3]
    wakeup:
      - [x, supc, wkup13]
    system:
      - [s, jtag, tdo]
      - [s, swd, traceswo]
```

## Auto Generated Code

After define all pins the user should run `scripts/sampinctrl.py` script to
auto generate Zephyr RTOS devicetree pinctrl definitions. See `scripts/README`
for instructions how to do it.

### Output Format

The output format define constants to be used inside devitree pins definitions,
see below snip of output:

```c
/*
 * Autogenerated file
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <dt-bindings/pinctrl/atmel_sam_pinctrl.h>

/*
 * WARNING: this variant has package exception.
 *
 *   Read datasheet topics related to I/O Multiplexing and Considerations or
 *   Peripheral Signal Multiplexing on I/O Lines for more information.
 */

/* pa0a_eic_extint0 */
#define PA0A_EIC_EXTINT0 \
	SAM_PINMUX(a, 0, a, periph)
```

The output format uses the compressed representation which of:
 - port index (PIOx, GPIOx or PORTx)
 - pin number
 - alternate function index
 - function (gpio, periph, extra, system, lpm)

In this case `PA0A_EIC_EXTINT0` is at PORT `a` pin `0` using alternate
function `a`, which selects pin for external interrupt controller `EIC`
interrupt `extint0`.


## Devicetree definitions

The pinctrl devicetree entries follow current Zephyr RTOS conventions. See
below example which define serial console for `atsame54_xpro` board.

```devicetree
#include <dt-bindings/pinctrl/same54p-pinctrl.h>

&pinctrl {
	sercom2_usart_default: sercom2_usart_default {
		group1 {
			pinmux = <PB25D_SERCOM2_PAD1>, <PB24D_SERCOM2_PAD0>;
		};
	};
};

&sercom2 {
	status = "okay";
	compatible = "atmel,sam0-uart";
	current-speed = <115200>;
	rxpo = <1>;
	txpo = <0>;
	#address-cells = <1>;
	#size-cells = <0>;

	pinctrl-0 = <&sercom2_usart_default>;
	pinctrl-names = "default";
};
```
