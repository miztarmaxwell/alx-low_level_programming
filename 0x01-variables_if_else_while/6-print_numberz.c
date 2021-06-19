#include <stdio.h>

/**
 * main -> program that prints all single digit number of base 10
 * you are not allowed to use any variable of type char
 * you can only use the putchar function
 * Return: 0
 */

int main(void)
{
int n = 48;
while (n <= 57)
{
putchar (n);
n += 1;
}
printf ("\n");
return (0);
}
