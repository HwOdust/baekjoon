#include<stdio.h>
#include<string.h>
int main()
{
	int num[10000]={0}, N, i,check=-1,jung;
	char demand[10001][6];
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%s", demand[i]);
		if (strcmp(demand[i], "push") == 0)
		{
			scanf("%d", &jung);
			check++;
			num[check] = jung;
		}
		else if (strcmp(demand[i], "pop") == 0)
		{
			if (check == -1 || num[check] == 0)printf("-1\n");
			else
			{
				printf("%d\n", num[check]);
				num[check] = 0;
				if(check-1>-2)check--;
			}
		}
		else if (strcmp(demand[i], "size") == 0)
		{
			if (check == -1)printf("0\n");
			else printf("%d\n", check+1);
		}
		else if (strcmp(demand[i], "empty") == 0)
		{
			if (check+1 == -1)printf("-1\n");
			else if (check+1 == 0)printf("1\n");
			else printf("0\n");
		}
		else if (strcmp(demand[i], "top") == 0)
		{
			if (check == -1 || num[check] == 0)printf("-1\n");
			else printf("%d\n", num[check]);
		}
	}
	return 0;
}