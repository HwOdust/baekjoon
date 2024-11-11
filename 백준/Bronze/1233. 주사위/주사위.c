#include<stdio.h>
int main()
{
	int s1, s2, s3, arr[81] = { 0 },i,j,k,max=0,C;

	scanf("%d %d %d", &s1, &s2, &s3);
	for (i = 1; i <= s1; i++)
	{
		for (j = 1; j <= s2; j++)
		{
			for (k = 1; k <= s3; k++)
			{
				arr[i+j+k]++;
			}
		}
	}
	for (i = 1; i <= s1 + s2 + s3; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			C = i;
		}
	}
	printf("%d", C);
	return 0;
}
