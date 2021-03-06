 
/* Unless specifically indicated otherwise in a file, files are licensed
 * under the Apache 2.0 license, as can be found in: apache-2.0.txt  
 */


#ifndef _CMSIS_H_
#define _CMSIS_H_

/* Generated with cbindgen:0.8.7 */

/* Warning, this file is autogenerated by cbindgen. Don't modify this manually. 
 * To regenerate use `rustup run nightly cbindgen . > cmsis.h` in this directory.
 */


#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct ParsedPacks ParsedPacks;

typedef struct UpdatePoll UpdatePoll;

typedef struct UpdateReturn UpdateReturn;

typedef struct DownloadUpdate {
        bool is_size;
        uintptr_t size;
} DownloadUpdate;

void cstring_free(char *ptr);

void dump_pdsc_json(ParsedPacks *packs,
                    const char *devices_dest,
                    const char *boards_dest);

const char *dumps_components(ParsedPacks *ptr);

const char *err_get_last_message(void);

void err_last_message_free(char *ptr);

UpdateReturn *pack_from_path(const char *ptr);

ParsedPacks *parse_packs(UpdateReturn *ptr);

void parse_packs_free(ParsedPacks *ptr);

UpdatePoll *update_packs(const char *pack_store, ParsedPacks *parsed_packs);

DownloadUpdate *update_pdsc_get_status(UpdatePoll *ptr);

UpdatePoll *update_pdsc_index(const char *pack_store, const char *vidx_list);

void update_pdsc_index_free(UpdateReturn *ptr);

UpdateReturn *update_pdsc_index_new(void);

const char *update_pdsc_index_next(UpdateReturn *ptr);

void update_pdsc_index_push(UpdateReturn *ptr, char *cstr);

bool update_pdsc_poll(UpdatePoll *ptr);

UpdateReturn *update_pdsc_result(UpdatePoll *ptr);

void update_pdsc_status_free(DownloadUpdate *ptr);

#endif /* _CMSIS_H_ */
