#include "shaper.h"
#include <stdexcept>
#include <iostream>
namespace Slum
{
    SqrShaper::SqrShaper()
    {
        taylor_iter_num = 0;
    }
    SqrShaper::SqrShaper(unsigned int _taylor_iter_num_)
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
    static inline double sqr_taylor_core(double phase, unsigned int taylor_iter_num)
    {
        // TODO;
        (void)phase;
        (void)taylor_iter_num;
        return 0;
    }
    double SqrShaper::apply_shape(double phase)
    {
        return sqr_taylor_core(phase, taylor_iter_num);
    }

} // namespace Slum
