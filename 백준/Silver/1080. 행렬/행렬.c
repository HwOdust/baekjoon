#include<stdio.h>
#include<string.h>

char Arr[51][51] = { 0 }, Brr[51][51] = { 0 };
int n, m, c = 0; //바뀌는 건 A 배열

int check(int x, int y)
{
	if (Arr[x][y] != Brr[x][y]) //다르면 바꾸기~
	{
		for (int i = x; i < x + 3; i++)
		{
			for (int j = y; j < y + 3; j++)
			{
				if (Arr[i][j] == '0')Arr[i][j] = '1';
				else Arr[i][j] = '0';
			}
		}
		return 1;
	}
	return 0;
}

int main()
{
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++)
	{
		
		scanf("%s", &Arr[i]);
		
	}
	for (int i = 0; i < n; i++)
	{
		scanf("%s", &Brr[i]);
	}

	for (int i = 0; i < n - 2; i++)
	{
		for (int j = 0; j <  m-2; j++)
		{
			c += check(i, j);
		}
	}
	int bye = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (Arr[i][j] != Brr[i][j])bye = 1;
		}
	}

	if (bye == 1)printf("-1");
	else printf("%d", c);

	return 0;
}