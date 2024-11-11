#include<stdio.h>
int main()
{
	int i, j, n, m, a, b, save = 0;
	int basket[100] = { 0 };

	scanf("%d %d", &n, &m);

	for (i = 0; i < n; i++)
	{
		basket[i] = i + 1;
	}

	for (i = 0; i < m; i++)
	{
		scanf("%d %d", &a, &b); // 2 5 

		for (j = 0; j < (b - a + 1) / 2; j++)
		{
			save = basket[a-1+j]; //basket[1] save=2
			basket[a -1+ j] = basket[b-1-j]; // basket[4] 
			basket[b-1-j] = save;
		}

		
	}
	for (i = 0; i < n; i++)
	{
		printf("%d ", basket[i]);
	}

	return 0;
}