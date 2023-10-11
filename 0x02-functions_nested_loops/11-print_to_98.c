#include"main.h"

/**
 * print_to_98 - print n to 98 counts
 *           separated by comma, followed
 *           by space and number should be
 *           printed in order
 *
 * @n: input
 * Result: void
*/

void print_to_98(int n)
{
	int x;
	if (n > 98)
		for (x = n; x > 98; x--)
			printf("%d, ", x);
	else
		for (x = n; x < 98; x++)
			printf("%d, ", x);
	printf("98\n");
}
