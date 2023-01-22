#ifndef __SHAPER_H__
#define __SHAPER_H__

namespace audio_signal_generator {
    class shaper
    {
    public:
        virtual double apply_shape(double phase) = 0;
    };

    class sin_shaper: public shaper
    {
    public:
        double apply_shape(double phase);
    };

    class sqr_shaper: public shaper
    {
    public:
        double apply_shape(double phase);
    };

    class tri_shaper: public shaper
    {
    public:
        double apply_shape(double phase);
    };
} // namespace audio_signal_generator

#endif
