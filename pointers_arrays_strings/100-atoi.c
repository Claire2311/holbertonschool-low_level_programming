#include <stdio.h>
#include <limits.h>

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
			negative++;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			if (value >= 0)
			{
				value = (value * 10) + (s[i] - '0');
			}
			else
			{
				value = (value * 10) - (s[i] - '0');
			}

			if (negative % 2 == 1)
			{
				value = -value;
				negative = 0;
			}
		}
		else
		{
			if (value > 0)
			{
				return value;
			}
		}
		i++;
	}

	return value;
}
