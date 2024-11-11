#include<stdio.h>
#include<string.h>

int main()
{
	int t, mary = 0, john = 0,k;
	while (1)
	{
		mary = 0;
		john = 0;
		scanf("%d", &t);
		if (t == 0)return 0;
		while (t--)
		{
			scanf("%d", &k);
			if (k == 0)mary++;
			else john++;
		}
		printf("Mary won %d times and John won %d times\n", mary, john);
	}
	return 0;
	
}
