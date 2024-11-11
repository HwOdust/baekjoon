#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //atoi



int main()
{
	int arr[10] = { 0 };
	int i,c=0;
	for (i = 0; i < 8; i++)
	{
		scanf("%d", &arr[i]);
	}

	if (arr[0] > arr[1])c = -1;
	else c = 1;

	for (i = 1; i < 7; i++)
	{
		if (arr[i] > arr[i + 1] && c == -1)continue;
		if (arr[i] < arr[i + 1] && c == 1)continue;
		printf("mixed");
		return 0;
	}

	if (c == -1)printf("descending");
	if (c == 1)printf("ascending");

	return 0;
}


