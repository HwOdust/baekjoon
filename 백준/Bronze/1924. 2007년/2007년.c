#include<stdio.h>
#include<string.h>

int main()
{
	int a, b,day=0;
	scanf("%d %d", &a, &b);
	for (int i = 1; i < a; i++)
	{
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)day += 31;
		else if (i == 4 || i == 6 || i == 9 || i == 11)day += 30;
		else day += 28;
	}
	day += b;
	if (day % 7 == 0)printf("SUN");
	else if (day % 7 == 1)printf("MON");
	else if (day % 7 == 2)printf("TUE");
	else if (day % 7 == 3)printf("WED");
	else if (day % 7 == 4)printf("THU");
	else if (day % 7 == 5)printf("FRI");
	else printf("SAT");

	return 0;
}

