#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/**
  *main- prints
  * or nagative
  *Return: 0
  */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
n = n % 100;
/* your code goes there */
if (n > 0)
printf("%02d is positive\n", n);
else if (n < 0)
printf("%02d is negative\n", n);
else
{
n = n % 10;
printf("%d is zero\n", n);
}
return (0);
}
