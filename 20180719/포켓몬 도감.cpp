#include<stdio.h>
#include<stdlib.h>
#include<String.h>

typedef struct pkm
{
	char name[20];
	char q[20];
	int number;
}pkm;
 
int main()
{
	int n, m;
	int i, j;
	int num;
	
	scanf("%d %d", &n, &m);
	pkm *pokemon = (pkm*)malloc(sizeof(pkm)*n);
	pkm *quiz= (pkm*)malloc(sizeof(pkm)*m);
	
	for(i=0;i<n;i++)
	{
		scanf("%s", &pokemon[i].name);
	}
	
	for(i=0;i<m;i++)
	{
		scanf("%s", &quiz[i].q);
	}
	
	for(i=0;i<m;i++)
	{
		if(quiz[i].q[0] < 65 || quiz[i].q[0] > 90) //�ƽ�Ű �ڵ� ����� ���ڷ� ��ȯ 
		{
			num = atol(quiz[i].q);
			strcpy(quiz[i].name, pokemon[num-1].name);
		}
		
		else //2�� for�������� �̸��� ���� �Ϳ��� j+1������ ���� 
		{
			for(j=0;j<n;j++)
			{
				if(strcmp(quiz[i].q, pokemon[j].name) == 0)
				{
					quiz[i].number = j+1;
					itoa(quiz[i].number, quiz[i].name, 10);
				}
			}
		}
	}
	for(i=0;i<m;i++)
	{
		printf("\n%s", quiz[i].name);
	}
} 
