#include<stdio.h>
int main()

{
	int a1, a2, a3, a4, a5, a6, b1, b2, b3, c1;

	scanf("%d", &a1); //472
	scanf("%d", &a2); //385

	a3 = a2 / 100; //3
	a4 = a2 / 10; //38
	a5 = a4 % 10; //8
	a6 = a2 % a4; //5

	b1 = a1 * a6;
	b2 = a1 * a5;
	b3 = a1 * a3;
	c1 = a1 * a2;

	printf("%d\n", b1);
	printf("%d\n", b2);
	printf("%d\n", b3); 
	printf("%d\n", c1);

	return 0;
}