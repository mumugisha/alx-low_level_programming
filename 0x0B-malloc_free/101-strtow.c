#include "main.h"
#include <stdlib.h>

/**
 * count_word - count words into a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int mango, c, w;

	mango = 0;
	w = 0;


		for (c = 0; s[c] != '\0'; c++)
	{
			if (s[c] == ' ')
				mango = 0;
		else if (mango == 0)
		{
			mango = 1;
			w++;
		}
	}

	return (w);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to array string (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

		while (*(str + len))
			len++;

	words = count_word(str);
		if (words == 0)
			return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
		if (matrix == NULL)
			return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
					if (tmp == NULL)
					return (NULL);
					while (start < end)
						*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;

			}
		}
		else if (c++ == 0)
			start = i;
	}

	matrix[k] = NULL;
	return (matrix);
}

