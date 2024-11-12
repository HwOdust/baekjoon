#include <stdio.h>
#include <string.h>

int sang[500000] = { 0 }, card[20000001] = { 0 };
int main()
{
	int n, m;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &sang[i]);
		card[10000000 + sang[i]]++;
	}
	scanf("%d", &m);
	int x;
	for (int i = 0; i < m; i++)
	{
		scanf("%d", &x);
		printf("%d ", card[10000000 + x]);
	}

	return 0;
}

