//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    //
    // C supports almost common arithmetic operators such as
    // +,-,*, / and modulus operator %. The modulus operator
    // (%) returns the remainder of integer division calculation.
    // Note that the modulus operator cannot be applied to a
    // double or float.
    //
    // The C arithmetic operators have precedence rules that are
    // similar to the rules in math. The + and – operators have the
    // same precedence. The precedence of *, / and % operators are
    // higher than the + and – operators. The C arithmetic operators
    // associate from left to right.
    //
    int x = 10, y = 20;
 
    printf("var x = %d\n", x);
    printf("var y = %d\n", y);
    //
    // demonstrate = operator +
    //
    y = y + x;
    printf("var y = y + x; y = %d\n", y);
 
    //
    // demonstrate - operator
    //
    y = y - 2;
    printf("var y = y - 2; y = %d\n", y);

    //
    // demonstrate * operator
    //
    y = y * 5;
    printf("var y = y * 5; y = %d\n", y);
 
    //
    // demonstrate / operator
    //
    y = y / 5;
    printf("var y = y / 5; y = %d\n", y);
 
    //
    // demonstrate modulus operator %
    //
    int remainder = 0;
    remainder = y % 3;
 
    printf("var remainder = y %% 3; remainder = %d\n", remainder);

    return EXIT_SUCCESS;
}// end of function main
