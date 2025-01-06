#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main()
{
	int cnt = 0, x;
	scanf("%d", &x);
	cnt = x / 5;
	x = x % 5;
	if (x != 0)cnt += 1;
	printf("%d", cnt);
	return 0;
}
//x*1.1=b