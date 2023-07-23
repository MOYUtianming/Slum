#ifndef __PRINT_ARRAY_H__
#define __PRINT_ARRAY_H__
#include "checker.h"
#include "i_cmp.h"
namespace Slum {
    template <typename T>
        void print_array(T* head, uint32_t elems)
        {
            for(uint32_t i = 0; i < elems; i++) {
                std::cout << head[i] << "," << std::endl;
            }
        }
    template <typename T1, typename T2>
        check_status_code print_compare_arr_list(T1* l_arr, uint32_t l_elems, T2* r_arr, uint32_t r_elems, uint32_t target_lines)
        {
            check_status_code status = CHECK_STATUS_CODE_OK;
            status = Slum::arr_checker(l_arr, l_elems);
            if(status) {
                return status;
            }
            status = Slum::arr_checker(r_arr, r_elems);
            if(status) {
                return status;
            }
            uint32_t max_line_lim = SLUM_INT_MIN(l_elems, r_elems);
            if(target_lines > max_line_lim) {
                return CHECK_STATUS_INVALID_ARR_LEN;
            }
            for(uint32_t i = 0; i < target_lines; i++) {
                std::cout << l_arr[i] << "\t" << r_arr[i] << std::endl;
            }
            return CHECK_STATUS_CODE_OK;
        }

} // namespace Slum
#endif
