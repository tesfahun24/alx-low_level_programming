#include <stdio.h>
/**
* main - entry point.
* Return: 0 if successful.
*/
int main(void)
{
unsigned long num1;
unsigned long num2;
num2 = 612852475143;
for (num1 = 3; num1 < num2; num1++)
{
if (num2 % num1 == 0)
num2 /= num1;
}
printf("%lu\n", num2);
return (0);
}
