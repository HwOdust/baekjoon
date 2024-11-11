#include<stdio.h>

int main()
{
	int max=0,n, num,arr[10001] = { 0 };
	scanf("%d", &n);
	while (n--)
	{
		scanf("%d", &num);
		arr[num]++;
		if (num > max)max = num;
	}
	for (int i = 1; i <= max; i++)
	{
		for (int j = 0; j < arr[i]; j++)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}