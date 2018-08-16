#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	int i = -1;
	int j;
	int num, save;
	int cnt = 0;
	
	int a[100];
	for(j=0;j<100;j++)
		{
			a[j]=0;
		}
	while(n!=4)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d ", a[j]);
		}
		printf("\n\n숫자를 입력하십시오 \n1.추가 2.삭제 3.찾기 4.종료\n");
		scanf("%d", &n);
		
		while(n>4||n<1)
		{
			printf("다시 입력해주십시오.\n");
			scanf("%d", &n);
		}
		
		
		
		if(n==1)
		{
			i++;
			scanf("%d",&a[i]);
		} 
		else if(n==2)
		{
			a[i] = 0;
			i--;
		}
		else if(n==3)
		{
			scanf("%d",&num);
			for(j=0;j<=i;j++)
			{
				if(num == a[j])
				{
					printf("%d째에 %d가 있습니다.\n", j+1, num);
					cnt++;
				}
			}
			if(cnt == 0)
			{
				printf("값이 존재하지 않습니다.\n");
			}
		}
	}
	printf("종료");
	return 0;
}
