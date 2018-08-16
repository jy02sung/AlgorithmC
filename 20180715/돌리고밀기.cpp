#include <stdio.h>
#include <stdlib.h>

int SpinAndSlide(int n, char **map, int m)
{
	int i, j;
	int k = 0;
	char **map2 = (char**)malloc(sizeof(char)*n*n);
	for(i=0;i<n;i++)
	{
		map2[i] = (char*)malloc(sizeof(char)*n);
	}
	
	
	while(k<m)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				map2[j][n-i-1] = map[i][j];
			}
		}
		
		for(i=n-1;i>0;i--)
		{
			for(j=0;j<n;j++)
			{
				while(map2[i][j]=='.')
				{
					map2[i][j] = map2[i-1][j];
					map2[i-1][j] = '.';
				}
			}
		}
		k++;
	}
	
	for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%c", map2[i][j]);
			}
			printf("\n");
		}
		
}

int main()
{
	int i,j;
	int n,m;
	scanf("%d",&n);
	scanf("%d",&m);
	char **map = (char**)malloc(sizeof(char)*n*n);
	for(i=0;i<n;i++)
	{
		map[i] = (char*)malloc(sizeof(char)*n);
	}
	
	for(i=0;i<n;i++)
	{
		fflush(stdin);
		for(j=0;j<n;j++)
		{
			scanf("%c",&map[i][j]);
		}
	}
		
	SpinAndSlide(n,map,m);
}
