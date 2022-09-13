#include "main.h"
/**
 * Description: main - Printing _putchar today
 *
 * Return: _putchar and 0 if successful
 */
int main(void)
{
	char n[] = "_putchar";

	int i;

	for (i = 0; i <= 7; i++)
	{
		_putchar(n[i]);
	}
	_putchar('\n');
	return (0);
}
