#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int k,n;
	char hi[4][9];
	for (k = 0; k < 3; k++)
	{
		scanf("%s", &hi[k]);
		if (9>=hi[k][0] - '0' &&hi[k][0]-'0' > 0)n = atoi(hi[k]) + 3 - k;
	}
	if (n % 3 == 0 && n % 5 == 0)printf("FizzBuzz");
	else if (n % 3 == 0)printf("Fizz");
	else if (n % 5 == 0)printf("Buzz");
	else printf("%d", n);

	return 0;
}
