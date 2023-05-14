#ifndef __SHAPER_H__
#define __SHAPER_H__

namespace AudioSignalGenerator {
    class Shaper
    {
    public:
        virtual double apply_shape(double phase) = 0;
    };

    constexpr unsigned int TAYLOR_ITER_NUM_LIM = 1000;
    class SinShaper: public Shaper
    {
    private:
        unsigned int taylor_iter_num;
    public:
        SinShaper();
        SinShaper(unsigned int _taylor_iter_num_);
        double apply_shape(double phase);
    };

    class SqrShaper: public Shaper
    {
    public:
        double apply_shape(double phase);
    };

    class TriShaper: public Shaper
    {
    public:
        double apply_shape(double phase);
    };
} // namespace AudioSignalGenerator

#endif
