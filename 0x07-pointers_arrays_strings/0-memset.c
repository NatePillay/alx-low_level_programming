#include "main.h"
/**
 * _memset - function to fill n bytes of memory area pointed to
 * by @s with constant byte @b
 * @s: character string
 * @b: what we want returned
 * @n: counting variable
 * Return: a pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
    unsigned int i;
    
    for (i = 0; i < n; i++)
    {
        s[i] = b;
    }
    return (s);
}
