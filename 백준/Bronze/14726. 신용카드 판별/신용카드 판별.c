#include<stdio.h>
#include<string.h>
int main()
{
	char card[20] = { 0 };
	int t, i, sum = 0, num=0;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%s", card);
		sum = 0;
		for (i = 0; i < 16; i++)
		{
			num = card[i] - '0';
			if (i % 2 == 0)
			{
				if (num > 4)sum += num % 5 + num - 4;
				else sum += 2 * num;
			}
			else sum += num;
		}
		if (sum % 10 == 0)printf("T\n");
		else printf("F\n");
	}
	return 0;
}
