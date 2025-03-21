#include<iostream>

using namespace std;
int n, a, b, m, x, y,save=-1;

int arr[102][102] = { 0 }, cnt = 0, visited[101] = { 0 };

void search(int a, int cnt)
{
	visited[a] = 1;
	if (a == b)
	{
		save = cnt;
		return;
	}

	for (int i = 1; i <= n; i++)
	{
		if (visited[i] == 1 || arr[a][i] == 0)continue;
		search(i, cnt + 1);
	}

}

int main()
{

	scanf("%d", &n);
	scanf("%d %d", &a, &b);
	scanf("%d", &m);

	for (int i = 0; i < m; i++)
	{
		scanf("%d %d", &x, &y); //x가 부모
		arr[x][y] = 1;
		arr[y][x] = 1;
	}

	search(a,0);
	if (save != -1)printf("%d", save);
	else printf("-1");
	return 0;
}