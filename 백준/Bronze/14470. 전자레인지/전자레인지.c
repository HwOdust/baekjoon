#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	int meat_temp, goal_temp, ice, haedong, hot,time=0;
	scanf("%d %d %d %d %d", &meat_temp, &goal_temp, &ice, &haedong, &hot);

	if (meat_temp < 0)printf("%d", time + (-meat_temp * ice) + goal_temp * hot + haedong);
	if (meat_temp > 0)printf("%d", (goal_temp - meat_temp) * hot);
	
	return 0;
}

	
