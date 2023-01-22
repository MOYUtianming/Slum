#include "phasor.h"

namespace audio_signal_generator
{
    double phasor::phasor_iterator()
    {
        return DOUBLE_PI * freq * timer_iterator();
    }
} // namespace audio_signal_generator
