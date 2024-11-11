#include<stdio.h>
#include<string.h>

int main()
{
	int i = 0, n,age,weight;
	char name[11];
	while (1)
	{
		scanf("%s %d %d", name, &age, &weight);
		if (name[0] != '#')
		{
			if (age > 17 || weight >= 80)printf("%s Senior\n", name);
			else printf("%s Junior\n", name);
		}
		else return 0;
	}
}

