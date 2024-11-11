#include<stdio.h>

int main()
{
	int n, m, cnt=0, sum = 0, i, j,check=0,cc=0;
	char wood[51][51] = { 0 };

	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++)scanf("%s", &wood[i]);
	
	for (i = 0; i < n; i++) //가로 구해주기
	{
		for (j = 0; j < m; j++)
		{
			if (wood[i][j] == '|' && check == 1)
			{
				sum++;
				check = 0;
			}
			else if (wood[i][j] == '-')check = 1;
		}
		if (check==1)sum++;
		check = 0;
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (wood[j][i] == '-' && check == 1)
			{
				sum++;
				check = 0;
			}
			else if (wood[j][i] == '|')check = 1;
		}
		if (check == 1)sum++;
		check = 0;
	}
	printf("%d", sum);
	return 0;
}

//