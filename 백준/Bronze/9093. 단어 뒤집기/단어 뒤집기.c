#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int n,count=0;
	char a[1001];
	scanf("%d", &n);
	getchar();
	for (int k = 0; k < n; k++)
	{
		gets(a);
		for (int i = 0; i < strlen(a); i++)
		{
			count++;
			if (a[i + 1] == ' '||a[i+1]=='\0')
			{
				for (int j = 0; j < count; j++)printf("%c", a[i - j]);
				printf(" ");
				count = 0;
				i++;
			}
		}
		printf("\n");
	}
	return 0;
}
