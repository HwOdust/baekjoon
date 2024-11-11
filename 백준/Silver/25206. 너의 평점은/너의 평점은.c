#include<stdio.h>
#include<string.h>
int main()
{
	float hakjum, sum = 0,cnt=0; 
	char gwamok[51] = { 0 }, Huk[4] = { 0 };

	for (int i = 0; i < 20; i++)
	{
		scanf("%s %f %s", &gwamok, &hakjum, &Huk);
		if (Huk[0]!='P')
		{
			cnt+=hakjum;
			if(Huk[0]!='F')
			{
				if (Huk[1] == '+')sum += hakjum * (69 - Huk[0] + 0.5);
				else sum += hakjum * (69 - Huk[0]);
			}
		}
	}
	printf("%f", sum / cnt);
	return 0;
}