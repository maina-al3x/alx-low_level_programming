#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints single charatcer to standard output
 * @c: Character to print
 *
 * Reutrn: on success 1
 * on error, -1 is returned and errno is set accordingly
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
