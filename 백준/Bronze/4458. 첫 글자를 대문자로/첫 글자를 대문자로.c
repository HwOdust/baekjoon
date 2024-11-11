#include <stdio.h>
#include <string.h>
int main()
{
	int t;
	char word[31] = { 0 };
	scanf("%d", &t);
	getchar();
	while (t--)
	{
		gets(word);
		for (int i = 0; i < strlen(word); i++)
		{
			if (i == 0&&'a'<=word[i]&&word[i]<='z')printf("%c", word[0] - 'a' + 'A');
			else printf("%c", word[i]);
		}
		printf("\n");
	}

	return 0;
}
