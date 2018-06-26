#include <stdio.h>
#include <ctype.h>
#define MAX 20
void main()
{
	char c;
	int matrix[MAX][MAX]={0};
	int a,b,d,count=0,wcount=0;
	for(int i=0;(c=getchar())!='\n';count++)
	{
		if(c==' '||c=='\t')
		{
			int i=0;
			for (;i<count;++i)
			{
				matrix[wcount][i]=1;				
			}
			matrix[i][wcount]=2;
			count=0;
			wcount++;
		}
	}
	for (int i=0;i<MAX;++i)
	{
		for (int j=0;j<MAX;++j)
		{
			if(matrix[i][j]==1)	
			printf("|");
			else if(matrix[i][j]==0)
			{
				j++;
			}	
			else if(matrix[i][j]==2)	
			printf("\n");		
		}
	}
}