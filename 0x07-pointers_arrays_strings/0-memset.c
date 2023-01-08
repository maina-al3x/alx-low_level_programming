#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area
 * pointed to by @s with the constant byte @c
 * @s: a pointer to the memory area to be filled
 * @c: the char to fill the memory area
 * @n: the number of bytes to be filled
 *
 * Return:  pointer to the filled memeory area by @s
 */

void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
