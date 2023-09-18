#include "main.h"
#include <stdio.h>

/**
* _abs- check the absolute value
*@a: Number to be checked
* Return: Always positive.
*/
int _abs(int a)
{
if (a >= 0)
{
return (a);
}
else
{
a = a * ((2 * a + 1) % 2);
return (a);
}
}
