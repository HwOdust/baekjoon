#include<stdio.h>
#include<string.h>

int main()
{
	int min = 100,n,cnt=0;
	char yummy[101] = { 0 };
	scanf("%d", &n);
	scanf("%s", yummy);


	for (int i = 0; i < n / 2; i++)
	{
		if (yummy[i]!= yummy[n - 1 - i])cnt++;
	}

	printf("%d", cnt);
	return 0;
}