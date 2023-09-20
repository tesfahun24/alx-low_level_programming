#include<main.h>
/**
* char *_strcat - a function that concatenates two strings.
* @dest: input one
* @src: input two
* Return: char back to main.c
*/
char *_strcat(char *dest, char *src)
{
int dest_len = 0;
while (dest[dest_len] != '\0')
{
dest_len++;
}
int i = 0;
while (str[i] != '\0')
{
dest[dest_len + i] = str[i];
i++;
}
dest[dest_len + i] = '\0';
return (dest[dest_len + i]);
}
