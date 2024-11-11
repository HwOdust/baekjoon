#include<stdio.h>
#include<stdlib.h>
int compare(const* a, const* b)
{
	return *a - *b;
}
int main()
{
	int i, s1,s2,arr[3] = { 0 };
	scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
	qsort(arr, 3, sizeof(int), compare);
	s1 = arr[1] - arr[0];
	s2 = arr[2] - arr[1];
	if (s1 < s2)printf("%d", arr[1] + s1);
	else if (s1 > s2)printf("%d", arr[0] + s2);
	else printf("%d", arr[2] + s1);
	return 0;
}
