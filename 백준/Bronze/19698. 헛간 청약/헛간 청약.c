#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	int N, W, H, L,cow;

	scanf("%d %d %d %d", &N, &W, &H, &L);

	cow = (W / L) * (H / L);
	if (cow > N)printf("%d", N);
	else printf("%d", cow);

	return 0;
}

	
