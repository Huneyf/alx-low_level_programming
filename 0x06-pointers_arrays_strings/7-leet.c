#include "main.h"
/**
 * leet - a fuction that changes leet to numbers
 * @x: parameter1
 * Return: string
 */
char *leet(char *x)
{
int l = 5, a = 0, b;
char tr [5] = {'A', 'E', 'O', 'T', 'L'};
char trw [5] = {'4', '3', '0', '7', '1'};
while (x[a])
{
b = 0;
while (b < l)
{
if (x[a] == tr[b] || x[a] - 32 == tr[b])
x[a] = trw[b];
a++;
}
b++;
}
return (x);
}
