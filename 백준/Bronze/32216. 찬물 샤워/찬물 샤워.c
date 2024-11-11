#include<stdio.h>

int main()
{
	int n, k, t, tt[1001] = { 0 }, cnt = 0,tc=0;
	scanf("%d %d %d", &n, &k, &t);
	tt[0] = t;
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &tt[i]);
		if(i>1)
		{
			if (k > t)cnt += k - t;
			else cnt += t - k;
		}
		t =t+ tt[i] + (k-t);
	}
	if (k > t)cnt += k - t;
	else cnt += t - k;
	printf("%d", cnt);
	return 0;
}
