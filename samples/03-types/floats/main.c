//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    //
    // C provides various floating-point types that
    // represent non-integer number with a decimal
    // point at any position. For example, with integer
    // types, you only can have numbers 1 2, 10, 200...
    // however with floating-point type, you can have
    // 1.0, 2.5, 100.25 and so on.
    //
    puts("Floating Size in Bits:");
    printf("%s%f\n", "float      = ", sizeof(float) * 8);
    printf("%s%lf\n", "double     = ", sizeof(double) * 8);
    printf("%s%llf\n", "long double = ", sizeof(long double) * 8);
    return EXIT_SUCCESS;
}// end of function main
