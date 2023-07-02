#ifndef __PHASOR_H__
#define __PHASOR_H__

#include "timer.h"
#include <cmath>

namespace Slum {
    /**
     * @brief phase = 2 * pi * f * t
     *
     * @return double
     * @date 2023-05-14
     */
    inline double phasor_iterator(double signal_freq, Timer& timer)
    {
        constexpr double D_M_PI = M_PI * 2;
        return D_M_PI * signal_freq * timer.iterator_timer();
    }
} // namespace Slum

#endif
