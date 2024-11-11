#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	int a = 0, save;
	scanf("%d", &a);
	save = a;
	while (1)
	{
		if (a == 1)
		{
			printf("1 bottle of beer on the wall, 1 bottle of beer.\n");
			printf("Take one down and pass it around, no more bottles of beer on the wall.\n");
			printf("\n");
			break;
		}
		if (a == 2)
		{
			printf("2 bottles of beer on the wall, 2 bottles of beer.\n");
			printf("Take one down and pass it around, 1 bottle of beer on the wall.\n");
			printf("\n");
			a--;
			continue;
		}
		printf("%d bottles of beer on the wall, %d bottles of beer.\n", a, a);
		printf("Take one down and pass it around, %d bottles of beer on the wall.\n", a - 1);
		printf("\n");
		a--;

	}
	if (save != 1)
	{
		printf("No more bottles of beer on the wall, no more bottles of beer.\n");
		printf("Go to the store and buy some more, %d bottles of beer on the wall.", save);
	}
	if (save == 1)
	{
		printf("No more bottles of beer on the wall, no more bottles of beer.\n");
		printf("Go to the store and buy some more, 1 bottle of beer on the wall.");

	}



	return 0;

}



