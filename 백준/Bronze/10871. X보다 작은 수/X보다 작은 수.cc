#include<stdio.h>
int main()
{
	int i, N, X, a;
	scanf("%d %d", &N, &X);

	for (i = 0; i < N; i++)
	{
		scanf("%d", &a);

		if (a < X)
		{
			printf("%d ", a);
		}

	}

	return 0;
}