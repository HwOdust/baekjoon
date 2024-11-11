#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //atoi



int main()
{
	int n, m, a, b,save;
	scanf("%d %d", &n, &m); //n바구니개수
	int i,j,basket[100];
	for (i = 0; i < n; i++)
	{
		basket[i] = i + 1;
	}

	for (i = 0; i < m; i++)
	{
		scanf("%d %d", &a, &b);
		save = basket[a-1];
		basket[a-1] = basket[b-1];
		basket[b-1] = save;
	}

	for (i = 0; i < n; i++)
	{
		printf("%d ", basket[i]);

	}

	
	return 0;
}


