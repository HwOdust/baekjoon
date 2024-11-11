#include<stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char N[100];
	int arr[3];
	int i, j ,save;

	for (i = 0; i < 2; i++)
	{
		scanf("%s", N);
		
		for (j = 0; j < 1; j++)
		{
			save = N[j];
			N[j] = N[j + 2];
			N[j + 2] = save;

			arr[i] = atoi(N);
		}
	}

	if (arr[0] > arr[1])
		printf("%d", arr[0]);
	else
		printf("%d", arr[1]);

	return 0;
}