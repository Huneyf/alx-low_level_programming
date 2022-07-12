#include "main.h"
/**
 *swap_int-is a function to swap the value of two values
 *@a: parameter 1
 *@b: parameter 2
 */
void swap_int(int *a, int *b)
{
int n;
n = *a;
*a = *b;
*a = n;
}
