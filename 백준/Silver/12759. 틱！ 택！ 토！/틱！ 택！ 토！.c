#include<stdio.h>

int board[3][3] = { 0 };

int check_garo(int cnt)
{
	int final = 0;
	for (int i = 0; i < 3; i++)
	{
		int ccnt = 0;
		for (int j = 0; j < 3; j++)
		{
			if (board[i][j] == cnt)ccnt++;
		}
		if (ccnt == 3)final = 1;
	}
	return final;
}

int check_sero(int cnt)
{
	int final = 0;
	for (int i = 0; i < 3; i++)
	{
		int ccnt = 0;
		for (int j = 0; j < 3; j++)
		{
			if (board[j][i] == cnt)ccnt++;
		}
		if (ccnt == 3)final = 1;
	}
	return final;
}

int check_dagak(int cnt)
{
	int final = 0,ccnt=0;
	for (int i = 0; i < 3; i++)
	{
		if (board[i][i] == cnt)ccnt++;
	}
	if (ccnt == 3)final = 1;
	return final;
}

int check_dagak2(int cnt)
{
	int final = 0, ccnt = 0;
	for (int i = 0; i < 3; i++)
	{
		
		if (board[i][2-i] == cnt)ccnt++;
		
	}
	if (ccnt == 3)final = 1;
	return final;
}



int main()
{
	int cnt = 0, x, y, turn = 0;
	scanf("%d", &cnt);

	for (int k = 0; k < 9; k++)
	{
		scanf("%d %d", &x, &y);
		if (cnt==1)
		{
			board[x - 1][y - 1] = 1;
			//cnt = 2;
		}
		else
		{
			board[x - 1][y - 1] = 2;
			//cnt = 1;
		}
		
		if (check_garo(cnt) || check_sero(cnt)||check_dagak(cnt)||check_dagak2(cnt))
		{
			printf("%d", cnt);
			return 0;
		}
		if (cnt==1)cnt = 2;
		else cnt = 1;
	}
	printf("0");
	return 0;
}