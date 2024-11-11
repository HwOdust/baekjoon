#include<stdio.h>
int main()
{
	int a, b, v,s,cnt=1;
	scanf("%d %d %d", &a, &b, &v);
	s = (v - b) / (a - b);
	if ((v - b) % (a - b) != 0)s++;
	printf("%d", s);
	return 0;
}