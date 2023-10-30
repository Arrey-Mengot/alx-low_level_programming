#include <stdio.h>
/**
  * main - prints name of program
  * @argc: number of args(length of argv)
  * @argv: array of args
  * Return: 0 for success
  */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
