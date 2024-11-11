#include<stdio.h>
int main()
{
	int n, i, s=0;
	int num[42] = { 0 };

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &n);
		n = n % 42;
		num[n] = 1;
		
	}

	for (i = 0; i < 42; i++)
	{
		if (num[i] == 1)
		{
			s += 1;
			
		}
	}

	
	printf("%d", s);

	return 0;
}