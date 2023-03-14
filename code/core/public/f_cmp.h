#ifndef __F_CMP_H__
#define __F_CMP_H__

#include <cmath>

namespace audio_signal_generator {
    static constexpr double Epsilon = 1e-14; // double precision
    inline bool f_greater(double a, double b)
    {
        return (a - Epsilon) > b;
    }
    inline bool f_smaller(double a, double b)
    {
        return (a + Epsilon) < b;
    }
    inline bool f_equal(double a, double b)
    {
        return fabs(a - b) < Epsilon;
    }
    inline bool f_geq(double a, double b)
    {
        return f_greater(a, b) || f_equal(a, b);
    }
    inline bool f_seq(double a, double b)
    {
        return f_smaller(a, b) || f_equal(a, b);
    }
} // namespace audio_signal_generator
#endif
