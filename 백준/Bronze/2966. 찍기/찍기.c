#include<stdio.h>
#include<string.h>

int main()
{
	int n, c1=0, c2=0, c3=0, i, max = 0,f=0;
	char jjik[101] = { 0 };
	scanf("%d", &n);
	scanf("%s", jjik);
	for (i = 0; i < n; i++)
	{
		if (i % 3 == 0 && jjik[i] == 'A')c1++;
		else if (i % 3 == 1 && jjik[i] == 'B')c1++;
		else if (i % 3 == 2 && jjik[i] == 'C')c1++;
	}
	if (c1 > max)max = c1;
	for (i = 0; i < n; i++)
	{
		if (i % 2 == 0 && jjik[i] == 'B')c2++;
		else if (i % 2 == 1 && (i - 1) % 4 == 0 && jjik[i] == 'A')c2++;
		else if (i % 2 == 1 && (i + 1) % 4 == 0 && jjik[i] == 'C')c2++;
	}
	if (c2 > max)max = c2;
	for (i = 0; i < n; i++)
	{
		if (f == 0 && jjik[i] == 'C')c3++;
		else if (f == 1 && jjik[i] == 'A')c3++;
		else if (f == 2 && jjik[i] == 'B')c3++;
		if (i % 2 == 1)f++;
		if (f == 3)f = 0;
	}
	if (c3 > max)max = c3;
	
	printf("%d\n", max);
	if (max == c1)printf("Adrian\n");
	if (max == c2)printf("Bruno\n");
	if (max == c3)printf("Goran\n");

	return 0;
}
