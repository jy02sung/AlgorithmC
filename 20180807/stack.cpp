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
		printf("\n\n���ڸ� �Է��Ͻʽÿ� \n1.�߰� 2.���� 3.ã�� 4.����\n");
		scanf("%d", &n);
		
		while(n>4||n<1)
		{
			printf("�ٽ� �Է����ֽʽÿ�.\n");
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
					printf("%d°�� %d�� �ֽ��ϴ�.\n", j+1, num);
					cnt++;
				}
			}
			if(cnt == 0)
			{
				printf("���� �������� �ʽ��ϴ�.\n");
			}
		}
	}
	printf("����");
	return 0;
}
