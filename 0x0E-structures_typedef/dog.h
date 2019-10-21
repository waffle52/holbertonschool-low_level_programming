#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - Short description
 * @name: First member of pointer to char type
 * @age: Second member of float type
 * @owner: Third member of pointer to char type
 *
 * Description: struct that defines parameters for a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/*
 *dog_t *new_dog(char *name, float age, char *owner);
 *void free_dog(dog_t *d);
*/
#endif
