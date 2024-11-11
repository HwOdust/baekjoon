#include<stdio.h>
#include <string.h>
int main()
{
	int rd, i, len=0;
	char word[100];
	scanf("%d", &rd);

	for (i = 0; i < rd; i++)
	{
		scanf("%s", word);
		len = strlen(word);
		printf("%c%c\n", word[0], word[len - 1]);

	}
	return 0;
}