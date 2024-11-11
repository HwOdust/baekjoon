#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	int n,i,count=1;
	char cup[51];

	
	scanf("%d %s", &n,cup);

	for (i = 0; i < n; i++)
	{
		if (cup[i] == 'S')count++;
		if (cup[i] == 'L')
		{
			i++;
			count++;
		}
	}
	if (n < count)printf("%d", n);
	else printf("%d", count);
	return 0;
}


