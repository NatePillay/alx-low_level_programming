#include "main.h"

/**
 * string_reversal - function to check if palindrome
 * @s: character var
 * Return: 1 if true, 0 if not
 */

int string_reversal(char *s)
{
	if (*s != '\0')
	{
		return (1 + string_reversal(s + 1));
	}
	else
	{
		return (0);
	}
}

/**
 * string_compare - look at both strings character for charcater
 * @s: string
 * @i: int i
 * @j: int j
 * Return: track count on the two characters
 */

int string_compare(char *s, int i, int j)
{
	if (s == NULL || i < 0 || j < 0)
	{
		return (0);
	}

	if (i > j)
	{
		return (i);
	}

	if (s[i] == s[j])
	{
		return (string_compare(s, i + 1, j - 1));
	}

	return (0);
}

/**
 * is_palindrome - checks if palidrome
 * @s: string
 * Return: 1 for true 0 for not
 */

int is_palindrome(char *s)
{
	return (string_compare(s, 0, string_reversal(s) - 1));
}
