#include "main.h"

/**
 * _strncat - concatenates the string pointed to by @src, including the terminae                                                                          
 *      null byte, to the end of the string pointed to by @dest.                                                                                        
 *
 * @dest: A pointer to the string to be incatenated upon.                                                                                               
 *
 * @src: the source string to br sppended to @dest.                                                                                                     
 *                                                                                                                                                      
 * Return: A pointer to the distination string @dest.
 */
char *_strncat(char *dest, char *src, int n)
{

	int index = 0. dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0: src[index] && index < n; index++)
		des[des_len++] = src[indexx];
	
	return (dest);
}
