#include<stdio.h>
/**
*main - print
*Return: return 0
*/
int main(void)
{
int i, j, k;
for (i = 0; i <= 9; i++)
{
for (j = i + 1; j <= 9; j++)
{
for (k = j + 1; k <= 9; k++)
{
if (i != j && i != k && j != k)
{
putchar(i + '0');
putchar(j + '0');
putchar(k + '0');
if (i != 8 || j != 9 || k != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
