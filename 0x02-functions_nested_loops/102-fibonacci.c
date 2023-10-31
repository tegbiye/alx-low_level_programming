#include <stdio.h>
/**
  * main - prints the first 50 fibonacco numbers
  * starting with 1 and 2
  * Return: Always 0.
  */
int main(void)
{
unsigned long i, a0, a1, sum;
a0 = 0;
a1 = 1;

for (i = 0; i < 50; i++)
{
sum = a0 + a1;
a0 = a1;
a1 = sum;
printf("%lu", sum);
if (i == 49)
{
printf("\n");
}
else
{
printf(", ");
}
}
return (0);
}
