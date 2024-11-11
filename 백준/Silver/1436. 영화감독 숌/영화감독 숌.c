#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //atoi
#include <math.h>

int main()
{
	int count,n,A,save=666;
	char six[10001] = "666";

	scanf("%d", &n);
	A = atoi(six); 
	n--;

	while (n != 0) //60666은 가능..91%에서 실패 떴으면...끝자리에서 문제가 생긴 건데 ㅅㅂ 알 수가 없네...
	{
		count = 0;
		A++; 
		sprintf(six, "%d", A); 
		for (int i = 0; i < 5; i++)
		{
			if (six[i] == six[i + 1] && six[i] == six[i + 2] && six[i] == '6')
			{
				count++;
			}
		}
		if (count == 0)
		{
			A = atoi(six);
		}
		else
		{
			n--;
			A = atoi(six);
			save = A;

		}
	}
	printf("%d", save);
	return 0;
}