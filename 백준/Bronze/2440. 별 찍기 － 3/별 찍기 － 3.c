#include<stdio.h>


int main()
{
	int i, j, k;
	scanf("%d", &k);
	while (k--)
	{
		for (i = k+1; i > 0; i--)printf("*");
		if(k!=0)printf("\n");
	}
	return 0;
}


