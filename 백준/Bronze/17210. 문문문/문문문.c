#include<stdio.h>
#include<string.h>

int main()
{
	unsigned int gaesu, start;
	scanf("%d %d", &gaesu, &start);
	if (gaesu > 5)
	{
		printf("Love is open door");
		return 0;
	}
	for (int i = 2; i <= gaesu; i++)
	{
		if (start == 0 && i % 2 == 0)printf("1\n");
		if (start == 0 && i % 2 == 1)printf("0\n");
		if (start == 1 && i % 2 == 0)printf("0\n");
		if (start == 1 && i % 2 == 1)printf("1\n");
	}
	return 0;
}

