#include<iostream>
#include<vector>
using namespace std;

vector<int>v[100001];
int apple[100001] = { 0 };
int yummy = 0;

int visited[100001] = { 0 };
int n, k;

void dfs(int x,int stack)
{
	if (stack > k)return;
	if (apple[x])yummy++;
	visited[x] = 1;
	for (int i = 0; i < v[x].size(); i++)
	{
		if (visited[v[x][i]])continue;
		dfs(v[x][i], stack + 1);
	}
}

int main()
{
	scanf("%d %d", &n, &k);
	for (int i = 0; i < n-1; i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		v[a].push_back(b);
		v[b].push_back(a);
	}
	for (int i = 0; i < n; i++)scanf("%d", &apple[i]);
	
	dfs(0,0);
	printf("%d", yummy);
	return 0;
}

//v[x].size()