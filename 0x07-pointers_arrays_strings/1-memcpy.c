#include "main.h"
/**
 * _memcpy - to copy a data from source to dest for number of characters
 * @dest: destination var
 * @src: source var
 * @n: number of charcteras
 * Return: the selected source data copied to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
    char *destin = (char *)dest;
    char *source = (char *)src;

    for (int i = 0; i < n; i++)
    {
        destin[i] = source[i];
    }
    return(dest);
}