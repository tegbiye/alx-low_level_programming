#include "main.h"
#include <string.h>

/**
 * rev_string - a function that reverses a string.,
 *
 * @s: input character
 *
 * Return: None
 */

void rev_string(char *s)
{
char rev = s[0];
int c = 0;
int i, j;

for (i = 0; s[c] != '\0'; i++)
{
c++;
}
for (j = 0; j < c; j++)
{
c--;
rev = s[j];
s[j] = s[c];
s[c] = rev;
}

}
