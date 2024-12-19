#include<stdio.h>

int arr[500001] = { 0 };
int main()
{
	int n, cnt = 0, i, check = 0;
	scanf("%d", &n);
	while (n != 1)
	{
		for (i = 1; i <= n; i++)
		{
			if (arr[i] == 1)continue;
			if (check == 0)
			{
				cnt++;
				printf("%d ", i);
				arr[i] = 1;
				if (cnt == n - 1)break;
				check = 1;
			}
			else check = 0;
		}
		if (cnt == n - 1)break;
	}
	for (i = 1; i <= n; i++)
	{
		if (arr[i] == 0)printf("%d", i);
	}
	return 0;
}