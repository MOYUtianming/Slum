#ifndef __FORMATTER_H__
#define __FORMATTER_H__
#include <stdint.h>
#include <iostream>
#include "checker.h"
namespace Slum {

#define ARRAY_ELEMS(head) (sizeof(head)) / (sizeof(head[0]))

template <typename srcT, typename dstT>
    dstT* int_to_int_formatter( dstT* dh, uint32_t d_elems, srcT* sh, uint32_t s_elems, uint32_t cp_elems)
    {
        if(dh == nullptr || sh == nullptr) {
            return nullptr;
        }
        if(d_elems <= 0 || s_elems <= 0) {
            return nullptr;
        }
        if(cp_elems > s_elems) {
            return nullptr;
        }
        if(d_elems < cp_elems) {
            return nullptr;
        }

        uint32_t diff_len = sizeof(dstT) - sizeof(srcT);
        if(diff_len >= 0) {
            for(uint32_t i = 0; i < cp_elems; i++) {
                dh[i] = (dstT)(sh[i]);
            }
        } else {
            for(uint32_t i = 0; i < cp_elems; i++) {
                dh[i] = (dstT)(sh[i] >> (-diff_len));
            }
        }
        return dh;
    }
template <typename fsrcT, typename dstT>
    dstT* float_to_int_formatter( dstT* dh, uint32_t d_elems, fsrcT* sh, uint32_t s_elems, uint32_t cp_elems)
    {
        if(Slum::arr_checker(dh, d_elems) || Slum::arr_checker(sh, s_elems)) {
            return nullptr;
        }
        if(cp_elems > s_elems) {
            return nullptr;
        }
        if(d_elems < cp_elems) {
            return nullptr;
        }

        uint64_t max_dh = (1 << (sizeof(dstT) * 8 - 1)) - 1;
        for(uint32_t i = 0; i < cp_elems; i++) {
            dh[i] = (dstT)(sh[i] * max_dh);
        }
        return dh;
    }
} // namespace Slum

#endif
