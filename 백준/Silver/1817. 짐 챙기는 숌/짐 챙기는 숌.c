#include<stdio.h>
int main()
{
	int i,n, m, book,rest,cnt=1;
	scanf("%d %d", &n, &m);
	rest = m;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &book);
		if (rest >= book)rest -= book;
		else if (rest < book)
		{
			rest = m;
			rest -= book;
			cnt++;
		}
	}
	if (n == 0)printf("0");
	else printf("%d", cnt);
	return 0;
}
