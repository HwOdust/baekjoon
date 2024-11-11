#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	int n, i,road[1002],check=0,save=0,max=0;
	scanf("%d", &n);
	scanf("%d", &road[0]); //1
	for (i = 1; i < n; i++)
	{
		scanf("%d", &road[i]);
		if (road[i - 1] < road[i])
		{
			if (check == 1)
			{
				check = 0;
				save = 0;
			}
			save += road[i] - road[i - 1];
			if (save > max)max = save;
		}
		else check = 1;
	}
	printf("%d", max);
	return 0;
}


