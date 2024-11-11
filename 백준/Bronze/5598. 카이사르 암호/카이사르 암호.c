#include<stdio.h>
#include<string.h>

int main()
{
	char word[1001] = { 0 };
	scanf("%s", word);
	for (int i = 0; i < strlen(word); i++)
	{
		if (word[i] <= 'C')printf("%c", word[i]-'A'+'X');
		else printf("%c", word[i] - 3);
	}

	return 0;
}
