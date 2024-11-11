#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //atoi
#include <math.h>



int main()
{
	int n, a,i,suum=0;
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		
		suum += (pow(2, i + 1) / 2)* ( pow(2, i + 1)+1)*2 - (pow(2, i + 1) / 2)* ( pow(2, i + 1) / 2 );
		if (i == 0)suum = 9;

	}
	printf("%d", suum);
	return 0;
}


