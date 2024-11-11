#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int a, b, c,sum=0,a2,b2,c2,sum2=0;
	scanf("%d:%d:%d", &a, &b, &c);
	sum = 3600 * a + 60 * b + c;
	scanf("%d:%d:%d", &a2, &b2, &c2);
	sum2 = 3600 * a2 + 60 * b2 + c2;
	if (sum2 < sum)sum2 += 86400;
	sum2 = sum2 - sum;
	a = sum2 / 3600;
	b = (sum2 % 3600) / 60;
	c = (sum2 % 3600) % 60;
	if (a < 10)printf("0%d:", a);
	else printf("%d:",a);
	if (b < 10)printf("0%d:", b);
	else printf("%d:",b);
	if (c < 10)printf("0%d", c);
	else printf("%d",c);

	return 0;
}
	
