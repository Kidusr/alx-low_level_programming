#include <stdio.h>

/**
* main - print the string in the put function
*Description: using the main funchtion
*this programming prints "size
* Return: 0
*/
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;
	printf("Size of char: %1d byte(s)\n", sizeof(c));
	printf("Size of an int: %1d byte(s)\n", sizeof(i));
	printf("Size of long int: %1d byte(s)\n", sizeof(li));
	printf("Size of long long int: %1d byte(s)\n", sizeof(lli));
	printf("Size of a float: %1d byte(s)\n", sizeof(f));
