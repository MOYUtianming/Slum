#ifndef __F_CMP_H__
#define __F_CMP_H__

#include <cmath>

namespace AudioSignalGenerator {
    static constexpr double epsilon = 1e-6;
    template <typename T>
    inline bool f_greater(T a, T b, T epsilon)
    {
        return (a - epsilon) > b;
    }
    template <typename T>
    inline bool f_smaller(T a, T b, T epsilon)
    {
        return (a + epsilon) < b;
    }
    template <typename T>
    inline bool f_equal(T a, T b, T epsilon)
    {
        return fabs(a - b) < epsilon;
    }
    template <typename T>
    inline bool f_geq(T a, T b, T epsilon)
    {
        return f_greater(a, b, epsilon) || f_equal(a, b, epsilon);
    }
    template <typename T>
    inline bool f_seq(T a, T b, T epsilon)
    {
        return f_smaller(a, b, epsilon) || f_equal(a, b, epsilon);
    }
} // namespace AudioSignalGenerator
#endif
