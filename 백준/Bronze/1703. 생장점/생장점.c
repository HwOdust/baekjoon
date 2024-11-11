#include<stdio.h>
#include<string.h>

int main()
{
	int level, a, b, i,save;

	while (1)
	{
		scanf("%d", &level);
		save = 1;
		if (level == 0)return 0;
		for (i = 0; i < level; i++)
		{
			scanf("%d %d", &a, &b);
			save = (save * a) - b;
		}
		printf("%d\n", save);
	}

	return 0;
}

