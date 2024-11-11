#include<stdio.h>
int main()
{
	int n, m, R,rain=0,i, hot, ground[500][500] = { 0 },check=0,hotcount;
	scanf("%d %d", &n, &m);
	for (i = 0; i < m; i++)
	{
		scanf("%d", &R);
		for (int j =n-R; j <n ; j++) ground[j][i] = 1;
	}
	for (i = 0; i < n; i++)
	{
		check = 0;
		hot = 0;
		hotcount = 0;
		for (int j = 0; j < m; j++)
		{
			if (hot == 1 && ground[i][j] == 1)
			{
				rain += hotcount;
				hot = 0;
				if (ground[i][0] == 0 && check == 0)
				{
					rain -= hotcount;
					check = 1;
				}
				hotcount = 0;
			}
			else if (ground[i][j] == 1)
			{
				hot = 0;
				hotcount = 0;
			}
			else if (ground[i][j] == 0)
			{
				hot = 1;
				hotcount++;
			}
		}
	}
	printf("%d", rain);
	return 0;
}
