#include<stdio.h>
#include <string.h>
int main()
{
	char S[1000000];
	scanf("%[^\n]s", S); //

	int len;
	len = strlen(S);

	int i;
	int c=0;

	for (i = 0; i < len; i++)
	{
		if (S[i] == ' ')
			c += 1;
	}

	if (S[0] == ' ')
		c -= 1;
	if (S[len - 1] == ' ')
		c -= 1;

	printf("%d", c+1);
	return 0;
}