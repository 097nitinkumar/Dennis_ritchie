#include <stdio.h>
void main()
{
	printf("hello, world \a");
	printf("hello, world \b\b\b\b\b\b");
	//printf("hello, world \$");//compiler dependent error in gcc
	printf("hello, world \7");
}
