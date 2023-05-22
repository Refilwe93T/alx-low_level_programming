#include <stdio.h>
#include <ctype.h>

/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
int lowerCase = 'a';
while (lowerCase <= 'z')
{
	putchar (lowerCase);
	lowerCase += 1;
}
putchar ('\n');

return (0);
}
