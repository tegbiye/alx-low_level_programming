#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 *@argc: int
 *@argv: char
 *
 * Return: Always return 0
 */

int main(int argc, char *argv[])
{
int i;
int count = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}
i = atoi(argv[1]);
if (i < 0)
	printf("0\n");
else
{
while (i != 0)
{
if (i % 10 == 9 || i % 10 == 7)
	i = i - 2;
else if (i % 25 == 0)
	i = i - 25;
else if (i % 10 == 0)
	i = i - 10;
else if (i % 5 == 0)
	i = i - 5;
else if (i % 2 == 0)
{
if (i % 10 == 6)
	i = i - 1;
else
	i = i - 2;
}
else
	i = i - 1;
++count;
}
printf("%d\n", count);
}
return (0);

}
