#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct player
{
	char name[30];
	char num;
}player;

int main()
{
	int n;
	scanf("%d", &n);
	player *p = (player*)malloc(sizeof(player) * n);
	int c = 0;
	int i, j;
	int cnt = 1;
	fflush(stdin);
	for(i=0;i<n;i++)
	{
		scanf("%s", &p[i].name);
	}
	
	int tmp;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(p[i].name[0] < p[j].name[0])
			{
				tmp = p[j].name[0];
				p[j].name[0] = p[i].name[0];
				p[i].name[0] = tmp;
			}
		}
	}
	
	for(i=0;i<n-1;i++)
	{
		if(p[i].name[0] == p[i+1].name[0])
		{
			
			cnt++;
			printf("%d\n", cnt);
		}
		else
		{	
			if(cnt >= 5)
			{
				
				p[c].num = p[i].name[0];
				c++; 
			}
				cnt = 1;
		}
	}
	if(cnt >= 5)
	{
		p[c].num = p[i].name[0];
		c++;
	}
	for(i=0;i<c;i++)
	{
		printf("%c", p[i].num);
	}
	return 0;
}
