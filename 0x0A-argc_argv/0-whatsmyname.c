#include <stdio.h>

/**
 * main - Write program that prints its name,
 * followed by new line
 *@argc: number of arguments
 *@argv: array of strings
 * Return: 0 on Success
 */

int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
