#include<stdio.h>
#include<math.h>

int main()
{
	int t, n, f;
	scanf("%d %d", &t,&n);
	while (n--)
	{
		scanf("%d", &f);
		t -= f;
	}
	if (t < 1)printf("Padaeng_i Happy");
	else printf("Padaeng_i Cry");


	return 0;
}

