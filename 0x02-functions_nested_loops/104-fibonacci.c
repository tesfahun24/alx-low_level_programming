#include <stdio.h>
int main()
{
int prev = 1;
int curr = 2;
int next = 0;
printf("%d, %d", prev, curr);
for (int i = 0; i < 96; i++)
{
next = prev + curr;
prev = curr;
curr = next;
printf(", %d", next);
}
printf("\n");
return (0);
}
