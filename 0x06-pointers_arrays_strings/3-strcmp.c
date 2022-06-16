#include "main.h"
#include <string.h>

/**
 * _strcmp - a function that compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
int i = 0, j = 0, k = 0, m = 0, lim;
while (s1[i] && s2[j])
{
i++;
j++;
}

if (i <= j)
{
lim = i;
}
else
{
lim = j;
}

while (k <= lim)
{
if (s1[k] == s2[k])
{
k++;
continue;
}
else
{
m = s1[k] - s2[k];
break;
}
k++;
}
return (m);
}
