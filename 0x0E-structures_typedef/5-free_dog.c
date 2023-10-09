#include <stdlib.h>
#include "dog.h"

void free_dog(dog_t *d) {
	if (d) {
		free(d);
	}
}
