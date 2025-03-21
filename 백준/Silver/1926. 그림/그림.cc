#include<iostream>

using namespace std;

int n, m;
int C=0,arr[502][502] = { 0 }, cnt = 1, visited[502][502] = {0}, sizee=0, maxx = 0;

void dfs(int x,int y)
{
	if (arr[x][y] == 0 || visited[x][y] == 1)return;
	visited[x][y] = 1;

	cnt++;

	if (x > 0)dfs(x - 1, y);
	if (y > 0)dfs(x, y - 1);
	if (x < n - 1)dfs(x + 1, y);
	if (y < m - 1)dfs(x, y + 1);
}


int main()
{
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr[i][j] == 0 || visited[i][j] == 1)continue;
			cnt = 0;
			C++;
			dfs(i, j);
			if (cnt > sizee)sizee = cnt;
		}
	}
	printf("%d\n%d",C, sizee);
	return 0;
}