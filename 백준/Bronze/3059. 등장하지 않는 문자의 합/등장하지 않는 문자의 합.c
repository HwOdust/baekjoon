#include<stdio.h>
#include<string.h>
int main()
{
	int t, cnt = 0,i, alpha[27] = { 0 };;
	char s[1001] = { 0 };
	scanf("%d", &t);
	while (t--)
	{
		int alpha[27] = { 0 };
		cnt = 0;
		scanf("%s", s);
		for (i = 0; i < strlen(s); i++)
		{
			if (alpha[s[i]-65] == 0)
			{
				alpha[s[i]-65] = 1;
				cnt += s[i];
			}
		}
		printf("%d\n", 2015-cnt);
	}
	return 0;
}
