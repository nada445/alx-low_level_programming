#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - fdovkvb
 * @name: efv
 * @age: fdvfdv
 * @owner: fdvdfg
 * Return: dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
struct dog_t *new;
if (!name || age < 0 || !owner)
return (NULL);
new = malloc(sizeof(struct dog_t));
if (new == NULL)
{
free(new);
return (NULL);
}
new->name = malloc(strlen(name) + 1);
if (!new->name)
{
free(new);
return (NULL);
}
new->owner = malloc(strlen(owner) + 1);
if (!new->owner)
{
free(new->name);
free(new);
return (NULL);
}
new->name = strcpy(new->name, name);
new->age = age;
new->owner = strcpy(new->owner, owner);
return (new);
}
