#include "main.h"
#include<string.h>
/**
* *leet - a function that encodes string.
* @s: input one
* Return: string.
*/
char *leet(char *s)
{
int i, j;
char r[] = "aAeEoOtTlL";
char l[] = "43071";
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; r[j] != '\0'; j++)
{
if (s[i] == r[j])
{
s[i] = l[j / 2];
}
}
}
return (s);
}

