#include<stdio.h>
#include<string.h>
int main()
{
	int c;
	char word[11] = { 0 };
	while (1)
	{
		c = 0;
		scanf("%s", word);
		if (word[0] == '#')return 0;
		for (int i = 0; i < strlen(word); i++)
		{
			if (word[i] != 'b' && word[i] != 'd' && word[i] != 'p' && word[i] != 'q' && word[i] != 'i' && word[i] != 'o' && word[i] != 'v' && word[i] != 'w' && word[i] != 'x')
			{
				printf("INVALID\n");
				c = 1;
				break;
			}
		}
		if (c == 1)continue;
		for (int i = strlen(word)-1; i>=0; i--)
		{
			if (word[i] == 'b')printf("d");
			else if (word[i] == 'd')printf("b");
			else if (word[i] == 'p')printf("q");
			else if (word[i] == 'q')printf("p");
			else printf("%c", word[i]);
		}
		printf("\n");
	}
	return 0;
}
