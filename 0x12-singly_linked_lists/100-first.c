#include <stdio.h>

/**
 * pre_main_message - Print out a statement
 * Return: no return
 */
void _attribute_((constructor)) pre_main_message()
{
    printf("You're beat! and yet, you must allow,\n");
    printf("I bore my house upon my back!\n");
}