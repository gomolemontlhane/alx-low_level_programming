#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each element of an array
 * @array: Array of integers
 * @size: Size of the array
 * @action: Pointer to the function to be executed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		size_t i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
