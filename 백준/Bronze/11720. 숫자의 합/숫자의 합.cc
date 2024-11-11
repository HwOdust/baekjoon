#include<stdio.h>
#include <string.h>
int main()
{
	int N, sum=0, i;
	char number[101];

	scanf("%d", &N);
	scanf("%s", &number);

	for (i= 0; i < N; i++)
	{
		sum += (int)number[i] - 48;
	}

	printf("%d", sum);
	return 0;
}