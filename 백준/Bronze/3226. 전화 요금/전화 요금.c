#include<stdio.h>
#include<string.h>

int main()
{
	int n, i,a,b,c,cost=0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d:%d %d", &a, &b, &c);
		if (b + c > 60 && a == 6)cost += (60 - b) * 5 + (c - 60 + b) * 10;
		else if (b + c > 60 && a == 18)cost += (60 - b) * 10 + (c - 60 + b) * 5;
		else if (7 <= a && a <= 18)cost += c*10;
		else cost += c* 5;
	}
	printf("%d", cost);
	return 0;
}


