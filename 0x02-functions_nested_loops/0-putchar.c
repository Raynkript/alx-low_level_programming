#include <unistd.h>

/**
 * _putchar - writes the characters to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (wrte(1, &c, 1));
}
