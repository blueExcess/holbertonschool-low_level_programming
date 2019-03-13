#ifndef _THIS_FILE_
#define _THIS_FILE_
#include <stdlib.h>
#include <stdio.h>





/* prototypes */
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));




#endif /* this_file */
