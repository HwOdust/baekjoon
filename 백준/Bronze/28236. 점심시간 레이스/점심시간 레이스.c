#include<stdio.h>
int main()
{
	int i,n, m, k,sum=0,f,d,min=1000000,save=0;
	scanf("%d %d %d", &n, &m, &k);
	for(i=1;i<=k;i++)
	{
		scanf("%d %d", &f, &d);
		sum=(f - 1) + (n - d);
		if (sum < min)
		{
			min = sum;
			save = i;
		}
	}
	printf("%d", save);
	return 0;
}
