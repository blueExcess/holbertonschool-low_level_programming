#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
/* 0. define new struct dog */

/**
 * struct dog - dog structure
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: nothing
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* typedef */
typedef struct dog dog_t;

/* prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif /* holberton.h */
