#include<stdio.h>
#include<string.h>
int main()
{
	char L[12] = { 0 }, R[12] = { 0 },check=0,check2=0;
	int i,cnt=0;
	scanf("%s %s", L, R);
	if (strlen(L) != strlen(R))
	{
		printf("0");
		return 0;
	}
	for (i = 0; i < strlen(L); i++)
	{
		if (L[i] == '8' && R[i] == '8')cnt++;
		else if (L[i] != R[i])break;
	}
	printf("%d", cnt);
	return 0;
}