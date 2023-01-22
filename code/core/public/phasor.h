#ifndef __PHASOR_H__
#define __PHASOR_H__

#include "timer.h"
#include <cmath>

namespace AudioSignalGenerator {
    class phasor: private AudioSignalGenerator::Timer
    {
    private:
        static constexpr double PI = 3.14159265358979323846;
        static constexpr double DOUBLE_PI = 2*PI;
        double freq;
        double cur_phase;
    public:
        phasor(double _freq_, double _peroid_, double _step_, double _epsilon_ = 1e-7, double startTime = 0);
        double PhasorIterator();
    };
} // namespace AudioSignalGenerator

#endif
