#include<stdio.h>
int jong[500001] = { 0 }, suk[500001] = { 0 };
int main()
{
	int check = 0, min = 200000, s, n, h, i;
	scanf("%d %d", &n, &h);
	int Jc = n/2, Sc = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &s);
		if (i % 2 == 0)suk[s]++;
		else jong[s]++;
	}
	for (i = 1; i <= h; i++)
	{
		int cnt = 0;
		Jc -= jong[i];
		Sc += suk[h-i];
		cnt = Jc + Sc;
		if (cnt < min)min = cnt;
	}
	for (i = 1; i <= h; i++)
	{
		Jc -= jong[i];
		Sc += suk[h - i];
		if (Jc + Sc == min)check++;
	}
	printf("%d %d", min, check);
	return 0;
}
