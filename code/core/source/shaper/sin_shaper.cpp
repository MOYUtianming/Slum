#include "shaper.h"
#include <stdexcept>
#include <iostream>
namespace Slum {
    SinShaper::SinShaper()
    {
        taylor_iter_num = 0;
    }
    SinShaper::SinShaper(unsigned int _taylor_iter_num_)
    {
        try
        {
            if(!_taylor_iter_num_ || _taylor_iter_num_ > TAYLOR_ITER_NUM_LIM) {
                throw std::invalid_argument("invalid taylor iter num!");
            }
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        taylor_iter_num = _taylor_iter_num_;
    }
    /**
     * @brief sine signal generated by taylor expansion
     * @details sin(x) = sum((-1)^{k - 1}*(x^{2k-1})/(2k-1)!) (base t = 0)
     * @details iter_{k + 1} = iter_{k} * (-1 * x * x) / ((2 * k + 1) * 2 * k)
     * @details iter_{k + 1} = iter_{k} * (-1 * x * x) / ((2 * k)^2 + 2 * k)
     *
     * @date 2023-05-14
     */
    static double sin_taylor_core(double phase, unsigned int iter_num)
    {
        double base = phase;
        double ans = phase;
        double temp = 0;
        double phase2 = phase * phase;
        for(unsigned int i = 1; i < iter_num; i++) {
            temp = 2 * i;
            base = (-base * phase2) / (temp * temp + temp) ;
            ans += base;
        }
        return ans;
    }

    double SinShaper::apply_shape(double phase)
    {
        return sin_taylor_core(phase, taylor_iter_num);
    }
} // namespace Slum
