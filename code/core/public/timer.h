#ifndef __TIMER_H__
#define __TIMER_H__

namespace Slum {
    class Timer
    {
    protected:
        double peroid;
        double step;
        double cur_time;
        double epsilon;
        double time_lim;
    public:
        Timer(double _peroid_, double _step_, double _epsilon_ = 1e-7, double startTime = 0);
        ~Timer();
        double iterator_timer();
    };
} // namespace Slum

#endif
