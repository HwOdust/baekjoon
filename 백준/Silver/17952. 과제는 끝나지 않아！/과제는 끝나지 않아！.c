#include<stdio.h>
#include<string.h>

int line[1000001] = { 0 }, score[1000001] = { 0 };

int main()
{
	int time, sum = 0, tail = 0, x, y, z;
	scanf("%d", &time);

	for (int i = 0; i < time; i++)
	{
		scanf("%d", &x);
		if (x == 1) // 신규 과제 추가
		{
			scanf("%d %d", &y, &z);
			score[tail] = y; //점수 추가
			line[tail] = z - 1; //즉시 시작
			tail++;
		}
		else if(x==0) //0이면 그대로 진행 및 시간 감소
		{
			if(tail>0)line[tail-1]--;
		}

		if (tail>0&&line[tail-1] == 0) //다 하면 점수 추가 및 테일 감소
		{
			if(tail>0)sum += score[tail-1];
			tail--;
		}
	}
	printf("%d", sum);
	return 0;
}
