#include <stdio.h>

/**
 * main - Entry point
 *
 * program that prints all possible different combinations of two two digits
 * in ascending order separated by ,, followed by a space
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int digit1, digit2;
for (digit1 = 48; digit1 <= 57; digit1++)
{
for (digit2 = 49; digit2 <= 57; digit2++)
{
putchar(digit1);
putchar(digit2);
if(digit1 != 57 || n != 57)
putchar(44);
putchar(32);
}
}
return (0);
}
