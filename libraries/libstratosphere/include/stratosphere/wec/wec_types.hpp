/*
 * Copyright (c) Atmosphère-NX
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once
#include <vapours.hpp>

#if defined(ATMOSPHERE_BOARD_NINTENDO_NX)
    #include <stratosphere/wec/wec_wake_event.board.nintendo_nx.hpp>
#else
    #include <stratosphere/wec/wec_wake_event.generic.hpp>
#endif

namespace ams::wec {

    enum WakeEventLevel {
        WakeEventLevel_Low  = 0,
        WakeEventLevel_High = 1,
        WakeEventLevel_Auto = 2,
    };

}
