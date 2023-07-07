#include "main.h"

/**
 * actual_prime_number - checks if a number is prime
 * @n: the number to evaluate
 * @i: current iteration
 *
 * Return: 1 if n is prime, 0 if not
 */
int actual_prime_number(int n, int i)
{
		if (i <= 1)
			return (1);
		if (n % i == 0)
			return (0);
		return (actual_prime_number(n, i - 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to evaluate
 *
 * Return: 1 if n is prime, 0 if not
 */
int is_prime_number(int n)
{
			if (n <= 1)
				return (0);
		return (actual_prime_number(n, n - 1));
}

