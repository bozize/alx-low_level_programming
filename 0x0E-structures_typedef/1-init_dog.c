#include "dog.h"
/**
 * init_dog - initialize dog function
 * @d: dog function
 * @name: parameter for dog name
 * @age: parameter for dog age
 * @owner: parameter for dog owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
