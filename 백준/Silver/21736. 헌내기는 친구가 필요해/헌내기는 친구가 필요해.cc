#include<iostream>
#include<string>

using namespace std;

int visited[602][602] = { 0 };

int n, m, cnt = 0;
char str[602][602] = {0};

void dfs(int x, int y)
{
	if (visited[x][y] == 1 || str[x][y] == 'X')return;
	visited[x][y] = 1;
	if (str[x][y] == 'P')cnt++;

	if (x > 0)dfs(x - 1, y);
	if (y > 0)dfs(x, y - 1);
	if (x < n - 1)dfs(x + 1, y);
	if (y < m - 1)dfs(x, y + 1);



}

int main()
{
	int x, y;
	scanf("%d %d", &n, & m);
	for (int i = 0; i < n; i++)
	{
		scanf("%s", &str[i]);
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (str[i][j] == 'I')
			{
				x = i;
				y = j;
			}
		}
	}
	dfs(x, y);
	if (cnt == 0)printf("TT");
	else printf("%d", cnt);
	return 0;
}