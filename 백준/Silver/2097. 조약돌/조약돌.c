#include<stdio.h>
int main()
{
	int n, i=2,cnt=2;
	scanf("%d", &n);
	
	while(1)
	{
		if (n <= i * i)break;
		else cnt++;
		if (n <= i * (i + 1))break;
		else cnt++;
		i++;
	}
	if (n < 5)printf("4");
	else printf("%d", 2*cnt);
	return 0;
}