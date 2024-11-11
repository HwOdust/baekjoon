#include <stdio.h>
#include <string.h>
int main()
{
	int t,n;
	char AA[2] = { 0 }, BB[2] = { 0 };
	scanf("%d", &t);
	while (t--)
	{
		int a = 0, b = 0;
		scanf("%d", &n);
		while (n--)
		{
			scanf(" %c %c", &AA[0], &BB[0]);
			if (AA[0] == 'R' && BB[0] == 'P')b++;
			else if (AA[0] == 'R' && BB[0] == 'S')a++;
			else if (AA[0] == 'P' && BB[0] == 'S')b++;
			else if (AA[0] == 'P' && BB[0] == 'R')a++;
			else if (AA[0] == 'S' && BB[0] == 'R')b++;
			else if (AA[0] == 'S' && BB[0] == 'P')a++;
		}
		if (a > b)printf("Player 1\n");
		else if (a < b)printf("Player 2\n");
		else printf("TIE\n");

	}

	return 0;
}