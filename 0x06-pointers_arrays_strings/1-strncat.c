#include "main.h"
/**
 * _strncat - concats two strings
 *
 * @dest: destination of concat
 * @src: source string to concat
 * @n: amount of bytes
 *
 * Return: char value
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (j = 0; dest[j] != '\0'; j++)
	{}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}
	dest[j + i] = '\0';

	return (dest);

}
