#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //atoi



int main()
{
	int n, h, w, t;
	int H, W;
	int i = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d %d %d", &h, &w, &t);
		H = (t % h) * 100;
		if (t % h == 0)H = h * 100;
		W = ((t-1) / h) + 1;
		printf("%d\n", H + W);
	}

	return 0;
}


