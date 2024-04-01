#include <stdio.h>

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
 * _atoi - function that convert a string to int
 * @s: char array to convert
 *
 * Return: int the integer
 */
int _atoi(char *s)
{
	int size = _strlen(s);

	int negative = 0;
	int i;

	int value = 0;

	for (i = 0; i < size; i++)
	{
		if (s[i] == '-')
		{
			negative = 1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			int char_value = s[i] - '0';
			value = value * 10 + char_value;
		}
		else
		{
			if (value > 0)
			{
				if (negative == 1)
				{
					return -value;
				}
				return value;
			}
			negative = 0;
		}
	}

	if (negative == 1)
	{
		return -value;
	}
	return value;
}
