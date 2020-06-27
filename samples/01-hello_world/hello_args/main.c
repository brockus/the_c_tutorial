//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//
// Version number of this program.
//
const char *VERSION = "0.1.1";

const unsigned char NO_ARGUMENTS_ARGC            = 1;

const unsigned char COMMAND_ARG_OFFSET           = 1;
const unsigned char VALID_SAY_HELLO_TO_ARGC      = 4;
const unsigned char VALID_SAY_HELLO_CLASSIC_ARGC = 3;

const unsigned char SWITCH_ARG_OFFSET            = 1;
const unsigned char VALID_SWITCH_ARGC            = 2;

//
// Will print the list commands the user can use with
// this program
void showUsage(void)
{
    puts("Usage: prog <command name>\n");
    puts("say-hello : Tells the program to say hello world.");
    puts("--version : Prints the version of the program.");
    puts("--help    : Prints this menu of commands.");
}

//
// Will print the list commands the user can use with
// this say hello command.
void showSubUsage(void)
{
    puts("Usage: prog say-hello --<switch name>\n");
    puts("--classic : Prints Hello, World for the user.");
    puts("--to      : Name of the person being sent to.");
    puts("--help    : Prints this menu of commands.");
}

//
// this is the hello args app. here to show how
// you can build a command line app using 'c'.
int main(int argc, char **argv)
{
    //
    // No arguments is always wrong
    //
    if (argc == NO_ARGUMENTS_ARGC)
    {
        showUsage();
    }

    //
    // Check for "say-hello" command
    //
    else if (!strncmp(*(argv + COMMAND_ARG_OFFSET), "say-hello", 10))
    {
        printf(": %s\n", argv[1]);

        //
        // Check for valid "say-hello --to" command
        //
        if (argc == VALID_SAY_HELLO_TO_ARGC &&
            !strncmp(*(argv + COMMAND_ARG_OFFSET + 1), "--to", 5))
        {
            printf("Hello, %s!\n", *(argv + COMMAND_ARG_OFFSET + 2));
        }

        //
        // Check for valid "say-hello --classic" command
        //
        else if (argc == VALID_SAY_HELLO_CLASSIC_ARGC &&
                 !strncmp(*(argv + COMMAND_ARG_OFFSET + 1), "--classic", 10))
        {
            puts("Hello, World!");
        }

        //
        // Otherwise give SubUsage --help
        //
        else
        {
            showSubUsage();
        }
    }

    //
    // Check for valid "--version" switch
    //
    else if (argc == VALID_SWITCH_ARGC &&
             !strncmp(*(argv + SWITCH_ARG_OFFSET), "--version", 10))
    {
        puts(VERSION);
    }

    //
    // Everything else will turn into "--help"
    //
    else
    {
        showUsage();
    }

    // Signal to operating system everything works fine
    return EXIT_SUCCESS;
} // end of function main
