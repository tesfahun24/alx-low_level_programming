#include<stdio.h>
/**
*main - Prints the alphabet in reverse, followed by a new line.
* Return: Always 0 (Success)
*/
int main(void)
{
int n = 0;
while (n < 10)
{
putchar(n + '0');
putchar(',');
putchar(' ');
n++;
}
putchar('\n');
return (0);
}
