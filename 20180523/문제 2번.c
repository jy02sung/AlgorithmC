#include <stdio.h>
int main()
{
	int n,r; //n��, r�� 
	int i=0;
	scanf("%d",&n);
	
	int *p = (int*)malloc(sizeof(int)*n);
	int *q = (int*)malloc(sizeof(int)*n);
	while(i<n)
	{
		scanf("%d",&p[i]);
		i++;
	}
	i=0; //i �ٽ� ����� �ʱ�ȭ 
	while(i<n)
	{
		scanf("%d",&q[i]);
		i++;
	}
}
