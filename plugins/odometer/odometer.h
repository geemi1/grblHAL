/*

  odometer.h - axis odometers including run time

  Part of GrblHAL

  Copyright (c) 2020 Terje Io

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

#ifndef _ODOMETER_H_
#define _ODOMETER_H_

#include <stdint.h>

typedef struct {
    uint64_t time;
    uint64_t distance[N_AXIS];
} odometer_data_t;

void odometer_init();

#endif
