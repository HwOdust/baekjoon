#include <stdio.h>

int main()
{
	int n, m, friend[100001] = { 0 },a,b;
	scanf("%d %d", &n, &m);
	while (m--)
	{
		scanf("%d %d", &a, &b);
		friend[a]++;
		friend[b]++;
	}
	for (int i = 1; i <= n; i++)printf("%d\n", friend[i]);
	return 0;
}
