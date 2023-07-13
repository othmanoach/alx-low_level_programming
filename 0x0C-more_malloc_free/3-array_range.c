#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creating an array of integers
 * @min: minimum the range of values stored
 * @max: maximum the range of values stored and the numbers of elements
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
