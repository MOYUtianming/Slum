#include <fstream>
#include <iostream>
#include "phasor.h"
#include "timer.h"

int test0_phasor(double freq, double sample_rate, int points)
{
    AudioSignalGenerator::Timer tr(1.0/freq, 1.0/sample_rate);

    std::ofstream fout;
    fout.open("./_output/case1/test1.csv", std::ios::out);
    if(!fout.is_open()) {
        std::cout << "open file failed!" << std::endl;
        return -1;
    }

    fout << "serial,phase_chain" << std::endl;
    double c_phase = 0;
    for(int i = 0; i < points; i++) {
        c_phase = AudioSignalGenerator::phasor_iterator(freq, tr);
        fout << i << "," << c_phase <<std::endl;
    }

    fout.close();
    return 0;
}


int main()
{
    return test0_phasor(2, 10, 3*10);
    return 0;
}
