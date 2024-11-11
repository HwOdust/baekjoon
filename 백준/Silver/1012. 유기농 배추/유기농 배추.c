#include<stdio.h>

int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
int field[51][51] = { 0 };
void search(int x, int y)
{
	if(field[x][y] == 0)return;
	field[x][y] = 0;
	for (int i = 0; i < 4; i++)
	{
		if (dx[i] + x < 0 || dx[i] + x >=50 || dy[i] + y < 0 || dy[i] + y >= 50)continue;
		if (field[dx[i] + x][dy[i] + y] == 0)continue;
		search(dx[i] + x, dy[i] + y);
	}
}




int main()
{
	int t,m,n,k;
	scanf("%d", &t);
	while (t--)
	{
		int a=0, b=0,num=0;
		int cnt = 0;
		scanf("%d %d %d", &n ,&m ,&k);
		for (int i = 0; i < k; i++)
		{
			scanf("%d %d", &a, &b);
			field[a][b] = 1;
		}

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (field[i][j] == 0)continue;
				search(i, j);
				num++;
			}
		}
		printf("%d\n", num);
	}
	return 0;
}
