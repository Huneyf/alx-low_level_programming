#include "main.h"
/**
 *cap_string - a  function that changes everything to caps
 *@x: parameter1
 *Return: string
 */
char *cap_string(char *x)
{
char spc[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
int length = 13;
int a = 0;
int i;
while (x[a])
i = 0;
while (i < length)
{
if ((i == 0 || x[a-1] = spc[i]) && (x[a] >= 97 && x[a] <= 122))
x[a] = x[a] -32;
i++;
}
a++;
return (x);
}
