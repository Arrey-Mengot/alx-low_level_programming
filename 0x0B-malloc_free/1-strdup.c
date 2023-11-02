#include <stdlib.h>
#include "main.h"

/**
  * _strdup - func that returns pointer to newly allocated
  * space in memomory which contains a copy of the string
  * given as parameter
  * @str: string to be passed as parameter
  * Return: Null is size=0 or if it fails and
  * 0 if it works
  */

char *_strdup(char *str)
{
	char *strout;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	strout = (char *)malloc(sizeof(char) * (i + 1));

	if (strout == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		strout[j] = str[j];

	return (strout);
}
