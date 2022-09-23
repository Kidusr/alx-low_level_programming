#include "main.h"

/**
 *  _strcmp - compares pointersof two strings.
 *  @s1: A pointer to the first string to be compared
 *  @s2: A pointer to the second string to be compared.
 *
 *  Return: If str1 < str2 , the negative differance of the first unmatched char
 *  	    If str1 == str2, 0
 *  	    IF str1 > str2, the postive difference of the first unmatched char
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);

}
