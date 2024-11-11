#include<iostream>

int  arr[20000002] = { 0 };
int main()
{
	int n, m, i;
	scanf("%d", &n);
	while (n--)
	{
		scanf("%d", &i);
		arr[i + 10000000]++;
	}
	scanf("%d", &m);
	while (m--)
	{
		scanf("%d", &i);
		if (arr[i + 10000000])printf("1 ");
		else printf("0 ");
	}
	return 0;
}
