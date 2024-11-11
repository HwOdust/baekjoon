#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int n, i,count;
	char number[5],Cnumber[5],Rnumber[5];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%s", number);
		if (strcmp(number, "6174") == 0)
		{
			printf("0\n");
			continue;
		}
		count = 0;
		while(1)
		{
			for (int j = 0; j < 3; j++)
			{
				for (int k = 0; k < 3; k++)
				{
					if (number[k] < number[k + 1])
					{
						Cnumber[0] = number[k];
						number[k] = number[k + 1];
						number[k + 1] = Cnumber[0];
					}
				}
			}

			for (int j = 0; j < 4; j++)
			{
				Rnumber[j] = number[3 - j];
			}

			sprintf(number, "%d", atoi(number) - atoi(Rnumber));
			if (atoi(number)<1000)number[3] = '0';
			count++;

			if (strcmp(number, "6174") == 0)break;
		}
		printf("%d\n", count);
	}
}


