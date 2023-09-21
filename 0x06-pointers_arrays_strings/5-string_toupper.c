#include "main.h"
/**
* *string_toupper - a function that changes lowercase to uppercase.
* @s1: input one
* Return: string.
*/
char *string_toupper(char *s1)
{
int i = 0;
while (s1[i] != '\0')
{
if (s1[i] >= 'a' && s1[i] <= 'z')
{
s1[i] -= 32;
}
i++;
}
return (s1);
}
