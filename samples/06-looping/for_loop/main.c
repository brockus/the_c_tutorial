//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    //
    // C for loop is very flexible based on the
    // combination of the three expressions. You
    // can increase or decrease the loop counter.
    // You can count by not only one but also two,
    // three and so on. You can count by a character.
    // Let’s take a look at the following program:
    //

    //
    //count down from 10
    //
    int waits = 10;
    for (int sec = waits; sec > 0; sec--)
    {
        printf("%d\n", sec);
    }
    puts("Happy New Year!");

    //
    // count by 3
    //
    for (int sec = 0; sec < 10; sec += 3)
    {
        printf("%d\n", sec);
    }

    //
    // count by character
    //
    for (char c = 'a'; c <= 'z'; c++)
    {
        printf("ASCII(%c) = %d\n", c, c);
    }
    return EXIT_SUCCESS;
} // end of function main
