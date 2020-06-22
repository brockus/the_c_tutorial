//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <stdio.h>
#include <stdlib.h>

enum {SIZE = 100};

int main(void)
{
    //
    // C provides you with three functions for allocating
    // memory: malloc(), realloc() and calloc(). In addition,
    // it also gives you the free() function for releasing
    // memory which is no longer used.
    //
    // The malloc() function allocates a block of memory with
    // the size specified by the size_t. It returns It returns
    // a pointer to the allocated memory. If the memory could
    // not be allocated or the size argument is 0, the malloc()
    // function returns NULL.
    //
    // The sizeof(int) returns the size of an integer, which is
    // 4 bytes, and multiply with 5 so the pi pointer is pointing
    // to the first byte of 5 * 4 = 20 bytes memory block.
    //
    // You should always check the return pointer from the malloc()
    // function for NULL. See the following example:
    //
    int *iPtr = (int *)malloc(SIZE * sizeof(iPtr));
    if (iPtr == NULL)
    {
        fprintf(stderr, "%s\n" ,"error occurred: out of memory");
        return EXIT_FAILURE;
    }
    /* further processing */
    /* ... */
    free(iPtr);
    return EXIT_SUCCESS;
} // end of function main
