#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: pointer to memory area 's'
 * @b: constant byte to fill
 * @n: number of bytes to fill
 * Return: pointer to memory area 's'
 */

char *_memset(char *s, char b, unsigned int n)
{
<<<<<<< HEAD:0x07-pointers_arrays_strings/0-memset.c
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b ;

	for ( ; i < n; i++)
		s[i] = '\0';


	return (s);
}

=======
unsigned int i;
>>>>>>> 7292072807229978c045939cc500c7aedc3816ee:0x07-pointers_arrays_strings/0-memeset.c

for (i = 0; i < n; i++)
s[i] = b;
return (s);
}
