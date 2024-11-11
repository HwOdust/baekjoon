#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //atoi
#include <math.h>

int main()
{
	int a, b,i;
	int suum=1;
	scanf("%d %d", &a, &b);
	for (i = 0; i < a; i++)
	{
		suum *= a - i;
	}
	for (i = 0; i < b; i++)
	{
		suum /= b - i;
	}
	for (i = 0; i < a - b; i++)
	{
		suum /= (a - b)-i;
	}
	printf("%d", suum);
	return 0;
}






