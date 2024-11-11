#include<stdio.h>
#include<string.h>

int main()
{
	int sum = 0, i, arr[5] = {1,2,6,24,120};
	char num[6] = { 0 };
	while (1)
	{
		sum = 0;
		scanf("%s",num);
		if (num[0] == '0')return 0;
		for (i = 0; i < strlen(num); i++)
		{
			sum += (num[i] - '0') * arr[strlen(num) - i - 1];
		}
		printf("%d\n", sum);
	}
	return 0;
}

