#include <stdio.h>
void main()
{
	FILE *fp = fopen("test.txt", "r+");
	int nl=0,bl=0,ts=0;
	char c;
	for (;(c = getc(fp))!=EOF;)
	{
		switch(c)
		{
			case ' ' : 	bl++;
						break;
			case '\t' : ts++;
						break;
			case '\n' : nl++;
						break; 
		}
	}
	printf("Blank space:%d Tab space:%d Newline:%d \n",bl,ts,nl);

}
