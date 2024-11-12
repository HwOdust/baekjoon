#include <stdio.h>
#include <string.h>

int main()
{
	char vote[16] = { 0 };
	int n, a = 0, b = 0;
	scanf("%d ", &n);
	scanf("%s", vote);
	for (int i = 0; i < n; i++)
	{
		if (vote[i] == 'A')a++;
		else if (vote[i] == 'B')b++;
	}
	if (a > b)printf("A");
	else if (a < b)printf("B");
	else printf("Tie");

	return 0;
}

