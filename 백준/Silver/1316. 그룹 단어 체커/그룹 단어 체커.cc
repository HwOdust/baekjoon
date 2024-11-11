#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //atoi



int main()
{
	int N, i, j, len=0,s,k,total;
	char word[101];
	
	scanf("%d", &N);
	total = N;

	for (i = 0; i < N; i++)
	{
		scanf("%s", word);
		len = strlen(word);
		int arr[26] = { 0 };
		s = 0;

		arr[word[0] - 'a']++;

		for (j = 1; j <= len; j++)
		{
			if (j == len)
				break;
			else if (word[j] != word[j - 1])
			{
				arr[word[j] - 'a']++;
			}
		}

		for (k = 0; k < 26; k++)
		{
			if (arr[k] > 1)
				s++;
		}

		if (s > 0)
			total--;

	}

	printf("%d", total);
	return 0;
}


