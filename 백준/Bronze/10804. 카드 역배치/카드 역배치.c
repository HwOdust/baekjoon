#include<stdio.h>
#include<string.h>

int main()
{
	int arr[21] = { 0 }, n = 10, a, b, tmp = 0;
	for (int i = 1; i <= 20; i++)arr[i] = i;
	while (n--)
	{
		int j = 0;
		scanf("%d %d", &a, &b);
		for (int i = a; i <= a+(b-a)/2; i++)
		{
			tmp = arr[i];
			arr[i] = arr[b -j];
			arr[b - j] = tmp;
			j++;
		}
	}
	for (int i = 1; i <= 20; i++)printf("%d ", arr[i]);

	return 0;
	
}