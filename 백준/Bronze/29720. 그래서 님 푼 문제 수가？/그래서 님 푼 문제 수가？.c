#include<stdio.h>
int main(){
	int a, b, c,day,day2;
	scanf("%d %d %d", &a, &b, &c);
	day = (a + b - 1) - b * c;
	day2 = day - b + 1;
	if (day2<0)day2 = 0;
	printf("%d %d", day2, day);
	return 0;}