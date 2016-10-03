#include <stdio.h>

int main(void)
{
	printf("%f %s\n", 123456.789, "\t%");
	printf("%", 123456.789, "\t%");
	printf("%", 123456.789, "\t%");
	printf("%", 123456.789, "\t%");


	return 0;
}