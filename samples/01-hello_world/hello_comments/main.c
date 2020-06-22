//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <stdio.h>
#include <stdlib.h>

/*
 *  C comments examples
 */
int main(void)
{
    double const PI = 3.14; // PI constant
    double radius = 10;     // radius of a circle

    /* calculate area of a circle */
    double area = PI * radius * radius;

    /* calculate square of a circle */
    double square = 2 * radius * PI;

    printf("Area of the circle is %8.2f\n", area);
    printf("Square of the circle is %8.2f\n", square);

    return EXIT_SUCCESS;
} // end of function main
