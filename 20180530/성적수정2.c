#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,r; //n명, r등 
	int i=0,j;
	int num, max, min;
	scanf("%d",&n);
	
	int *p = (int*)malloc(sizeof(int)*n);
	int *q = (int*)malloc(sizeof(int)*n);
	while(i<n)
	{
		scanf("%d",&p[i]); //p점  
		i++;
	}
	i=0; //i 다시 쓸라고 초기화 
	while(i<n)
	{
		scanf("%d",&q[i]); //q등  
		i++;
	}
	
	for(i=0;i<n;i++)
	{
		if(p[i]>=p[i+1]&&q[i]>=q[i+1])
		{
			num = i+1;
			break;
		}
	}
	
	for(i=0;i<5;i++)
	{
		if(q[num-1]-q[i] == 1)
		{
			max = p[i];
		}
		else if(q[num-1]-q[i] == -1)
		{
			min = p[i];
		}
		else if(q[num-1]-q[i] == 0)
		{
			min = p[i];
			max = p[i];
		}
	}
	
	printf("%d\n",num);
	printf("%d %d",min,max);
}
