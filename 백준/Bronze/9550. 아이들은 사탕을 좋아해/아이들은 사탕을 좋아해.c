#include<stdio.h>
int main()
{ 
	int t, n, k, candy,s;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d %d", &n, &k);
		candy = 0;
		while (n--)
		{
			scanf("%d", &s);
			candy += s / k;
		}
		printf("%d\n", candy);
	}
	return 0;
}

