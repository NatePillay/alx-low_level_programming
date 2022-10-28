#include "main.h"
/**
 * get_bit - this is the function to get bit
 * @n: var 1
 * @index: var 2
 * Return: return whether bit is set or unset
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int new_num;

	new_num = n >> (index - 1);
	
	return (new_num & 1);

}
