#include <stdio.h>
#include <stdlib.h>

int blackjack(int bj, int *list)
{
	int i, j, k;
	int n;
	int sub, sum;
	int max;
	sub = bj;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{
				if(i!=j && j!=k && k!=i)
				{
					sum = list[i]+list[j]+list[k];
					if(abs(sum-bj)<sub)
					{
						sub = abs(sum-bj);
						max = sum; 
					}
				}
			}
		}
	}
	return max;
}

int main()
{
	int n;
	int i, j;
	int bj;
	int *list = (int*)malloc(sizeof(int)*n);
	scanf("%d %d", &n, &bj);
	for(i=0;i<n;i++)
	{
		scanf("%d", &list[i]);
	}
	
	printf("%d", blackjack(bj,list));
}
