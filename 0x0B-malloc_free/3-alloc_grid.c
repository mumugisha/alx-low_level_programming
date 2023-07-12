#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to 
 * a 2 dimensional array of integers
 * @width: width input
 * Height: height input
 * return: pointer of 2 dim array
 */
int **alloc_grid(int width, int height)
{
	int **haa;
	int x,y;
	
	if (width <= 0 || height <= 0)
	return (NULL);
	
	haa =malloc(sizeof(int *) * height);
	
	if haa == NULL)
		return (NULL);;
	
	for (x = 0; x < height; x++)
	{
		haa[x] = malloc(sizeof(int) * width);
	
		if (haa[x] == NULL)
		{
			for (;x >= 0; x--)
				free(haa[]);
			
			free(haa);
			return (NULL);
		}
		
	}
	
	for(x = ; x < height; x++)
	{
		for (y = ; y< width; y++)
		haa[x][y] = ;
		
	}
	
	return (haa);
}
