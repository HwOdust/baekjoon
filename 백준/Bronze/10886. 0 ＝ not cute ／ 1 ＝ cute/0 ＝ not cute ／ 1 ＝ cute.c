#include<stdio.h>
int main()
{ 
	int n, c1=0, c0=0,c;
	scanf("%d", &n);
	while (n--)
	{
		scanf("%d", &c);
		if (c == 1)c1++;
		else c0++;
	}
	if (c1 > c0)printf("Junhee is cute!");
	else printf("Junhee is not cute!");
	return 0;
}

