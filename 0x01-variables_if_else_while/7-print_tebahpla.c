#include<stdio.h>
/**
*main- prints lower case reversely
*return: 0 exits main
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
