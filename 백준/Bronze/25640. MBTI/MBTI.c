#include <stdio.h>
#include<string.h>

int main()
{
	char jinho[5] = { 0 };
	char mbti[5] = { 0 };
	int t,cnt=0;
		
	scanf("%s", jinho);
	scanf("%d", &t);
	while (t--)
	{
		scanf("%s", mbti);
		if (strcmp(mbti, jinho) == 0)cnt++;
	}
	printf("%d", cnt);

	return 0;
}