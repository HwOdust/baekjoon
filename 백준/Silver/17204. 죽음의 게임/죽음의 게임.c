#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	int i, n, k, arr[151], S, current = 0, save = 0, count = 0;

	scanf("%d %d", &n, &k);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &S);
		arr[i] = S;
	}
	while (1)
	{
		save = arr[save]; //3
		count++;
		if (count > n)
		{
			printf("-1");
			break;
		}
		if (save == k)
		{
			printf("%d", count);
			break;
		}
		if (save == 0)
		{
			printf("-1");
			break;
		}
		if (save == arr[save])
		{
			printf("-1");
			break;
		}
	}


	return 0;
}



