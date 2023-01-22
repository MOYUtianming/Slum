#ifndef __PHASOR_H__
#define __PHASOR_H__

#include "timer.h"
#include <cmath>

namespace audio_signal_generator {
    class phasor: private audio_signal_generator::timer
    {
    private:
        static constexpr double PI = 3.14159265358979323846;
        static constexpr double DOUBLE_PI = 2*PI;
        double cur_phase;
    public:
        using timer::timer;
        double phasor_iterator();
    };
} // namespace audio_signal_generator

#endif
