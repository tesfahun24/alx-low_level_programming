#include<stdio.h>
/**
*main - Entry
*Description: prints the hexadecimal
*Return: Always O
*/
int main(void)
{
int n = 0;
while (n < 16)
{
int digit = n % 16;
putchar(digit < 10 ? digit + '0' : digit - 10 + 'a');
n++;
}
putchar('\n');
return (0);
}
