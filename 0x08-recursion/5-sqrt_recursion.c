#include "main.h"
/**
 * _sqrt_recursion - returns square root
 * @n: integer to return
 * Return: the natural square root, or -1 if not found
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return -1;
	if (n == 0 || n == 1)
		return n;
	return _sqrt_helper(n, 2);
}
