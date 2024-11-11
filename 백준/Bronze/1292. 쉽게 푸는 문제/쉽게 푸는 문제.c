#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	int a, b, sum = 0,check=1,to=0;
	char number[10001] = { 0 };

	scanf("%d %d", &a, &b);

	while(1)
	{
		for (int j = 0; j < check; j++)
		{
			number[to] = check+'0';
			if (a - 1 <= to && to<b)sum += number[to]-'0';
			if (to > b)
			{
				printf("%d", sum);
				return 0;
			}
			to++;
			
		}
		check++;
	}

}



