#include <stdio.h>
/**
  * main - prints the first 50 fibonacco numbers
  * starting with 1 and 2
  * Return: Always 0.
  */
int main(void)
{
unsigned long i, a0, a1, k;
unsigned long sum;
a0 = 0;
a1 = 1;
sum = 0;

for (i = 0; i < 50; i++)
{
k = a0 + a1;
a0 = a1;
a1 = k;
if (k % 2 == 0 && k < 4000000)
{
sum += k;
}
}
printf("%lu\n", sum);
return (0);
}
