#include <fstream>
#include <iostream>
#include "timer.h"
int test0_generate_timer_chain_with_const_freq(double freq, double sample_rate, int points)
{
    Slum::Timer tr(1.0/freq, 1.0/sample_rate);

    std::ofstream fout;
    fout.open("../_output/case0/test0.csv", std::ios::out);
    if(!fout.is_open()) {
        std::cout << "open file failed!" << std::endl;
        return -1;
    }

    fout << "serial,time_chain" << std::endl;
    double c_time = 0;
    for(int i = 0; i < points; i++) {
        c_time = tr.iterator_timer();
        fout << i << "," << c_time <<std::endl;
    }

    fout.close();
    return 0;
}

int main()
{
    return test0_generate_timer_chain_with_const_freq(1, 10, 3*10);
}
