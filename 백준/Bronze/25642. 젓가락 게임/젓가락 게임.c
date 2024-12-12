#include<stdio.h>

int main()
{
	int dra, u,i=0;
	scanf("%d %d", &dra, &u);

	while (dra < 5 && u < 5)
	{
		if (i % 2 == 0)
		{
			u += dra;
		}
		else dra += u;
		i++;
	}
	if (dra > 4)printf("yj");
	else printf("yt");


	return 0;
}