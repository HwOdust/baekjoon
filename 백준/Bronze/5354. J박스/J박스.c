#include<stdio.h>

int main()
{
	int t, s, i, j;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &s);
		for (i = 1; i <= s; i++)
		{
			for(j=1;j<=s;j++)
			{
				if (j > 1 && j < s&&i>1&&i<s)printf("J");
				else printf("#");
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
