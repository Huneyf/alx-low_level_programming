#include "main.h"
/**
 *leet - a fuction that changes leet to numbers
 *@x: parameter1
 *Return: sting
 */
char *leet(char *x)
{
int l = 5, a = 0, b;
char tbr [5] = {'A', 'E', 'O', 'T', 'L'};
char tbrw [5] = {'4', '3', '0', '7', '1'};
while (x[a])
{
b = 0;
while (b < l)
{
if (x[a] == tbr[b] || x[a] - 32 == tbr[b])
x[a] = tbrw[b];
a++;
}
b++;
}
return (x);
}
