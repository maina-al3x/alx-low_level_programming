#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src
 *  including the terminating null byte (\0)
 *  to the buffer pointed to by dest.
 *  @dest: this is the destination
 *  @src: this is the source
 *  Return: returns copy
 */

char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
