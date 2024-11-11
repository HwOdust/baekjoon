#include<stdio.h>
#include<string.h>

int main()
{
	int n,time,case1=0,case2=0;
	scanf("%d", &n);
	for (int i=0; i < n; i++)
	{
		scanf("%d", &time);
		case1 += (time / 30 + 1)*10;
		case2 += (time / 60 + 1) * 15;
	}
	if (case1 == case2)printf("Y M %d", case1);
	else if (case1 > case2)printf("M %d", case2);
	else printf("Y %d", case1);
	return 0;
}