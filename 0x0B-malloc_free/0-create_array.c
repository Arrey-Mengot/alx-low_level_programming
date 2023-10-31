#include <stdlib.h>
#include "main.h"

/**
  * create_array - func that creates an array of chars
  * and initialises it with a specific char
  * @size: size of array
  * @c: character to initialize arrey with
  * Return: Null is size=0 or if it fails and
  * 0 if it works
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *mem;

	if (size == 0)
		return (NULL);
	mem = malloc(sizeof(c) * size);

	if (mem == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		mem[i] = c;

	return (mem);
}
