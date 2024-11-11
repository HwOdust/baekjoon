#include<stdio.h>
#include<string.h>

int main()
{
	int a,b,a_garo=0,a_sero=0,b_garo=0,b_sero=0,t,s,s2; //s==가로 s2==세로
	scanf("%d %d", &a, &b);
	if (a % 4 == 0)
	{
		a_garo = a / 4;
		a_sero = 4;
	}
	else
	{
		a_garo = a / 4 + 1;
		a_sero = a % 4;
	}
	if (b % 4 == 0)
	{
		b_garo = b/ 4;
		b_sero = 4;
	}
	else
	{
		b_garo = b / 4 + 1;
		b_sero = b % 4;
	}
	s = a_garo - b_garo;
	if (s < 0) s*=(-1);
	s2 = a_sero - b_sero;
	if (s2 < 0) s2*=(-1);
	printf("%d", s+s2);
	return 0;
}