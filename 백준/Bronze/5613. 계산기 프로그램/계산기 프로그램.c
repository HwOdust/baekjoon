#include<stdio.h>
#include<string.h>

int main()
{
	char circulate[2] = { 0 };
	int sum=0, k=0,i=0;
	while (1)
	{
		if (i == 0)scanf("%d", &sum);
		else if (i % 2 == 0)
		{
			scanf("%d", &k);
			if(i>1)
			{
				if (circulate[0] == '+')sum += k;
				else if (circulate[0] == '-')sum -= k;
				else if (circulate[0] == '/')sum /= k;
				else sum *= k;
			}
		}
		else
		{
			scanf("%s", &circulate[0]);
			if (circulate[0] == '=')break;
		}
		i++;
	}
	printf("%d", sum);
	return 0;
	
}
