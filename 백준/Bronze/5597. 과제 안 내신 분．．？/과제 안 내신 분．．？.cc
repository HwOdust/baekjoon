#include<stdio.h>
int main()
{
	int i,n;
	int student[100] = { 0 };

	for (i = 0; i < 28; i++)
	{
		scanf("%d", &n);
		student[n - 1] =n;
	}


	for (i = 0; i < 30; i++)
	{
		if (student[i] == 0)
			printf("%d\n", i+1);
	}


	return 0;
}