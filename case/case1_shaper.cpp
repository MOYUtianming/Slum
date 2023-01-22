#include "shaper.h"
#include "phasor.h"

#include <fstream>
#include <iostream>
int test0_sin_shaper(double init_time, double freq, double sample_rate, int points)
{
    AudioSignalGenerator::phasor phase(init_time, sample_rate, freq);
    double c_time = init_time;
    std::ofstream fout;
    fout.open("./data/case1/test0.csv", std::ios::out);
    if(!fout.is_open()) {
        std::cout << "open file failed!" << std::endl;
        return -1;
    }
    fout << "serial,sin" << std::endl;
    AudioSignalGenerator::sin_shaper sshaper;
    for(int i = 0; i < points; i++) {
        fout << i << "," << sshaper.apply_shape(c_time) << std::endl;
        c_time = phase.PhasorIterator();
    }
    fout.close();
    return 0;
}

int main()
{
    return test0_sin_shaper(0, 1000, 44100.0, 2*44100.0);
}
