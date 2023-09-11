#ifndef _DOG_H_INCLUDED
#define _DOG_H_INCLUDED
/**
 * struct dog - Short description
 * @name: First member
 * @owner: Second member
 * @age: third member
 *
 * Description: Longer description
 */
struct dog
{
char *name;
char *owner;
float age;

};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /*  _DOG_H_INCLUDED */
