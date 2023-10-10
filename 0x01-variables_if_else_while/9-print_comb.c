#include <stdio.h>
/**
  *main - entry point
  *Description: Prints the alphabet
  *Return: Sucess (0)
*/

int main(void)
{
    int i, j;

    for (i = 0; i < 10; i++)
    {
        for (j = i; j < 10; j++)
        {
            putchar(i + '0');
            putchar(',');
            putchar(' ');
            putchar(j + '0');
        }
    }
    
    return (0);
}

