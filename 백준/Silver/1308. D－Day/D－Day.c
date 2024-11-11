#include<stdio.h>

int day = 0,save;

int month(int n, int y)
{
	if (n == 1 || n == 3 || n == 5 || n == 7 || n == 8 || n == 10 || n == 12)save = 31;
	else if (n == 4 || n == 6 || n == 9 || n == 11)save= 30;
	else
	{
		if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)save=29;
		else save=28;
	}
	return save;
}
int main()
{
	int y1, m1, d1, y2, m2, d2,i,count=0;
	scanf("%d %d %d %d %d %d", &y1, &m1, &d1, &y2, &m2, &d2);

	if (y2 - y1 == 1000 && m2 > m1 || y2 - y1 == 1000 && m2 == m1&& d2 >= d1 || y2 - y1 > 1000)
	{
		printf("gg");
		return 0;
	}

	for (i = y1 + 1; i < y2; i++)
	{
		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)count++;
		day += 365;
	}
	day += count;

	if(y1!=y2)
	{
		for (i = m1 + 1; i <= 12; i++)day += month(i, y1); //년도가 다를 때만 가능
		for (i = 1; i < m2; i++)day += month(i, y2); //년도가 다를 때만 가능
		day += month(m1, y1) - d1 + d2;
	}
	else if (y1 == y2 && m1 != m2) //년도가 같고 월이 다를 때
	{
		if (m2 - m1 > 1)
		{
			for (i = m1 + 1; i < m2; i++)day += month(i, y1);
		}
		day += month(m1, y1) - d1 + d2;
	}
	else if (y1 == y2 && m1 == m2)day += d2 - d1;

	printf("D-%d", day);
}

