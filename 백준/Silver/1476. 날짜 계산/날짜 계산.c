#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int year=1, E, S, M;
	scanf("%d %d %d", &E, &S, &M);
	while (1)
	{
		if ((year - E) % 15 == 0 && (year - S) % 28 == 0 && (year - M) % 19 == 0)break;
		year++;

	}
	printf("%d", year);

	return 0;
}
