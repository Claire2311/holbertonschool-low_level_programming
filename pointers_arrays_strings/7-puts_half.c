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
 * puts_half - function that manipulate the string
 * @str: string we want to manipulate
 *
 */
void puts_half(char *str)
{
	int size = _strlen(str);
	int i = ((size - 1) / 2) + 1;

	while (i < size)
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
