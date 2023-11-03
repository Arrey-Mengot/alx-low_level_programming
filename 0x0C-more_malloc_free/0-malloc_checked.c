#include <stdlib.h>
#include <stdio.h>

/**
  * main - a function that allocates memory using malloc
  * @b: size of the memory to be alocated
  * Return: a pointer to the allocated memory
  * If malloc fails, function terminates with a status code
  * of 98
  */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (*ptr == NULL)
		exit(98);

	return (ptr);
}
