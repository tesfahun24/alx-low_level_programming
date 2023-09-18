#include "main.h"
/**
* puts_half - function that prints half of a string, followed by a new line.
* @str: declaration of n and paramters for the function
* Return: Always 0.
*/
void puts_half(char *str)
{
int length, half;
length = 0;
while (*(str + length) != '\0')
{
length++;
}
if (length % 2 == 0)
{
half = (length / 2);
}
else
{
half = (length - ((length - 1) / 2));
}
while (half < length)
{
_putchar(*(str + half));
half++;
}
_putchar('\n');
}
