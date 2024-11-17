#include <stdio.h>
#include<math.h>

int main()
{
	int a_att, b_att, a_hp, b_hp;
	scanf("%d %d", &a_att, &a_hp);
	scanf("%d %d", &b_att, &b_hp);
	while (1)
	{
		a_hp -= b_att;
		b_hp -= a_att;
		if (a_hp <= 0 || b_hp <= 0)break;
	}
	if (a_hp <= 0 && b_hp <= 0)printf("DRAW");
	else if (a_hp <= 0)printf("PLAYER B");
	else printf("PLAYER A");

	return 0;
}
