#include "search_algos.h"

/**
 * print_array - Prints the array being searched
 * @array: Pointer to the first element of the array to print
 * @start: Starting index of the array to print
 * @end: Ending index of the array to print
 */
void print_array(const int *array, size_t start, size_t end)
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
 * Using the Binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: If value is not present in array
 * or if array is NULL, your function must return -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, mid, right;

	if (array == NULL || size == 0)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		print_array(array, left, right);
		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
