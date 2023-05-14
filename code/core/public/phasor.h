#ifndef __PHASOR_H__
#define __PHASOR_H__

#include "timer.h"
#include <cmath>

namespace AudioSignalGenerator {
    /**
     * @brief phase = 2 * pi * f * t
     *
     * @return double
     * @date 2023-05-14
     */
    #ifndef M_PI
    #define M_PI 3.14159265358979323846
    #endif
    inline double phasor_iterator(double signal_freq, Timer& timer)
    {
        constexpr double D_M_PI = M_PI * 2;
        return D_M_PI * signal_freq * timer.iterator_timer();
    }
} // namespace AudioSignalGenerator

#endif
