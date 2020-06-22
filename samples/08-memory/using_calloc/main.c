//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    //
    // The calloc() function allocates memory much like malloc()
    // function except the following differences:
    //
    // (1) When you call the calloc() function, you need to pass 2
    //     parameters: the first one specify the number of elements
    //     and the second one specify the size of each element. The
    //     product of these parameters determines the size of the
    //     memory block is allocated.
    //
    // (2) The memory block allocated by the calloc() function is
    //     initialized to zero.
    //
    // The following example demonstrates how to use the
    // calloc() function to allocate memory for a dynamic
    // array:
    //
    int *arr, *pa;
    int size;

    puts("Enter the size of the array:");
    scanf("%i", &size);

    arr = (int *)calloc(size, sizeof(int));
    if (arr == NULL)
    {
        fprintf(stderr, "%s\n", "error occurred: out of memory");
        return EXIT_FAILURE;
    }

    pa = arr;
    for (unsigned int index = 0; index < size; ++index)
    {
        *pa++ = rand();
    }

    for (unsigned int index = 0; index < size; ++index)
    {
        printf("a[%d] = %d\n", index, *(arr + index));
    }

    free(arr);
    return EXIT_SUCCESS;
} // end of function main
