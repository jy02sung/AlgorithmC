#include <stdio.h>

int main()
{
	int i,j;
	int a,b;		//a단에서 b단까지 
	char c;

	do
	{
		printf("첫번째 숫자를 입력하시오 : ");
		scanf("%d",&a);
		printf("두번째 숫자를 입력하시오 : ");
		scanf("%d",&b);
	
		printf("%d에서 %d단까지!\n",a,b);
		
		if(a<b)
		{
			for(j=1;j<10;j++)
			{
				for(i=a;i<=b;i++)
				{
					printf("%d * %d = %2d   ",i,j,(i*j));
				}
				printf("\n");
			}
		}
		else if(a>b)
		{
			for(j=1;j<10;j++)
			{
				for(i=a;i>=b;i--)
				{
					printf("%d * %d = %2d   ",i,j,(i*j));
				}
				printf("\n");
			}
		}
		else
		{
			printf("서로 다른 수를 입력하시오.\n");
		}
		
		printf("Continue? Y/N\n");
		scanf("%s",&c);
		
		if(c=='y' || c=='Y' || c=='n' || c=='N')
		{
			if(c=='n' || c=='N')
			{
				break;				
			}
		}
		else
		{
			printf("Y 또는 N을 입력하시오.\n");
			scanf("%s",&c);
		}
	} while(c=='y' || c=='Y');
}
