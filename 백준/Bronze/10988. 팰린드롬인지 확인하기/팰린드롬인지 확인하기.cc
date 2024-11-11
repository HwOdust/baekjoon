#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //atoi


int main()
{
	char word[101];
	scanf("%s", word);
	int len = strlen(word);
	int i,r=0;

	if (len == 1)
		printf("%d", 1);
	else
	{
		for (i = 0; i < len / 2; i++)
		{
			if (word[i] == word[len - i - 1])
				r = 1;
			else
			{
				r = 0;
				break;
			}
		}

		printf("%d", r);

	}
	
	
	return 0;
}
