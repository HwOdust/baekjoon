#include<stdio.h>
#include<string.h>
int main()
{
	int i,n;
	char word[11] = "SciComLove";
	scanf("%d", &n);
	for (i = (n % 10); i < 10; i++)printf("%c", word[i]);
	for (i = 0; i < n % 10; i++)printf("%c", word[i]);
	return 0;
}
