#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int k,t, i;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &k);
		while (k--)printf("=");
		printf("\n");
	}
	return 0;
}