#include "search_algos.h"

/**
  * jump_search - Uses jump search algorithm to find a value in a sorted array.
  * @array: Pointer to the first element of the array to be searched.
  * @size: Total number of elements in the array.
  * @value: The value to be searched for.
  *
  * Return: If the value is not present or the array is NULL, returns -1.
  *         Otherwise, returns the index where the value is first found.
  *
  * Description: Prints each compared value in the array.
  *              The jump step is the square root of the array size.
  */
int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (i = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

	jump = jump < size - 1 ? jump : size - 1;
	for (; i < jump && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
