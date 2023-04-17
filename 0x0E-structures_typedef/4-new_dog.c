#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - function that calculates the length of a string
 * @s: string
 *
 * Return: length
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * *_strcpy - function that copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: parameter to copy to
 * @src: parameter string to be copied
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - function that creates a new dog
 * @name: name of the dog
 * @age: dog age
 * @owner: dog owner
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogy;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dogy = malloc(sizeof(dog_t));
	if (dogy == NULL)
		return (NULL);

	dogy->name = malloc(sizeof(char) * (len1 + 1));
	if (dogy->name == NULL)
	{
		free(dogy);
		return (NULL);
	}
	dogy->owner = malloc(sizeof(char) * (len2 + 1));
	if (dogy->owner == NULL)
	{
		free(dogy);
		free(dogy->name);
		return (NULL);
	}
	_strcpy(dogy->name, name);
	_strcpy(dogy->owner, owner);
	dogy->age = age;

	return (dogy);
}
