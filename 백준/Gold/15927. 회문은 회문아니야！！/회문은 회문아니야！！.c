#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	int N, i,warning=0;
	char n[500001];

	scanf("%s", n);

	for (i = 0; i < strlen(n)-1; i++)
	{
		if (n[i] != n[i + 1])
		{
			warning = 1;
			break;
		}
	}
	if (warning == 0)
	{
		printf("-1");
		return 0;
	}
	for (i = 0; i < strlen(n) / 2; i++)
	{
		if (n[i] != n[strlen(n) - 1 - i])warning = 0;
	}
	if (warning == 1)printf("%d", strlen(n) - 1);
	else printf("%d", strlen(n));



	return 0;

}



