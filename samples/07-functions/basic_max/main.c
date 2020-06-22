//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <stdio.h>
#include <stdlib.h>

//
// The max() function accepts two integer parameters
// and returns the maximum one.
//
int max(int a, int b)
{
    return (a > b) ? a : b;
} // end of function max

int main(int argc, char **argv)
{
    //
    // A function is designed to perform a specific task
    // e.g., sort an array, write data into a file or
    // connect to a database system. By using functions,
    // you can divide a big task into smaller and more
    // manageable ones that make your code more testable
    // and reusable.
    //
    int x = 10;
    int y = 20;
    int m;

    //
    // A variable that you pass to the function is called
    // an argument e.g., x and y are arguments. a and b are
    // called parameters because they are a part of the
    // function signature. Programmers often use argument
    // and parameter interchangeably.
    //
    m = max(x, y);
    printf("max of %d and %d is %d", x, y, m);
    return EXIT_SUCCESS;
} // end of function main
