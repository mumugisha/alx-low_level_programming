#include <time.h>
/**
 * main - program print positive negative number or zero
 *
 * Return: 0 (success)
 *
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
		printf("%d is zero\n", n);
	}
	else
	{	print("%d is negative\n", n);
	}
	return (0);
}
