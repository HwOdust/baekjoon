#include<stdio.h>
#include<string.h>

int main()
{
	int t = 3, h=0, m=0, s=0,h2=0,m2=0,s2=0;
	while (t--)
	{
		int sum = 0;
		scanf("%d %d %d %d %d %d", &h, &m, &s,&h2,&m2,&s2);
		sum += 3600 * (h2 - h) + 60 * (m2 - m) + (s2 - s);
		printf("%d %d %d\n", sum / 3600, (sum % 3600) / 60, (sum % 3600) % 60);
	}
	return 0;
}