#include "search_algos.h"
#include <stdio.h>

#define PRINT(a, lower, higher) do { \
	size_t i; \
	printf("Searching in array: "); \
	for (i = (lower); i <= (higher); i++) { \
		printf("%d%s", a[i], (i == (higher)) ? "\n" : ", "); \
	} \
} while (0)

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
	size_t start, end;

	if (!array || size == 0)
		return (-1);

	start = 0;
	end = size - 1;

	return (binary_search_index(array, start, end, value));
}

/**
 * binary_search_index - searches for a value in a sorted array
 * using the binary search algorithm
 * @a: Pointer to the first element of the array to search in
 * @lower: The index of the smallest element in the array
 * @higher: The index of the highest element in the array
 * @value: The value to search for
 *
 * Return: The first index where the value is located,
 *         or -1 if value is not present or array is NULL
 */
int binary_search_index(int *a, size_t lower, size_t higher, int value)
{
	size_t mid;

	if (lower > higher)
		return (-1);

	PRINT(a, lower, higher);

	mid = (lower + higher) / 2;

	if (a[mid] == value)
		return ((mid && a[mid - 1] == value) ?
			binary_search_index(a, lower, mid, value) : (int)mid);

	if (a[mid] > value)
		return (binary_search_index(a, lower, mid, value));

	return (binary_search_index(a, mid + 1, higher, value));
}
