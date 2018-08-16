#include <stdio.h>
#include <stdlib.h>
int main()
{
	int m,n;
	int i=0,j,k;
	int m1 = 0,max = 0;
	
	scanf("%d %d",&n,&m);
	while(m>n||m<2||n>1000)
	{
		printf("조건에 맞게 입력해주십시오.");
		scanf("%d %d",&n,&m);
	}
	
	int *p;
	p = (int*)malloc(sizeof(int)*n);
	while(i<n)
	{
		scanf("%d",&p[i]);
		i++;
	}
	for(k=0;k<n-m+1;k++)
	{
		for(j=0;j<m;j++)
		{
			m1 = m1 + p[k+j];
		}
		if(max<m1)
		{
			max = m1;
		}
		m1 = 0;
	}
	printf("%d",max);
}
