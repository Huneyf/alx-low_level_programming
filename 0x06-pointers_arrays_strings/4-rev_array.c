#include "main.h"
#include <string.h>
/**
 * reverse_array - is a function tha reverse array order
 * @a: array
 * @n: element of array a
 */
void reverse_array(int *a, int n)
{
int *p, aux, i, k;
p = a;
for (i = 0; i < n; i++)
p++;
for (k = 0; k < i / 2; k++)
{
aux = a[k];
a[k] = *p;
*p = aux;
p--;
}
}
