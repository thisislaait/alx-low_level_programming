#include "main.h"
#include "2-get_bit.c"
/**
 * clear_bit - set value of a bit to  0
 * @n: Pointer to the number
 * @index: index of bit ot clear
 * Return: -1 if error occurs
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);

	(*n) &= ~(1 << index);

	if (get_bit((*n), index) == 0)
		return (1);
	return (-1);
}
