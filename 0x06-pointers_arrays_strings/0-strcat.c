#include "main.h"
/**
* char *_strcat - a function that concatenates two strings.
* @dest: input one
* @src: input two
* Return: char back to main.c
*/
char *_strcat(char *dest, char *src)
{
int dest_len = 0, i = 0;
while (dest[dest_len] != '\0')
{
dest_len++;
}
while (src[i] != '\0')
{
dest[dest_len] = src[i];
i++;
dest_len++;
}
return (char *)dest;
}
