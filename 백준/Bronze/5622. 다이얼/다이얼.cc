#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //atoi

int main()
{
	char N[100];
	int i;
	int arr[100];
	int len;
	int sum=0;

	scanf("%s", N);
	len = strlen(N);

	for (i = 0; i < len; i++)
	{
		if ('A' <= N[i] && N[i] <= 'C')
		{
			arr[i] = 3;
		}
		else if ('D' <= N[i] && N[i] <= 'F')
		{
			arr[i] = 4;
		}
		else if ('G' <= N[i] && N[i] <= 'I')
		{
			arr[i] = 5;
		}
		else if ('J' <= N[i] && N[i] <= 'L')
		{
			arr[i] = 6;
		}
		else if ('M' <= N[i] && N[i] <= 'O')
		{
			arr[i] = 7;
		}
		else if ('P' <= N[i] && N[i] <= 'S')
		{
			arr[i] = 8;
		}
		else if ('T' <= N[i] && N[i] <= 'V')
		{
			arr[i] = 9;
		}
		else
			arr[i] = 10;
	}

	for (i = 0; i < len; i++)
	{
		sum += arr[i];
	}
	printf("%d", sum);
	return 0;
}