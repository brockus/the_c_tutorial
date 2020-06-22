//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum
{
    MIN_SIZE = 25
};


int main(void)
{
    //
    // To copy a string into another string, you use
    // the strncpy() function. The following example
    // shows you how to copy a string into another.
    //
    char firstName[MIN_SIZE];
    char lastName[MIN_SIZE];

    strncpy(firstName, "John", MIN_SIZE);
    strncpy(lastName, "Doe", MIN_SIZE);

    //
    // Outputing first and last name.
    //
    printf("%s, %s\n", firstName, lastName); /* Output is: John, Doe */
    return EXIT_SUCCESS;
} // end of function main
