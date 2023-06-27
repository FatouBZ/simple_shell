#include "shell.h"
/**
 * check_delim - Checks If A Character Match Any Char *
 * @c: Character To Check
 * @str: String To Check
 * Return: 1 Succes, 0 Failed
 */
unsigned int check_delim(char c, const char *str)
{
unsigned int x;
for (x = 0; str[x] != '\0'; x++)
{
if (c == str[x])
return (1);
}
return (0);
}

/**
 * _strtok - Token A String Into Token (strtrok)
 * @str: String
 * @delim: Delimiter
 * Return: Pointer To The Next Token Or NULL
 */
char *_strtok(char *str, const char *delim)
{
static char *ts;
static char *nt;
unsigned int x;
if (str != NULL)
nt = str;
ts = nt;
if (ts == NULL)
return (NULL);
for (x = 0; ts[x] != '\0'; x++)
{
if (check_delim(ts[x], delim) == 0)
break;
}
if (nt[x] == '\0' || nt[x] == '#')
{
nt = NULL;
return (NULL);
}
ts = nt + x;
nt = ts;
for (x = 0; nt[x] != '\0'; x++)
{
if (check_delim(nt[x], delim) == 1)
break;
}
if (nt[x] == '\0')
nt = NULL;
else
{
nt[x] = '\0';
nt = nt + x + 1;
if (*nt == '\0')
nt = NULL;
}
return (ts);
}
