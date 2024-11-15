#include<stdio.h>
#include<stdlib.h>

int map[1001][1001] = { 0 }, visited[1001] = { 0 }, visited2[1001 ]= { 0 };
int for_bfs[1001] = { 0 }, head = 1, tail = 1,s=1;
void find_dfs(int x,int n)
{
	printf("%d ", x);
	visited[x] = 1;
	for (int i = 1; i <= n; i++)
	{
		if (visited[i]==0 && map[x][i])
		{
			find_dfs(i, n);
		}
	}

}

void find_bfs(int x, int n) //겹치는 거 찾기 tail++
{
	for (int i = 1; i <= n; i++)
	{
		if (visited2[i] == 0 && map[x][i])
		{
			visited2[i] = 1;
			for_bfs[tail] = i;
			tail++;
		}
	}

}
int main()
{
	int n, m, v,a,b,max=0,min=1000;
	scanf("%d %d %d", &n, &m, &v);
	for (int i = 0; i < m; i++)
	{
		scanf("%d %d", &a, &b);
		map[a][b] = 1;
		map[b][a] = 1;
	}
	visited2[v] = 1;
	for_bfs[0] = v;
	find_dfs(v, n);
	printf("\n%d ",v);
	for (int i = 0; i < n; i++)
	{
		find_bfs(for_bfs[i], n);
	}
	for (int i = 1; i < tail; i++)//출력
	{
		printf("%d ", for_bfs[i]);
	}
	


	return 0;
}