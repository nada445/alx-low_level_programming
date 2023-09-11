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
void print_dog(struct dog *d);
/**
 * struct dog_t - Short description
 * @name: First member
 * @owner: Second member
 * @age: third member
 *
 * Description: Longer description
 */
typedef struct dog_t
{
char *name;
char *owner;
float age;
} dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /*  _DOG_H_INCLUDED */
