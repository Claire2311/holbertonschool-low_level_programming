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
