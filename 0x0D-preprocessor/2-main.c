#include <stdlib.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *filename = __FILE__;

	while (*filename != '\0')
	{
		_putchar(*filename);
		filename++;
	}
	_putchar('\n');

	return (0);
}

