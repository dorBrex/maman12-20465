#include "get_data.h"


/* A function that receives input from the user and returns a struct holding 2 parameters -
 * data_length and pointer_to_data */

struct user_data retrieve_data(char input, int container_len, int i, char * temp_pointer, char * pointer_to_container){
    struct user_data user_data_struct;

    /* While ctrl+d / EOF isn't sent to the stdin queue - keep on calling getchar() */
    while (input != EOF) {
        /* Receiving data from the user by getchar() */
        input = (char) getchar();

        /* The characters added to our array shouldn't be space (32 in ASCII) nor '\n' or '\t' */
        if (input != 32 && input != '\n' && input != '\t') {

            /* If the index of the array is at the end of it, we generate a new array in the heap by realloc function*/
            if (i == container_len) {
                temp_pointer = (char *) realloc(pointer_to_container, (sizeof(char)) * (container_len + 1));

                /*If reallocation failed - printing an error*/
                if (!temp_pointer) {
                    printf("\nMemory allocation failed !\n");
                    exit(0);
                }

                /* If reallocation succeeded we assign the original pointer to the new address */
                pointer_to_container = temp_pointer;
                /* A value that saves the length of the input (amount of characters saved in our memory) */
                container_len++;
            }

            /* Assigning values to the array's pointer from the user's input*/
            if (input != EOF){
                pointer_to_container[i] = input;
                i++;
            }
        }
    }

    /* Returning to main the struct with the len of the data and the pointer to the start of the data in the heap
     * The len of the data is minus on because it always joins/receives the ctrl+d command in also*/
    user_data_struct.data_len = container_len - ONE_INDEX;
    user_data_struct.pointer_to_characters_array = pointer_to_container;
    return user_data_struct;
}