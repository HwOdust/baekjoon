#include<stdio.h>

int compare(const int* a, const int* b)
{
	return(*b - *a); //내림차순
}

int main()
{
	int garo[20000] = { 0 }, sero[20000] = { 0 }, i, t, m, n,w;
	int gmax = 0, smax = 0;
	scanf("%d %d %d", &m,&n,&t);

	garo[0] = 0;
	garo[1] = n;
	sero[0] = 0;
	sero[1] = m;

	for (i = 2; i < t+2; i++)
	{
		scanf("%d", &w);
		if (w == 0)scanf("%d", &garo[i]);
		else scanf("%d", &sero[i]);
	}

	qsort(garo, 100, sizeof(int), compare);
	qsort(sero, 100, sizeof(int), compare);

	for (i = 0; i < t+2; i++)
	{
		if (garo[i] - garo[i + 1] > gmax)gmax = garo[i] - garo[i + 1];
		if (sero[i] - sero[i + 1] > smax)smax = sero[i] - sero[i + 1];
	}

	printf("%d", gmax * smax);

	return 0;
}