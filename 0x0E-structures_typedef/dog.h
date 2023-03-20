#ifndef DOG_H
#define DOG_H

/*
 * struct dog - the dog's info
 * @name - First member
 * @age - Second member
 * @owner - Third member
 *
 * Descriptions - A longer description
 */
struct dog
{
     char *name
     float age
     char *owner
};

/*
 * dog_ty - the typedef for struct dog
 */
typedef struct dog dog_ty;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_ty *new_dog(char *name, float age, char *owner);
void free_dog(dog_ty *d);
char *_strcpy(char *dest, *scr);
int _strlen(char *s);

#endif
