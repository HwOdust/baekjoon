#include<stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	if (b > a)b = a;
	printf("%d", b*100/2);
	return 0;
}
