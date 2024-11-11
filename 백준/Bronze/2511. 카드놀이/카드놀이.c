#include<stdio.h>

int main()
{
	int i, arr[10] = { 0 }, brr[10] = { 0 }, a = 0, b = 0, c = 0;
	for (i = 0; i < 10; i++)scanf("%d", &arr[i]);
	for (i = 0; i < 10; i++)scanf("%d", &brr[i]);
	for (i = 0; i < 10; i++)
	{
		if (arr[i] > brr[i])a += 3;
		else if (arr[i] < brr[i])b += 3;
		else
		{
			a++;
			b++;
		}
		if (arr[i] > brr[i])c = 1;
		if (arr[i] < brr[i])c = 2;
	}
	printf("%d %d\n", a, b);
	if (a > b || a == b && c == 1)printf("A");
	else if (a < b||a==b&&c==2)printf("B");
	else printf("D");
	return 0;
}
