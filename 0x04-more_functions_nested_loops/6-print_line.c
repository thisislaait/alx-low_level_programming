#include "main.h"
/**
 * print_line - prints a straight line
 *
 * @n: integer that checks line to print
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
