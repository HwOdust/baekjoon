
#include <stdio.h>
#include <string.h>

int main()
{
	int n,f=0;
	char name[101],die[101];

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%s", name);
		for (int j = 0; j < strlen(name); j++)
		{
			if (name[j] == 'S')
			{
				strcpy(die, name);
			}
		}
	}
	printf(die);
}
//strcat


