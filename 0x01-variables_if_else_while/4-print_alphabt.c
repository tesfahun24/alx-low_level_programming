#include<stdio.h>
/**
* main-prints lower case except q and e
*Return: 0 exits main function
*/
int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
if (ch == 'e' || ch == 'q')
{
ch++;
}
else
{
putchar(ch);
ch++;
}
}
putchar('\n');
return (0);
}

