#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //atoi



int main()
{
	int N, i,j,len;
	int suum=0, w=0;
	scanf("%d", &N);
	char a[80];

	for (i = 0; i < N; i++)
	{
		scanf("%s", a);
		len = strlen(a);
		suum = 0;
		w = 0;
		for (j = 0; j < len; j++)
		{
			if (a[j] == 'O')
				w++;
			else
				w = 0;
			suum += w;
		}
		printf("%d\n", suum);
	
	}

	return 0;
}


