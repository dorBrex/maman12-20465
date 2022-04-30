#include "output.h"

/* Printing all of the characters received from the user in a pleasant view */
void print_user_input(int container_len, char* pointer_to_container) {
    int characters_per_line = (int) sqrt(container_len), i;
    printf("\nThe characters inserted by the user are:\n");

    for (i = 0; i < container_len; i++) {
        if (i % characters_per_line == 0) {
            printf("\n");
        }
        printf("\t%c", pointer_to_container[i]);
    }
    printf("\n");
}

/* Printing the number of alpha-numerical characters from the user's input */
void print_counted_characters(int container_len, char *pointer_to_container) {
    int alpha_numeric_counter = 0, i;
    for (i = 0; i < container_len; i++) {
        if (isalnum(pointer_to_container[i])) {
            alpha_numeric_counter++;
        }
    }
    printf("\nThere are %d characters in your input\n", container_len);
    printf("\nThere are %d alpha-numerical characters in your input\n", alpha_numeric_counter);
}