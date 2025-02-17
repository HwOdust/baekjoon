#include<stdio.h>


int arr[1001][1001] = { 0 }; 
int visited[1001] = { 0 };
int n, m, cnt = 0;

void dfs(int x)
{
	visited[x] = 1;
	for (int i = 1; i <= n; i++)
	{
		if (visited[i] || arr[x][i] == 0)continue;
		dfs(i);
	}
}

int main()
{
	scanf("%d %d", &n, &m);
	for (int i = 0; i < m; i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		arr[a][b] = 1;
		arr[b][a] = 1;
	}
	for (int i = 1; i <= n; i++)
	{
		if (visited[i] == 1)continue;
		dfs(i);
		cnt++;
	}
	printf("%d", cnt);

	return 0;
}