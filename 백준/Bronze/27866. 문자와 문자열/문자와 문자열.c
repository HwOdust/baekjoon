#include<stdio.h>
int main()
{
	char a[1001];
	int i;

	scanf("%s", &a);
	scanf("%d", &i);

	printf("%c", a[i - 1]);

	return 0;
}