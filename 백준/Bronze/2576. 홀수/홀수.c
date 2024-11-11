#include<stdio.h>

int main()
{
	int n = 7, k, sum=0, min = 100;
	while(n--)
	{
		scanf("%d", &k);
		if (k % 2 == 1)sum += k;
		if (k < min && k % 2 == 1)min = k;
	}
	if (sum == 0)printf("-1");
	else printf("%d\n%d", sum, min);


	return 0;
}