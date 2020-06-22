//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    //
    // C assignment operators are used to assign the value
    // of a variable or expression to another variable. The
    // syntax of assignment operators is as follows:
    //
    int x = 10;

    //
    // Besides the assignment operator, C also supports another
    // short hand format that works the same assignment operator
    // with an additional operator such as +=, -=, *=, /=, %=.
    //
    // Each assignment operator has a priority. And they are evaluated
    // from right to left based on its priority. The following is the
    // assignment operator and its priority: =, +=, -=, *=, /=, %=.
    //

    //
    // demonstrate = operator
    //
    int y = x;
    printf("var y = %d\n", y);

    //
    // demonstrate += operator
    //
    y += 10;
    printf("var y += 10; y = %d\n", y);

    //
    // demonstrate -= operator
    //
    y -= 5;
    printf("var y -= 5; y = %d\n", y);

    //
    // demonstrate *= operator
    //
    y *= 4;
    printf("var y *= 4; y = %d\n", y);

    //
    //demonstrate /= operator
    //
    y /= 2;
    printf("var y /= 2; y = %d\n", y);

    return EXIT_SUCCESS;
} // end of function main
