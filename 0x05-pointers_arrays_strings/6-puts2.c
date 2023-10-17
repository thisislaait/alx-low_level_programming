#include "main.h"

/**
 * puts2 - prints every other character of a string, first character
 * @str: the input string
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
