#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //atoi
#include <math.h>



int main()
{
	unsigned int n,save=0;
	int i=0;
	char N[100] = { 0 };
	int b; //b=바밤바
	int len;
	char s=0;
	scanf("%d %d", &n, &b);
	
	while (n>=b)
	{
		save = n % b;
		n = n / b;
		
		if (save >= 10 && save < b)
			N[i] = save-10+'A';
		else if(save<10)
			N[i] = save+'0';

		
		i++;
	}

	if (n < b)
		if (n >= 10)
			N[i] = n - 10 + 'A';
		else
			N[i] = n + '0';

	len = strlen(N); //len=8

	for (i = 0; i < (len + 1) / 2; i++)
	{
		s = N[i];
		N[i] = N[len -i- 1];
		N[len - i - 1] = s;
	}

	printf("%s", N);

	return 0;
}