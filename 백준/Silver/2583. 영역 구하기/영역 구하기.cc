#include<iostream>
#include<algorithm>

using namespace std;

int n, m,k, arr[102][102] = { 0 }, visited[102][102] = { 0 },cnt=0,save=0;

void dfs(int x, int y,int ccc)
{
	if (visited[x][y] == 1 || arr[x][y] == 1)return;
	visited[x][y] = 1;
	cnt++;
	if (x > 0)dfs(x - 1, y, ccc + 1);
	if (y > 0)dfs(x, y - 1, ccc + 1);
	if (x < n - 1)dfs(x + 1, y, ccc + 1);
	if (y < m - 1)dfs(x, y + 1, ccc + 1);
}

int main()
{
	int x1, x2, y1, y2, array2[101] = { 0 };
	scanf("%d %d %d", &m, &n, &k); //n==7 m==5

	for (int i = 0; i < k; i++)
	{
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		
		for (int x = x1; x < x2; x++)
		{
			for (int y = y1 ; y < y2; y++)
			{
				arr[x][y] = 1;
			}
		}
	}
	int wa = 0;
	

	for (int x = 0; x < n; x++) //n==7 
	{
		for (int y = 0; y < m; y++) //m==5
		{
			//printf("%d ", arr[x][y]);
			if (arr[x][y] == 1 || visited[x][y] == 1)continue;
			cnt = 0;
			dfs(x, y, 0);
			array2[wa]=cnt;
			wa++;  
		}
		//printf("\n");
	}
	
	printf("%d\n", wa);
	sort(array2, array2 + wa);
	for (int i = 0; i < wa; i++)printf("%d ", array2[i]);
	
	
	return 0;
}

