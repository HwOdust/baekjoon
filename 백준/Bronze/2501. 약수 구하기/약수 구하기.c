#include<stdio.h>
int main()
{
	int n, k,check=0,i;
	scanf("%d %d", &n, &k);
	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)check++;
		if (check == k)break;
	}
	if (k > check)printf("0");
	else printf("%d", i);

	return 0;
}