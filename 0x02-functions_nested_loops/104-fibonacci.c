#include <stdio.h>
/**
  * main - prints the first 98 fibonacco numbers
  * starting with 1 and 2
  * Return: Always 0.
  */
int main(void)
{
int i;
unsigned long a0, a1, sum, m, n, p, q;
a0 = 0;
a1 = 1;
i = 0;

for (i = 1; i <= 91; i++)
{
sum = a0 + a1;
a0 = a1;
a1 = sum;
printf("%lu, ", sum);
}
m = a0 % 1000;
a0 = a0 / 1000;
n = a1 % 1000;
a1 = a1 / 1000;
while (i <= 98)
{
q = (m + n) / 1000;
p = (m + n) -q * 1000;
sum = (a0 + a1) +q;
m = n;
n = p;
a0 = a1;
a1 = sum;
if (p >= 100)
	printf("%lu%lu", sum, p);
else
	printf("%lu0%lu", sum, p);
if (i != 98)
	printf(", ");
i = i + 1;
}
printf("\n");
return (0);
}
