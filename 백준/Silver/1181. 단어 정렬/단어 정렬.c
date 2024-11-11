#include<stdlib.h>
#include<stdio.h>
#include<string.h>

char word[20001][51] = { 0 };

int compare(const char* a, const char* b)
{
	if (strlen((char*)a) > strlen((char*)b))return 1;
	else if (strlen((char*)a) < strlen((char*)b))return -1;
	else return strcmp((char*)a, (char*) b);

}

int main()
{
	int n, i;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%s", &word[i]);
	}

	qsort(word, n, sizeof(word[0]), compare);

	
	for (i = 0; i < n; i++)
	{
		if (strcmp(word[i],word[i-1])==0)continue;
		else printf("%s\n", word[i]);
	}
	return 0;
}
