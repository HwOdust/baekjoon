#include <stdio.h>
#include<string.h>
int main()
{
	char bbang[11] = { 0 };
	int n, m;
	scanf("%d %d", &n, &m);
	while (n--)
	{
		scanf("%s", bbang);
		for (int i = m - 1; i >= 0; i--)printf("%c", bbang[i]);
		printf("\n");
	}
	return 0;
}
