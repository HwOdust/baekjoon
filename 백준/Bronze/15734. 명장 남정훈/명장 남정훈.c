#include <stdio.h>
#include<string.h>

int main()
{
	int l, r, a;
	scanf("%d %d %d", &l, &r, &a);
	while (1)
	{
		if (a == 0)break;
		if (l > r)r++;
		else if (l < r)l++;
		else if (a == 1 && l == r)break;
		else
		{
			l++;
			r++;
			a--;
		}
		a--;
	}
	if (l > r)printf("%d", r * 2);
	else printf("%d", l * 2);
	return 0;
}
