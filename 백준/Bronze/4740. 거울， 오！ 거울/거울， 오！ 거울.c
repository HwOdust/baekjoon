#include <stdio.h>
#include <string.h>

int main()
{
	char word[81] = { 0 };
	while (1)
	{
		gets(word);
		if (0==strcmp(word, "***"))return 0;
		for (int i = strlen(word) - 1; i >= 0; i--)
		{
			printf("%c", word[i]);
		}
		printf("\n");
	}

	return 0;
}