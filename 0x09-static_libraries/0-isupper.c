#include "main.h"

/**
 * _isupper - checks for uppercase characters
 * @c : the character to check
 *
 * Return: 1 if c is in uppercase , 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
