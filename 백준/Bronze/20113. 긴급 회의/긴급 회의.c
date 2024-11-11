#include<stdio.h>
int main()
{
	int i, n, vote[101] = { 0 }, k, max = 0, cnt = 0, C = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &k);
		vote[k]++;
		if (vote[k] > max)max = vote[k];
	}
	for (i = 1; i <= 100; i++)
	{
		if (vote[i] == max)
		{
			cnt++;
			C = i;
		}
	}
	if (cnt == 1)printf("%d", C);
	else printf("skipped");
	return 0;
}