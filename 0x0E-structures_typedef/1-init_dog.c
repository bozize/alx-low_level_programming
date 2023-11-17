#include <stdlib.h>
#include "dog.h"

/**
*init_dog - variable for struct dog
*@d: input struct dog
*@name: input name
*@age: input age
*@owner: input owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}
