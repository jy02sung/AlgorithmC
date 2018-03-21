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
		//printf("%c\n",c);		//왜 입력할때는 string으로 들어가고 출력할때는 char로 나오는지?
		 
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
		
	}while(c=='y' || c=='Y');
}
