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
	strcpy(first->name, "������");
	first->next = NULL;
	
	list *second = (list*)malloc(sizeof(list));
	strcpy(second->name, "������");
	first->next = second;
	second->next = NULL;
	
	list *third = (list*)malloc(sizeof(list));
	strcpy(third->name, "���ڿ�");
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
