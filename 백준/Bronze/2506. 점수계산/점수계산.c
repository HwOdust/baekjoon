#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int n, check = 0, sum = 0, point=0,jumsoo;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &jumsoo);
		if (jumsoo == 1 && check == 1)point++;
		else if (jumsoo == 1)check=1;
		else if (jumsoo == 0)
		{
			check = 0;
			point = 0;
		}
		sum += point + jumsoo;
	}
	printf("%d", sum);
	return 0;
}


