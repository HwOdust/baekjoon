#include<stdio.h>
#include <string.h>
int main()
{
	char word[101];
	scanf("%s", word);

	int len = strlen(word);
	printf("%d", len);

	return 0;
}