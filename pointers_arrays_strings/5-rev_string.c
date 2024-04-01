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
void rev_string(char *s)
{
	int size = _strlen(s);
	int i = 0;
	int j = size - 1;

	char temp;

	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;

		i++;
		j--;
	}
}
