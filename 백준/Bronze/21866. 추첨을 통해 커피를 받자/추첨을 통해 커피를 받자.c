#include<stdio.h>
int main()
{
	int i = 9, s,c=0,cnt=0;
	while (i--)
	{
		scanf("%d", &s);
		if (i >6 && s > 100)c = 1;
		if (i > 4 && s > 200)c = 1;
		if (i >2 && s > 300)c = 1;
		if (i > 0 && s > 400)c = 1;
		if (s > 500)c = 1;
		cnt += s;
	}
	if (c == 1)printf("hacker");
	else if (cnt < 100)printf("none");
	else printf("draw");

	return 0;
}

