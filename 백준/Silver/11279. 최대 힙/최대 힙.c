#include<stdio.h>

int arr[100001] = { 0 };

int main()
{
	int n, x, size = 0, max = 0, maxi = 0, k = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		if (x == 0)
		{
			if (k == 0)printf("0\n");
			else
			{
				printf("%d\n", arr[k - 1]);
				k--;
			}
		}
		else
		{
			arr[k] = x;//추가
			int save = k;
			while (save > 0 && arr[save] < arr[save - 1])
			{
				int tmp = arr[save];
				arr[save] = arr[save - 1];
				arr[save - 1] = tmp;
				save--;
			}
			k++;
		}
	}
	return 0;
}