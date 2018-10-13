#pragma once

#ifndef LUV_TRAMPOLINES_H_
#define LUV_TRAMPOLINES_H_

#include <caml/mlvalues.h>
#include <uv.h>

uv_alloc_cb luv_address_of_alloc_trampoline();
uv_async_cb luv_address_of_async_trampoline();
uv_check_cb luv_address_of_check_trampoline();
uv_close_cb luv_address_of_close_trampoline();
uv_connect_cb luv_address_of_connect_trampoline();
uv_connection_cb luv_address_of_connection_trampoline();
uv_fs_cb luv_address_of_fs_trampoline();
uv_fs_cb luv_null_fs_callback_pointer();
uv_idle_cb luv_address_of_idle_trampoline();
uv_poll_cb luv_address_of_poll_trampoline();
uv_prepare_cb luv_address_of_prepare_trampoline();
uv_read_cb luv_address_of_read_trampoline();
uv_shutdown_cb luv_address_of_shutdown_trampoline();
uv_signal_cb luv_address_of_signal_trampoline();
uv_timer_cb luv_address_of_timer_trampoline();
uv_write_cb luv_address_of_write_trampoline();

uv_buf_t* bigstrings_to_iovecs(value bigstrings, int count);

enum {
    LUV_HANDLE_GENERIC_CALLBACK_INDEX,
    LUV_HANDLE_GENERIC_CALLBACK_COUNT
};

enum {
    LUV_CONNECTION_CALLBACK_INDEX = LUV_HANDLE_GENERIC_CALLBACK_COUNT,
    LUV_READ_CALLBACK_INDEX,
    LUV_ALLOCATE_CALLBACK_INDEX,
    LUV_STREAM_CALLBACK_COUNT
};

#endif // #ifndef LUV_TRAMPOLINES_H_