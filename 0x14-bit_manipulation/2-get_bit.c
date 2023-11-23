#include "main.h"
/**
 * get_bit - gets the value of a bit at a given indec
 * @n: number to go through
 * @index: index to retrieve
 * Return: int value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);

	return (n >> index & 1);
}
