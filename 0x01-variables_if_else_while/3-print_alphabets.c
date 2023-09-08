#include<stdio.h>
/**
*main- prints lower then upper case characters
*Return: 0
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
putchar('\n');
return (0);
}
