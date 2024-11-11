#include<stdio.h>
#include <string.h>
int main()
{
	char word[100]; //baekjoon
	int arr[26], index, i;

	scanf("%s", word);
	int len = strlen(word);

	for (i = 0; i < 26; i++)
	{
		arr[i] = -1;
	}

	for (i = 0; i < len; i++)
	{
		index = word[i] - 'a'; //1
		if (arr[index] == -1)
		{
			arr[index] = i;
		}
	}

	for (i = 0; i < 26; i++)
	{
		printf("%d ", arr[i]);
	}


	return 0;
}