#include<stdio.h>
#include<string.h>
int main()
{
	int n, t, D[10001] = { 0 }, cnt = 0, f = 0,b=0;
	char demand[7] = { 0 };

	scanf("%d", &n);
	while(n--)
	{
		scanf("%s", demand);
		if (demand[1] == 'u')
		{
			scanf("%d", &t);
			D[b] = t;
			cnt++;
			b++;
		}
		else if (demand[1] == 'r')
		{
			if (cnt > 0)printf("%d\n", D[f]);
			else printf("-1\n");
		}
		else if (demand[1] == 'a')
		{
			if (cnt > 0)printf("%d\n", D[b - 1]);
			else printf("-1\n");
		}
		else if (demand[1] == 'i')printf("%d\n", cnt);
		else if (demand[1] == 'm')
		{
			if (cnt == 0)printf("1\n");
			else printf("0\n");
		}
		else if (demand[1] == 'o')
		{
			if (cnt <= 0)printf("-1\n");
			else
			{
				printf("%d\n", D[f]);
				cnt--;
				f++;
			}
		}
	}
	return 0;
}