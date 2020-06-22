//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <stdio.h>
#include <stdlib.h>

enum {MAX_SIZE = 5};


int main(void)
{
    //
    // C array is a variable that holds multiple elements
    // which share the same data type.
    //
    int arr[MAX_SIZE];
    for (int i = 0; i < MAX_SIZE; ++i)
    {
        //
        // You can access an individual element of the array by using
        // the array name followed by the element subscript enclosed
        // in square brackets as follows:
        //
        //     array_name[subscript]
        //
        // Notice that the array elements start from 0, not 1, so the
        // first element of the a array is a[0] and the last element
        // is a[size-1] where size is the number of element in the a
        // array.
        //
        arr[i] = i;
        printf("a[%d] = %d\n", i, arr[i]);
    }
    return EXIT_SUCCESS;
} // end of function main
