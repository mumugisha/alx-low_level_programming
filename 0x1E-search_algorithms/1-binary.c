#include "search_algos.h"

/**
 * print_array - Prints the array being searched
 * @array: Pointer to the first element of the array to print
 * @start: Starting index of the array to print
 * @end: Ending index of the array to print
 */
void print_array(int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i < end)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in a sorted array of integers
 *                 using the Binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: If value is not present in array or if array is NULL,
 *         your function must return -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start, mid, end;

	if (!array || size == 0)
		return (-1);

	start = 0;
	end = size - 1;

	print_array(array, start, end);
	while (start <= end)
	{
		mid = start + (end - start) / 2;
		if (array[mid] < value)
		{
			start = mid + 1;
			print_array(array, start, end);
		}
		else if (array[mid] > value)
		{
			end = mid - 1;
			print_array(array, start, end);
		}
		else
			return (mid);
	}

	return (-1);
}
