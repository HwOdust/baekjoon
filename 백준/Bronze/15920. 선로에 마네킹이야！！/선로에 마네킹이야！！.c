#include<stdio.h>
#include<string.h>

int main()
{
	int n,wcnt=0,p=0,die=0,pcnt=0;
	char rail[11] = { 0 };
	scanf("%d", &n);
	scanf("%s", rail);
	for (int i = 0; i < n; i++)
	{
		if (rail[i] == 'P' && wcnt < 1)
		{
			pcnt = 1;
			p++;
		}
		else if (rail[i] == 'P')pcnt = 1;
		else wcnt++;
		if (wcnt == 1 && pcnt == 1)die = 6;
		pcnt = 0;
	}
	if (wcnt < 2)printf("0");
	else if (die == 6)printf("6");
	else if (p % 2 == 0)printf("5");
	else printf("1");
	return 0;
}


