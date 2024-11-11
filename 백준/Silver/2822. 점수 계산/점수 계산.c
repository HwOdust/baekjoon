#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	int score = 0, i, board[10] = { 0 }, j, k, high[10] = { 0 }, tmp, number[5] = { 0 };
	for (i = 0; i < 8; i++)
	{
		scanf("%d", &board[i]);
		high[i] = board[i];
	}

	for (j = 0; j < 7; j++)
	{
		for (k = 0; k < 7; k++)
		{
			if (high[k] < high[k + 1])
			{
				tmp = high[k];
				high[k] = high[k + 1];
				high[k + 1] = tmp;
			}
		}
	}       
	i = 0;
	for (j = 0; j < 5; j++)
	{
		for (k = 0; k < 8; k++)
		{
			if (high[j] == board[k])
			{
				score += high[j];
				number[i] = k + 1;
				i++;
			}
		}
	}
	for (j = 0; j < 4; j++)
	{
		for (k = 0; k < 4; k++)
		{
			if (number[k] > number[k + 1])
			{
				tmp = number[k];
				number[k] =number[k + 1];
				number[k + 1] = tmp;
			}
		}
	}
	printf("%d\n", score);
	for (i = 0; i < 5; i++)
	{
		printf("%d ", number[i]);
	}

	return 0;
}


