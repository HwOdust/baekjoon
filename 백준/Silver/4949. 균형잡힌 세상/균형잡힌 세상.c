#include<stdio.h>
#include<string.h>

int main()
{

	while (1)
	{
		char word[200] = { 0 };
		int stack[200] = { 0 },tail=0,check=0;

		gets(word);

		if (strlen(word) == 1 && word[0] == '.')return 0;

		for (int i = 0; i < strlen(word); i++)
		{
			if (word[i] == '(')
			{
				stack[tail] = 1;
				tail++;
			}
			else if (word[i] == '[')
			{
				stack[tail] = 2;
				tail++;
			}
			else if (word[i] == ')')
			{
				if (stack[tail-1] == 2||tail==0) // 대칭아닐때
				{
					check = 1;
				}
				else if (stack[tail-1] == 1)
				{
					stack[tail-1] = 0;
					tail--;
				}
			}
			else if (word[i] == ']')
			{
				if (stack[tail-1] == 1||tail==0) // 대칭아닐때
				{
					check = 1;
				}
				else if (stack[tail-1] == 2)
				{
					stack[tail-1] = 0;
					tail--;
				}
			}
		}
		if (check)printf("no\n");
		else if (tail == 0)printf("yes\n");
		else printf("no\n");
	}
	return 0;
}