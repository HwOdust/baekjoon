#include<stdio.h>

int red = 0, green = 0, blue = 0,extra=0;
int n;
char picture[101][101] = { 0 };


int find(int x, int y,char color)
{
	if (color == 'R' || color == 'G')picture[x][y] = '1';
	else picture[x][y] = '2';

	if (x - 1 >= 0 && picture[x - 1][y] == color)find(x - 1, y,color);
	if (x + 1 < n && picture[x + 1][y] == color)find(x + 1, y,color);

	if (y - 1 >= 0 && picture[x][y - 1] == color)find(x, y - 1, color);
	if (y + 1 < n && picture[x][y + 1] == color)find(x, y + 1, color);

}

int extra_find(int x, int y)
{
	picture[x][y] = '2';
	if (x - 1 >= 0 && picture[x - 1][y] == '1')extra_find(x - 1, y);
	if (x + 1 < n && picture[x + 1][y] == '1')extra_find(x + 1, y);

	if (y - 1 >= 0 && picture[x][y - 1] == '1')extra_find(x, y - 1);
	if (y + 1 < n && picture[x][y + 1] == '1')extra_find(x, y + 1);

}
//빨강초록은 1로 변환, 초록은 2로 변환
int main()
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++)scanf("%s", picture[i]);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (picture[i][j] == 1||picture[i][j]==2)continue;
			if (picture[i][j] == 'R')
			{
				red++;
				find(i, j,'R');
			}
			if (picture[i][j] == 'G')
			{
				green++;
				find(i, j, 'G');
			}
			if (picture[i][j] == 'B')
			{
				blue++;
				find(i, j, 'B');
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (picture[i][j] == '2')continue;
			extra++;
			extra_find(i, j);
		}
	}
	printf("%d %d", red+blue+green,extra+blue);
	return 0;
}