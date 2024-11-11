#include<stdio.h>
#include<string.h>

int main()
{
	int t, k, max = 0, min=1000000000;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &k);
		if (k > max)max = k;
		if (k < min)min = k;
	}
	printf("%d", 2 * (max - min));


	return 0;
	
}
