#include <stdio.h>
void main()
{
	FILE *fip = fopen("input.txt", "r+");
	FILE *fop = fopen("output.txt", "r+");
	int found=0;
	char c;
	for (;(c = getc(fip))!=EOF;)
	{
		if(c=='\b')
		{
			c='\\';
			putc(c,fop);
		}
		else if(c=='\t')
		{
			c='\b';
			putc(c,fop);
		}
		else 
		{
			putc(c,fop);
		}
	}

}
