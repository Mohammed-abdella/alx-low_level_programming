#include "dog.h"
#include <stdlib.h>

int _strlen(char *s);
char *_strcopy(char *d, char *s);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - to get the length of a string for malloc func
 * @s: the input string
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}

/**
 * _strcopy - to copy a string
 * @d: the addres containing the copy
 * @s: the address of input string to be copied
 * Return: the pointer to d
 */
char *_strcopy(char *d, char *s)
{
	int i = 0;

	for (i = 0; s[i]; i++)
		d[i] = s[i];
	d[i] = '\0';
	return (d);
}
/**
 * new_dog - a function to create a new dog
 * @a: the name of the dog
 * @b: the age of the dog
 * @c: the owner of the dog
 * Return: structure of a new dog
 */
dog_t *new_dog(char *a, float b, char *c)
{
	dog_t *mydog;

	if (a == NULL || b < 0 || c == NULL)
		return (NULL);
	mydog = malloc(sizeof(dog_t));
	if (mydog == NULL)
		return (NULL);
	mydog->name = malloc(sizeof(char) * (_strlen(a) + 1));
	if (mydog->name == NULL)
	{
		free(mydog);
		return (NULL);
	}
	mydog->owner = malloc(sizeof(char) * (_strlen(c) + 1));
	if (mydog->owner == NULL)
	{
		free(mydog->name);
		free(mydog);
		return (NULL);
	}
	mydog->name = _strcopy(mydog->name, a);
	mydog->age = b;
	mydog->owner = _strcopy(mydog->owner, c);

	return (mydog);
}
