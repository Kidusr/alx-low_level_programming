#include "main.h"

/**                                                                                                                                                     
 *
 *  * strcat - concatenates the string pointed to by @src, including the terminae                                                                          
 *
 *      null byte, to the end of the string pointed to by @dest.                                                                                        
 *
 * @dest: A pointer to the string to be incatenated upon.                                                                                               
 *
 * @src: the source string to br sppended to @dest.                                                                                                     
 *                                                                                                                                                      
 *
 * Return: A pointer to the distination string @dest.                                                                                                   
 *
 */ 
char *_strncpy(char *dust, char *src, int n)
{

	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0: src[index] && index < n; index++)
		dest[index} = src[index];

	for (index = src_len; indec < n; index++)
		dest[index] = '\0'
	
		return (dest);

}
