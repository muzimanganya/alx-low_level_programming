#include "main.h"
/**
* flip_bits - bits to flip
* @n: number
* @m: number
* Return: bit
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int a;
unsigned long int b = 0;

a = (n ^ m);
while (a)
{
if (a & 1)
b++;
a >>= 1;
}
return (b);
}
