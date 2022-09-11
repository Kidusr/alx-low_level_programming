#include <stdio.h>
/**
*main - print if the number is postive , zero or negative
*
*Description: using the main function
*this program prints "programming is postive ,zero or negative
*Return 0
*/
int main (void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("size of a char: %ld byte(s)\n", sizeof(c));
	printf("size of an int: %ld bytes(s)\n", sizeof(i));
	printf("size of long int: %ld bytes(s)\n", sizeof(li));
	printf("size of long long int: %ld bytes(s)\n", sizeof(lli));
	printf("size of a float: %ld bytes(s)\n", sizeof(f));
	return (0);
}
