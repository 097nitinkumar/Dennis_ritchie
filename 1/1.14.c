#include <stdio.h>
#include <ctype.h>
#define MAX 20
void main()
{
	char c;
	int matrix[26]={0};
	int count=0;
	for(int i=0;(c=getchar())!='\n';)
	{
		if (c==' '||c=='\t')
		{
			continue;
		}
		matrix[c-'a']++;
	}
	for (int i=0;i<26;++i)
	{
		int p=matrix[i];
		char c;
		c=(char)('a'+i);
		printf("%c|",c);
		for (int j=0;j<p;++j)
		{
			printf("_");		
		}
		printf("|\n");
	}
}