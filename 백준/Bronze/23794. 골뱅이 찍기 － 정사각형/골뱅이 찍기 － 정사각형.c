#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	
	for (int i = 0; i < n + 2; i++)
	{
		for (int j = 0; j < n + 2; j++)
		{
			if (i == 0 || i == n + 1)printf("@");
			else if (j == 0 || j == n + 1)printf("@");
			else printf(" ");
		}
		if(i<n+1)printf("\n");
	}
	return 0;
}