#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

typedef struct alpha
{
	int max;
	int min;
	int chk;
}alpha;
typedef struct vac
{
	int con;
	int max_vac;
	int cnt;
}vac;
int main()
{
	int m, n;
	int i, j;
	int cnt_sum = 0;

	scanf("%d %d", &n, &m);
	while (!(1 <= n || m <= 2500))
	{
		printf("다시 입력하세요");
		scanf("%d %d", &m, &n);
	}

	alpha *ppl = (alpha*)malloc(sizeof(alpha)*n);
	for (i = 0; i < n; i++)
	{
		scanf("%d %d", &ppl[i].min, &ppl[i].max);
		ppl[i].chk = 0;
	}

	vac *info = (vac*)malloc(sizeof(vac)*m);
	for (j = 0; j < m; j++)
	{
		scanf("%d %d", &info[j].con, &info[j].max_vac);
		info[j].cnt = 0;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (info[j].con <= ppl[i].max && info[j].con >= ppl[i].min)
			{
				if (ppl[i].chk == 0 && info[j].cnt < info[j].max_vac)
				{
					ppl[i].chk = 1;
					info[j].cnt += 1;
				}

			}
		}
	}

	for (i = 0; i < m; i++)
	{
		cnt_sum = cnt_sum + info[i].cnt;
	}

	printf("%d", cnt_sum);
	Sleep(1000);
	return 0;
}
