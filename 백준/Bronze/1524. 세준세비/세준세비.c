#include<stdio.h>
#include<stdlib.h>
int arr_joon[1000001] = { 0 }, arr_bee[1000001] = { 0 };

int compare(const int* a, const int* b)
{
	return *a - *b;
}

int main()
{
	int t,J,B;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d %d", &J, &B);
		int jj = 0, bb = 0;
		for (int i = 0; i < J; i++)scanf("%d", &arr_joon[i]);
		for (int i = 0; i < B; i++)scanf("%d", &arr_bee[i]);
		qsort(arr_joon, J, sizeof(int), compare);
		qsort(arr_bee, B, sizeof(int), compare);

		while (1)
		{
			if (arr_joon[jj] < arr_bee[bb])jj++;
			else bb++;

			if (jj == J)
			{
				printf("B\n");
				break;
			}
			else if (bb == B)
			{
				printf("S\n");
				break;
			}
		}
	}
	return 0;
}