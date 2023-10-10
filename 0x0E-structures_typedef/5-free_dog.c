#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Free memory allocated for a dog structure
 * @d: Pointer to a struct dog
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
		free(d);
}
