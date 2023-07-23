#ifndef __SHAPER_H__
#define __SHAPER_H__

#include "slum_lim.h"

namespace Slum {

    class Shaper
    {
    public:
        virtual double apply_shape(double phase) = 0;
    };

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
    private:
        unsigned int taylor_iter_num;
    public:
        SqrShaper();
        SqrShaper(unsigned int _taylor_iter_num_);
        double apply_shape(double phase);
    };

    class TriShaper: public Shaper
    {
    private:
        unsigned int taylor_iter_num;
    public:
        TriShaper();
        TriShaper(unsigned int _taylor_iter_num_);
        double apply_shape(double phase);
    };
} // namespace Slum

#endif
