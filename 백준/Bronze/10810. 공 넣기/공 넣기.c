#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //atoi



int main()
{
	int n, m, a, b, c,save;
	scanf("%d %d", &n, &m);
	int basket[100] = { 0 };
	int i,j;

	

	for (i = 0; i < m; i++)
	{
		scanf("%d %d %d", &a, &b, &c);
		for (j = a-1; j < b; j++)
		{
			basket[j] = c;
		}
	}

	for (i = 0; i <n; i++)
	{
		printf("%d ", basket[i]);
	}
	
	return 0;
}


