#include "main.h"

/**
 * main - Entry point to print numbers
 * Description: Prints a sequence of numbers indefinitly
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 1;

	while (1)
	{
		print_number(n);
		_putchar('\n');
		n++;
	}

	return (0);
}
