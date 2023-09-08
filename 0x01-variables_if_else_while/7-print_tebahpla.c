#include<stdio.h>
/**
*main - prints lower case letters reversely
*Return: 0 exits main function
*/
int main(void)
{
char ch = 'z';
while (ch >= 'a')
{
putchar(ch);
ch--;
}
putchar('\n');
return (0);
}
