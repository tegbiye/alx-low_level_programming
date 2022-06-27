#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space
 *@str: char
 *
 * Return: retunrs pointer to duplicated or NULL
 */

char *_strdup(char *str)
{
char *target;
if (str == NULL)
	return (NULL);
target = strdup(str);
return (target);
}
