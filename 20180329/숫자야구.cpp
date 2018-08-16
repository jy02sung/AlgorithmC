#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{ 
	int com[3];
	int my[3];
	int str = 0, ball = 0, out = 0, life = 10;
	int i;
	srand((unsigned)time(NULL));
	while(com[0]==com[1]||com[1]==com[2]||com[2]==com[0])
	{
		com[0]=rand()%9+1;
		com[1]=rand()%9+1;
		com[2]=rand()%9+1;
	}
	
	while(life>0)
	{
		scanf("%d", &my[0]);
		scanf("%d", &my[1]);
		scanf("%d", &my[2]);
		
		while(my[0]==my[1]||my[1]==my[2]||my[2]==my[0])
		{
			scanf("%d", &my[0]);
			scanf("%d", &my[1]);
			scanf("%d", &my[2]);
		}
		
		for(i=0; i<3; i++)
		{
			if(com[i] == my[i])
			{
				str++;
			}
			else if(com[0] == my[i]||com[1] == my[i]||com[2] == my[i])
			{
				ball++;
			}
			else
			{
				out++;
			}
		}
		printf("%dS,%dB,%dO",str,ball,out);
		if(str==3)
		{
			printf("內內");
			break; 
		}
		else if(str!=3)
		{
			life--;
			printf("雄 跡獗 %d偃 陴擠\n", life);
		}
		
		if(life==0)
		{
			printf("元元");
			break; 
		}
		str=0;
		ball=0;
		out=0;
	}
	return 0;
}
