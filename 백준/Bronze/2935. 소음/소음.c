#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	//수정
	char c1[101] = { 0 }, c2[101] = { 0 }, what[3] = { 0 };
	scanf("%s", c1);
	scanf("%s", what);
	scanf("%s", c2);

	int length = strlen(c1); //길이
	int length2 = strlen(c2);

	if (what[0] == '+')
	{
		if (length == length2)
		{
			printf("2");
			for (int i = 0; i < length - 1; i++)printf("0");
		}
		else if (length > length2)
		{
			printf("1");
			for (int i = 0; i < length-1; i++)
			{
				if (i == length-length2-1)printf("1");
				else printf("0");
			}
		}
		else
		{
			printf("1");
			for (int i = 0; i < length2-1; i++)
			{
				if (i == length2-length-1)printf("1");
				else printf("0");
			}
		}
	}
	else if (what[0] == '*')
	{
		length += length2-1;
		printf("1");
		for (int i = 0; i < length - 1; i++)printf("0");
	}
	return 0;
}
