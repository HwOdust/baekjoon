#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //atoi
#include <math.h>



int main()
{
	int n,i;
	int change;

	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &change);

		
		printf("%d ", change / 25);
		change %= 25;
		
		printf("%d ", change / 10);
		change %= 10;
		
		printf("%d ", change / 5);
		change %= 5;
		
		printf("%d\n", change);
	}
	return 0;
}



	
	