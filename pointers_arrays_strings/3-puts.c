# include "_putchar.h"
/**
 * _puts - prints a string, followed by a new line
 * @str: string we want to print
 *
 * Return: a string followed by a new line
 */

void _puts(char *str)
{
int x = 0;

while (str[x] != '\0')
{
_putchar(str[x]);
x++;
}

_putchar('\n');

}
