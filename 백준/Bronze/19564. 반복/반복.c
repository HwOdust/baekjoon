#include<stdio.h>
#include<string.h>
int main()
{
	int cnt=1, i = 0;
	char alpha[100001] = { 0 };
	scanf("%s", alpha);
	for (i = 1; i < strlen(alpha); i++)
	{
		if (alpha[i - 1] >= alpha[i])cnt++;
	}
	printf("%d", cnt);
	return 0;
}