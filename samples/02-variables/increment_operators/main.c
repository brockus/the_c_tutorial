//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    //
    // C provides two operators for incrementing and decrementing
    // the value of variables.
    //
    // The C increment and decrement operators can be used either
    // as prefix operator or postfix operators as follows:
    //
    //     ---------------------
    //     |    variable++;    |
    //     |    variable--;    |
    //     |    ++variable;    |
    //     |    --variable;    |
    //     ---------------------
    //
    // The C increment operator in both prefix or postfix
    // contexts is to add 1 to a variable. But the expression
    // ++variable increments variable before its value is used,
    // whereas variable++ increments variable after its value
    // has been used.
    //
    int x = 10;
    int y;

    //
    // prefix
    //
    // This is the same as:
    //      x = x + 1
    //      y = x
    //
    y = ++x;
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    x = 10;
    //
    // postfix
    //
    // This is the same as:
    //      y = x
    //      x = x + 1
    //
    y = x++;
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return EXIT_SUCCESS;
} // end of function main
