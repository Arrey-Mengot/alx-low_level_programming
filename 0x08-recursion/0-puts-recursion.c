#include <stdio.h>

/**
 * _puts_recursion(char *s) - Func that prints a string
 * @s: ptr
 * Return: void
 */

void _puts_recursion(char *s)
{
    if (*s)
    {
        putchar(*s);
        _puts_recursion(s+1);
    }
    else
        putchar('\n');

}

