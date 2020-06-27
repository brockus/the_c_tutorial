//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum
{
    MIN_SIZE = 25,
    MAX_SIZE = 50
};

int main(void)
{
    //
    // To concatenate two strings in C, you use the
    // strncat() function. The following example copies
    // the first and last name strings to the fullname
    // string.
    //
    char firstName[MIN_SIZE];
    char lastName[MIN_SIZE];
    char fullName[MAX_SIZE];

    strncpy(firstName, "John", MIN_SIZE);
    strncpy(lastName, "Doe", MIN_SIZE);

    //
    // Concatenate first and last name then output result
    //
    strcpy(fullName, "");
    strncat(fullName, firstName, MAX_SIZE);
    strncat(fullName, ", ", MAX_SIZE);
    strncat(fullName, lastName, MAX_SIZE);

    printf("%s\n", fullName); /* Output is: John, Doe */
    return EXIT_SUCCESS;
} // end of function main