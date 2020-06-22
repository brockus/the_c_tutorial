//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <stdio.h>
#include <stdlib.h>


//
// this is a counter function with out a static counter
// variable.
//
int counter(void)
{
    int count = 0;
    count++;
    return count;
}

//
// this is a counter function with the static counter
// variable.
//
int staticCounter(void)
{
    static int count = 0;
    count++;
    return count;
}

int main(void)
{
    //
    // By default, variables are local to the scope in which they
    // are defined. Variables can be declared as static to increase
    // their scope up to file containing them. As a result, these
    // variables can be accessed anywhere inside a file.
    //
    // See function counter()
    //
    puts("Pizzas counter with out 'static'");
    printf("%d %s\n", "Pizzas", counter());
    printf("%d %s\n", "Pizzas", counter());
    printf("%d %s\n", "Pizzas", counter());

    //
    // We will see that count is not updated because it is removed
    // from memory as soon as the function completes. If static is
    // used, however
    //
    // See function staticCounter()
    //
    puts("Pizzas counter with the 'static'");
    printf("%d %s\n", "Pizzas", staticCounter());
    printf("%d %s\n", "Pizzas", staticCounter());
    printf("%d %s\n", "Pizzas", staticCounter());

    return EXIT_SUCCESS;
}// end of function main
