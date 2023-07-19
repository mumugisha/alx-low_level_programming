#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - return sum of 2 numbers
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: Sum of a and b
 */
int op_add(int a, int b)
{

	return (a + b);
}
/**
 * op_sub - returns difference of 2 numbers
 * @a : 1st number
 * @b : 2nd number
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{

	return (a - b);
}

/**
* op_mul - returns product of 2 numbers
* @a : 1st number
* @b : 2nd number
*
*Return: product of a and b
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns division of 2 numbers
 * @a: 1st number
 * @b: 2nd number
 * Return: division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns remainder of division of 2 numbers
 * @a: 1st number
 * @b: 2nd number
 * Return: remainder of division of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
