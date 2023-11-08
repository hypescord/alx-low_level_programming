#include <stddef.h>
/* defines size_t */

/**
 * array_iterator - execute function on array via a function pointer
 * @array: our array
 * @size: size of array
 * @action: point to function that we need to execute
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
		for (i = 0; i < size; i++)
			action(*(array + i));
}
