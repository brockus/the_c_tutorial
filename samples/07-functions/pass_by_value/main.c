//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <stdio.h>
#include <stdlib.h>

void swap(int a, int b)
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}

int main(void)
{
    //
    // Passing argument to a function by values means all the
    // arguments that you pass to the function are copied into
    // copied variables. The function works on the copied
    // variables only, therefore, arguments are not changed by
    // the function.
    //
    // You pass arguments to a function by value when you don’t
    // want the function change the value of the arguments.
    //
    int x = 10;
    int y = 20;

    printf("Before: x = %d, y = %d\n", x, y);
    swap(x, y);
    printf("After: x = %d, y = %d\n", x, y);
    return EXIT_SUCCESS;
} // end of function main
