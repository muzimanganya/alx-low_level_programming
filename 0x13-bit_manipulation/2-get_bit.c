#include "main.h"
/**
* get_bit - bit
* @n: number
* @index: index
* Return: return
*/
int get_bit(unsigned long int n, unsigned int index)
{
int a;

if (index >= sizeof(index) * 8)
return (-1);
a = (n >> index & 1) == 0 ? 0 : 1;
return (a);
}
