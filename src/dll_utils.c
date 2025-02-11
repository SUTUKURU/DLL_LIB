/* File - dll_utils.c
   Author - Subramanyam Utukuru
   Implementing generic double linked list library APIs to use by many applications.
 */

/* Create and Return new DLL */
dll_t* 
get_new_dll() {


}

/* Add application data to dll */
int
add_data_to_dll(dll_t *dll, void *data) {


}

/* remove node from dll based on app data 
   return 0 on success
   -1 on failure*/
int
remove_data_from_dll_by_data_ptr(dll_t *dll, void *data) {

}


/* Find is dll empty.
   return  0 - if empty
   return -1 if non-empty */
int
is_dll_empty(dll_t *dll) {

}

/* delete all nodes from a dll, but do not free app data*/
void drain_dll(dll_t *dll) {

} 
