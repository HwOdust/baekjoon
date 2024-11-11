#include<stdlib.h>
#include<stdio.h>
#include<string.h>

typedef struct //정보가 있는 구조체
{
	int x;
	int y;
}w;

w chart[100000];

int compare(const void *a, const void* b) 
{
	w A = *(w*)a;
	w B = *(w*)b;
	if (A.x < B.x)return -1;
	else if (A.x == B.x)
	{
		if (A.y < B.y)return -1; //오름차순
		else return 1;
	}
	else return 1;
	return 0;
}

int main()
{
	int n, i;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d %d", &chart[i].x, &chart[i].y);
	}

	qsort(chart, n, sizeof(w),compare);

	
	for (i = 0; i < n; i++)
	{
		printf("%d %d\n", chart[i].x, chart[i].y);
	}
	return 0;
}
