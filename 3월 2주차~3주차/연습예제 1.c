#include <stdio.h>

int main()
{
	int a;
	
	printf("������ �Է��Ͻÿ�.\n");
	scanf("%d",&a);
	
	while(a>0||a<0)
	{
		if(a>0)
		{
			printf("positive integer\n");
			printf("������ �Է��Ͻÿ�.\n");
			scanf("%d",&a);
		}
		else if(a<0)
		{
			printf("negative number\n");
			printf("������ �Է��Ͻÿ�.\n");
			scanf("%d",&a);
		}
		else
		{
			return 0;
		}
	}
}
