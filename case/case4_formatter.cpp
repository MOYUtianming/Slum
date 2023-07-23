#include <iostream>
#include "formatter.h"
#include "print_array.h"

int test0_int_float_formatter() {
    constexpr uint32_t elem_num = 21;
    float       data_f32[elem_num] = {0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1,\
                                -0.1,-0.2,-0.3,-0.4,-0.5,-0.6,-0.7,-0.8,-0.9,-1};
    // int8_t      data_8[10] = {0};
    int16_t     data_16[elem_num] = {0};
    // int32_t     data_32[10] = {0};
    // uint8_t     data_u8[10] = {0};
    // uint16_t    data_u16[10] = {0};
    // uint32_t    data_u32[10] = {0};
    Slum::float_to_int_formatter(data_16, ARRAY_ELEMS(data_16), data_f32, ARRAY_ELEMS(data_f32), elem_num);
    std::cout << "dst\tsrc" << std::endl;
    Slum::print_compare_arr_list(data_16, ARRAY_ELEMS(data_16), data_f32, ARRAY_ELEMS(data_f32), elem_num);
    return 0;
}

int main() {
    return test0_int_float_formatter();
}
