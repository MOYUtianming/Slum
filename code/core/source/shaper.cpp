#include "shaper.h"
#include <cmath>
namespace audio_signal_generator {
    double sin_shaper::apply_shape(double phase)
    {
        return sin(phase);
    }
} // namespace audio_signal_generator
