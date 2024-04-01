# include "_putchar.h"
/**
 * print_rev - function that returns the length of a string
 * @s: string we want to reverse
 *
 * Return: integer with the number of char
 */

void print_rev(char *s)

int x = 0;

while (*s != '\0')
{
x++;
s++;
}

x = _strlen( *s);

while (x >= 0)
{
_putchar(s[x]);
x--;
}

_putchar('\n');

}
