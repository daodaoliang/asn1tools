/**
 * The MIT License (MIT)
 *
 * Copyright (c) 2018 Erik Moqvist
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use, copy,
 * modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

/**
 * This file was generated by asn1tools version 0.137.4 Sun Dec 16 08:32:30 2018.
 */

#ifndef OER_H
#define OER_H

#include <stdint.h>
#include <stdbool.h>
#include <unistd.h>

#ifndef ENOMEM
#    define ENOMEM 12
#endif

#ifndef EINVAL
#    define EINVAL 22
#endif

struct oer_c_source_a_t {
    bool a;
    bool b;
    bool c;
    bool d;
    bool e;
    bool f;
    bool g;
    bool h;
    bool i;
    bool j;
    bool k;
    bool l;
};

struct oer_programming_types_bool_t {

};

struct oer_programming_types_bytes_t {

};

struct oer_programming_types_double_t {

};

struct oer_programming_types_float_t {

};

struct oer_programming_types_int16_t {
    int16_t value;
};

struct oer_programming_types_int32_t {
    int32_t value;
};

struct oer_programming_types_int64_t {
    int64_t value;
};

struct oer_programming_types_int8_t {
    int8_t value;
};

struct oer_programming_types_string_t {

};

struct oer_programming_types_uint16_t {
    uint16_t value;
};

struct oer_programming_types_uint32_t {
    uint32_t value;
};

struct oer_programming_types_uint64_t {
    uint64_t value;
};

struct oer_programming_types_uint8_t {
    uint8_t value;
};

/**
 * Encode type A defined in module CSource.
 *
 * @param[out] dst_p Buffer to encode into.
 * @param[in] size Size of dst_p.
 * @param[in] src_p Data to encode.
 *
 * @return Encoded data length or negative error code.
 */
ssize_t oer_c_source_a_encode(
    uint8_t *dst_p,
    size_t size,
    const struct oer_c_source_a_t *src_p);

/**
 * Decode type A defined in module CSource.
 *
 * @param[out] dst_p Decoded data.
 * @param[in] src_p Data to decode.
 * @param[in] size Size of src_p.
 *
 * @return Number of bytes decoded or negative error code.
 */
ssize_t oer_c_source_a_decode(
    struct oer_c_source_a_t *dst_p,
    const uint8_t *src_p,
    size_t size);

/**
 * Encode type Bool defined in module ProgrammingTypes.
 *
 * @param[out] dst_p Buffer to encode into.
 * @param[in] size Size of dst_p.
 * @param[in] src_p Data to encode.
 *
 * @return Encoded data length or negative error code.
 */
ssize_t oer_programming_types_bool_encode(
    uint8_t *dst_p,
    size_t size,
    const struct oer_programming_types_bool_t *src_p);

/**
 * Decode type Bool defined in module ProgrammingTypes.
 *
 * @param[out] dst_p Decoded data.
 * @param[in] src_p Data to decode.
 * @param[in] size Size of src_p.
 *
 * @return Number of bytes decoded or negative error code.
 */
ssize_t oer_programming_types_bool_decode(
    struct oer_programming_types_bool_t *dst_p,
    const uint8_t *src_p,
    size_t size);

/**
 * Encode type Bytes defined in module ProgrammingTypes.
 *
 * @param[out] dst_p Buffer to encode into.
 * @param[in] size Size of dst_p.
 * @param[in] src_p Data to encode.
 *
 * @return Encoded data length or negative error code.
 */
ssize_t oer_programming_types_bytes_encode(
    uint8_t *dst_p,
    size_t size,
    const struct oer_programming_types_bytes_t *src_p);

/**
 * Decode type Bytes defined in module ProgrammingTypes.
 *
 * @param[out] dst_p Decoded data.
 * @param[in] src_p Data to decode.
 * @param[in] size Size of src_p.
 *
 * @return Number of bytes decoded or negative error code.
 */
ssize_t oer_programming_types_bytes_decode(
    struct oer_programming_types_bytes_t *dst_p,
    const uint8_t *src_p,
    size_t size);

/**
 * Encode type Double defined in module ProgrammingTypes.
 *
 * @param[out] dst_p Buffer to encode into.
 * @param[in] size Size of dst_p.
 * @param[in] src_p Data to encode.
 *
 * @return Encoded data length or negative error code.
 */
ssize_t oer_programming_types_double_encode(
    uint8_t *dst_p,
    size_t size,
    const struct oer_programming_types_double_t *src_p);

/**
 * Decode type Double defined in module ProgrammingTypes.
 *
 * @param[out] dst_p Decoded data.
 * @param[in] src_p Data to decode.
 * @param[in] size Size of src_p.
 *
 * @return Number of bytes decoded or negative error code.
 */
ssize_t oer_programming_types_double_decode(
    struct oer_programming_types_double_t *dst_p,
    const uint8_t *src_p,
    size_t size);

/**
 * Encode type Float defined in module ProgrammingTypes.
 *
 * @param[out] dst_p Buffer to encode into.
 * @param[in] size Size of dst_p.
 * @param[in] src_p Data to encode.
 *
 * @return Encoded data length or negative error code.
 */
ssize_t oer_programming_types_float_encode(
    uint8_t *dst_p,
    size_t size,
    const struct oer_programming_types_float_t *src_p);

/**
 * Decode type Float defined in module ProgrammingTypes.
 *
 * @param[out] dst_p Decoded data.
 * @param[in] src_p Data to decode.
 * @param[in] size Size of src_p.
 *
 * @return Number of bytes decoded or negative error code.
 */
ssize_t oer_programming_types_float_decode(
    struct oer_programming_types_float_t *dst_p,
    const uint8_t *src_p,
    size_t size);

/**
 * Encode type Int16 defined in module ProgrammingTypes.
 *
 * @param[out] dst_p Buffer to encode into.
 * @param[in] size Size of dst_p.
 * @param[in] src_p Data to encode.
 *
 * @return Encoded data length or negative error code.
 */
ssize_t oer_programming_types_int16_encode(
    uint8_t *dst_p,
    size_t size,
    const struct oer_programming_types_int16_t *src_p);

/**
 * Decode type Int16 defined in module ProgrammingTypes.
 *
 * @param[out] dst_p Decoded data.
 * @param[in] src_p Data to decode.
 * @param[in] size Size of src_p.
 *
 * @return Number of bytes decoded or negative error code.
 */
ssize_t oer_programming_types_int16_decode(
    struct oer_programming_types_int16_t *dst_p,
    const uint8_t *src_p,
    size_t size);

/**
 * Encode type Int32 defined in module ProgrammingTypes.
 *
 * @param[out] dst_p Buffer to encode into.
 * @param[in] size Size of dst_p.
 * @param[in] src_p Data to encode.
 *
 * @return Encoded data length or negative error code.
 */
ssize_t oer_programming_types_int32_encode(
    uint8_t *dst_p,
    size_t size,
    const struct oer_programming_types_int32_t *src_p);

/**
 * Decode type Int32 defined in module ProgrammingTypes.
 *
 * @param[out] dst_p Decoded data.
 * @param[in] src_p Data to decode.
 * @param[in] size Size of src_p.
 *
 * @return Number of bytes decoded or negative error code.
 */
ssize_t oer_programming_types_int32_decode(
    struct oer_programming_types_int32_t *dst_p,
    const uint8_t *src_p,
    size_t size);

/**
 * Encode type Int64 defined in module ProgrammingTypes.
 *
 * @param[out] dst_p Buffer to encode into.
 * @param[in] size Size of dst_p.
 * @param[in] src_p Data to encode.
 *
 * @return Encoded data length or negative error code.
 */
ssize_t oer_programming_types_int64_encode(
    uint8_t *dst_p,
    size_t size,
    const struct oer_programming_types_int64_t *src_p);

/**
 * Decode type Int64 defined in module ProgrammingTypes.
 *
 * @param[out] dst_p Decoded data.
 * @param[in] src_p Data to decode.
 * @param[in] size Size of src_p.
 *
 * @return Number of bytes decoded or negative error code.
 */
ssize_t oer_programming_types_int64_decode(
    struct oer_programming_types_int64_t *dst_p,
    const uint8_t *src_p,
    size_t size);

/**
 * Encode type Int8 defined in module ProgrammingTypes.
 *
 * @param[out] dst_p Buffer to encode into.
 * @param[in] size Size of dst_p.
 * @param[in] src_p Data to encode.
 *
 * @return Encoded data length or negative error code.
 */
ssize_t oer_programming_types_int8_encode(
    uint8_t *dst_p,
    size_t size,
    const struct oer_programming_types_int8_t *src_p);

/**
 * Decode type Int8 defined in module ProgrammingTypes.
 *
 * @param[out] dst_p Decoded data.
 * @param[in] src_p Data to decode.
 * @param[in] size Size of src_p.
 *
 * @return Number of bytes decoded or negative error code.
 */
ssize_t oer_programming_types_int8_decode(
    struct oer_programming_types_int8_t *dst_p,
    const uint8_t *src_p,
    size_t size);

/**
 * Encode type String defined in module ProgrammingTypes.
 *
 * @param[out] dst_p Buffer to encode into.
 * @param[in] size Size of dst_p.
 * @param[in] src_p Data to encode.
 *
 * @return Encoded data length or negative error code.
 */
ssize_t oer_programming_types_string_encode(
    uint8_t *dst_p,
    size_t size,
    const struct oer_programming_types_string_t *src_p);

/**
 * Decode type String defined in module ProgrammingTypes.
 *
 * @param[out] dst_p Decoded data.
 * @param[in] src_p Data to decode.
 * @param[in] size Size of src_p.
 *
 * @return Number of bytes decoded or negative error code.
 */
ssize_t oer_programming_types_string_decode(
    struct oer_programming_types_string_t *dst_p,
    const uint8_t *src_p,
    size_t size);

/**
 * Encode type Uint16 defined in module ProgrammingTypes.
 *
 * @param[out] dst_p Buffer to encode into.
 * @param[in] size Size of dst_p.
 * @param[in] src_p Data to encode.
 *
 * @return Encoded data length or negative error code.
 */
ssize_t oer_programming_types_uint16_encode(
    uint8_t *dst_p,
    size_t size,
    const struct oer_programming_types_uint16_t *src_p);

/**
 * Decode type Uint16 defined in module ProgrammingTypes.
 *
 * @param[out] dst_p Decoded data.
 * @param[in] src_p Data to decode.
 * @param[in] size Size of src_p.
 *
 * @return Number of bytes decoded or negative error code.
 */
ssize_t oer_programming_types_uint16_decode(
    struct oer_programming_types_uint16_t *dst_p,
    const uint8_t *src_p,
    size_t size);

/**
 * Encode type Uint32 defined in module ProgrammingTypes.
 *
 * @param[out] dst_p Buffer to encode into.
 * @param[in] size Size of dst_p.
 * @param[in] src_p Data to encode.
 *
 * @return Encoded data length or negative error code.
 */
ssize_t oer_programming_types_uint32_encode(
    uint8_t *dst_p,
    size_t size,
    const struct oer_programming_types_uint32_t *src_p);

/**
 * Decode type Uint32 defined in module ProgrammingTypes.
 *
 * @param[out] dst_p Decoded data.
 * @param[in] src_p Data to decode.
 * @param[in] size Size of src_p.
 *
 * @return Number of bytes decoded or negative error code.
 */
ssize_t oer_programming_types_uint32_decode(
    struct oer_programming_types_uint32_t *dst_p,
    const uint8_t *src_p,
    size_t size);

/**
 * Encode type Uint64 defined in module ProgrammingTypes.
 *
 * @param[out] dst_p Buffer to encode into.
 * @param[in] size Size of dst_p.
 * @param[in] src_p Data to encode.
 *
 * @return Encoded data length or negative error code.
 */
ssize_t oer_programming_types_uint64_encode(
    uint8_t *dst_p,
    size_t size,
    const struct oer_programming_types_uint64_t *src_p);

/**
 * Decode type Uint64 defined in module ProgrammingTypes.
 *
 * @param[out] dst_p Decoded data.
 * @param[in] src_p Data to decode.
 * @param[in] size Size of src_p.
 *
 * @return Number of bytes decoded or negative error code.
 */
ssize_t oer_programming_types_uint64_decode(
    struct oer_programming_types_uint64_t *dst_p,
    const uint8_t *src_p,
    size_t size);

/**
 * Encode type Uint8 defined in module ProgrammingTypes.
 *
 * @param[out] dst_p Buffer to encode into.
 * @param[in] size Size of dst_p.
 * @param[in] src_p Data to encode.
 *
 * @return Encoded data length or negative error code.
 */
ssize_t oer_programming_types_uint8_encode(
    uint8_t *dst_p,
    size_t size,
    const struct oer_programming_types_uint8_t *src_p);

/**
 * Decode type Uint8 defined in module ProgrammingTypes.
 *
 * @param[out] dst_p Decoded data.
 * @param[in] src_p Data to decode.
 * @param[in] size Size of src_p.
 *
 * @return Number of bytes decoded or negative error code.
 */
ssize_t oer_programming_types_uint8_decode(
    struct oer_programming_types_uint8_t *dst_p,
    const uint8_t *src_p,
    size_t size);

#endif
