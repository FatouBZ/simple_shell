#include "shell.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
/**
 * _strncpy - copie a string
 * @dest:char
 *  @src:char
 * @n:int
 * Return:char
 */

char *_strncpy(char *dest, char *src, int n)
{
int x;
x = 0;
while (x < n && *(src + x))
{
*(dest + x) = *(src + x);
x++;
}
while (x < n)
{
*(dest + x) = '\0';
x++;
}
return (dest);
}
/**
 * _strlen - lenght of string
 * @s:char
 * Return:int
 */

int _strlen(char *s)
{
int x;
for (x = 0; s[x] != '\0'; x++)
{
continue;
}
return (x);
}
/**
 * _atoi - convert to a int
 * @s:string
 * Return:int
 */
int _atoi(char *s)
{
int a, b, n, x;
a = n = 0;
x = 1;
while ((s[a] < '0' || s[a] > '9') && (s[a] != '\0'))
{
if (s[a] == '-')
x *= -1;
a++;
}
b = a;
while ((s[b] >= '0') && (s[b] <= '9'))
{
n = (n * 10) + x * ((s[b]) - '0');
b++;
}
return (n);
}
/**
 * _puts - print a string
 * @str:pointer char
 * return:void
 */
void _puts(char *str)
{
int x;
for (x = 0; str[x] != '\0'; x++)
{
_putchar(str[x]);
}
_putchar('\n');
return;
}
