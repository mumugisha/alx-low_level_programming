#include "search_algos.h"

/**
 * printing_array - print elements of an array
 * @array: Pointer to the array to print
 * @size: Number of elements in the array
 */
void printing_array(int *array, size_t size)
{
	size_t i;

	printf("Searching in array");
	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);
	printf("\n");
}

/**
 * binary_search_index - searches for a value in a sorted array
 * using the binary search algorithm
 * @ar: Pointer to the first element of the array to search in
 * @lower: The index of the smallest in the array
 * @higher: The index of the highest in the array
 * @value: The value to search for
 *
 * Return: The first index where the value is located,
 *         or -1 if value is not present or array is NULL
 */
int binary_search_index(int *ar, size_t lower, size_t higher, int value)
{
	size_t mid;

	if (lower > higher)
		return (-1);

	printing_array(ar + lower, higher - lower + 1);

	mid = lower + (higher - lower) / 2;

	if (ar[mid] == value)
	{
		if (mid == lower || ar[mid - 1] != value)
			return (mid);
		return (binary_search_index(ar, lower, mid, value));
	}
	else if (ar[mid] > value)
		return (binary_search_index(ar, lower, mid - 1, value));
	else
		return (binary_search_index(ar, mid + 1, higher, value));
}

/**
 * advanced_binary - searches for a value in a sorted array
 * using the binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: The first index where the value is located,
 *         or -1 if value is not present or array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (binary_search_index(array, 0, size - 1, value));
}
