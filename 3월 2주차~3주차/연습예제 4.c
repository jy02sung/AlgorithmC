#include <stdio.h>

int main()
{
	int a,b;
	float m;
	char c;
	
	do
	{
		printf("Base?\n");
		scanf("%d",&a);
		printf("Height?\n");
		scanf("%d",&b);	
		printf("Base = %d\n", a);
		printf("Height = %d\n", b);
		m=a*b/2;
		printf("Triangle width = %.2f\n", m);
		printf("Continue? Y/N\n");
		scanf("%s",&c);
		//printf("%c\n",c);		//�� �Է��Ҷ��� string���� ���� ����Ҷ��� char�� ��������?
		 
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
		
	}while(c=='y' || c=='Y');
}
