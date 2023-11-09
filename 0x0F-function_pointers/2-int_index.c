#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - index
 * @array: array list
 * @size: size of array
 * @cmp: function to manipulate size
 * Return: int value
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
