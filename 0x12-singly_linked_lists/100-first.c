#include <stdio.h>

/**
 * printStatement - Print out a statement
 */
void pre_main_message(void)
{
    printf("You're beat! and yet, you must allow,\n");
    printf("I bore my house upon my back!\n");
}

/**
 * main - Entry point of the program
 * Return: Always 0
 */
int main(void)
{
    // Call the function to print the message
    print_main_message();

    // Your main function code
    printf("(A tortoise, having pretty good sense of a hare's nature, challenges one to a race.)\n");

    return 0;
}