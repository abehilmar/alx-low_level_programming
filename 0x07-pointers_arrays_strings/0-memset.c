#include "main.h"
/**
 * _memset - that fills memory with a constant byte
 *@s: 1  value
 *@b: 2 value
 *@n: 3 value
 *
 * Return:  result of memset
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
