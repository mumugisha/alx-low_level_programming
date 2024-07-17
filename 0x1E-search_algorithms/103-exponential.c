#include "search_algos.h"
#include <stdio.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))

/* PRINT macro of exponential algorthm */
#define PRINT(array, start, end) \
    do { \
        size_t idx; \
        printf("Searching in array:"); \
        for (idx = (start); idx <= (end); idx++) \
        { \
            printf(" %d", (array)[idx]); \
            if (idx < (end)) \
                printf(","); \
        } \
        printf("\n"); \
    } while (0)

/**
 * exponential_search - searches for a value in a sorted array
 * using the exponential search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: The first index where the value is located,
 *         or -1 if value is not present or array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
    size_t i, start, mid, end;

    if (!array || size == 0)
        return (-1);

    i = 1;
    while (i < size && array[i] <= value)
    {
        printf("Value checked array[%ld] = [%d]\n", i, array[i]);
        i *= 2;
    }

    start = i / 2;
    end = MIN(i, size - 1);

    printf("Value found between indexes [%ld] and [%ld]\n", start, end);

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        PRINT(array, start, end);

        if (array[mid] < value)
            start = mid + 1;
        else if (array[mid] > value)
            end = mid - 1;
        else
            return (mid);
    }

    return (-1);
}
