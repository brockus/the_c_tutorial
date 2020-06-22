//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    //
    // Objects declared with const-qualified types may be placed in
    // read-only memory by the compiler, and if the address of a const
    // object is never taken in a program, it may not be stored at all.
    //
    // const semantics apply to lvalue expressions only; whenever a const
    // lvalue expression is used in context that does not require an lvalue,
    // its const qualifier is lost (note that volatile qualifier, if present,
    // isn't lost).
    //
    const int n = 1; // object of const type
    n = 2;           // error: the type of n is const-qualified

    int x = 2; // object of unqualified type
    const int *nPtr = &x;
    *nPtr = 3; // error: the type of the lvalue *p is const-qualified

    return EXIT_SUCCESS;
}// end of function main
