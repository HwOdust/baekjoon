#include<stdio.h>

int main()
{
	int n, x1, y1, YY, sum = 0;
	scanf("%d %d %d", &n,&x1,&YY);
	sum += YY - x1;
	n--;
	while (n--)
	{
		scanf("%d %d", &x1, &y1);
		if (x1 >= YY)sum += y1 - x1;
		else if (x1 <= YY && YY <= y1)sum += y1 - YY;
		if (y1 > YY)YY = y1;
	}
	printf("%d", sum);
	return 0;
}
