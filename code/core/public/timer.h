#ifndef __TIMER_H__
#define __TIMER_H__

namespace AudioSignalGenerator {
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
        double TimerIterator();
    };
} // namespace AudioSignalGenerator

#endif
