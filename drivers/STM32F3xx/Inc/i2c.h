/*
  i2c.h - I2C support for EEPROM, keypad and Trinamic plugins

  Part of GrblHAL driver for STM32F4xx

  Copyright (c) 2018-2020 Terje Io

  Grbl is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  Grbl is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with Grbl.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef __I2C_DRIVER_H__
#define __I2C_DRIVER_H__

#include "driver.h"
#include "grbl/plugins.h"

#if TRINAMIC_ENABLE == 2130 && TRINAMIC_I2C

#include "trinamic\trinamic2130.h"
#include "trinamic\TMC2130_I2C_map.h"

#define I2C_ADR_I2CBRIDGE 0x47

void I2C_DriverInit (TMC_io_driver_t *drv);

#endif

#if KEYPAD_ENABLE

#include "keypad/keypad.h"

void I2C_GetKeycode (uint32_t i2cAddr, keycode_callback_ptr callback);

#endif

#endif
