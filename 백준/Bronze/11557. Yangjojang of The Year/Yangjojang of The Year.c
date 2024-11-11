#include<stdio.h>
#include<string.h>
int main()
{
	
	int n, max = 0,x,ss;
	scanf("%d", &n);
	while (n--)
	{
		char school[21] = { 0 }, a[21] = { 0 };
		max = 0;
		scanf("%d", &ss);

		while(ss--)
		{
			scanf("%s %d", a, &x);
			if (x > max)
			{
				max = x;
				strcpy(school, a);
			}
		}
		printf("%s\n", school);
	
	}


	return 0;
}