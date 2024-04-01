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
 * *_strcpy - function that copy a string
 * @dest: char array destination
 * @src: char array source
 *
 */
char *_strcpy(char *dest, char *src)
{
	int size = _strlen(src);
	int i = 0;

	for (i = 0; i < size; i++)
	{
		dest[i] = src[i];
	}

	return dest;
}
