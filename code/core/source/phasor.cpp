#include "phasor.h"

namespace AudioSignalGenerator
{
    phasor::phasor(double _freq_, double _peroid_, double _step_, double _epsilon_, double startTime)
            :Timer(_peroid_, _step_, _epsilon_, startTime)
    {
        freq = _freq_;
        peroid = _peroid_;
        step = _step_;
        epsilon = _epsilon_;
        curTime = startTime - step; // for Iterator
        timeLimit = peroid + step;

    }
    double phasor::PhasorIterator()
    {
        return DOUBLE_PI * freq * TimerIterator();
    }
} // namespace AudioSignalGenerator
