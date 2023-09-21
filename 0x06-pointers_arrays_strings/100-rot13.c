#include "main.h"
/**
* *rot13 - a function that prints an integers.
* @s: input one
* Return: string.
*/
char *rot13(char *s)
{
int  i, j;
char l[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
char c[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char _s;
for (i = 0; s[i] != '\0'; i++)
{
_s = 0;
for (j = 0; c[j] != 0 && _s == 0; j++)
{
if (s[i] == c[j])
{
s[i] = l[j];
_s == 1;
}
}
}
return (s);
}
