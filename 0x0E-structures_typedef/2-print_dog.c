#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints a struct dog
 * @d: dog's details
 *
 * Return: Nothing
 */



void print_dog(struct dog *d)
{
if (d)
{
printf("Name: %s\nAge: %6f\nOwner: %s\n", d->name, d->age, d->owner);

}
}
