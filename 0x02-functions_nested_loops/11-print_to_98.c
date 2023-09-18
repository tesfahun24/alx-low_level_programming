#include "main.h"
#include <stdio.h>
/**
* print_to_98 - Entry point.
*
* @x: The integer
* Description: prints all natural numbers from n to 98, followed by a new line
* Return: int
*/
void print_to_98(int x)
{
while (x != 98)
{
printf("%i, ", x);
if (x > 98)
{
x--;
}
else
{
x++;
}
}
printf("98\n");
}
