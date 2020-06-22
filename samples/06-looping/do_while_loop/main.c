//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //
    // To run a block of code repeatedly in a predetermined
    // time, you use the for loop statement. In cases you
    // want to run a block of code repeatedly based on a
    // given condition with a check at the end of each
    // iteration, you use the do while loop statement.
    //
    // The do while loop statement consists of execution
    // statements and a Boolean condition. First, the execute
    // statements are executed, and then the condition is
    // checked. If the condition evaluates to true, the execute
    // statements are executed again until the condition evaluates
    // to false.
    //
    // Unlike the while loop, the execute statements inside the
    // do while loop execute at least one time because the condition
    // is checked at the end of each iteration.
    //
    int x = 5;
    int i = 0;

    //
    // using do while loop statement
    //
    do
    {
        i++;
        puts(i);
    } while (i < x);

    return EXIT_SUCCESS;
} // end of function main
