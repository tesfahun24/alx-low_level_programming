#include "main.h"
/**
* *_strncmp - a function that compares  a string.
* @s1: input one
* @s2: input two
* Return: Always 0.
*/
int _strncmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] < s2[i])
{
return (-1);
}
else if (s1[i] > s2[i])
{
return (1);
}
i++;
}
if (s1[i] == '\0' && s2[i] != '\0')
{
return (-1);
}
else if (s1[i] != '\0' && s2[i] == '\0')
{
return (1);
}
else
{
return (0);
}
}
