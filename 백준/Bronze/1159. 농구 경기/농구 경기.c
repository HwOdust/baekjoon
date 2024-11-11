#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int n, i, first_word[30] = { 0 },count=0;
	char name[31];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%s", name);
		first_word[name[0] - 'a']++;
	}
	for (i = 0; i < 30; i++)
	{
		if (first_word[i] >= 5)
		{
			printf("%c", i + 'a');
			count = 1;
		}
	}
	if (count == 0)printf("PREDAJA");
	return 0;
}


