#include "timer.h"
#include <fstream>
#include <iostream>
int test0_generate_timer_chain_with_const_freq(double init_time, double freq, double sample_rate, int points)
{
    audio_signal_generator::timer tr(init_time, sample_rate, freq);
    double c_time = init_time;
    std::ofstream fout;
    fout.open("../data/case0/test0.csv", std::ios::out);
    if(!fout.is_open()) {
        std::cout << "open file failed!" << std::endl;
        return -1;
    }
    fout << "serial,time_chain" << std::endl;
    for(int i = 0; i < points; i++) {
        fout << i << "," << c_time <<std::endl;
        c_time = tr.timer_iterator();
    }
    fout.close();
    return 0;
}

int main()
{
    return test0_generate_timer_chain_with_const_freq(0, 1, 10, 2*10);
}
