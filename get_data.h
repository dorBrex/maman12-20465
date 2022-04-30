/* an header file for the usage of the get_data.c file and lists_ab.c file*/ 

#ifndef MAMAN12_UTILS_H
#define MAMAN12_UTILS_H

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#endif /*MAMAN12_UTILS_H*/

#define ONE_INDEX 1

struct user_data retrieve_data(char, int, int, char*, char*);

/* a struct named user data which has 2 parameters - 1 is the data_length received from the user and the second
 * is the pointer to the data (array) itself. It is used as an "object" to be returned from the retrieve data function*/

typedef struct user_data{
    int data_len;
    char* pointer_to_characters_array;
} user_data;

