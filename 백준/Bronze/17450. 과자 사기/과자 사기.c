#include<stdio.h>
#include<string.h>

int main()
{
	double a,b,max=-1,check=0;

	for (int i = 0; i < 3; i++)
	{
		scanf("%lf %lf", &a, &b);
		if (a >= 500)a = 10 * a - 500;
		else a *= 10;
		if (b * 10 / a > max)
		{
			max = b * 10 / a;
			check = i;
		}
	}
	if (check == 0)printf("S");
	if (check == 1)printf("N");
	if (check == 2)printf("U");
	return 0;
}