#ifndef __UTILS_H__
#define __UTILS_H__

namespace Slum {

typedef enum int_array_type {
    IAT_INT8 = 0,
    IAT_UINT8,
    IAT_INT16,
    IAT_UINT16,
    IAT_INT32,
    IAT_UINT32,
    IAT_INT64,
    IAT_UINT64,
} iat;

typedef union int_array_head_type {
    int8_t*     bh;
    uint8_t*    ubh;
    int16_t*    sh;
    uint16_t*   ush;
    int32_t*    ih;
    uint32_t*   uih;
    int64_t*    llih;
    uint64_t*   ullih;
} iaht;

typedef struct int_array_trans_type {
    iaht head;
    uint32_t len; // type <- typeof(sizeof(head));
    iat type;
} array_transT;

} // namespace Slum

#endif
