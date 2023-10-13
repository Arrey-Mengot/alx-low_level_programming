#include "main.h"
/**
  *_isupper - takes a character and determines if it is uppercase
  *@c: argument to function
  *Description: Function that checks if the @c is uppercase
  *Return: 1 if c is upper case or 0 otherwise
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
