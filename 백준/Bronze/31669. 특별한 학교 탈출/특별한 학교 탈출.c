#include<stdio.h>

int main()
{
	int n, m, c = 0, f = 0, i, j;
	char arr[101][101] = { 0 };
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++)
	{
		scanf("%s", &arr[i]);
	}
	for (i = 0; i < m; i++)
	{
		c = 0;
		for (j = 0; j < n; j++)
		{
			if (arr[j][i] == 'O')c = 1;
		}
		if (c == 0)
		{
			f = i + 1;
			break;
		}
	}
	if (f == 0)printf("ESCAPE FAILED");
	else printf("%d", f);



	return 0;
}