#include<stdio.h>
/**
*main- prints lower case characters
*Return: 0
*/
int main(void)
{
char ch = 'a';
for (; ch <= 'z'; ch++)
{
putchar(ch);
putchar('\n');
}
return (0);
}
