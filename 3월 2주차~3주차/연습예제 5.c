#include <stdio.h>

int main()
{
	int i,j;
	int a,b;		//a�ܿ��� b�ܱ��� 
	char c;

	do
	{
		printf("ù��° ���ڸ� �Է��Ͻÿ� : ");
		scanf("%d",&a);
		printf("�ι�° ���ڸ� �Է��Ͻÿ� : ");
		scanf("%d",&b);
	
		printf("%d���� %d�ܱ���!\n",a,b);
		
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
			printf("���� �ٸ� ���� �Է��Ͻÿ�.\n");
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
			printf("Y �Ǵ� N�� �Է��Ͻÿ�.\n");
			scanf("%s",&c);
		}
	} while(c=='y' || c=='Y');
}
