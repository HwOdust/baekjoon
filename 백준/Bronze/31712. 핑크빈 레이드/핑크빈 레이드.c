#include<stdio.h>

int main()
{
	int sec=1,hp = 0, c1, d1, c2, d2, c3, d3;
	scanf("%d %d %d %d %d %d", &c1, &d1, &c2, &d2, &c3, &d3);
	scanf("%d", &hp);
	hp -= d1+d2+d3;
	if (hp < 1)
	{
		printf("0");
		return 0;
	}
	while (1)
	{
		//printf("%d\n", sec % c1);
		if (sec % c1 == 0)hp -= d1;
		if (sec % c2 == 0)hp -= d2;
		if (sec % c3 == 0)hp -= d3;
		
		if (hp < 1)break;

		sec++;
	}
	printf("%d", sec);

	return 0;
}
