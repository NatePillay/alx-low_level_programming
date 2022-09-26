#include "main.h"
/**
 * _memset - function to copy another
 * @s: character string
 * @b: what we want returned
 * @n: counting variable
 * Return: string s
 */

char *_memset(char *s, char b, unsigned int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        s[i] = b;
    }
    return (*s);
}
