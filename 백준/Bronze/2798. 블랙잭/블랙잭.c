#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //atoi
#include <math.h>

int main() 
{
	int i, j, k, min,suum;
	int arr[100];
	int n,m;

	scanf("%d %d", &n, &m);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	min = m;
	for (i = 0; i < n; i++)
	{
		if (i == n - 2)break;
		for (j = i+1; j <n; j++)
		{
			for (k = j+1; k < n; k++)
			{
				suum = arr[i] + arr[j] + arr[k];
				if(suum<=m)
				{
					if (m - suum < min) min = m - suum;
					
				}
			
			}
		} 
	}
	printf("%d", m - min);

	return 0;
}
