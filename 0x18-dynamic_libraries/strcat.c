#include "main.h"
#include <string.h>

/**
 * char *_strcat - a function that concatenates two strings.c
 * @dest: dest char argument
 * @src:  src argument
 * Return: string
 */

char *_strcat(char *dest, char *src)
{
int len = 0, i;
while (dest[len])
{
len++;
}
for (i = 0; src[i] != 0; i++)
{
dest[len] = src[i];
len++;
}
return (dest);
}
