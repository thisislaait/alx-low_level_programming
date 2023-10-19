#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array to reverse.
 * @n: The number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int tmp;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
