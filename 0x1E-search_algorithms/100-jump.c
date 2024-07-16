#include "search_algos.h"
#include <math.h>
#include <stdio.h>

/**
 * jump_search - searches for a value in a sorted array of integers 
 * using the Jump search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: The first index where the value is located,
 *         or -1 if value is not present or array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
    size_t m, L, R;

    if (!array)
        return (-1);

    m = sqrt(size);
    for (L = 0, R = m; L < size && array[L] < value; L = R, R += m)
    {
        printf("Value checked array[%ld] = [%d]\n", L, array[L]);
    }

    printf("Value found between indexes [%ld] and [%ld]\n",
           L ? L - m : L, L ? R - m : R);

    for (L = L ? L - m : 0; L < size && L < R; L++)
    {
        printf("Value checked array[%ld] = [%d]\n", L, array[L]);
        if (array[L] == value)
            return (L);
    }
    return (-1);
}
