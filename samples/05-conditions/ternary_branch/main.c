//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <stdio.h>
#include <stdlib.h>


//
// Find min of two integers. Should return minimum
// value of x and y both of type integer.
//
inline int min(int x, int y)
{
    return (x <= y) ? x : y;
}// end of function min

int main(void)
{
    //
    // In this example, we are going to write an inline
    // function that uses C ternary operator to find the
    // minimum number between two integers
    //
    int x = 10;
    int y = 15;

    printf("x = %d, y = %d\n", x, y);
    printf("min(x, y) = %d\n", min(x, y));
    return EXIT_SUCCESS;
} // end of function main
