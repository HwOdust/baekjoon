#include<stdlib.h>
#include<stdio.h>
#include<string.h>

typedef struct people //정보가 있는 구조체
{
	int age;
	char name[101];
}w;

w member[100001];

int main()
{
	int n,i;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d %s", &member[i].age, member[i].name);
	}
	for (i = 1; i <= 200; i++)  //나이 정렬
	{
		for (int b = 0; b < n; b++)
		{
			if (i == member[b].age)  //가입한 순
				printf("%d %s\n", member[b].age, member[b].name);
		}
	}
	return 0;
}