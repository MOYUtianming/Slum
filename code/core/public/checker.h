#ifndef __CHECKER_H__
#define __CHECKER_H__
#include <limits.h>
namespace Slum {
    typedef enum check_status_code {
        CHECK_STATUS_CODE_OK = 0,
        CHECK_STATUS_NULLPTR,
        CHECK_STATUS_INVALID_ARR_LEN,
        CHECK_STATUS_CODE_END = UINTMAX_MAX
    } check_status_code;
    template <typename T>
    check_status_code arr_checker(T* arr, uint32_t elem_len) {
        if(arr == nullptr) {
            return CHECK_STATUS_NULLPTR;
        }
        if(elem_len <= 0u) {
            return CHECK_STATUS_INVALID_ARR_LEN;
        }
        return CHECK_STATUS_CODE_OK;
    }
} // namespace Slum

#endif
