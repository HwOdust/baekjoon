#include<stdio.h>
#include<string.h>

int main()
{
	int n, count[51] = { 0 },j=0,i,save=0;
	char p[51] = { 0 };
	scanf("%s", p);

	for (i = 0; i < strlen(p); i++)
	{
		if (p[i] == 'X')count[j]++; //count[0]==2 count[1]=2
		else
		{
			if (count[j] % 2 != 0)
			{
				printf("-1");
				return 0;
			}
			j++;
		}
	}
	if (count[0] % 2 != 0||count[j]%2!=0)
	{
		printf("-1");
		return 0;
	}
	int k = 0;
	for (i = 0; i < strlen(p); i++)
	{
		if (p[i] == '.')printf(".");
		else if (count[k] % 4 == 0)
		{
			for (int j = 0; j < count[k] / 4; j++)printf("AAAA");
			i += count[k]-1;
			k++;
		}
		else
		{
			for (int j = 0; j < count[k] / 4; j++)printf("AAAA");
			printf("BB");
			i += count[k]-1;
			k++;
		}
	}
	return 0;
}


