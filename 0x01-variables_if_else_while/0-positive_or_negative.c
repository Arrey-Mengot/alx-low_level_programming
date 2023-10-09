#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/** 
  *main - This is the entry point
  *Description: Tells us weather a number is 
  *postive or negative
  *Return: sucess (0)
  *
*/


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("%d ", n);
	if (n > 0)
	{
		printf("is positive\n");
	}
	else if (n == 0)
	{
		printf("is zero\n");
	}
	else
	{
		printf("is negative\n");
	}
	return (0);
}
