#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int h,town[25][25] = { 0 }, n, number = 0, visited[25][25] = { 0 };
int cnt[1000] = { 0 };
char save[26] = { 0 };

int compare(const *a, const *b)
{
	return *a - *b;
}


int home(int x, int y, int n,int number) //0 1
{
	if (town[x][y]==0)return;
	town[x][y] = 0;;
	cnt[number]++;
	if (x - 1 >= 0)home(x - 1, y, n, number);
	if (x + 1 < n)home(x + 1, y, n, number);
	if (y - 1 >= 0)home(x, y - 1, n, number);
	if (y + 1 < n)home(x, y + 1, n, number);
}

int main()
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%s", save);
		for (int j = 0; j < n; j++)
		{
			town[i][j] = save[j] - '0';
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (town[i][j]==0)continue;
			number += 1;
			//printf("%d\n", number);
			home(i, j, n,number);
		}
	}
	printf("%d\n", number);
	qsort(cnt, number+1,sizeof(int),compare);

	for (int i = 1; i <= number; i++)
	{
		printf("%d\n", cnt[i]);
	}

	
	return 0;
}
