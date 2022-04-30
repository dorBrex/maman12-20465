#include "lists_ab.h"
#include "get_data.h"
#include "output.h"

/* The main function is split into 2 parts - input and output.
 * First there is a memory initialized in the Heap that receives unknown amount of characters from the user's input
 * - no limit for the length (using realloc if needed).

 * after saving the input and output functions are called and print -
 * 1. All of the inserted characters in an organized view mode - usually square shaped.
 * 2. The sum of all of the data inserted (counted by characters) and the sum of the alphanumeric. */

int main() {
    /* Initializing data_length for 5 bytes, index i for zero, input space and 2 pointers for receiving data */
    int data_len = FIVE_BYTES, i = INDEX_ZERO;
    char input = ' ';
    char *temp_pointer = malloc(ONE_BYTE), *pointer_to_data = (char *) malloc(data_len * sizeof(char));

    /* A struct that contains the length of the data and a pointer to it*/
    user_data data_struct;

    printf("\nHello user, please enter as many characters as you would like:\n");
    data_struct = retrieve_data(input, data_len, i, temp_pointer, pointer_to_data);
    /* Extracting the data received from the retrieve_data function into 2 parameters*/
    pointer_to_data = data_struct.pointer_to_characters_array;
    data_len = data_struct.data_len;

    /* Printing the parsed output by 2 functions */
    print_user_input(data_len, pointer_to_data);
    print_counted_characters(data_len, pointer_to_data);


    /* Freeing 2 pointer from the heap at the end of the program run */
    free(pointer_to_data);
    free(temp_pointer);

    return 0;
}
