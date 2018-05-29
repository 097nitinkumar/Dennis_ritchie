#include <stdio.h>
void main()
{
	char c=EOF;
	printf("%d %c\n",c,c);
	c=getchar()!=EOF;
	printf("%d %c\n",c,c);
	//putchar(1);//to check character equivalent of char(1)
}
