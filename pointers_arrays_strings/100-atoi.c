#include <stdio.h>

/**
 * _atoi - function that convert a string to int
 * @s: char array to convert
 *
 * Return: int the integer
 */
int _atoi(char *s)
{
	int negative = 0;
	int i = 0;
	int value = 0;

	while (s[i] != '\0')
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
				return value;
			}
			negative = 0;
		}
		i++;
	}

	if (negative == 1)
	{
		return -value;
	}
	return value;
}
