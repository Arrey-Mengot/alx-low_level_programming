#include "main.h"
/**
  *_isalpha - takes a character and determines if it os lower
  *@c: argument to function
  *Description: Function that prints alphabet in lwer case
  *Return: 1 if c is lower case or 0
*/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
