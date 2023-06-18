#include <iostream>
#include <fstream>
#include "timer.h"
#include "phasor.h"
#include "shaper.h"

int test0_sin_shaper(unsigned int _taylor_iter_num_,\
                        double freq, double sample_rate,\
                        int points)
{
    std::ofstream fout;
    fout.open("../_output/case2/test0.csv", std::ios::out);
    if(!fout.is_open()) {
        std::cout << "open file failed!" << std::endl;
        return -1;
    }

    AudioSignalGenerator::Timer timer(1.0/freq, 1.0/sample_rate);
    AudioSignalGenerator::SinShaper sshaper(_taylor_iter_num_);

    fout << "serial,phasor_chain,sin_chain" << std::endl;
    double c_sin = 0;
    double phase = 0;
    for(int i = 0; i < points; i++) {
        phase = AudioSignalGenerator::phasor_iterator(freq, timer);
        c_sin = sshaper.apply_shape(phase);
        fout << i << "," << phase << "," << c_sin << std::endl;
    }

    fout.close();
    return 0;
}


int main()
{
    test0_sin_shaper(10, 1000, 44100, 44100*2);
    return 0;
}
