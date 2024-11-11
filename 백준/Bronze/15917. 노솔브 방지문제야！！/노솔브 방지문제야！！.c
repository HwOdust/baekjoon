#include<stdio.h>
#include<math.h>
int main()
{
	int Q,s,i,c=0;
	scanf("%d", &Q);
	while (Q--)
	{
		c = 0;
		scanf("%d", &s);
		for (i = 0; i < 31; i++)
		{
			if (s == pow(2, i))
			{
				c = 1;
				break;
			}
		}
		printf("%d\n", c);
	}
	return 0;
}
