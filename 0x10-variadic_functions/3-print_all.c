#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_all - function to print all data types
 * @format: 1 var
 * Return: Nothing
 */


void print_all(const char * const format, ...)
{
	unsigned int i;
	char *s, *separator;
	va_list list;


	separator = "";

	va_start(list, format);

	i = 0;
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'i':
				printf("%s%d", separator, va_arg(list, int));
				break;
			case 'c':
				printf("%s%c", separator, va_arg(list, int));
				break;
			case 'd':
				printf("%s%f", separator, va_arg(list, double));
				break;
			case 's':
				s = va_arg(list, char *);
				if (s == NULL)
				s = "(nil)";
				printf("%s%s", separator, s);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(list);
}
