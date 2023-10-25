#include <stdio.h>

/**
 * _strlen_recursion - Returns length of string with recursion
 * @s: string
 * Return: length of the string int
 */

int _strlen_recursion(char *s)
{
    int len = 0;
    if (*s)
    {
        return 1 + _strlen_recursion(s+1);
    }
    else
        return 0;
}

