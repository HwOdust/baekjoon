#include<stdio.h>
#include<string.h>

int main()
{
	int n,a,b,wichi=1,check;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &a, &b);
		check = wichi;
		if (a == wichi || b == wichi)
		{
			if (a != check)wichi = a;
			if (b != check)wichi = b;
		}
	}
	printf("%d", wichi);

	return 0;
}
