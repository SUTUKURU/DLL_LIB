/* File - dll_utils.h
   Author - Subramanyam Utukuru
 */

#ifndef __DLL_UTILS_H__
#define __DLL_UTILS_H__

typedef struct dll_node_ {
    void *data;
    struct dll_node_ *left;
    struct dll_node_ *right;
}dll_node_t;

typedef struct dll_ {
    dll_node_t *head;
}dll_t;

dll_t* get_new_dll();
int add_data_to_dll(dll_t *dll, void *data);
int remove_data_from_dll_by_data_ptr(dll_t *dll, void *data);
int is_dll_empty(dll_t *dll);
void drain_dll(dll_t *dll);

#endif __DLL_UTILS_H__
