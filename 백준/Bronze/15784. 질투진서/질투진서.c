#include <stdio.h>
#include<math.h>

int  arr[1000][1000] = { 0 };
int main()
{
	int n, x, y, check = 0,jinsoo;
	scanf("%d %d %d", &n, &x, &y);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)scanf("%d", &arr[i][j]);
	}
	jinsoo = arr[x - 1][y - 1];

	for (int i = 0; i < n; i++)
	{
		if (arr[x - 1][i] > jinsoo)check = 1;
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i][y - 1] > jinsoo)check = 1;
	}

	if (check)printf("ANGRY");
	else printf("HAPPY");
	return 0;
}