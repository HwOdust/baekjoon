#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	int n,i,j,k,check2;
	char number[11] = { 0 }, check[11] = { 0 };
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%s", number);
		strcpy(check, number);
		if (strlen(number) == 1)
		{
			printf("%s\n", number);
			continue;
		}
		for (j = strlen(number) - 1; j > 0; j--)
		{
			if (number[j]-'0' >= 5)
			{
				number[j - 1]++;
				number[j] = '0';
				if (number[j - 1] == ':')number[j - 1] = '9';
				 
			}
		}
		if (check[0] == number[0])
		{
			if (number[0] == '9')printf("10");
			else if (check[1] == '9')printf("%c", check[0]++);
			else printf("%c", check[0]);
			for (k = 0; k < strlen(number) - 1; k++)printf("0");
		}
		else
		{
			if (number[0] == '0')printf("1");
			printf("%s", number);
		}
		printf("\n");
	}
	return 0;
}

	
