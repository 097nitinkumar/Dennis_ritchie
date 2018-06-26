#include <stdio.h>
#include <ctype.h>
void main()
{
	char c;
	int a,b,d,count=0;
	for(int i=0;(c=getchar())!='\n';count++)
	{
		if(c==' '||c=='\t')
		{
			for (int j=0;j<count;++j)
			{
				printf("_");
			}
			printf("\n");
			for (int j=0;j<count;++j)
			{
				printf(" ");
			}
			printf("|\n");
			for (int j=0;j<count;++j)
			{
				printf(" ");
			}printf("|\n");
			for (int j=0;j<count;++j)
			{
				printf("_");
			}
			printf("|\n");
			count=0;
		}
	}
}