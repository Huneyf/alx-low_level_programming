#include "main.h"
/**
 * string_toupper - a function that changes lower case to upper case
 * @x: parameter1
 * Return: string
 */
char *string_toupper(char *x)
{
int i = 0;
while (x[i])
{
if (s[i] >= 97 && x[i] <= 122)
x[i] = x[i] - 32;
i++;
}
return (x);
}
