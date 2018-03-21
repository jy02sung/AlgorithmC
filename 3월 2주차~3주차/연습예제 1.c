#include <stdio.h>

int main()
{
	int a;
	
	printf("정수를 입력하시오.\n");
	scanf("%d",&a);
	
	while(a>0||a<0)
	{
		if(a>0)
		{
			printf("positive integer\n");
			printf("정수를 입력하시오.\n");
			scanf("%d",&a);
		}
		else if(a<0)
		{
			printf("negative number\n");
			printf("정수를 입력하시오.\n");
			scanf("%d",&a);
		}
		else
		{
			return 0;
		}
	}
}
