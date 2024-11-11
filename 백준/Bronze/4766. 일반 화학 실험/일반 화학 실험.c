#include <stdio.h>
#include <string.h>

int main()
{
	float tem = 0, lasttem = 0,i=0;
	while (1)
	{
		lasttem = tem;
		scanf("%f", &tem);
		if (tem == 999)return 0;
		if(i>0)printf("%0.2f\n", tem - lasttem);
		i++;
	}
	return 0;
}
