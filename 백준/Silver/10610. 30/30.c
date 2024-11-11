#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int compare(const int* a, const int* b)
{
	return *b - *a;

}

int main()
{
	int i, j, csum = 0, c = 0, arr[100001] = { 0 };
	char num[100001] = { 0 };
	scanf("%s", num);
	for (i = 0; i < strlen(num); i++)
	{
		arr[i] = num[i] - '0';
		csum += num[i] - '0';
		if (num[i] == '0')c = 1;
	}
	qsort(arr, strlen(num), sizeof(int), compare);
	if (csum % 3 != 0||c==0)printf("-1");
	else
	{
		for (i = 0; i < strlen(num); i++)printf("%d", arr[i]);
	}
	return 0;
}