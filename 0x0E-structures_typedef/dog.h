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

/**
 * dog_t - Typedef for struct dog.
 */
typedef struct dog dog_t;

/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: Pointer to the struct dog to be initialized.
 * @name: Name to assign to the dog.
 * @age: Age to assign to the dog.
 * @owner: Owner to assign to the dog.
 *
 * Description: This function initializes a variable of type struct dog
 * with the provided name, age, and owner.
 */
void init_dog(dog_t *d, char *name, float age, char *owner);

/**
 * print_dog - Prints information about a dog.
 * @d: Pointer to the struct dog to be printed.
 *
 * Description: This function prints information about a dog,
 * including its name, age, and owner.
 */
void print_dog(const dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
