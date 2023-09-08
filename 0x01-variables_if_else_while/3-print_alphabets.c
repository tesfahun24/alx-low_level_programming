#include<stdio.h>
/**
*main- prints lower then upper case characters
*Return: 0 returns
*/
int main(void)
{
char ch = 'a';
for (; ch <= 'z'; ch++)
{
putchar(ch);
}
ch = 'A';
for (; ch <= 'Z'; ch++)
{
putchar(ch);
}
putchar('$');
return (0);
}
