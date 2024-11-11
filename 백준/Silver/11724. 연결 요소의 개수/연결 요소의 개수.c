#include<stdio.h>


int computer[1001][1001] = { 0 }, cnt = 0, visited[1001] = { 0 };

void virus(int t,int n)
{
	visited[t] = 1;
	for (int i = 1; i <= n; i++)
	{
		if (visited[i] || !computer[t][i])continue;
		virus(i, n);
	}

}



int main()
{
	int n, k, a, b;
	scanf("%d %d", &n, &k);
	for (int i = 0; i < k; i++)
	{
		scanf("%d %d", &a, &b);
		computer[a][b] = 1;
		computer[b][a] = 1;
	}
	for (int i = 1; i <= n; i++)
	{
		if (visited[i] == 1)continue;
		virus(i, n);
		cnt++;
	}

	printf("%d", cnt);

	return 0;
	
}
