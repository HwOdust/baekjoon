#include<stdio.h>
int arr[2000001] = { 0 };
int main()
{
	int num, k,i,count=0,check=0,N=1000000;
	scanf("%d", &k);
	for (i = 0; i < k; i++)
	{
		scanf("%d", &num);
		if (num > 0)arr[num + N ] = num;
		else if (num < 0)arr[N-(-1 * num)] = num;
		else
		{
			arr[N] = 0;
			check = 1;
		}
	}
	i = 0;
	while (1)
	{
		if (arr[i] != 0)
		{
			printf("%d\n", arr[i]);
			count++;
		}
		else if (i == N && check==1)
		{
			printf("0\n");
			count++;
		}
		i++;
		if (count == k)break;
	}
	return 0;
}