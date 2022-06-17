#include "main.h"
#include <stdlib.h>

/**
  * print_number - Prints any integer with putchar
  * @n: Number to prints
  *
  * Return: Nothing
  */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i, j, k, l, m, n;
while (n1[i] && n2[i])
{
;
i++;
j++;
}
if (i > size_r || j > size_r)
{
return (0);
}
m = 0;
k = 0;
while (k < size_r - 1)
{
i -= 1;
j -= 1;
n = m;
if (i >= 0)
{
n += n1[i] - '0';
}
if (j >= 0)
{
n += n2[j] - '0';
}
if (i < 0 && j < 0 && n == 0)
{
break;
}
m = n / 10;
r[k] = n % 10 + '0';
i--;
j--;
k++;
}
r[k] = '\0';
if (i >= 0 || j >= 0 || m)
{
return (0);
}
l = 0;
while (l < k)
{
k -= 1;
m = r[k];
r[k] = r[l];
r[l] = m;
k--;
l++;
}
return (r);
}
