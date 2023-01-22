#ifndef __TIMER_H__
#define __TIMER_H__

namespace audio_signal_generator {
    class timer
    {
    protected:
        double cur_time;
        double sample_rate;
        // Instrumental variables
        double freq;
        double step;
        double peroid;
    public:
        timer(double start_time = 0, double init_sample_rate = 44100.0, double init_freq = 20);
        double timer_iterator();
    };
} // namespace audio_signal_generator

#endif
