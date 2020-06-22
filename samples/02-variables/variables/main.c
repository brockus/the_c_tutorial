//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    //
    // here you see three variables of type integer. As you can see
    // we assigned values to each of them on the same line as there
    // declared.
    //
    int leftNumber = 5;
    int rightNumber = 2;
    int result = leftNumber + rightNumber;

    //
    // here we can see that it's easy to output the values of the
    // integers.
    //
    printf("left value is %i, and right value is %i", leftNumber, rightNumber);
    printf("%s %i", "So when both are added it's", result);

    //
    // But it's also possable to declared a variable on one line
    // and assigned a value to it later like this example here.
    //
    int someValue;
    someValue = 24;

    printf("%s %i", "and the answer to life is", someValue);
    
    return EXIT_SUCCESS;
}// end of function main
