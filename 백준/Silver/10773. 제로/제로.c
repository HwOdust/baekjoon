#include<stdio.h>
int main()
{
	long long int sum=0;
	int k, i,check=0,number[100000]={0};
	scanf("%d", &k);
	for (i = 0; i < k; i++)
	{
		scanf("%d", &number[i]);
		sum += number[i];
		if (number[i] == 0)
		{
			while (number[check] <= 0)check--;
			sum -= number[check];
			number[check] = -1;
		}
		else check = i;
	}
	printf("%lld", sum);
	return 0;
}