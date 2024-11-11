#include<stdio.h>
#include<string.h>

int main()
{
	char word[101] = { 0 };
	int i;
	scanf("%s", word);
	for (i = 0; i < strlen(word); i++)
	{
		if (i>0&&i % 10 == 0)printf("\n");
		printf("%c", word[i]);
	}
	return 0;
}