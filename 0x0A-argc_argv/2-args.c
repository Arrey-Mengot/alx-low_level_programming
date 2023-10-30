#include <stdio.h>
/**
  * main - prints all arguments
  * @argc: number of args(length of argv)
  * @argv: array of args
  * Return: 0 for success
  */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
