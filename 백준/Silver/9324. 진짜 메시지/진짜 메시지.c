#include<stdio.h>
#include<string.h>
int main()
{
	int i, t,w;
	char secret[100001] = { 0 };
	scanf("%d", &t);
	while (t--)
	{
		int c = 0;
		int alpha[26] = { 0 };
		scanf("%s", secret);
		w = strlen(secret);
		for (i = 0; i < w; i++)
		{
			alpha[secret[i] - 65]++;
			if (alpha[secret[i]-65] == 3)
			{
				if (secret[i] != secret[i + 1])
				{
					c = 1;
					break;
				}
				else
				{
					alpha[secret[i]-65] = 0;
					i++;
				}
			}
		}
		if (c == 0)printf("OK\n");
		else printf("FAKE\n");
	}
	return 0;
}
