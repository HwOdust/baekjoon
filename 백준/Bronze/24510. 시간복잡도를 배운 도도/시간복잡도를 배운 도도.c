#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	int i, n, for_save = 0,while_save=0,count=0;
	char word[10001];
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%s", word);
		
		for_save = 0;
		while_save = 0;
		for (int j = 0; j < strlen(word); j++)
		{

			if (word[j] == 'f')
			{
				if (word[j + 1] == 'o' && word[j + 2] == 'r')for_save++;
				
				continue;
			}
			if (word[j] == 'w')
			{
				if (word[j + 1] == 'h' && word[j + 2] == 'i' && word[j + 3] == 'l' && word[j + 4] == 'e')while_save++;
				
				continue;
			}
		}

		
		if (for_save + while_save > count)count = for_save + while_save;
		
	}

	printf("%d", count);
	return 0;

}



