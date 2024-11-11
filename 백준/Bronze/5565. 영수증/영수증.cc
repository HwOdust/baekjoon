#include<iostream>

int main()
{
	int i = 9, s,a;
	scanf("%d", &s);
	while (i--)
	{
		scanf("%d", &a);
		s -= a;
	}
	printf("%d", s);
	return 0;
}