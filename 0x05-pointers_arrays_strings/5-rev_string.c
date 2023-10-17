#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 */
void rev_string(char *s)
{
	int length = 0;
	int start = 0;
	char temp;

	while (s[length] != '\0')
	{
		length++;
	}
	length--;
	while (start < length)
	{
		temp = s[start];
		s[start] = s[length];
		s[length] = temp;
		start++;
		length--;
	}
}
