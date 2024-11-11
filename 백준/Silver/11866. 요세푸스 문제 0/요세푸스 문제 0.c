#include<stdio.h>

int main()
{
	int n, k, i, yo[5001] = { 0 },die=0,cnt=0,check=0,save=1;
	scanf("%d %d", &n, &k);
	for (i = 1; i <= n; i++)yo[i] = 1;

	printf("<");
	while (1)
	{
		for (i = save; i <= n; i++)
		{
			if (die == n)
			{
				check = 1;
				break;
			}
			if (yo[i] != 0)cnt++;
			if (i == n && cnt != k)i = 0;
			else if (cnt == k)
			{
				printf("%d", i);
				if (die + 1 != n)printf(", ");
				yo[i] = 0;
				die++;
				cnt = 0;
				if (i == n)save = 1;
				else save = i;
				break;
			}
		}
		if (check == 1)break;
	}
	printf(">");
	return 0;
}