#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //atoi



int main()
{
	int i;
	int a, b;

	while(scanf("%d %d", &a, &b)!=EOF)
	{
		printf("%d\n", a + b);
	}
	return 0;
}


