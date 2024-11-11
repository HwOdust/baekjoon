#include<stdio.h>
#include<string.h>

int main()
{
	char word[1001] = { 0 };
	int cnt=0, i,c=0;
	scanf("%s", word);
	for (i = 0; i < strlen(word); i++)
	{
		if (word[i] == 'K' && c == 0)
		{
			cnt++;
			c = 1;
		}
		if (word[i] == 'O' && c == 1)
		{
			cnt++;
			c = 2;
		}
		if (word[i] == 'R' && c == 2)
		{
			cnt++;
			c = 3;
		}
		if (word[i] == 'E' && c == 3)
		{
			cnt++;
			c = 4;
		}
		if (word[i] == 'A' && c == 4)
		{
			cnt++;
			c = 0;
		}
	}
	printf("%d", cnt);


	return 0;
}

