#include "main.h"
/**
* reverse_array - a function that reverses an array of integers.
* @a: input one Array
* @n: input two represents number of array elements
* Return: Always 0.
*/
void reverse_array(int *a, int n)
{
int i = 0, j = n - 1, temp;
while (i < j)
{
temp = a[i];
a[i] = a[j];
a[j] = temp;
i++;
j--;
}
}
