#include<stdio.h>
#include<string.h>
/**
*infinite_add - print
*@n1: number
*@n2:  number
*@r: number
*@size_r: number
*Return: return 0
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
/* Check if the result can be stored in the buffer.*/
if (strlen(n1) + strlen(n2) + 1 > size_r)
{
return (0);
}
/* Initialize the carry.*/
/* Iterate over the numbers, adding the digits and carrying over any excess.*/
int carry = 0; i = strlen(n1) - 1, j = strlen(n2) - 1,  k = size_r - 1;
while (i >= 0 || j >= 0 || carry > 0)
{
int sum = (i >= 0 ? n1[i] - '0' : 0) + (j >= 0 ? n2[j] - '0' : 0) + carry;
r[k--] = sum % 10 + '0';
carry = sum / 10;
i--;
j--;
}
/* Reverse the result string.*/
for (i = 0, j = size_r - 1; i < j; i++, j--)
{
char temp = r[i];
r[i] = r[j];
r[j] = temp;
}
/* Return a pointer to the result.*/
return (r);
}
