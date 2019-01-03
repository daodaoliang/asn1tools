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
 * This file was generated by asn1tools version 0.142.1 Thu Jan  3 16:31:57 2019.
 */

#ifndef UPER_H
#define UPER_H

#include <stdint.h>
#include <stdbool.h>
#include <unistd.h>

#ifndef ENOMEM
#    define ENOMEM 12
#endif

#ifndef EINVAL
#    define EINVAL 22
#endif

#ifndef EOUTOFDATA
#    define EOUTOFDATA 500
#endif

#ifndef EBADCHOICE
#    define EBADCHOICE 501
#endif

#ifndef EBADLENGTH
#    define EBADLENGTH 502
#endif

/**
 * Type D in module MyProtocol.
 */
struct uper_my_protocol_d_t {
    uint8_t length;
    uint8_t buf[16];
};

/**
 * Type C in module MyProtocol.
 */
enum uper_my_protocol_c_c_choice_e {
    uper_my_protocol_c_c_choice_a_e,
    uper_my_protocol_c_c_choice_b_e
};

struct uper_my_protocol_c_t {
    bool is_a_present;
    struct {
        struct {
            uint8_t length;
            int32_t elements[5];
        } a;
        bool is_b_present;
        bool b;
        int8_t c;
    } a;
    uint32_t b;
    struct {
        enum uper_my_protocol_c_c_choice_e choice;
        union {
            struct {
                struct uper_my_protocol_d_t elements[3];
            } a;
            bool b;
        } value;
    } c;
    struct {
        bool a;
    } d;
};

/**
 * Type B in module MyProtocol.
 */
enum uper_my_protocol_b_choice_e {
    uper_my_protocol_b_choice_a_e,
    uper_my_protocol_b_choice_b_e
};

struct uper_my_protocol_b_t {
    enum uper_my_protocol_b_choice_e choice;
    union {
        struct uper_my_protocol_c_t a;
        struct uper_my_protocol_d_t b;
    } value;
};

/**
 * Type A in module MyProtocol.
 */
struct uper_my_protocol_a_t {
    uint8_t length;
    struct uper_my_protocol_b_t elements[5];
};

/**
 * Type E in module MyProtocol.
 */
struct uper_my_protocol_e_t {
    bool value;
};

/**
 * Type F in module MyProtocol.
 */
struct uper_my_protocol_f_t {
    int32_t value;
};

/**
 * Type G in module MyProtocol.
 */
struct uper_my_protocol_g_t {
    uint32_t value;
};

/**
 * Type PDU in module MyProtocol.
 */
enum uper_my_protocol_pdu_b_choice_e {
    uper_my_protocol_pdu_b_choice_a_e,
    uper_my_protocol_pdu_b_choice_b_e,
    uper_my_protocol_pdu_b_choice_c_e,
    uper_my_protocol_pdu_b_choice_d_e,
    uper_my_protocol_pdu_b_choice_e_e
};

struct uper_my_protocol_pdu_t {
    int32_t a;
    struct {
        enum uper_my_protocol_pdu_b_choice_e choice;
        union {
            struct uper_my_protocol_a_t a;
            struct uper_my_protocol_b_t b;
            struct uper_my_protocol_c_t c;
            struct uper_my_protocol_d_t d;
            bool e;
        } value;
    } b;
};

/**
 * Encode type D defined in module MyProtocol.
 *
 * @param[out] dst_p Buffer to encode into.
 * @param[in] size Size of dst_p.
 * @param[in] src_p Data to encode.
 *
 * @return Encoded data length or negative error code.
 */
ssize_t uper_my_protocol_d_encode(
    uint8_t *dst_p,
    size_t size,
    const struct uper_my_protocol_d_t *src_p);

/**
 * Decode type D defined in module MyProtocol.
 *
 * @param[out] dst_p Decoded data.
 * @param[in] src_p Data to decode.
 * @param[in] size Size of src_p.
 *
 * @return Number of bytes decoded or negative error code.
 */
ssize_t uper_my_protocol_d_decode(
    struct uper_my_protocol_d_t *dst_p,
    const uint8_t *src_p,
    size_t size);

/**
 * Encode type C defined in module MyProtocol.
 *
 * @param[out] dst_p Buffer to encode into.
 * @param[in] size Size of dst_p.
 * @param[in] src_p Data to encode.
 *
 * @return Encoded data length or negative error code.
 */
ssize_t uper_my_protocol_c_encode(
    uint8_t *dst_p,
    size_t size,
    const struct uper_my_protocol_c_t *src_p);

/**
 * Decode type C defined in module MyProtocol.
 *
 * @param[out] dst_p Decoded data.
 * @param[in] src_p Data to decode.
 * @param[in] size Size of src_p.
 *
 * @return Number of bytes decoded or negative error code.
 */
ssize_t uper_my_protocol_c_decode(
    struct uper_my_protocol_c_t *dst_p,
    const uint8_t *src_p,
    size_t size);

/**
 * Encode type B defined in module MyProtocol.
 *
 * @param[out] dst_p Buffer to encode into.
 * @param[in] size Size of dst_p.
 * @param[in] src_p Data to encode.
 *
 * @return Encoded data length or negative error code.
 */
ssize_t uper_my_protocol_b_encode(
    uint8_t *dst_p,
    size_t size,
    const struct uper_my_protocol_b_t *src_p);

/**
 * Decode type B defined in module MyProtocol.
 *
 * @param[out] dst_p Decoded data.
 * @param[in] src_p Data to decode.
 * @param[in] size Size of src_p.
 *
 * @return Number of bytes decoded or negative error code.
 */
ssize_t uper_my_protocol_b_decode(
    struct uper_my_protocol_b_t *dst_p,
    const uint8_t *src_p,
    size_t size);

/**
 * Encode type A defined in module MyProtocol.
 *
 * @param[out] dst_p Buffer to encode into.
 * @param[in] size Size of dst_p.
 * @param[in] src_p Data to encode.
 *
 * @return Encoded data length or negative error code.
 */
ssize_t uper_my_protocol_a_encode(
    uint8_t *dst_p,
    size_t size,
    const struct uper_my_protocol_a_t *src_p);

/**
 * Decode type A defined in module MyProtocol.
 *
 * @param[out] dst_p Decoded data.
 * @param[in] src_p Data to decode.
 * @param[in] size Size of src_p.
 *
 * @return Number of bytes decoded or negative error code.
 */
ssize_t uper_my_protocol_a_decode(
    struct uper_my_protocol_a_t *dst_p,
    const uint8_t *src_p,
    size_t size);

/**
 * Encode type E defined in module MyProtocol.
 *
 * @param[out] dst_p Buffer to encode into.
 * @param[in] size Size of dst_p.
 * @param[in] src_p Data to encode.
 *
 * @return Encoded data length or negative error code.
 */
ssize_t uper_my_protocol_e_encode(
    uint8_t *dst_p,
    size_t size,
    const struct uper_my_protocol_e_t *src_p);

/**
 * Decode type E defined in module MyProtocol.
 *
 * @param[out] dst_p Decoded data.
 * @param[in] src_p Data to decode.
 * @param[in] size Size of src_p.
 *
 * @return Number of bytes decoded or negative error code.
 */
ssize_t uper_my_protocol_e_decode(
    struct uper_my_protocol_e_t *dst_p,
    const uint8_t *src_p,
    size_t size);

/**
 * Encode type F defined in module MyProtocol.
 *
 * @param[out] dst_p Buffer to encode into.
 * @param[in] size Size of dst_p.
 * @param[in] src_p Data to encode.
 *
 * @return Encoded data length or negative error code.
 */
ssize_t uper_my_protocol_f_encode(
    uint8_t *dst_p,
    size_t size,
    const struct uper_my_protocol_f_t *src_p);

/**
 * Decode type F defined in module MyProtocol.
 *
 * @param[out] dst_p Decoded data.
 * @param[in] src_p Data to decode.
 * @param[in] size Size of src_p.
 *
 * @return Number of bytes decoded or negative error code.
 */
ssize_t uper_my_protocol_f_decode(
    struct uper_my_protocol_f_t *dst_p,
    const uint8_t *src_p,
    size_t size);

/**
 * Encode type G defined in module MyProtocol.
 *
 * @param[out] dst_p Buffer to encode into.
 * @param[in] size Size of dst_p.
 * @param[in] src_p Data to encode.
 *
 * @return Encoded data length or negative error code.
 */
ssize_t uper_my_protocol_g_encode(
    uint8_t *dst_p,
    size_t size,
    const struct uper_my_protocol_g_t *src_p);

/**
 * Decode type G defined in module MyProtocol.
 *
 * @param[out] dst_p Decoded data.
 * @param[in] src_p Data to decode.
 * @param[in] size Size of src_p.
 *
 * @return Number of bytes decoded or negative error code.
 */
ssize_t uper_my_protocol_g_decode(
    struct uper_my_protocol_g_t *dst_p,
    const uint8_t *src_p,
    size_t size);

/**
 * Encode type PDU defined in module MyProtocol.
 *
 * @param[out] dst_p Buffer to encode into.
 * @param[in] size Size of dst_p.
 * @param[in] src_p Data to encode.
 *
 * @return Encoded data length or negative error code.
 */
ssize_t uper_my_protocol_pdu_encode(
    uint8_t *dst_p,
    size_t size,
    const struct uper_my_protocol_pdu_t *src_p);

/**
 * Decode type PDU defined in module MyProtocol.
 *
 * @param[out] dst_p Decoded data.
 * @param[in] src_p Data to decode.
 * @param[in] size Size of src_p.
 *
 * @return Number of bytes decoded or negative error code.
 */
ssize_t uper_my_protocol_pdu_decode(
    struct uper_my_protocol_pdu_t *dst_p,
    const uint8_t *src_p,
    size_t size);

#endif
