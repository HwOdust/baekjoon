#include<stdio.h>

int main()
{
	int i,mario[11] = { 0 }, sum = 0;
	for (i = 0; i < 10; i++)scanf("%d", &mario[i]);
	for (i = 0; i < 10; i++)
	{
		sum += mario[i];
		if (sum >= 100)break;
	}
	if (100 - (sum - mario[i]) < sum - 100)printf("%d", sum - mario[i]);
	else printf("%d", sum); 

	return 0;
}
