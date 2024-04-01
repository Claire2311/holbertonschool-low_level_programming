#include "_putchar.h"

/**
 * _strlen - function that returns the length of a string
 * @s: string we want the length
 *
 * Return: integer with the number of char
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}

/**
 * rev_string - function that reverse the string
 * @s: string we want to reverse
 *
 */
void puts2(char *str)
{
	int size = _strlen(str);
	int i = 0;

	while (i < size)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}

	_putchar('\n');
}
