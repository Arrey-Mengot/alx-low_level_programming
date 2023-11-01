#include <stdio.h>
#include <stdlib.h>
/**
  * main - multiplie two numbers gotten from
  * command line as arguemtns
  * @argc: number of args(length of argv)
  * @argv: array of args
  * Return: 0 for success
  */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	int arg1 = atoi(argv[1]);
	int arg2 = atoi(argv[2]);
	
	printf("%d\n", arg1 * arg2);
	return (0);
}
