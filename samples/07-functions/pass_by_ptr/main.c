//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <stdio.h>
#include <stdlib.h>


void swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(void)
{
    //
    // Recall that a pointer refers to the memory address of
    // a variable therefore when you pass a pointer to a
    // function, the function work on the value of the memory
    // address stored in the pointer, which affects the variable
    // that the pointer points to.
    //
    // You pass arguments to a function by pointers when you want
    // to change the values of the arguments. Let’s rewrite the
    // swap() function.
    //
    int x = 10;
    int y = 20;

    printf("Before: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After: x = %d, y = %d\n", x, y);
    return EXIT_SUCCESS;
} // end of function main
