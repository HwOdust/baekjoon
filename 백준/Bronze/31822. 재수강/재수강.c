#include<stdio.h>
int main()
{ 
	int n, cnt = 0,CC;
	char G[11] = { 0 }, check[11] = { 0 };
	scanf("%s", G);
	scanf("%d", &n);
	while (n--)
	{
		scanf("%s", check);
		CC = 0;
		for (int i = 0; i < 5; i++)
		{
			if (G[i] != check[i])CC = 1;
		}
		if (CC == 0)cnt++;
	}
	printf("%d", cnt);
	return 0;
}

