#include "main.h"

/**
 * actual_sqrt_recursion - recurse to find
 * the natural square root of a number
 * @n: the number to calculate the square root
 * @i: iterator
 *
 * Return: result of the square root
 */
int actual_sqrt_recursion(int n, int i)
{
		if (i * i > n)
			return (-1);
		if (i * i == n)
			return (i);
		return (actual_sqrt_recursion(n, i + 1));
}

/**
 * _sqrt_recursion - return the square root of a number
 * @n: the number to calculate the square root
 *
 * Return: result of the square root
 */
int _sqrt_recursion(int n)
{
			if (n < 0)
				return (-1);
		return (actual_sqrt_recursion(n, 0));
}
