#include<stdio.h>

int maxfind(int a, int b)
{
	if (a > b)return a;
	else return b;
}



int main()
{
	int t, podo[10002] = { 0 }, max[10002] = { 0 };
	scanf("%d", &t);
	for (int i = 1; i <= t; i++)scanf("%d", &podo[i]);

	max[0] = 0;
	max[1] = podo[1];
	max[2] = podo[1] + podo[2];

	for (int i = 3; i <= t; i++)
	{
		max[i] = maxfind(max[i-1], maxfind(max[i - 3] + podo[i - 1] + podo[i], max[i - 2] + podo[i]));
	}


	printf("%d", max[t]);
	return 0;
}