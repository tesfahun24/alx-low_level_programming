#include "main.h"
/**
** _strncat -  function that concatenates two strings.
* @dest: -  The string
* @src: - The string
* @n: - The integer
* Return:  concatenated string
*/
char *_strncat(char *dest, char *src, int n)
{
int dest_len = 0, i = 0;
while (dest[dest_len] != '\0')
{
dest_len++;
}
while (i < n && src[i] != '\0')
{
*(dest + dest_len) = *(src + i);
dest_len++;
i++;
}
return (dest);
}
