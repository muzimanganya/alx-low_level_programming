#include "main.h"
/**
* print_binary - prints the binary
* @n: number
*/
void print_binary(unsigned long int n)
{
unsigned long int a = n;
unsigned long int b = 1;
char c;
int d = 0;

if (n == 0)
_putchar('0');
while (b <= sizeof(n) * 8)
{
n = a;
c = (n >> (sizeof(n) * 8 - b) & 1) == 0 ? '0' : '1';
if (c == '1')
d = 1;
if (d == 1)
_putchar(c);
b++;
}
}
