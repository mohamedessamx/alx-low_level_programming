#include "dog.h"
/**
 * free_dog - free yo dawgs
 * @d: yo dawg
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
