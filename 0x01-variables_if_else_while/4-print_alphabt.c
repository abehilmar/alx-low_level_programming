#include <stdio.h>
/**
 *main - functin goes here
 *Description : print alpapets
 *Return: Always 0
 */
int main(void)
{
	int init = 97;

	while (init <= 122)
	{
		if (init != 101 || init != 113)
		{
			putchar (init);
		}
	init++;
	}
	putchar ('\n');
	return (0);
}
