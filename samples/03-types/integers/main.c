//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h> // using integers with standard size


int main(int argc, char **argv)
{
    //
    // C provides you with five signed integer types. Each
    // integer type has several synonyms.
    //
    // The following table illustrates the first five integer
    // types with their corresponding synonyms
    //
    // For each signed integer, C also provides the corresponding
    // unsigned integer type that has the same memory size as the
    // signed integer type.
    //
    // Here in this tutorial, we have introduced various C integer types
    // and shown you how to use the sizeof() operator to get the
    // sizes of integer types in your system in bits.
    //
    puts("Integer Size in Bits:");
    printf("%s%ld bits\n", "unsigned char          = ", sizeof(unsigned char) * 8);
    printf("%s%ld bits\n", "signed char            = ", sizeof(signed char) * 8);
    printf("%s%ld bits\n", "short int              = ", sizeof(short int) * 8);
    printf("%s%ld bits\n", "unsigned short int     = ", sizeof(unsigned short int) * 8);
    printf("%s%ld bits\n", "unsigned int           = ", sizeof(unsigned int) * 8);
    printf("%s%ld bits\n", "int                    = ", sizeof(int) * 8);
    printf("%s%ld bits\n", "long int               = ", sizeof(long int) * 8);
    printf("%s%ld bits\n", "unsigned long long int = ", sizeof(unsigned long long int) * 8);

    puts("Standard Integer Size in Bits:");
    printf("%s%ld bits\n", "uint8_t  = ", sizeof(uint8_t) * 8);
    printf("%s%ld bits\n", "int8_t   = ", sizeof(int8_t) * 8);
    printf("%s%ld bits\n", "int16_t  = ", sizeof(int16_t) * 8);
    printf("%s%ld bits\n", "uint16_t = ", sizeof(uint16_t) * 8);
    printf("%s%ld bits\n", "uint32_t = ", sizeof(uint32_t) * 8);
    printf("%s%ld bits\n", "int32_t  = ", sizeof(int32_t) * 8);
    printf("%s%ld bits\n", "int64_t  = ", sizeof(int64_t) * 8);
    printf("%s%ld bits\n", "uint64_t = ", sizeof(uint64_t) * 8);

    return EXIT_SUCCESS;
} // end of function main
