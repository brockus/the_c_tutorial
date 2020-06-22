//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //
    // By definition, C pointer is a special variable that
    // holds the memory address of another variable.
    //
    // There is a special kind of pointer called function
    // pointer that holds a memory address of a function.
    // Check it out the C function pointer tutorial for more
    // information.
    //
    // Like a variable, before using a pointer, you have to
    // declare it.  The following illustrates the syntax of
    // declaring a pointer:
    //
    // > <data type> *<var name>;
    //
    // First, you specify the data type of the variable that
    // the pointer point to. The type can be any valid C data
    // type such as int, char, float or even void.
    //
    // Second, you place the indirection operator ( *) in front
    // of the pointer name to indicate that this is a pointer that
    // points to a variable with a specific type e.g. int, not a
    // variable of the type  int
    //
    // Third, you provide the name for the pointer. The name of
    // pointers must follow the naming rules of variables. By
    // convention, in C,  pointer name begins with p to help
    // distinguish between a pointer and a variable in your programs.
    //
    // If you declare a pointer without initializing it, you have
    // a uninitialized pointer. With a uninitialized pointer, you
    // cannot do anything with it.
    //
    // To initialize a pointer, you assign the memory address of
    // another variable to the pointer using the address-of operator
    // ( &) as follows:
    //
    // > pointer = &variable;
    //
    // For example, to assign the address of the x variable to the
    // xPtr pointer you use the following syntax:
    //
    // > xPtr = &x;
    //
    // After initializing a pointer, you can manipulate the variable
    // which the pointer points to using the indirection operator ( *).
    //
    // In C, accessing the value of a variable through the variable
    // name is called direct access, and accessing the value of a
    // variable through a pointer that points to the variable is
    // known as indirect access or indirection.
    //
    int x = 10;
    int *xPtr = &x;

    printf("Direct access, x = %d\n", x);
    printf("Indirect access, *xPtr = %d\n", *xPtr);

    *xPtr = 20;

    printf("Direct access, x = %d\n", x);
    printf("Indirect access, *xPtr = %d\n", *xPtr);

    /* examining memory address of x and xPtr */
    printf("The memory address of x is %p\n", &x);
    printf("The value of the pointer xPtr is %p\n", xPtr);
    printf("The memory address of the pointer xPtr is %p\n", &xPtr);
    return EXIT_SUCCESS;
} // end of function main
