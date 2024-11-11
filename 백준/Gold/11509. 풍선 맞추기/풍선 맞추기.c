#include<stdio.h>
int  arrow[1000002] = { 0 };
int main()
{
	int n,x=0,sum=0,max=0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		if (x > max)max = x;
		if (arrow[x] > 0)
		{
			arrow[x]--;
			arrow[x - 1]++;
		}
		else arrow[x - 1]++;
		
	}
	
	for (int i = 0; i < max; i++)
	{	
		sum += arrow[i];
	}

	printf("%d", sum);
	return 0;
	
}