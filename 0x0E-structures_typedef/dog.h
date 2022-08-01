#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* Function - Defining a new type struct dog
* 
* Return: Nothing
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

int main(void)
{
	dog.name = "Happy";
	dog.age = 1.2;
	dog.owner = "Victor";

	printf("The name of my dog is: %s\n", dog.name);
	printf("The age of my dog is: %f\n", dog.age);
	printf("The owner of %s is %s\n", dog.name, dog.owner);
}
