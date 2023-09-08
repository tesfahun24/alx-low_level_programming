#include<stdio.h>
/**
*main-prints numbers
*Return: 0 exits main function
*/
int main(void)
{
int n = 0;
while (n < 10)
{
putchar(n + '0');
n++;
}
putchar('\n');
return (0);
}
