#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct list
{
	char name[200];
	struct list *next;
}list;

int main()
{
	list *first = (list*)malloc(sizeof(list));
	strcpy(first->name, "서현역");
	first->next = NULL;
	
	list *second = (list*)malloc(sizeof(list));
	strcpy(second->name, "수내역");
	first->next = second;
	second->next = NULL;
	
	list *third = (list*)malloc(sizeof(list));
	strcpy(third->name, "정자역");
	second->next = third;
	third->next = NULL;
	
	list *prt;
	prt = first;
	while(prt != NULL)
	{
		printf("%s ", prt->name);
		if(prt->next != NULL)
		{
			printf("-> ");
		}
		prt = prt->next;
	}
}
