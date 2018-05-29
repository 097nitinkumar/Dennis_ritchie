#include <stdio.h>
void main()
{
	FILE *fip = fopen("input.txt", "r+");
	FILE *fop = fopen("output.txt", "r+");
	int found=0;
	char c;
	for (;(c = getc(fip))!=EOF;)
	{
		if(found&&(c==' '||c=='\n'||c=='\t'))
		{
			continue;
		}
		else if((!found)&&(c==' '||c=='\n'||c=='\t'))
		{
			putc('\n',fop);
			found=1;
		}
		else 
		{
			putc(c,fop);
			found=0;
		}
	}

}
