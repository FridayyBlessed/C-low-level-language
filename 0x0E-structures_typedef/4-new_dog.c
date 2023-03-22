#include "dog.h"

#include <stdlib.h>
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
/**
* new_dog - function
* @name: name of dog
* @age: age of new doggo
* @owner: owner of new doggo
*
* Description: function to create a new dog. Store copy of name & owner
* Return: ptr, null if fail
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	char *nename, *neowner;
	int lename, leowner;

	dog_t *doggo = malloc(sizeof(dog_t));

	if (doggo == NULL)
		return (NULL);
	_strlen(name);
	lename = _strlen(name);
	nename = malloc((lename + 1) * sizeof(char));
	if (nename == NULL)
	{
		free(doggo);
		return (NULL);
	}
	_strcpy(nename, name);

	_strlen(owner);
	leowner = _strlen(owner);
	neowner = malloc((leowner + 1) * sizeof(char));
	if (neowner == NULL)
	{
		free(nename);
		free(doggo);
		return (NULL);
	}
	_strcpy(neowner, owner);

	doggo->name = nename;
	doggo->age = age;
	doggo->owner = neowner;

	return (doggo);
}

/**
* _strlen - function
* @s: first operand & pointer
*
* Description: function that returns the length of a string
* Return: Always 0
*/

