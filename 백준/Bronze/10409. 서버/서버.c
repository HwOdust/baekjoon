#include<stdio.h>
int main()
{
	int i,n, t,sum=0,nn;
	scanf("%d %d", &n,&t);
	for(i=0;i<n;i++)
	{
		scanf("%d", &nn);
		sum += nn;
		if (sum > t)break;
	}
	printf("%d", i);
	return 0;
}

