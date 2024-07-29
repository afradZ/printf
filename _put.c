#include "main.h"

/**
 * _puts -prints a string with newline
 * @str: string to print
 *
 * Return: void
 */
int _puts(char *str)
{
	char *a = str;

	while (*str)
		_putchar(*str++);
	return (str -a);
}

/**
 * _putchar - writes character c to stdout
 * @c: char to print
 *
 * Return: 1 (success)
 * on error, -1 is returned and errno is set
 */
int_putchar(int c)
{
	static int i;
	static char buf[OUTPUT_BUF_SIZE];

	if (c == BUF_FLUSH || i >= OUTPUT_BUF_SIZE)
	{
		write(1, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}
