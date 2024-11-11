#include<stdio.h>
int main()
{
	int n,i,count=0,j,sleep=0;
	char room[101][101] = { 0 };
	scanf("%d", &n);
	for (i = 0; i < n; i++)scanf("%s", &room[i]); //입력

	for (i = 0; i < n; i++)
	{
		count = 0;
		for (j = 0; j < n; j++)
		{
			if (room[i][j] == '.')count++;
			if(room[i][j]=='X'||j==n-1)
			{
				if(count>1)sleep++;
				count = 0;
			}
		}
	}
	printf("%d ", sleep);
	sleep = 0;
	for (i = 0; i < n; i++)
	{
		count = 0;
		for (j = 0; j < n; j++)
		{
			if (room[j][i] == '.')count++;
			if (room[j][i] == 'X' || j == n - 1)
			{
				if (count > 1)sleep++;
				count = 0;
			}
		}
	}
	printf("%d", sleep);
}