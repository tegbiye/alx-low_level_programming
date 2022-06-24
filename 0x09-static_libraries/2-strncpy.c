#include "main.h"
#include <string.h>

/**
 * char *_strncpy - a function that copies a string
 * @dest: dest char argument
 * @src:  src argument
 * @n: n argument limit
 * Return: char value
 */

char *_strncpy(char *dest, char *src, int n)
{
int i = 0, j = 0;
while (src[j])
{
j++;
}

while (i < n && src[i])
{
dest[i] = src[i];
i++;
}

while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);

}
