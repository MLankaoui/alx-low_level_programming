#ifndef HEADER_FILE
#define HEADER_FILE

/**
 * struct dog - A structure representing a dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Description: This structure defines a dog with a name,
 *              age, and owner's name.
 */
struct dog
{
	char *name;   /* The name of the dog */
	float age;    /* The age of the dog */
	char *owner;  /* The owner of the dog */
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* HEADER_FILE */

