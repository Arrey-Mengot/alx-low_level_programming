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

	len = sizeof(*s)/sizeof(s[1]);
	return (len);
}
