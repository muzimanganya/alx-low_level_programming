#include "main.h"
/**
* clear_bit - sets the value 0
* @n: number
* @index: index
* Return: 1
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(index) * 8)
return (-1);
*n = ~(~(*n) | (1 << index));
return (1);
}
