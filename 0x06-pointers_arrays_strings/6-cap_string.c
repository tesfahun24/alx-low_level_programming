#include "main.h"
/**
* *cap_string - a function that changes lowercase to uppercase.
* @s1: input one
* Return: string.
*/
char *cap_string(char *s1)
{
char *s = s1;
int  cap = 1;
while (*s)
{
if (*s == ' ' || *s == '\t' || *s == '\n'
	|| *s == ',' || *s == ';' || *s == '.' || *s == '!' || *s == '?'
	|| *s == '"' || *s == '(' || *s == ')' || *s == '{' || *s == '}')
{
cap = 1;
}
else if (cap)
{
if (*s >= 'a' && *s <= 'z')
{
*s -= 32;
}
cap = 0;
}
s++;
}
return (s1);
}
