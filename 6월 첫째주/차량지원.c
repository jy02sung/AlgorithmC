#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
int main()
{
	int m, n;
	int i, j;
	scanf("%d %d", &n, &m);

	while (!((2 <= m && m <= 200) || (1 <= n && n <= m * (m - 1) / 2)))
	{
		scanf("%d %d", &n, &m);
	}

	printf("%d %d\n", n, m);
	int **move_time = (int**)malloc(sizeof(int)*m*m);

	

	for (i = 0; i<m; i++)
	{
		move_time[i] = (int*)malloc(sizeof(int)*m);
	}


	
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &move_time[i][j]);
		}
	}
	printf("\n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf("%d ", move_time[i][j]);
		}
		printf("\n");
	}
}