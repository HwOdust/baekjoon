#include<stdio.h>
#include<string.h>
int main()
{
	char name[51] = { 0 }, save[51] = { 0 };
	int eng[30] = { 0 },i,check=0,CH,P=0;

	scanf("%s", name);
	for (i = 0; i < strlen(name); i++)eng[name[i] - 'A']++;
	for (i = 0; i < 30; i++)
	{
		if (eng[i] % 2 != 0)
		{
			check++;
			CH = i;
		}
	}
	if (check > 1)
	{
		printf("I'm Sorry Hansoo");
		return 0;
	}
	for (i = 0; i < 30; i++)
	{
		for (int j = 0; j < eng[i] / 2; j++)
		{
			save[P] = i + 'A';
			P++;
		}
	}
	printf("%s", save);
	if (check == 1)printf("%c", CH+'A');
	for (i = 0; i < P; i++)printf("%c",save[P - i-1]);
	return 0;
}