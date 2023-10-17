#include "main.h"
/**
  * _strlen - prints length of string
  * @s: String
  * Description: Takes string and returns lenght
  * Return: Length of string
  */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*(s + len) != '\0')
		len ++;
	return (len);
}
