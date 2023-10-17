#include "main.h"
/**
  *swap_int - swaps value of two integers
  *@a: pointer to int
  *b: pointer to int
  *Description: swpas two integers
  *Return: void
  */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
