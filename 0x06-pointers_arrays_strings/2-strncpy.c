#include "main.h"
#include <string.h>

/**
 * char *_strncpy - a function that copies a string
 * @dest: dest char argument
 * @src:  src argument
 * @n: n argument
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
int len = 0,i = 0;
while (src[i])
{
i++;
}
while (src[len] && len < n)
{
dest[len] = src[len];
len++;
}
while (len < n)
{
dest[len] = '\0';
len++;
}

return (dest);
}
