#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a structure named dog(special type) with members related to the type 
 * @name: this variable will store the name of the specific instance of the dog
 * @age: this will hold the age of the dog
 * @owner: This will hold the owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - the type definition for the struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif

