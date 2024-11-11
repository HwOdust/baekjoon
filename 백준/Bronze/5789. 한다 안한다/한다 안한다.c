#include<stdio.h>
#include<string.h>

int main()
{
	char cookie[1001] = { 0 };
	int t,k;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%s", cookie);
		k = strlen(cookie);
		if (cookie[k/2-1]==cookie[k/2])printf("Do-it\n");
		else printf("Do-it-Not\n");
	}

	return 0;
	
}
