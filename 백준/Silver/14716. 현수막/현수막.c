#include<stdio.h>

int paper[250][250] = { 0 };
int n, m, cnt = 0;

int alpha(int x, int y)
{
	paper[x][y] = 0;
	if (x - 1 >= 0 && paper[x - 1][y] == 1)alpha(x - 1,y);
	if (x + 1 < n && paper[x + 1][y] == 1)alpha(x + 1, y);
	if (y - 1 >= 0 && paper[x][y - 1] == 1)alpha(x, y - 1);
	if(y + 1 < m && paper[x][y + 1] == 1)alpha(x, y + 1);
	if (x - 1 >= 0 && y - 1 >= 0 && paper[x - 1][y - 1] == 1)alpha(x - 1,y - 1);
	if (x - 1 >= 0 && y + 1 < m && paper[x - 1][y + 1] == 1)alpha(x - 1, y + 1);
	if (x + 1 < n && y - 1 >= 0 && paper[x + 1][y - 1] == 1)alpha(x + 1, y - 1);
	if (x + 1 < n && y + 1 < m && paper[x + 1][y + 1] == 1)alpha(x + 1, y + 1);
}



int main()
{
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &paper[i][j]);
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (paper[i][j] == 0)continue;
			cnt++;
			alpha(i, j);
		}
	}

	printf("%d", cnt);



	return 0;
}