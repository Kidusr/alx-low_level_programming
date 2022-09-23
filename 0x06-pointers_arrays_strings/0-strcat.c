#include "main.h"

/**
 * strcat - concatenates the string pointed to by @src, including the terminae
 *      null byte, to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be incatenated upon.
 * @src: the source string to br sppended to @dest.
 *
 * Return: A pointer to the distination string @dest.
 */
char *_strcat(char *dest, char *src)

{

	int dlen = 0, i;



	while (dest[dlen])

	{

		dlen++;

									}



	for (i = 0; src[i] != 0; i++)

	{
	
		dest[dlen] = src[i];
	
		dlen++;

	}



	dest[dlen] = '\0';

	return (dest);

}
