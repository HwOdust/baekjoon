#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //atoi
#include <math.h>



int main()
{
	int a, b, c,save;

	while (1)
	{

		scanf("%d %d %d", &a, &b, &c);
		if (a == 0)break;

			if (a > c)
			{
				save = a;
				a = c;
				c = save;
			}
			if (b > c)
			{
				save = b;
				b = c;
				c = save;
			}

			if (a * a + b * b == c * c)
			{
				printf("right\n");
			}
			else
				printf("wrong\n");
	}
	




	return 0;
}


