#include<stdio.h>
#include<string.h>

int main()
{
	int n;
	char s[100001] = { 0 };
	scanf("%d %s", &n, s);
	for (int i = 0; i < 5; i++)
	{
		printf("%c", s[n-5+i]);
	}
	return 0;
}


