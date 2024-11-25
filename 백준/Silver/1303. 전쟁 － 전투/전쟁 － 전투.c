#include<stdio.h>

int garo, sero, white = 0, black = 0;
char soldier[101][101] = { 0 };
int save = 0;

int find(int x, int y,char color)
{
	soldier[x][y] = '0';
	save++;
	if (x - 1 >= 0 && soldier[x - 1][y] == color)find(x - 1, y, color);
	if (x + 1 <sero && soldier[x + 1][y] == color)find(x + 1, y, color);
	if (y - 1 >= 0 && soldier[x][y-1] == color)find(x , y-1, color);
	if (y+- 1 <garo && soldier[x][y+1] == color)find(x, y+1, color);
}


int main()
{
	scanf("%d %d", &garo, &sero);
	for (int i = 0; i < sero; i++)
	{
		scanf("%s", &soldier[i]);
	}

	for (int i = 0; i < sero; i++)
	{
		for (int j = 0; j < garo; j++)
		{
			save = 0;
			if (soldier[i][j] == '0')continue;
			
			if (soldier[i][j] == 'W')
			{
				find(i, j, 'W');
				white += save * save;
			}
			else if (soldier[i][j] == 'B')
			{
				find(i, j, 'B');
				black += save * save;
			}
		
		}
	}

	printf("%d %d", white, black);

	return 0;
}