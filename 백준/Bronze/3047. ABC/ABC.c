#include<stdio.h>
#include<stdlib.h>
int compare(const int* a, const int* b)
{
	return *a - *b;
}
int main()
{
	int n[4] = { 0 };
	char word[4] = { 0 };
	scanf("%d %d %d", &n[0], &n[1], &n[2]);
	scanf("%s", word);
	qsort(n, 3, sizeof(int), compare);
	for (int i = 0; i < 3; i++)
	{
		if (word[i] == 'A')printf("%d ", n[0]);
		else if (word[i] == 'B')printf("%d ", n[1]);
		else printf("%d ", n[2]);
	}
	return 0;
}