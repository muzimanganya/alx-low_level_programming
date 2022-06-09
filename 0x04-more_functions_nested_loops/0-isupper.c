#include "main.h"

/**
  * _isupper - Check if a character or a letter is upper
  * n: The number correspond with a letter to be checked
  * Return: 1 for upper character or letter or 0 for other else
  */
int _isupper(int n)
{
	if (n >= 65 && n <= 90)
	{
		return (1);
	}

	return (0);
}

