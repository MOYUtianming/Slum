#ifndef __F_CMP_H__
#define __F_CMP_H__

#include <cmath>

namespace AudioSignalGenerator {
    static constexpr double EPSILON = 1e-6;
    template <typename T>
    inline bool f_greater(T a, T b)
    {
        return (a - EPSILON) > b;
    }
    template <typename T>
    inline bool f_smaller(T a, T b)
    {
        return (a + EPSILON) < b;
    }
    template <typename T>
    inline bool f_equal(T a, T b)
    {
        return fabs(a - b) < EPSILON;
    }
    template <typename T>
    inline bool f_geq(T a, T b)
    {
        return f_greater(a, b) || f_equal(a, b);
    }
    template <typename T>
    inline bool f_seq(T a, T b)
    {
        return f_smaller(a, b) || f_equal(a, b);
    }
} // namespace AudioSignalGenerator
#endif
