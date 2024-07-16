#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 *                 using the Binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: The first index where the value is located,
 *         or -1 if value is not present or array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start, mid, end;

	if (!array || size == 0)
		return (-1);

	start = 0;
	end = size - 1;

	print(array, start, end);
	while (start <= end)
	{
		mid = start + (end - start) / 2;
		if (array[mid] < value)
		{
			start = mid + 1;
			print(array, start, end);
		}
		else if (array[mid] > value)
		{
			end = mid - 1;
			print(array, start, end);
		}
		else
			return (mid);
	}

	return (-1);
}
