#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - function to print name
 * @name: name we are printing
 * @f: function to use
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
