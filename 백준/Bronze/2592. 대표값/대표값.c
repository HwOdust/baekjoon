#include<stdio.h>
int main()
{
	int max=0,i = 10, n, arr[101] = { 0 },sum=0,c;
	while (i--)
	{
		scanf("%d", &n);
		sum += n;
		arr[n / 10]++;
	}
	for (i = 1; i <= 100; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			c = i;
		}
	}
	printf("%d\n%d", sum / 10, c*10);
	return 0;
}