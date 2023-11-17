#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 *@argc: int
 *@argv: char
 *
 * Return: Always return 0
 */

int main(int argc, char *argv[])
{
int i, a, b;
int prod = 0;
if (argc != 3)
{
printf("Error\n");
return (1);
}
else if (argc == 3)
{
for (i = 0; i < argc; i++)
{
if (i == 1)
{
a = atoi(argv[i]);
}
else if (i == 2)
{
b = atoi(argv[i]);
}
}
prod = a *b;
printf("%d\n", prod);
}
return (0);
}
