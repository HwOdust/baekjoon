#include<stdio.h>
int main()
{ 
	int n, a, min = 101;
	scanf("%d", &n);
	while (n--)
	{
		min = 101;
		for (int i = 0; i < 3; i++)
		{
			scanf("%d", &a);
			if (a < min)min = a;
		}
		printf("%d\n", min);

	}
	return 0;
}