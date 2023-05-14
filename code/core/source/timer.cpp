#include "timer.h"
#include "f_cmp.h"
#include <cmath>
#include <iostream>

namespace AudioSignalGenerator {
    Timer::Timer(double _peroid_, double _step_, double _epsilon_, double _start_time_)
    {
        peroid  = _peroid_;
        step    = _step_;
        epsilon = _epsilon_;
        cur_time = _start_time_ - step; // for iterator logic
        time_lim = peroid + step; // T + step // for iterator logic
    }

    Timer::~Timer()
    {
    }

    double Timer::iterator_timer()
    {
        cur_time += step;
        if(f_geq(cur_time, time_lim)) {
            cur_time = 0;
        }
        std::cout << "cur_time" << cur_time << std::endl;
        return cur_time;
    }
}  // namespace AudioSignalGenerator
