#include "main.h"
/**
 *_islower - return 1 if only if the char is lower case
 *@c: The character in ASCII code
 *Return: sucess
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
