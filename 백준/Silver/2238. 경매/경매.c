#include<stdio.h>
#include<string.h>

int arr[100001] = { 0 };
char name[100001][11] = { 0 };
int main()
{
	int u, n,i,num,max=0,min,check=0;
	char  nn[11] = { 0 };
	scanf("%d %d", &u, &n);
	min = n+1;
	for (i = 0; i < n; i++)
	{
		scanf("%s %d", nn, &num);
		if (arr[num - 1] == 0)strcpy(name[num - 1], nn);
		arr[num - 1]++;
	}
	for (i = 0; i < u; i++)
	{
		if (arr[i] < min && arr[i] != 0)
		{
			min = arr[i];
			check = i;
		}
	}
	printf("%s %d", name[check], check+1);
	return 0;
}