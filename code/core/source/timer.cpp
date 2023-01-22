#include "timer.h"
#include <cmath>

namespace AudioSignalGenerator {
    Timer::Timer(double _peroid_, double _step_, double _epsilon_, double startTime)
    {
        peroid  = _peroid_;
        step    = _step_;
        epsilon = _epsilon_;
        curTime = startTime - step; // for Iterator
        timeLimit = peroid + step;
    }

    Timer::~Timer()
    {
    }

    double Timer::TimerIterator()
    {
        curTime += step;
        if(fabs(curTime - timeLimit) < epsilon) {
            curTime = 0;
        }
        return curTime;
    }
}  // namespace AudioSignalGenerator
