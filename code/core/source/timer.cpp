#include "timer.h"
#include <cmath>

namespace audio_signal_generator {
    Timer::Timer(double _peroid_, double _step_, double _epsilon_, double _start_time_)
    {
        peroid  = _peroid_;
        step    = _step_;
        epsilon = _epsilon_;
        curTime = _start_time_ - step; // for Iterator
        timeLimit = peroid + step;
    }

    Timer::~Timer()
    {
    }

    double Timer::iterator_timer()
    {
        curTime += step;
        if(fabs(curTime - timeLimit) < epsilon) {
            curTime = 0;
        }
        return curTime;
    }
}  // namespace audio_signal_generator
