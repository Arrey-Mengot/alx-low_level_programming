#include "main.h"
/**
  *_isdigit - takes a character and determines if it is a digit
  *@c: argument to function
  *Description: Function that checks if the @c is a digit
  *Return: 1 if c is a digit or 0 otherwise
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
