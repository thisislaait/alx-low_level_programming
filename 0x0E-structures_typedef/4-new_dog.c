#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	if (name == NULL || owner == NULL)
		return (NULL);

	dog_t *new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	int name_length = 0;
	int owner_length = 0;

	while (name[name_length])
		name_length++;
	while (owner[owner_length])
		owner_length++;

	new_dog->name = malloc(name_length + 1);
	new_dog->owner = malloc(owner_length + 1);

	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	for (int i = 0; i <= name_length; i++)
		new_dog->name[i] = name[i];

	new_dog->age = age;

	for (int i = 0; i <= owner_length; i++)
		new_dog->owner[i] = owner[i];

	return (new_dog);
}

