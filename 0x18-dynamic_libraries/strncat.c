#include "main.h"
#include <string.h>

/**
 * char *_strncat - a function that concatenates two strings.c
 * @dest: dest char argument
 * @src:  src argument
 * @n: length argument
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
int len = 0, i = 0;
while (dest[len])
{
len++;
}

for (; src[i] != '\0' && i < n; i++)
{
dest[len] = src[i];
len++;
}
dest[len + n + 1] = '\n';

return (dest);
}
