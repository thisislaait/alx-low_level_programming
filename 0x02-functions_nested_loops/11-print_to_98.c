#include "main.h"
#include "6-abs.c"
#include <stdio.h>

/**
 * print_to_98 - prints natural numbers from n to 98
 * @n: the starting number
 *
 * Description: This function prints all natural numbers from n to 98, separated
 * by a comma and space, in ascending or descending order depending on the
 * value of n. The first number printed is the value of n, and the last number
 * is always 98.
 */



void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	} else
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
