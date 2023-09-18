#include<main.h>
/**
*print_alphabet_x10  - print lowercase letters 10 times
*
*Return : Always 0.
*/
void print_alphabet_x10(void)
{
for (int i = 0; i < 10; i++)
{
for (char ch = 'a'; ch <= 'z'; ch++)
{
_putchar('%c', ch);
}
_puchar('\n');
}
}
