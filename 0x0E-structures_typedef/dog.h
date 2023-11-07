#ifndef POPPY_H
#define POPPY_H
/**
 * struct dog - dog main value
 *
 * @name: first value
 * @age: second value
 * @owner: third value
 * Return: Always 0
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
#endif
