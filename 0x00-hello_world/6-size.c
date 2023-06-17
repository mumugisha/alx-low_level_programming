#include <stdio.h>
/**
* main - C program that prints the size of various types on the computer
* Return: 0 (success)
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
puts{"Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a)};
puts{"Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b)};
puts{"Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c)};
puts{"Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d)};
puts{"Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f)};
return (0);
}
