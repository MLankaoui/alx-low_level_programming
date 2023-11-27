#ifndef HEADER_FILE
#define HEADER_FILE

/**
 * struct dog - A structure representing a dog with a name, age, and owner.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Description: This structure defines a dog with its name, age, and owner.
 */
struct dog
{
	char *name;  /* Name of the dog */
	float age;   /* Age of the dog */
	char *owner; /* Owner of the dog */
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
