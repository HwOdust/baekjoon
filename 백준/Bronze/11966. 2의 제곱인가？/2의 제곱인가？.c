#include <stdio.h>
#include<math.h>

int main()
{
	int c=0,n;
	scanf("%d", &n);
	for (int i = 0; i <= 30; i++)
	{
		if (n == pow(2, i))c = 1;
	}
	if (c == 1)printf("1");
	else printf("0");

	return 0;
}
