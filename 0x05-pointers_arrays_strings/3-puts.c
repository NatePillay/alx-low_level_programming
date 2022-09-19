#include "main.h"
/**
 * _puts -  function to print string
 * @str: variable for string
 * #Return a string
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 1;
	}
}
