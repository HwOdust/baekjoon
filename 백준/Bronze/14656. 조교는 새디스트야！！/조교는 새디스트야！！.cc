#include<iostream>

int main()
{
	int i, cnt = 0,w,s;
	scanf("%d", &w);
	for (i = 1; i <= w; i++)
	{
		scanf("%d", &s);
		if (s != i)cnt++;
	}
	printf("%d", cnt);

	return 0;
}