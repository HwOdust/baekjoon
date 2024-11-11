#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //atoi



int main()
{
	int a,i,s=1;
	for (i = 0; i < 3; i++)
	{
		scanf("%d", &a);
		s *= a;
	}
	char str[20];
	sprintf(str, "%d", s);

	int len = strlen(str);
	int cnt[10] = { 0 };

	for (i = 0; i < len; i++)
	{
		cnt[str[i] - '0']++;

	}

	for (i = 0; i < 10; i++)
	{
		printf("%d\n", cnt[i]);
	}

	return 0;
}


