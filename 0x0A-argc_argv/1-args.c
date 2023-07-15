#include <stdio.h>
#include "main.h"

/**
 * main - print n arguments passed
 * @argc: n arguments
 * @argv: arrays arguments
 *
 * Return: Always 0 (success)
 *
 */
int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
				printf("%d\n", argc - 1);

				return (0);
}
