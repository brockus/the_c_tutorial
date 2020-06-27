//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <stdio.h>
#include <stdlib.h>

typedef struct _address
{
    char street[50];
    char country[20];
    int houseNumber;
    int zipCode;
} address;

int main(void)
{
    //
    // Before allocating memory to a data object, you need to
    // identify its size so that you can allocate the corresponding
    // amount of memory.
    //
    // The return type of the sizeof operator is size_t that
    // is a separate type in C to represent amounts of memory.
    // C uses a separate type size_t because the existing types
    // are defined based on the target processor’s arithmetic
    // capabilities, not the memory capabilities. The size_t is
    // unsigned defined in the stddef.h header file. The maximum
    // value of the size_t is defined as a macro constant ( SIZE_MAX)
    // in the stdint.h file. It is at least 65535.
    //
    // The following program displays the sizes of common C data types.
    //
    printf("Size of int is %ld bytes\n", sizeof(int));
    printf("Size of unsigned int is %ld bytes\n", sizeof(unsigned int));
    printf("Size of short is %ld bytes\n", sizeof(short));
    printf("Size of unsigned short is %ld bytes\n", sizeof(unsigned short));
    printf("Size of long is %ld bytes\n", sizeof(long));
    printf("Size of char is %ld bytes\n", sizeof(char));
    printf("Size of float is %ld bytes\n", sizeof(float));
    printf("Size of double is %ld bytes\n", sizeof(double));

    printf("Size of address is %ld bytes\n", sizeof(address));

    return EXIT_SUCCESS;
} // end of function main
