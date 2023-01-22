#include "timer.h"
#include "f_cmp.h"

namespace audio_signal_generator {
    timer::timer(double start_time, double init_sample_rate, double init_freq)
    {
        cur_time = start_time;
        sample_rate = init_sample_rate;
        freq = init_freq;
        step = 1.0/init_sample_rate;
        peroid = 1.0/freq;
    }

    double timer::timer_iterator()
    {
        cur_time += step;
        if(f_greater(cur_time, peroid)) {
            cur_time -= peroid;
        }
        return cur_time;
    }

}  // namespace audio_signal_generator
