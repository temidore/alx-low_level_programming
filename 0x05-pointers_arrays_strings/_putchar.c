#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to 0x05. C - Pointers, arrays and strings
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
