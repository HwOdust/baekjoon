#include<stdio.h>
#include<math.h>

int main()
{
	int a, b, c,sum=0,ans=0;
	scanf("%d %d %d", &a, &b, &c);
	sum = a + b;
	if (a == 0 || b == 0)
	{
		
		ans = c * c - sum;
	}
	else
	{
		ans = (int)sqrt((double)sum);
	}

	printf("%d", ans);
	return 0;
}