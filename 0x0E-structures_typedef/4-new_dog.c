#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog or  NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int i = 0, j = 0;

	while (name[i])
		i++;
	while (owner[j])
		j++;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = malloc(sizeof(char) * (i + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(sizeof(char) * (j + 1));
	if (d->owner == NULL)
	{
		free(d);
		free(d->name);
		return (NULL);
	}
	i = 0;
	j = 0;
	while (name[i])
	{
		d->name[i] = name[i];
		i++;
	}
	d->name[i] = '\0';
	while (owner[j])
	{
		d->owner[j] = owner[j];
		j++;
	}
	d->owner[j] = '\0';
	d->age = age;
	return (d);
}
