#include<stdio.h>
#include<stdlib.h>
int compare(const* a, const* b)
{
	return *a - *b;
}

int main()
{
	int n, l, apple[1001] = { 0 };
	scanf("%d %d", &n, &l);
	for (int i = 0; i < n; i++)scanf("%d", &apple[i]);
	qsort(apple, n, sizeof(int), compare);
	for (int i = 0; i < n; i++)
	{
		if (apple[i] <=l)l++;
	}
	printf("%d", l);
	return 0;
}