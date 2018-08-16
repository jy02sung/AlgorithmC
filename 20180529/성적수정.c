#include <stdio.h>
int main()
{
	int n,r; //n명, r등 
	int i=0;
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
		if(p[i]>p[i+1]&&q[i]<q[i+1])
		{
			
		}
		else
		{
			
		}
	}
}
