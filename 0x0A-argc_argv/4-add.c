#include <stdio.h>
#include <stdlib.h>

/**
  * main - adds all numbers found in arguments
  * Arguments found in argv are strings, so
  * For us to check that there is no character in the string
  * that is not a number, for each string i, we need to iterate
  * through its characters j to ensure to check they are all
  * numbers.
  * Return: sum of numbers
  * @argc: number of arguments
  * @argv: list of arguments as strings
  */

int main(int argc, char *argv[])
{
	int i;
	int j;
	int sum;

	if (argc <= 1)
		printf("0\n");

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
}
