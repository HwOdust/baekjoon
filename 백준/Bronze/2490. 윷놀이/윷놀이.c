#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int yoot[4],sum,k=3;
	while (k--)
	{
		sum = 0;
		for (int i = 0; i < 4; i++)
		{
			scanf("%d", &yoot[i]);
			sum += yoot[i];
		}
		if (sum == 0)printf("D\n");
		else if (sum == 4)printf("E\n");
		else if (sum == 3)printf("A\n");
		else if (sum == 2)printf("B\n");
		else printf("C\n");
	}
	return 0;
}
