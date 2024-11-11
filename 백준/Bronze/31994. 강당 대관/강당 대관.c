#include<stdio.h>
int main()
{
	char name[8][30];
	int n, max=0, i,save;
	for (i = 0; i < 7; i++)
	{
		scanf("%s %d", &name[i], &n);
		if (n > max)
		{
			max = n;
			save = i;
		}
	}
	printf("%s", name[save]);
}