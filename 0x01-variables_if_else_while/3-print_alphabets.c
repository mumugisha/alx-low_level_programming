#include <stdio.h>
/**
 * main -prints the alphabet in lowercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alp[i]);
	}
	putchar("\n");
	return (0);
}
