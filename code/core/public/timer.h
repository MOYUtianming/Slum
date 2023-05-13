#ifndef __TIMER_H__
#define __TIMER_H__

namespace audio_signal_generator {
    class Timer
    {
    protected:
        double peroid;
        double step;
        double curTime;
        double epsilon;
        double timeLimit;
    public:
        Timer(double _peroid_, double _step_, double _epsilon_ = 1e-7, double startTime = 0);
        ~Timer();
        double iterator_timer();
    };
} // namespace audio_signal_generator

#endif
