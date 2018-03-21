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
		a=a+i;		//수의  합 
		b=b+1;		//수의 개수 
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
		printf("0~100 사이 정수를 입력하시오.\n");
		goto back;
	}
}
