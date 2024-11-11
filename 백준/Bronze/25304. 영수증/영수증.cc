#include <stdio.h>
int main()
{
	int total, count , price, count2, sum=0;
	scanf("%d %d", &total, &count);

	for (int i = 1; i <= count; i++)
	{
		scanf("%d %d", &price, &count2);
		sum = sum + (price * count2);
	}

	if (sum == total)
	{
		printf("Yes");
	}

	else 
	{
		printf("No");
	}

	return 0;
}