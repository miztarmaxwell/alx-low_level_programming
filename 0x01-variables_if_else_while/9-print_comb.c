#include <stdio.h>

/**
 * main -> program that prints all posible combinations of a single-digit
 * Numbers must be seperated by , followed by a space
 * Number should be printed in ascending order
 * You can only use the putchar function
 * Return: 0
 */

int main(void)
{
int n = 48;
int com = 44;
while (n <= 57)
{
putchar(n);
if (n != 57)
{
putchar(com);
putchar(32);
}
n++;
}
putchar('\n');
return (0);
}
