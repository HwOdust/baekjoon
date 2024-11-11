#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	long long i = 0, save[20] = { 0 }, check, len = 0;
	char s[20];

	scanf("%s", s);
	
	if (strlen(s)<3)
	{
		printf("◝(⑅•ᴗ•⑅)◜..°♡ 뀌요미!!");
		return 0;
	}
	
	check = s[0]-'0' - s[1]+'0';

	for (int j = 0; j <strlen(s)-1; j++)
	{
		
		if (s[j]-'0' - s[j + 1]+'0' != check)
		{
			len = 1;
		}
	}
	if (len == 1)printf("흥칫뿡!! <(￣ ﹌ ￣)>");
	if (len == 0)printf("◝(⑅•ᴗ•⑅)◜..°♡ 뀌요미!!");


	return 0;

}



