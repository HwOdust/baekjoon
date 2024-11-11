#include<stdio.h>
#include<string.h>

int main()
{
	int i = 5,T, flag = 0;;
	char word[11] = { 0 };


	for (i = 1; i <= 5; i++)
	{
		scanf("%s", word);
		T = strlen(word);
		for (int j = 0; j < T-2; j++)
		{
			if (word[j] == 'F' && word[j + 1] == 'B' && word[j + 2] == 'I')
			{
				flag = 1;
				printf("%d ", i);
				break;
			}
		}
	
	}
	if (flag == 0)printf("HE GOT AWAY!");
	return 0;
	
}
