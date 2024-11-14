#include<stdio.h>
#include<string.h>


int main()
{
	int sum = 0, max = 0, n,x,y;
	char monster[71][21] = {0}, best[21] = {0};
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int cnt = 0;
		scanf("%s", monster[i]);
		scanf("%d %d", &x, &y);

		while (x <= y)
		{
			y -= x;
			y += 2;
			cnt++;
			sum++;
		}
		//printf("%d\n", cnt);
		if (cnt > max)
		{
			strcpy( best, monster[i]);
			max = cnt;
		}
		//printf("!: %s %s\n", monster[i], best);
	}
	printf("%d\n%s", sum, best);



	return 0;
}