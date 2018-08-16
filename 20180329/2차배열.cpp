#include <stdio.h>
int main()
{
	int A[5][5];
	int i,j;
	int n=1;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			A[j][i]=n;
			n++;
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%3d",A[i][j]);
		}
		printf("\n");
	}
	return 0;
}
