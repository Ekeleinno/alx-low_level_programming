#include "main.h"
/**
 * _isalpha - checks for alphabet characters
 *
 * @c:  the variable
 *
 * Return: 1 if true, 0 if false
 *
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
		return (0);
}
