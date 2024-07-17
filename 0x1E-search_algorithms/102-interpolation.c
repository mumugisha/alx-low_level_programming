#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array
 * using the interpolation search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Size of the array
 * @value: The value to search for
 *
 * Return: The first index where the value is located,
 *         or -1 if value is not present or array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;
	double frac;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (size)
	{
		frac = (double)(high - low) / (array[high] - array[low]) *
		       (value - array[low]);
		pos = (size_t)(low + frac);
		printf("Value checked array[%d]", (int)pos);

		if (pos >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[pos]);
		}

		if (array[pos] == value)
			return ((int)pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;

		if (low == high)
			break;
	}

	return (-1);
}
