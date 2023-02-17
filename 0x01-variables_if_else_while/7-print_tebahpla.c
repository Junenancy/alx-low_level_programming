#include <stdio.h>

/**
 *main - Block of character
 *Return: always 0 success
 */

int main(void)
{
	char c = 'z';
for (c = 'z'; c >= 'a'; --c)
putchar(c);
putchar('\n');
return (0);
}
