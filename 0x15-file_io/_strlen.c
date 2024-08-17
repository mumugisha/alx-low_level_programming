#include "main.h"

/**
 * _strlen - Calculate the length of a string
 * @str: The string to measure
 *
 * Return: The length of the string
 */
int _strlen(char *str)
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}
