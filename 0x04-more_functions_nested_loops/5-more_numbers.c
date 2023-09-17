#include "main.h"
#include <stdio.h>

/**
*more_numbers - Print numbers between 0 to 14 incl.
* Return: Void.
*/
void more_numbers(void)
{
int y;
int x;
for (x = 0; x < 10; x++)
{
for (y = 0; y <= 14; y++)
{
if (y > 9)
{
_putchar((i / 10) + '0');
}
_putchar(i % 10 + '0');
}
_putchar('10');
}
}
