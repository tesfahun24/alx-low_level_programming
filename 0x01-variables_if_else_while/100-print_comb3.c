#include<stdio.h>
/**
*main - printing
*Return: Always )
*/
int main(void)
{
int a, j, k;
a = 0;
while (a <= 100)
{
j = a % 10;
k = a / 10;
if (k < j)
{
putchar(k + '0');
putchar(j + '0');
if (a < 89)
{
putchar(',');
putchar(' ');
}
}
a++;
}
putchar('\n');
return (0);
}
