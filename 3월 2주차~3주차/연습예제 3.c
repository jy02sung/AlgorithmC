#include <stdio.h>

int main()
{
	int a=0;
	int i;
	int b=0;
	float av;
	
back:
	scanf("%d",&i);
	
	while(i>=0 && i<=100)
	{
		a=a+i;		//����  �� 
		b=b+1;		//���� ���� 
		scanf("%d",&i);
	}
	
	if(b!=0)
	{
		av=a/b;
		printf("sum:%d\n",a);
		printf("avg:%.1f\n",av);
	}
	
	else
	{
		printf("0~100 ���� ������ �Է��Ͻÿ�.\n");
		goto back;
	}
}
