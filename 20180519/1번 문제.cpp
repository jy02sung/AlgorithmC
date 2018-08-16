#include <stdio.h>
int main()
{
	int m,n;
	int a[n];
	int i;
	
	scanf("%d %d",&n,&m);
	while(m>n||m<2||n>1000)
	{
		printf("조건에 맞게 입력해주십시오.");
		scanf("%d %d",&n,&m);
	}
	for(i=0,i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
