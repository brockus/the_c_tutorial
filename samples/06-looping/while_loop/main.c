//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum
{
    ALLOWED_TIMES = 4
};

int main(void)
{
    //
    // The C while loop is used when you want to execute
    // a block of code repeatedly with a checked condition
    // before making an iteration.
    //
    // The while loop executes as long as the given
    // logical expression evaluates to true. When
    // expression evaluates to false, the loop stops.
    // The expression is checked at the beginning of
    // each iteration. The execute statements inside
    // the body of the while loop statement are not
    // executed if the expression evaluates to false
    // when entering the loop. It is necessary to update
    // the loop condition inside the loop body to avoid
    // an indefinite loop.
    //
    // If you want to escape the loop without waiting for
    // the expression to evaluate, you can use the break
    // statement. If you want to go back to the top of the
    // while loop statement without executing the code below
    // a certain point inside the while loop body, you use
    // the continue statement.
    //
    int secret, input = 0;
    int times = 1;

    /* get a random number between 1 and 10 */
    srand((unsigned int)time(NULL));
    secret = rand() % 10 + 1;

    /* start the game */
    printf("--- Demonstrate C while loop statement --- \n\n");
    printf("--- Number Guessing Game --- \n");

    while (input != secret && times <= ALLOWED_TIMES)
    {
        do {
            printf("%s", "Please enter a number (1 - 10): ");
            scanf("%d", &input);
        } while (input < 1 || input > 10);

        if (input == secret)
        {
            puts("Bingo! you got it.");
        }
        else if (input > secret)
        {
            puts("No, it is smaller.");
        }
        else
        {
            puts("No, it is bigger.");
        }
        times++;
    }

    if (input != secret)
    {
        printf("You lose! The secret number is %d\n", secret);
    }
    return EXIT_SUCCESS;
} // end of function main
