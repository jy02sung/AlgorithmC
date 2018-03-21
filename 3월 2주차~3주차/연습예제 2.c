#include <stdio.h>

int main()
{
	int i;
	printf("1. Korea\n2. USA\n3. Japan\n4. China\nNumber?");
	scanf("%d",&i);
	while(i<=9)
	{
		if(i==1)
		{
			printf("¼­¿ï");
			scanf("%d",&i);
		}
		else if(i==2)
		{
			printf("¿ö½ÌÅÏ");
			scanf("%d",&i);
		}
		
		else if(i==3)
		{
			printf("µ¿°æ");
			scanf("%d",&i);
		} 
		else if(i==4)
		{
			printf("ºÏ°æ");
			scanf("%d",&i);
		} 	
		else
		{
			printf("None");
			return 0;
		} 
	}
}
