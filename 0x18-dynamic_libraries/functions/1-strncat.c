#include "main.h"
/**
 * *_strncat - concatenates n bytes of two strings
 * @dest: pointer destination
 * @src: pointer source
 * @n: number of bytes
 * Return: void
*/

char *_strncat(char *dest, char *src, int n)
{

int i, j;
for (i = 0; dest[i] != '\0'; i++)
;

for (j = 0; src[j] != '\0' && n > 0;j++, n--, i++)
	dest[i] = src[j];

return (dest);
}
