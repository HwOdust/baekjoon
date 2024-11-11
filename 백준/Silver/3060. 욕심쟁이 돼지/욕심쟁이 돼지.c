#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
	int n, i, j, feed[6] = { 0 }, money, need,day=0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d",&money);
		need = 0;
		day = 0;
		for (j = 0; j < 6; j++)
		{
			scanf("%d", &feed[j]);
			need += feed[j];
		}
		if (need > money)
		{
			printf("1\n");
			continue;
		}
		int k = 0;
		while (1)
		{
			if (need * pow(4, k) > money)break;
			k++;
		}
		printf("%d\n", k+1);
	}
	return 0;
}

