# Introduction

The **hal_atmel** is a set of register definitions for Atmel SAM/SAM0 SoC's.
The HAL is organized following the directory structure detailed below.

## Directory Structure

The directory is composed by six parts:
```
.
├── asf
├── include
├── pinconfigs
├── README.md
├── scripts
└── zephyr
```

 - Atmel Software Framework SoC specific include libraries.
 - Includes specific for these platforms
   - devicetree bindings
 - [Pin definitions](pinconfigs/README.md)
 - [Scripts](scripts/README.md) used for code generation
 - ZephyrRTOS module directory (`zephyr`).
 - This README file.

# How to submit code

Any contribution should follow the `How to submit code` using as premisses the
[Zephyr Contribution Guidelines](https://docs.zephyrproject.org/latest/contribute/index.html).
For more information about External Modules see
[Modules Section](https://docs.zephyrproject.org/latest/develop/modules.html) in special
[Submitting Changes to Modules](https://docs.zephyrproject.org/latest/develop/modules.html#submitting-changes-to-modules)


## Repository specific guidelines

 - When submitting an updated firmware library version, it is important to make
   sure that the last firmware version will be merged. The library version is
   used to be checked at [Atmel packs download site](http://packs.download.atmel.com/).
 - When submitting an updated firmware library version the patchset already
   applied should be rebased on top of the newer version.
 - The patchset must be sent as an individual commit per SoC series to easy rebase.
 - This repository is managed mainly on Linux. This means that changes should
   be submitted using Linux LF format. Usually running a similar command to
   `find * type f -print0 | xargs -0 dos2unix -k` should be enough.
 - Make sure directory structure is respected.
 - The `asf/[sam|sam0]/include/<soc>/README` file should be updated accordingly.
   If for some reason the file not exists it should be created.
 - Directory names should be converted to lowercase.
 - The recommendation is add **all fixups** in the `hal_atmel` instead on the
   ZephyrRTOS project.

The above are general guidelines and exceptions could happen. In this case, the
exception should be addressed at review phase.

## The standard API

The SAM/SAM0 standard API define all information to access Atmel SoC's
peripherals. This library does not have namespaces and prefixes which
easily results in name collision with ZephyrRTOS core and libraries. To avoid
that situation, macros, enum values and function names should follow two
general rules:

 - Public API functions must be prefixed with `sam_` or `sam0_`.
 - Public defines and enum values must be uppercase and prefixed with `SAM_`
   or `SAM0_`.
