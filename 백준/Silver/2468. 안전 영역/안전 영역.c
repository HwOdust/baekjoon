#include<stdio.h>
#include<string.h>


int n, m, arr[102][102] = { 0 }, visited[102][102] = { 0 };

int dfs(int x, int y, int k)
{
	if (visited[x][y] == 1 || arr[x][y] <= k)return 0;
	visited[x][y] = 1;

	if (x > 0)dfs(x - 1, y, k);
	if (y > 0)dfs(x, y - 1, k);
	if (x < n - 1)dfs(x + 1, y, k);
	if (y < n - 1)dfs(x, y + 1, k);
}

int main()
{
	int max = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) //입력
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &arr[i][j]);
			//if (arr[i][j] > max)max = arr[i][j];
		}
	}

	int cnt = 0, maxxx = 0;

	for (int jj = 0; jj <= 101; jj++)
	{
		int cnt = 0;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (visited[i][j] == 1 || arr[i][j] <= jj)continue;
				cnt++;
				dfs(i, j, jj);
			}
		}
		if (cnt > maxxx)maxxx = cnt;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)visited[i][j] = 0;
		}
	}
	printf("%d", maxxx);
	return 0;
}

