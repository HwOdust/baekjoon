#include<stdio.h>
#include<string.h>
char toast[1000001] = { 0 };
int main()
{ 
	int S = 0, B = 0,c;
	scanf("%d", &c);
	scanf("%s", &toast);
	for (int i = 0; i < strlen(toast); i++)
	{
		if (toast[i] == 's')S++;
		if (toast[i] == 'b')B++;
	}
	if (S > B)printf("security!");
	else if (B > S)printf("bigdata?");
	else printf("bigdata? security!");
	return 0;
}

