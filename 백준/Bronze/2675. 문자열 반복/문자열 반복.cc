#include<stdio.h>
#include <string.h>
int main()
{
	int N;
	scanf("%d", &N);

	int i,j,k;
	int th, len;
	char word[100];
	

	for (i = 0; i < N; i++)
	{
		scanf("%d", &th);
		scanf("%s", &word);
		len = strlen(word);

		for (j = 0; j < len; j++)
		{
			for (k = 0; k < th; k++)
			{
				printf("%c", word[j]);
			}
		}
		printf("\n");
	}

	return 0;
}